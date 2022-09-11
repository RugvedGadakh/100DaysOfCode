import math
T = int(input())
for j in range (0,T):
    size = int(input())
    a = input()
    b = a.split()
    arr =([int(x) for x in b])
    z = set(arr)
    Totalpair =0
    for i in z:
        count = arr.count(i)
        if(count>1):
            pair =int((math.factorial(count))/(2*(math.factorial(count-2))))
        else :
            pair =0 
        Totalpair = Totalpair + pair
    print(Totalpair)