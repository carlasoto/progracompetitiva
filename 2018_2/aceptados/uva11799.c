#include <stdio.h>

int main(){
	int c,i,j,k,l;
	scanf("%d", &c);
	int cases[c];
	for(i=0; i<c; i++){
		int n;
		scanf("%d", &n);
		int v[n+1];
		v[0] = n;
		for(k=1; k<n+1; k++){
			scanf("%d", &v[k]);
		}
		for(j=1; j<n; j++){
			for(l=j+1; l<n+1; l++){
				if(v[j]<v[l]){
				    int aux = v[j];
					v[j] = v[l];
					v[l] = aux;
				}
			}
		}
		int r = v[1];
		printf("Case %d: %d\n", i+1, r);
	}	
	
	
	return 0;
}
