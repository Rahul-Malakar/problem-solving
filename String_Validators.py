s=input()
flag=0
for i in s:
    if(i.isalnum()):
        print(i.isalnum())
        flag=1
        break
if(flag==0):
    print("False")
flag=0
for i in s:
    if(i.isalpha()):
        print(i.isalpha())
        flag=1
        break
if(flag==0):
    print("False")
flag=0
for i in s:
    if(i.isdigit()):
        print(i.isdigit())
        flag=1
        break
if(flag==0):
    print("False")
flag=0
for i in s:
    if(i.islower()):
        print(i.islower())
        flag=1
        break
if(flag==0):
    print("False")
flag=0
for i in s:
    if(i.isupper()):
        print(i.isupper())
        flag=1
        break
if(flag==0):
    print("False")