fibMemo = [0] * (40)
countMemo = [0] * (40)
fibMemo[0] = 0
fibMemo[1] = 1
countMemo[0] = countMemo[1] = 1

for i in range(2, 40):
  fibMemo[i] = (fibMemo[i-1] + fibMemo[i-2])
  countMemo[i] = (countMemo[i-1] + countMemo[i-2] + 1)

qtdCasos = int(input())
for i in range(qtdCasos):
  num = int(input())
  print("fib(%d) = %d calls = %d" %(num, countMemo[num]-1, fibMemo[num]))
