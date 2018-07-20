f = open("22.dat","r")
a = f.read().split('","')
a[0] = a[0][1:]
a[len(a)-1] = a[len(a)-1][:len(a[len(a)-1])-2]
f.close()
f = open("22set.dat","w")
f.write(str(len(a)) + '\n')
ans = 0
k = 1
for i in a:
    f.write(i + "\n")
    p = 0
    for j in i:
        p += ord(j)-ord('A')+1
        # f.write()
    ans = ans + p*k
    k = k + 1   
print ans
f.close()