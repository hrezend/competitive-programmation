#Funcoes
def fatorial(x):
	total = 1
	while(x != 0):
		total = total * x
		x = x - 1		
	return total

#Entrada
num = int(input())

#Processamento
resultado = fatorial(num)

#Saida
print(resultado)
