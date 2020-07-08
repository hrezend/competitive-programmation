#Entrada
A, B, C = input().split()

#Processamento
A = int(A)
B = int(B)
C = int(C)
Resposta = ''

if(A == B and B == C):
	Resposta = '*'
elif(A == B and B != C):
	Resposta = 'C'
elif(A == C and C != B):
	Resposta = 'B'
elif(B == C and C != A):
	Resposta = 'A'

#Saida
print(Resposta)
