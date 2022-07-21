#include <stdio.h>
#include <vector>

using namespace std;

int main(){
	int i, j, size;
	int prime_count = 0;
	int judge = 0;
	vector<int> prime(1, 2);
	
	printf("숫자 입력: ");
	scanf("%d", &size);
	
	for(i=3;i<size;i++){
		for(j=0;j<prime.size();j++){
			if(i%prime[j]==0) {
				judge++;
				break;
			}
		}
		if(judge==0){
			prime.push_back(i);
			printf("%d  ", i);
			if(prime.size()%10==0){
				printf("\n");
			}
		}
		judge = 0;
	}
	printf("\n\n소수의 개수: %d", prime.size());
	return 0;
}
