primeira_entrada = input().split() 
qtd_titans, tamanho_muros = list(map(int, primeira_entrada))

sequencia = input()

segunda_entrada = input().split()
tamanho_titan_pequeno, tamanho_titan_medio, tamanho_titan_grande = list(map(int, segunda_entrada))

muros = []

distancia_p = distancia_m = distancia_g = 0

for i in range(qtd_titans):
    muros.append(tamanho_muros)
    
for letra in sequencia:
    if (letra == "P"):
        while (distancia_p <= qtd_titans):
            if (muros[distancia_p] >= tamanho_titan_pequeno):
                muros[distancia_p] -= tamanho_titan_pequeno
                break
            distancia_p += 1
          
    elif (letra == "M"):
        while (distancia_m <= qtd_titans):
            if (muros[distancia_m] >= tamanho_titan_medio):
                muros[distancia_m] -= tamanho_titan_medio
                break
            distancia_m += 1
          
    else:
        while (distancia_g <= qtd_titans):
            if (muros[distancia_g] >= tamanho_titan_grande):
                muros[distancia_g] -= tamanho_titan_grande
                break
            distancia_g += 1
            
if (distancia_p > distancia_m):
    qtd_muros = distancia_p
else:
    qtd_muros = distancia_m

if (distancia_g > qtd_muros):
    qtd_muros = distancia_g
    
print(qtd_muros + 1)
  
