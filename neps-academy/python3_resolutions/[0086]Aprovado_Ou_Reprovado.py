#Entrada
A, B = input().split()

#Processamento
A = float(A)
B = float(B)
Media = (A+B)/2
Resposta = ''

if(Media >= 7):
	Resposta = 'Aprovado'
elif(Media >= 4):
	Resposta = 'Recuperacao'
else:
	Resposta = 'Reprovado'


#Saida
print(Resposta)
