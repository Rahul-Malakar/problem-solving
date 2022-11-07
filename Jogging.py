t= int(input())
for i in range(t):
    l = list(map(int, input().split()))
    sum=2*l[1]
    extra=0
    if l[0]==1:
        print(l[1])
    else:
        for j in range(1,l[0]):
            extra=pow(2,j)%1000000007
        print(sum+extra-2)
            