#include <stdio.h>

int main(){
	int n,a=0;
	scanf("%d", &n);

	if(n>=1 &&n <=10000){
		for(int i=1; i<=n; i++){
			a=a+i;
		}
		printf("%d\n", a);
	}

	if(n<1 && n>=-10000){
		for(int i=1; i>=n;i--){
			a=a+i;
		}
		printf("%d\n", a);
	}
	return 0;
}