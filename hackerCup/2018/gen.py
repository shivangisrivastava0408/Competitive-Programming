import random
A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
n = random.randint(1,50)
f = open("input.txt","w")
f.write(str(n) + "\n")
for i in range(n):
    a = ''.join(random.choice(A) for _ in range(random.randint(1,2000)))
    f.write(a + "\n")
f.close()