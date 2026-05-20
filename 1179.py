"""
POR TUDO O QUE É MAIS SAGRADO, NÃO ENCURTE O CÓDIGO, COMO: cp = ci = 0, POIS ISSO DÁ ERRO!
"""

par = [0, 0, 0, 0, 0]
impar = [0, 0, 0, 0, 0]
cp = 0
ci = 0

for i in range(0, 15):
    x = int(input(""))
    
    if (x % 2 == 0):
        par[cp] = x
        cp = cp + 1
        if (cp == 5):
            for j in range(0, 5):
                print(f"par[{j}] = {par[j]}")
                par[j] = 0
            cp = 0
    else:
        impar[ci] = x
        ci += 1
        if (ci == 5):
            for j in range(0, 5):
                print(f"impar[{j}] = {impar[j]}")
                impar[j] = 0
            ci = 0
    
for i in range(ci):
    print(f"impar[{i}] = {impar[i]}")
    
for i in range(cp):
    print(f"par[{i}] = {par[i]}")
