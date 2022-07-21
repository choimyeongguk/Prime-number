prime = [2]
judge = 0
size = int(input("숫자 입력: "))
for i in range(3, size+1):
  for j in range(0, len(prime)):
    if(i%prime[j]==0):
      judge += 1
      break
  if(judge==0):
    prime.append(i)
    print("%d "%i, end="")
    if(len(prime)%10==0):
      print("\n")
  judge = 0
print("\n\n소수의 개수: %d"%len(prime))