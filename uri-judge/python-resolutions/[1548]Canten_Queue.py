qtd_casos = int(input())

while qtd_casos > 0:
  qtd_casos -= 1
  qtd_alunos = int(input())
  entrada = input().split()
  notas = list(map(int, entrada))
    
  sorted_notas = sorted(notas)
  sorted_notas.reverse()
  count = 0
  
  for i in range(len(notas)):
      if (notas[i] == sorted_notas[i]):
          count += 1
      
  print(count)