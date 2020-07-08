#Imports
import math

#Entrada
qtd_numbs = int(input())
numbs = input().split()

#Processamento
for i in range(qtd_numbs):
	numbs[i] = float(numbs[i])

#Saida
for i in range(qtd_numbs):
	print("{:.4f}".format(math.sqrt(numbs[i])))
