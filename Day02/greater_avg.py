n = int(input())


for i in range(0,n):
    c = input()
    d = c.split()
    ([int(x) for x in d])
    A= int((d[0]))
    B= int((d[1]))
    C= int((d[2]))
    
    avg = (A+B)/2
    
    if (avg>C):
        print("YES")
    else:
        print("NO")
