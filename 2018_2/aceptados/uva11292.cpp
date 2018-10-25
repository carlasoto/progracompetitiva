#include <bits/stdc++.h>

using namespace std;
//Codigo de internet

int main() {
    int dc, kc;
    int dragons[20000], knights[20000];
    while(scanf("%d%d", &dc, &kc), dc != 0){  //recibe caballeros y cabezas de dragones
        for (int i = 0; i < dc; i++){
			scanf("%d", dragons + i);
		}
        for (int i = 0; i < kc; i++){
			scanf("%d", knights + i);
	    }
        sort(dragons, dragons + dc);  //ordena tamaños cabezas y caballeros
        sort(knights, knights + kc);
        int k = 0;
        int sum = 0;
        bool doomed = false;
        
		for (int i = 0; i < dc; i++){
            while (k < kc && knights[k] < dragons[i]) k++; //que hayan mas caballeros altos que cabezas de dragon
            if (k >= kc){   //si no hay tantos caballeros como cabezas
                doomed = true;   
                break;
            }
            sum += knights[k];   //suma de las alturas de los caballeros para saber canto se va a pagar
            k++;
        }
        if(doomed) {
            printf("Loowater is doomed!\n");   //menos caballeros que cabezas de dragon
        }
		else{
            printf("%d\n", sum);  //cantidad de dinero que se debe pagar a los caballeros
        }
    }
    return 0;
}
