pd = []
qtdDePizzasDoPedido = []
tempoDeEntrega = []

def solve(pedidos, pizzas):
  for i in range(pedidos+1):
    for j in range(pizzas+1):
      if i == 0 or j == 0:
        pd[i][j] = 0
      else:
        if qtdDePizzasDoPedido[i] <= j:
          aux = pd[i - 1][j - qtdDePizzasDoPedido[i]] + tempoDeEntrega[i]
          pd[i][j] = max(pd[i-1][j], aux)
        else:
          pd[i][j] = pd[i-1][j]
          
  return pd[pedidos][pizzas]

while True:
  qtdPedidos = int(input())
  if qtdPedidos == 0:
    break

  qtdMaxDePizzas = int(input())

  pd = [[]] * 21
  qtdDePizzasDoPedido = [0] * 21
  tempoDeEntrega = [0] * 21
  
  for i in range(1, qtdPedidos+1):
    inp = list(map(int, input().split()))
    tempoDeEntrega[i] = inp[0]
    qtdDePizzasDoPedido[i] = inp[1]

  for i in range(21):
    auxList = [0] * 31
    pd[i] = auxList

  answer = solve(qtdPedidos, qtdMaxDePizzas)
  print('{} min.'.format(answer))
