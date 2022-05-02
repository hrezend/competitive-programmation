import math

def solve(linhasPorPag, caractersPorPag, conto):
  aux = 0
  linhas = 1

  for palavra in conto:
    if len(palavra) + aux > caractersPorPag:
      aux = len(palavra) + 1
      linhas += 1
    else:
      aux += len(palavra) + 1
      
  qtdPaginas = math.ceil(linhas/linhasPorPag)
  return print(qtdPaginas)

while True:
  try:
    qtdPalavras, linhasPorPag, caractersPorPag = list(map(int, input().split()))
    conto = input().split()
    solve(linhasPorPag, caractersPorPag, conto)
  except EOFError:
    break
