def subString(Str,n):
    l=[]
    
    for Len in range(1,n + 1):
         
    
        for i in range(n - Len + 1):
             
            
            
            
            j = i + Len - 1
            s=""
            for k in range(i,j + 1):
                s+=Str[k]
            l.append(s)
    ans=0
    
    for i in l:
        if len(i)>1:
            if i[-1]=='0' and i[-2]=='0':
                ans-=1
            count1=0
            count2=0
            for j in i:
                if j=='0':
                    count1+=1
                elif j=='1':
                    count2+=1
            if count1==0 or count2==0:
                ans-=1
        

    print(ans+len(l))


k = int(input())          
for i in range(k):
    n=int(input())
    s=input()
    subString(s,len(s))