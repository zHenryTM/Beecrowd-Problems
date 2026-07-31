anos = int(input())
for i in range(anos):
    ano = int(input())
    resultado = 2015 - ano
    if (resultado > 0):
        print(f"{resultado} D.C.")
    else:
        resultado *= -1
        print(f"{resultado + 1} A.C.")
