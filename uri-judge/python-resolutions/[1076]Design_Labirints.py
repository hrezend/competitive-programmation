# o max do labirinto é 7x7 (49)

def dfs(matriz, visited, vertice, qtdVertices):
  count = 0
  visited[vertice] = 1;
  for i in range(qtdVertices):
    if matriz[vertice][i] == 1 and visited[i] == 0:
      count += dfs(matriz, visited, i, qtdVertices) + 1
  return count
    
qtd_casos = int(input())
while qtd_casos > 0:
  qtd_casos -= 1
  matriz = [[0] * 49] * 49
  visited = [0] * 49

  vertice = int(input())
  qtdVertices, qtdArestas = list(map(int, input().split()))

  for i in range(qtdArestas):
    fr, to = list(map(int, input().split()))
    matriz[fr][to] = 1
    matriz[to][fr] = 1

  print(dfs(matriz, visited, vertice, qtdVertices) * 2)
