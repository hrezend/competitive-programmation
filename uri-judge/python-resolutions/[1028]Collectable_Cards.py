def calcula_mdc(x, y):
    while y != 0:
        (x, y) = (y, x % y)
    return x

qtd_trocas = int(input())

for i in range(qtd_trocas):
    numeros = [int(num) for num in input().strip().split(' ')]
    print(calcula_mdc(numeros[0], numeros[1]))