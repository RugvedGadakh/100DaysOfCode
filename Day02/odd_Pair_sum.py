n = int(input())

i =1
for i in range(1,n+1):
    if i%2==0:
        result = (n**2)/2
        print(result)
    else:
        result = ((n**2)-1)/2
        print(result)
