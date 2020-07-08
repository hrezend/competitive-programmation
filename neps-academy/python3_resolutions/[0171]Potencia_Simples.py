#Imports
import math

#Entrada
A, B = input().split()
A = float(A)
B = float(B)

#Processamento
resultado = math.pow(A,B)

#Saida
print("{:.4f}".format(resultado))
