n = list(map(int, input().split(" ")))
n.sort()

if (n[0] + n[1] > n[2] or n[1] + n[2] > n[3]):
    print("S")
else:
    print("N")
