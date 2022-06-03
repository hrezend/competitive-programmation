import math

pontoUm = list(map(float,input().split()))
pontoDois = list(map(float,input().split()))

p1 = (pontoDois[0]-pontoUm[0]) * (pontoDois[0]-pontoUm[0])
p2 = (pontoDois[1]-pontoUm[1]) * (pontoDois[1]-pontoUm[1])
dist = math.sqrt(p1+p2)

print('{:.4f}'.format(dist))
