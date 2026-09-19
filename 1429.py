def fatorial(x):
    if (x == 0 or x == 1):
        return 1
    return x * fatorial(x - 1)
    
def main():
    acm = 0
    while True:
        acm = input()
        if (acm == "0"):
            break
        j = 1
        n = len(acm)
        decimal = 0
        for i in range(n - 1, -1, -1):
            digito = int(acm[i])
            fat = fatorial(j)
            decimal += digito * fat
            j += 1
        print(decimal)
    
main()
