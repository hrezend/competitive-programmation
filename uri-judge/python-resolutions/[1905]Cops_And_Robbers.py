direction = [[1,0], [-1,0], [0,-1], [0,1]]

def dfs(matriz, visited, x, y):
  if not (x >= 0 and x < 5 and y >= 0 and y < len(matriz[x])):
    return
  if matriz[x][y]:
    return
  if visited[5 * x + y]:
    return
  
  visited[5 * x + y] = 1

  for i in range(4):
    dfs(matriz, visited, x + direction[i][0], y + direction[i][1])
    
qtd_casos = int(input())
while qtd_casos > 0:
  qtd_casos -= 1
  matriz = []
  visited = []

  linhas = 0
  while linhas < 5:
    linha = input().split()
    if linha:
      matriz.append(list(map(int, linha)))
      linhas += 1

  for l in range(25):
    visited.append(0)

  dfs(matriz, visited, 0, 0)
  
  print("COPS" if visited[24] else "ROBBERS")