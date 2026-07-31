alunos = int(input())
melhor_nota = 0
matricula_melhor_nota = ""

for i in range(alunos):
    entrada = input().split()
    matricula = entrada[0]
    nota = float(entrada[1])
    
    if (i == 0 or nota > melhor_nota):
        melhor_nota = nota
        matricula_melhor_nota = matricula

if (melhor_nota >= 8):
    print(matricula_melhor_nota)
else:
    print("Minimum note not reached")
   
