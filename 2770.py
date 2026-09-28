def inverter(dimensoes):
    # usar quando x < y
    z = dimensoes[0]
    dimensoes[0] = dimensoes[1]
    dimensoes[1] = z 

respostas = []
while True:
    try:
        x, y, m = map(int, input().split(" "))
        dimensoes = [x, y]
        if (x < y):
            inverter(dimensoes)
            x = dimensoes[0]
            y = dimensoes[1]
        for i in range(m):
            xi, yi = map(int, input().split(" "))
            dim_cliente = [xi, yi]
            if (xi < yi):
                inverter(dim_cliente)
                xi = dim_cliente[0]
                yi = dim_cliente[1]
            if (xi <= x and yi <= y):
                respostas.append("Sim")
            else:
                respostas.append("Nao")
    except EOFError:
        break
for resposta in respostas:
    print(resposta)
