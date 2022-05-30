def solve(num, length):
  i = 1
  fat = num
  while num - (i * length) >= 1:
    fat *= (num - (i * length))
    i += 1
  return fat

qtdCasos = int(input())
for i in range(qtdCasos):
  qtdCasos -= 1
  entrada = input().split('!')
  print(solve(int(entrada[0]), len(entrada)-1))
