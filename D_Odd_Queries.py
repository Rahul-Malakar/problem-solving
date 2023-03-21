t = int(input())
for _ in range(t):
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    s = sum(a)
    odd = s % 2 == 1
    for i in range(q):
        l, r, k = map(int, input().split())
        length = r - l + 1
        if length % 2 == 0:
            print("YES" if odd else "NO")
        else:
            if a[l-1] % 2 == k % 2:
                print("NO")
            else:
                s += k - a[l-1]
                a[l-1] = k
                odd = s % 2 == 1
                print("YES")
