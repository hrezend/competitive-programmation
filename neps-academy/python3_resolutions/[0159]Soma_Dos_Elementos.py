#Entrada
n = int(input())
lista = input().split()
for i in range(n):
  lista[i] = int(lista[i])

#Processamento
soma = sum(lista)

#Saida
print(soma)
