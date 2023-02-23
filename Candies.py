# t = int(input())

# for _ in range(t):
#     n = int(input())
#     a = list(map(int, input().split()))
#     left, right = 0, n - 1
#     inversions, moves = 0, 0
#     while left < right:
#         if a[left] > a[right]:
#             inversions += 1
#             right -= 1
#         else:
#             moves += 1
#             left += 1
#     print(min(inversions, moves))

l = list(map(int, input().split()))
sum =0
for i in l:
  sum+=i
print(sum)