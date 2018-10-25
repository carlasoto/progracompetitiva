#include <bits/stdc++.h>
using namespace std;
//Codigo de internet
int main()
{
    int n,a,tot,c;
    priority_queue<int,vector<int>,greater<int> > pq; //usa una priority queue para poder almacenar los valores e irlos sacando a medida que son sumados
    while(1){
        cin>>n;
        if(n==0) return 0;
        tot=0;
        c=0;
        while(n--){
            cin>>a;
            pq.push(a);      //se almacenan los numeros en la queue
        }
        while(pq.size()!=1){     //si hay valores en la queue
            tot=pq.top();      //se inicia la suma con el primero y se saca de la queue
            pq.pop();
            tot+=pq.top();    //al primero se le suma el segundo y es sacado de la queue
            pq.pop();
            c+=tot;    //se suman los totales sumados anteriormente
            pq.push(tot);
        }
        cout<<c<<endl;    //imprime la suma de los resultados de las sumas individuales.
        pq.pop();
    }
    return 0;
}
