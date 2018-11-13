#include <stdio.h>

int main()
{
    int t, n, c, i, j;
    char a[100];
   
    while(scanf("%d",&t)==1){
	    for(i=1;i<=t;i++){
	        scanf("%d %s",&n,a);
	        c=0;
	        for(j=0;j<n;){
	            if(a[j]=='#') j++;
	            else{
		            c++;
		            j+= 3;
	            }
	        }
	        printf("Case %d: %d\n",i,c);
	    }
	    break;
	}
 
    return 0;
}
