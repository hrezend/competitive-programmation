#Entrada
num_interrup = int(input())
acoes = input().split()

#Processamento
A = 0
B = 0
for acao in acoes:
	if(acao == '1'):
		A = 1 if A == 0 else 0
	elif(acao == '2'):
		A = 1 if A == 0 else 0
		B = 1 if B == 0 else 0

#Saida
print(A)
print(B)
