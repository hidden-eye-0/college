def evens(arr):
    maxi = 0
    current = 0
    for num in arr:
        if num % 2 == 0:
            current += 1
            maxi = max(maxi, current) 
        else:
            current = 0   
    return maxi

N = int(input().strip())
arr = list(map(int, input().strip().split()))

print(evens(arr))