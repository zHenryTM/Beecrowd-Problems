casos_teste = int(input(""))

for i in range(casos_teste):
    lampadas = maior_sequencia = 0
    numero = int(input(""))
    
    while (numero / 2 > 0):
        if (numero % 2 == 1):
            lampadas += 1
            if (lampadas > maior_sequencia):
                maior_sequencia = lampadas
        else:
            lampadas = 0
        numero //= 2
    
    if (lampadas + 1 > maior_sequencia and numero > 0):
        maior_sequencia = lampadas + 1
    
    print(f'{maior_sequencia}')
