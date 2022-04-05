def insertion_count_sort(array):
  count = 0
  for i in range(1, len(array)):
    key = array[i]
    j = i-1
    while j >= 0 and key < array[j]:
      array[j + 1] = array[j]
      j -= 1
      count += 1
    array[j + 1] = key
  
  print('Optimal train swapping takes {} swaps.'.format(count))


qtd_casos = int(input())
while qtd_casos > 0:
  qtd_vagoes = int(input())
  vagoes = list(map(int,input().strip().split()))[:qtd_vagoes]
  
  insertion_count_sort(vagoes)
  qtd_casos -= 1