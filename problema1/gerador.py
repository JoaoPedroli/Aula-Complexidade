from random import randint
import sys

n = int(sys.argv[1])
print(n, randint(0, n))
print(*[randint(0, n) for i in range(n)])

