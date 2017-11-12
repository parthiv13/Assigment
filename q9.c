#include<stdio.h>

int main(void) {
	int N, M, i, count = 0, ans = 1;
	scanf("%d", &N);
	int arra[N];
	for(i=0; i<N; i++) {
		arra[i] = 0;
	}
	scanf("%d", &M);
	while(M--) {
		int temp1, temp2;
		scanf("%d %d", &temp1, &temp2);
		arra[temp1] += 1;
		arra[temp2] += 1;
	}
	for(i=0; i<N; i++) {
		if(count > 2) {
			ans = 0;
			break;
		}
		if(arra[i]%2 != 0) {
			count++;
		}
		else continue;
	}
	if(ans) {
		printf("Yes");
	}
	else printf("No");
}
