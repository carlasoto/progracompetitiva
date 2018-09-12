#include <stdio.h>

int main(){
	int n, i, j, k, aux;
	scanf("%d", &n);
	int p[n];
	for(i=0; i<n; i++){
		scanf("%d", &p[i]);
	}
	for(j=0; j<n; j++){
		for(k=j+1; k<n; k++){
			if(p[j]>p[k]){
			    aux = p[j];
				p[j] = p[k];
				p[k]   = aux;
			}
		}
	}
	int c = (n/2)+1;
	int s = 0;
	for(i=0; i<c; i++){
		s = s + (p[i]/2)+1;
	}
	printf("%d", s);	
	
	return 0;
}

