entrada = input().split()
a = float(entrada[0])
b = float(entrada[1])
c = (b - a) / a * 100
print(f"{c:.2f}%")
