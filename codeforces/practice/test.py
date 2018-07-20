fopen = open('input.txt','w+')
i = 10000
fopen.write(str(i)+'\n')
for k in range(i):
    fopen.write('25 ')
fopen.close()