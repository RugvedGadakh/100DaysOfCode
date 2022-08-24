T = int(input())


for i in range(0,T):
    c = input()
    d = c.split()
    ([int(x) for x in d])
    W= int((d[0]))
    X= int((d[1]))
    Y= int((d[2]))
    Z= int((d[3]))

    if (X+Y)==W or (Y+Z)==W or (Z+X)==W or X==W or Y==W or Z==W or (X+Y+Z)==W:
        print("YES")
    else:
        print("NO")