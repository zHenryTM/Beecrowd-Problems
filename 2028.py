def qtd_numeros_na_sequencia(N: int) -> int:
    if (N <= 0):
        return 1
    return qtd_numeros_na_sequencia(N - 1) + N

def imprimir_sequencia(N: int) -> None:
    x = 1
    print("0", end = "")
    while (x <= N):
        for i in range(x):
            print(f" {x}", end = "")
        x += 1
    print("")

caso = 1

while True:
    try:
        N = int(input())
        qtd_numeros = qtd_numeros_na_sequencia(N - 1) + N;
        
        if (qtd_numeros == 1):
            print(f"Caso {caso}: {qtd_numeros} numero")
        else:
            print(f"Caso {caso}: {qtd_numeros} numeros")
        
        imprimir_sequencia(N)
        
        print("")
        
        caso += 1
    except EOFError:
        break
