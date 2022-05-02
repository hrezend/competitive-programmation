import math

def solve(evUm, evDois, atq, dano):
  v1 = math.ceil(evUm/dano)
  v2 = math.ceil(evDois/dano)
  if atq == 3:
    return (v1/(v1+v2) * 100)

  dado = 1 - (6 - atq)/6
  return ((1 - pow(((1 - dado)/dado), v1))/(1 - pow(((1 - dado)/dado), v1+v2)) * 100)

while True:
  evUm, evDois, atq, dano = list(map(int, input().split()))
  if evUm == 0 and evDois == 0 and atq == 0 and dano == 0:
    break;
  print('{:.1f}'.format(solve(evUm, evDois, atq, dano)))
