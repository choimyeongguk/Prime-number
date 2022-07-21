#include <stdio.h>

int main(){
	int i, num, size;
	int prime_count = 0;
	
	printf("숫자 입력: ");
	scanf("%d", &size);
	int prime[size] = {0};
	
	for(i=1;i<size;i++){
		if(prime[i]==0){
			num = 2;
			while((i+1)*num<=size){
				prime[(i+1)*num-1]++;
				num++;
			}
		}
	}
	for(i=1;i<size;i++){
		if(prime[i]==0){
			printf("%d  ", i+1);
			prime_count++;
			if(prime_count%10==0){
				printf("\n");
			}
		}
	}
	printf("\n\n소수의 개수: %d", prime_count);
	return 0;
}
