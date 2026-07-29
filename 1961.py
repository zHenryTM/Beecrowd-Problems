entrada = input().split()
altura_pulo = int(entrada[0])
canos = int(entrada[1])
gameover = 0
entrada = input().split()

for i in range(len(entrada) - 1):
    cano_atual = int(entrada[i])
    proximo_cano = int(entrada[i + 1])
    
    if (abs(cano_atual - proximo_cano) > altura_pulo):
        gameover = 1
        break
    
if (gameover == 1):
    print("GAME OVER")
else:
    print("YOU WIN")
