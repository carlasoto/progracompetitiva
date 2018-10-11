#include <stdio.h>

int main(){
	int i;
	long long int n;
	scanf("%lld",  &n);
	long long int p[2*n];
	for(i = 0; i<2*n; i++){
		scanf("%lld", &p[i]);
	}
	for(i = 0; i<2*n; i+=2){
		long long int c = p[i];
		long long int r = p[i+1];
		long long int q = c-r;
		if(c==r) printf("Case #%d: 0\n", i+1);
	}
	
	
	return 0;
}
