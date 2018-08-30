#include <stdio.h>
#include <math.h>

int main(){
	int i=0;
	double n;
	double num[131072];     //tamaño sacado de internet
	
	while((scanf("%lf", &n))!=EOF){
		num[i] = sqrt(n);
		i++;
	}

	for(int j=i-1; j>=0; j--){
		printf("%.4lf\n", num[j]);
	}
	return 0;
} 