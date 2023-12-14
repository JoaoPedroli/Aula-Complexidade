from random import randint
n = 10**5 
print(n, randint(0, n))
print(*[randint(0, n) for i in range(n)])

