entrada = input().split(" ")
hora_saida = int(entrada[0])
tempo_viagem = int(entrada[1])
fuso_horario = int(entrada[2])
hora_chegada = hora_saida + tempo_viagem + fuso_horario

if (hora_chegada >= 0):
    if (hora_chegada >= 24):
        hora_chegada -= 24
else:
    hora_chegada = 24 + hora_chegada
    
print(hora_chegada)
