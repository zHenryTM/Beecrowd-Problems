casos_teste = int(input())

for i in range(casos_teste):
    entrada = input().split(" ")
    
    x = int(entrada[0])
    y = int(entrada[1])
    
    area = int((x * y) / 2)
    
    print(f"{area} cm2")
