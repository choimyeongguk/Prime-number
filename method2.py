size = int(input("숫자 입력: "))
prime_count = 0
prime = [0 for i in range(size)]

for i in range(1, size):
  if(prime[i]==0):
    num = 2
    while((i+1)*num<=size):
      prime[(i+1)*num-1] += 1
      num += 1
for i in range(1, size):
  if(prime[i]==0):
    print("%d  "%(i+1), end="")
    prime_count += 1
    if(prime_count%10==0):
      print("\n")

print("\n\n소수의 개수: %d"%prime_count)