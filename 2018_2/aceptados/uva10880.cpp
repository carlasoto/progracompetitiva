#include <bits/stdc++.h>
 //Codigo sacado de internet
using namespace std;

int main()
{
    long long int n, i, t, j=0, p, l, q, a[10000];
    scanf("%lld",&t); //cantidad de casos
    while(t--)
    {
        scanf("%lld %lld",&p,&n); //p corresponde a la cantidad de galletas que habia y n a la cantidad de galletas que quedaron
        q = p-n; //q cantidad de galletas comidas
        l=0;
        if(p==n) 
            printf("Case #%lld: 0\n",++j); //cantidad de galletas es igual a las que quedaron, no comieron ninguna
        else
        {
            printf("Case #%lld:",++j);

            for(i=1;i<=sqrt(q);i++)
            {
                if(q%i==0)            //busca las cantidad de galletas que cada invitado pudo habe comido
                {
                    a[l++]= i;
                    if(q/i!=i)
                        a[l++] = q/i;
                }
            }
            sort(a,a+l);   //ordena estas cantidades de menor a mayor
            for(i=0;i<l;i++)
             {
                 if(a[i]>n)
                   printf(" %lld",a[i]);  //imprime las cantidades según caso
             }
             printf("\n");
        }
    }
    return 0;
}
