n = int(input())

i=1

for i in range(0,n):
    dist = int(input())
    if dist<=300:
        cost = 3000
        print(cost)
    else:
        cost = 10*dist
        print(cost)
        
    i=i+1
    
