#Funcoes
def eh_primo(x):
	count = 0
	for i in range(1, x+1):
		if(x % i == 0):
			count = count + 1
	if(count == 2):
		return "S"
	else:
		return "N"

#Entrada
num = int(input())

#Processamento
resultado = eh_primo(num)

#Saida
print(resultado)
