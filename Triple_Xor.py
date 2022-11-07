t = int(input())
for i in range(t):
    l = list(map(int, input().split()))
    print((pow(2,l[0])-1)*(pow(2,l[0])-2))