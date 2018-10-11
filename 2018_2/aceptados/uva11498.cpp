#include <stdio.h>

int main(){
	while(1){
		int c, i;
		scanf("%d", &c);
		if(c==0) break;
		int p[2*c+2];
		int x;
		scanf("%d", &x);
		int y;
		scanf("%d", &y);
		p[0]=x;
		p[1]=y;
		for(i = 2; i<2*c+2; i++){
			scanf("%d", &p[i]);
		}
		for(i=2; i<2*c+2; i=i+2){
			if(p[i]==x || p[i+1]==y) printf("divisa\n");
			else if(p[i]>x&&p[i+1]>y) printf("NE\n");
		 	else if(p[i]>x&&p[i+1]<y) printf("SE\n");
		 	else if(p[i]<x&&p[i+1]>y) printf("NO\n");
		 	else if(p[i]<x&&p[i+1]<y) printf("SO\n");
		}
		
	}
	return 0;
}
