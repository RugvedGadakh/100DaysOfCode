T = int(input())

for i in range (0,T):
    a = input()

    b = a.split()
    ([int(x) for x in b])

    A = int(b[0])
    B = int(b[1])
    
    
    if (A/B)%2==0 :
        print("Yes")
    else:
        print("No")