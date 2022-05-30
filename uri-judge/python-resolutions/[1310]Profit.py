def solve(receitas, custoPorDia):
  aux = lucroMax = 0
  for i in range(len(receitas)):
    receita = receitas[i] - custoPorDia
    aux = max(0, aux + receita)
    lucroMax = max(aux, lucroMax)
  if (lucroMax < 0):
    lucroMax = 0
  return lucroMax

while True:
  receitas = []
  try:
    qtdDias = int(input())
    custoPorDia = int(input())
    for i in range(qtdDias):
      receitas.append(int(input()))
    print(solve(receitas, custoPorDia))

  except EOFError:
    break
