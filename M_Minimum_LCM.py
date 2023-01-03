from sympy import *
import math
t = int(input())
while t>0:
    n=int(input())
    if n&1:
        if isprime(n)==True:
            print(1,n-1)
        else:
            print(int(math.sqrt(n)),int(n-math.sqrt(n)))

    else:
        print(n//2,n//2)    
    t-=1