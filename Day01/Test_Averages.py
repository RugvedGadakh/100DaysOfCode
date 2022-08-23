T = int(input())

for i in range (0,T):
    a = input()

    b = a.split()
    ([int(x) for x in b])
    A = int(b[0])
    B = int(b[1])
    C = int(b[2])

    if (A+B)/2 <35 :
        print("Fail")
    elif (A+C)/2 <35 :
        print("Fail")
    elif (B+C)/2 <35 :
        print("Fail")
    else:
        print("Pass")
