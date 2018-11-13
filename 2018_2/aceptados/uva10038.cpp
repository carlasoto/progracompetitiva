#include <bits/stdc++.h>

using namespace std;
int main(){
	int n, c, a1[3000], a2[3000], i;
	while(scanf("%d",&n)==1){
		c=1;
		for(i=0;i<n;i++){
			scanf("%d",&a1[i]);
		}
		for(i=0;i<n-1;i++){
			a2[i]=abs(a1[i+1]-a1[i]);
		}
		sort(a2,a2+i);
		for(i=1;i<n;i++){
			if(a2[i]==a2[i-1]){
			c=0;
			break;
			}
		}
		if(c==0) printf("Not jolly\n");
		else printf("Jolly\n");
	}
	return 0;
}
