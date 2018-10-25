#include <stdio.h>
//Codigo de internet
int main(){   
    int T,i;   
    scanf("%d", &T);
    while (T--){
        int n, coin, last = 0, sum = 0, count = 0;
        scanf("%d", &n);
        for(i = 0; i < n; ++i){
            scanf("%d", &coin);
            if (sum >= coin)      //la suma debe ser mayor o igual a la moneda siguiente,
                sum = sum - last + coin;
            else{
                sum += coin;   // se van sumando las monedas a suma
                ++count;  //avanzando a la siguiente
            }

            last = coin;
        }

        printf("%d\n", count);
    }

    return 0;
}
