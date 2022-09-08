
n = int(input())
arr = map(int, input().split())

arr = list(dict.fromkeys(arr))
arr.sort()
arr.reverse()
print(arr[1])