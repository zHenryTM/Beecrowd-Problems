casos_teste = int(input())
for i in range(casos_teste):
    jogadores = input().split(" ")
    numeros = input().split(" ")
    soma = int(numeros[0]) + int(numeros[1])
    resultado = "PAR" if (soma % 2 == 0) else "IMPAR"
    vencedor = jogadores[0] if (jogadores[1] == resultado) else jogadores[2]
    print(vencedor)
