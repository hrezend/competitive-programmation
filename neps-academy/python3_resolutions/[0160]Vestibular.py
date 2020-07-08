#Entrada
n = int(input())
oficial = input()
marcadas = input()

#Processamento
acertos = 0
for o, m in zip(oficial, marcadas):
	if(o == m):
		acertos = acertos + 1

#Saida
print(acertos)
