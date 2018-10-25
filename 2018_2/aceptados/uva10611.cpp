#include <bits/stdc++.h>

using namespace std;
//Codigo de internet

int main(){
    int n,q,i,j,mb,ma;
    cin>>n;
    int a[n]; //altura monas
    for(i=0; i<n; i++)
        cin>>a[i];
    cin>>q;
    int b[q];  //alturas mono
    for(i=0; i<q; i++){
        cin>>b[i];
	}
    for(i=0; i<q; i++){
        mb=lower_bound(a,a+n,b[i])-a-1; //mas baja que el
        ma=upper_bound(a,a+n,b[i])-a;   //mas alta que el
        
		if(mb>0&&ma>=n){
            printf("%d X\n",a[mb]); //si no hay una mayor que el
        }
        else if(mb>=0&&mb<n&&ma>=0&&mb<n){
            cout<<a[mb]<<" "<<a[ma]<<endl;   //hay una menor y otra mayor que el
        }
        else if(mb<0&&ma<n){
            printf("X %d\n",a[ma]);  //si no hay menor que el
        }
        else{
            printf("X X\n"); //si no hay ni mayor ni menor que el
        }
    }
    return 0;
}
