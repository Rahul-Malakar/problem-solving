#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
typedef struct node{
   char name[20];
   int roll;
   int sem;
   int status;
   int branch;
   struct node* left;
   struct node* right;
}node;

typedef struct{
    node* root;
    int (*compare)(node* argu1,node* argu2); 
}BST_TREE;

int compare_node(node* n1,node* n2){
    int num = strcmp(n1->name,n2->name);
    if(num==0){
       if(n1->roll==n2->roll)return 0;
       return (n1->roll<n2->roll)?-1:1;
    }else{
       return (num<0)?-1:1;  
    }
}


BST_TREE insert(BST_TREE bst,node* n){
    if(bst.root==NULL){
        bst.root = n;
    }else{
       node* t = (node*)malloc(sizeof(node));
       t = bst.root;
       int k;
       while(t!=NULL){
         if(bst.compare(n,t)<0){
           if(t->left==NULL){
             t->left = n;
             break;
           }else{
             t=t->left;
           }
         }else{
           if(t->right==NULL){
             t->right = n;
             break;
           }else{
             t=t->right; 
           }
         }
       }
    }

    return bst;
}

BST_TREE get_data(BST_TREE bs1){

    node* t = malloc(sizeof(node));
    t->left = t->right = NULL;
    printf("Enter name | ");
    scanf("%s",t->name);

    printf("Enter Roll | ");
    scanf("%d",&t->roll);
    
    printf("|1-ug| |2-pg|\n");
    printf("Enter Status | ");
    scanf("%d",&t->status);
 
    printf("Enter Semester (0-8) | ");
    scanf("%d",&t->sem);

    printf("(1-CIVIL) | (2,CSE) | (3,ELECTRICAL) | (4,ECE) | (5,EIE)\n");
    printf("Enter Branch | ");
    scanf("%d",&t->branch);

   bs1 = insert(bs1,t);
   printf("\ninserted\n");

   return bs1; 
}

node* search(node* root,int k){
   if(root==NULL){
     return NULL;
   }
   if(root->roll==k){
    return root;
   }
   node*t = malloc(sizeof(node));
   t = search(root->left,k);
   if(t!=NULL){
     return t;
   }else{
    return search(root->right,k);
   }
   
}

node* cpy_node(node* n1,node* n2){
  strcpy(n1->name,n2->name);
  n1->roll = n2->roll;
  n1->branch = n2->branch;
  n1->sem    = n2->sem;
  n1->status = n2->status;
  return n1;
}

node* delete_node(node*root,node* target){

   if(root==NULL){
     return root;
   }
   
   int num = compare_node(root,target);
   if(num==0){
     if(root->left==NULL && root->right==NULL){
       return NULL;
     }else if(root->left==NULL){
       return root->right;
     }else if(root->right==NULL){
       return root->left;
     }else{
      
       node* t  = malloc(sizeof(node));
       t = root->left;
       while(t->right!=NULL){
        t = t->right;
       }
       root = cpy_node(root,t);
       root->left = delete_node(root->left,t);
     }
   }else if(num>0){
     root->left = delete_node(root->left,target);
   }else{
     root->right = delete_node(root->right,target);
   }

   return root;

}

BST_TREE delete(BST_TREE bst,int k){

   node* t = malloc(sizeof(node));
   t = search(bst.root,k);
   if(t!=NULL){
       bst.root = delete_node(bst.root,t);  
   }
   return bst;  
}
void printlist(node*n){
    if(n==NULL)return;
    printlist(n->left);
    printf("%s ",n->name);
    printlist(n->right);
}
void printlist2(node*n,int k){
    if(n==NULL)return;
    printlist2(n->left,k);
    if(n->branch==k && n->status==2){
      printf("%s ",n->name);
    }
    printlist2(n->right,k);
}
void printlist3(node*n,int k,int l){
    if(n==NULL)return;
    printlist3(n->left,k,l);
    if(n->branch==k && n->status==1 &&n->sem==l){
      printf("%s ",n->name);
    }
    printlist3(n->right,k,l);
}
BST_TREE printlist4(BST_TREE bst,node*n,int stat){
    if(n==NULL)return bst;
    bst = printlist4(bst,n->left,stat);
    bst = printlist4(bst,n->right,stat);
    if(n->status==stat){
      bst.root = delete_node(bst.root,n);
    }
   
    return bst;
    
}

void save_data(node* n,FILE* fp){
  if(n==NULL)return;
  save_data(n->left,fp);
  fprintf(fp,"\n%s %d %d %d %d",n->name,n->roll,n->status,n->sem,n->branch);
  save_data(n->right,fp);

}

int main(){


BST_TREE bst;
bst.root=NULL;
bst.compare = compare_node;

FILE* fp = fopen("input.data","rb");
if(fp==NULL){
  printf("File not found\n");
}else{
  while(!feof(fp)){
      node* t = malloc(sizeof(node));
      t->left = t->right = NULL;
      for(int i=0;i<5;i++){
          if(i==0){
            fscanf(fp,"%s",t->name);
          }else if(i==1){
            fscanf(fp,"%d",&t->roll);
          }else if(i==2){
            fscanf(fp,"%d",&t->status);
          }else if(i==3){
            fscanf(fp,"%d",&t->sem);
          }else{
            fscanf(fp,"%d",&t->branch);
          }
      }
      bst = insert(bst,t);
  }
}


fclose(fp);


printf("\n");
printf("1.Insert an item\t\t\t\t\t\t | 2.update\n");
printf("3.List all names in sequence\t\t\t\t\t | 4.List all students Branch-Wise in sequence\n");
printf("5.List all students Semester and Branch wise in sequence \t | 6.delete\n");
printf("7.delete all ug/pg\t\t\t\t\t\t | 8.save\n");
printf("9.Exit\n");
printf("\n");

while(true){
  int  k;
  scanf("%d",&k);
  if(k==1){
    bst = get_data(bst);
  }else if(k==2){
    int roll;
    printf("Enter roll number | ");
    scanf("%d",&roll);
    bst = delete(bst,roll);
    bst = get_data(bst);
  }else if(k==3){
    printlist(bst.root);
    printf("\n");
  }else if(k==4){
    for(int i=1;i<=5;i++){
        printf("Branch code %d | ",i);
        printlist2(bst.root,i);
        printf("\n");
    }
    printf("\n");                                       
  }else if(k==5){
    for(int i=1;i<=8;i++){
      printf("%dth Semester\n",i);
      for(int j=1;j<=5;j++){
        printf("Branch code %d | ",j);
        printlist3(bst.root,j,i);
        printf("\n");
      }
      printf("\n");
    }
  }else if(k==6){
    int roll;
    printf("Enter Roll number\n");
    scanf("%d",&roll);
    bst = delete(bst,roll);
  }else if(k==7){
    printf("Enter 1-ug and 2-pg\n");
    int status;
    scanf("%d",&status);
    bst = printlist4(bst,bst.root,status); 
  }else if(k==8){
    FILE* fp2 = fopen("input.data","wb");
    save_data(bst.root,fp2);
  }else{
    break;
  } 
}


}