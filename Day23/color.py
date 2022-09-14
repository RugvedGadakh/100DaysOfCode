T = int(input())
for j in range (0,T):
    # size = int(input())
    a = input()
    b = a.split()
    arr =([int(x) for x in b])

    X = arr[0]
    Y = arr[1]
    Z = arr[2]

    zeroes = 0

    for i in range(0,3) :
        if(arr[i]==0):
            zeroes = zeroes +1

    
    if(zeroes == 3):
        ans = 0
    
    elif(zeroes==2):
        ans =1

    elif(zeroes == 1):
        if((X>1 and Y>1)or (Y>1 and Z>1) or (X>1 and Z>1) ):
            ans = 3
        else:
            ans = 2
    elif(zeroes == 0):
        if(X==1 and Y==1 and Z==1):
            ans = 3
        elif(X>2 and Y>2 and Z>2):
            ans = 6
        elif((X==3 and Y==3 and Z==2)or(X==3 and Y==2 and Z==3)or(X==2 and Y==3 and Z==3)):
            ans =5
        elif((X>1 and Y>1)or (Y>1 and Z>1) or (X>1 and Z>1) ):
            ans =4
        else:
            ans =3

    print(ans)
