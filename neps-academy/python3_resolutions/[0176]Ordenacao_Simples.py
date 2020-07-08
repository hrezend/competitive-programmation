#Entrada
qtd_num = int(input())
nums = input().split()

#Processamento
for i in range(qtd_num):
	nums[i] = int(nums[i])

nums.sort()

#Saida
for i in range(qtd_num):
	print(nums[i], end = " ")
