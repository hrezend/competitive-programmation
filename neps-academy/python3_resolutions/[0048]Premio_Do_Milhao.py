#Entrada
num_dias = int(input())
visualizacoes = []

for i in range(num_dias):
	A = int(input())
	visualizacoes.append(A)

#Processamento
total = 0
resposta = -1

for i, v in enumerate(visualizacoes):
	dia = i + 1	
	total = total + v
	if(total >= 1000000 and resposta == -1):
		resposta = dia

#Saida
print(resposta)
