for i in range(int(input())):
    n=int(input())
    s=input()
    cnt=0
    s2=s[:n]
    s3=s[::-1]
    X=list(s2)
    Y=list(s3)
    list = [[None]*(n + 1) for i in range(n + 1)]
    for i in range(n + 1):
        for j in range(n + 1):
            if i == 0 or j == 0 :
                list[i][j] = 0
            elif X[i-1] == Y[j-1]:
                list[i][j] = list[i-1][j-1]+1
            else:
                list[i][j] = max(list[i-1][j], list[i][j-1])
    print(list[n][n]//2)