#Entrada
risada = input()

#Processamento
resposta = ''
r = ''
vogais = ['a','e','i','o','u']

for char in risada:
	if char in vogais:
		r = r + char

if(r == r[::-1]):
	resposta = 'S'
else:
	resposta = 'N'

#Saida
print(resposta)
