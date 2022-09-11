T = int(input())

for i in range (0,T):

    size = int(input())

    a = input()

    b = a.split()
    arr =([int(x) for x in b])
    # print(arr)

    arr.sort()

    # print(arr)

    if(-arr[0]>arr[-1]):
        maximum = arr[0]*arr[0]
    else:
        maximum = arr[-1]* arr[-1]

    # print(maximum)

    if(-arr[0]>0) & (-arr[-1]<0):
        minimum = arr[0]*arr[-1]
    elif(-arr[0]<=0) & (-arr[-1]<0):
        minimum = arr[0]*arr[0]
    else:
        minimum= arr[-1] * arr[-1] 

    # print(minimum)

    print(minimum,maximum)
