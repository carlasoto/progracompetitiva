#include <bits/stdc++.h>

//Codigo sacado de internet en C++, no logré encontrar mi propia
//solución usando máscara de bits, intenté ordenar las piedras según
//su peso, asignando la mayor a una pila y después guardar las demás
//comparando los pesos de ambas pilas, pero timus no aceptó mi respuesta.
using namespace std;

int n, num[22], sum=0, ans;

int main() {
    scanf("%d", &n);  //Recibe cantidad de piedras
    for (int i = 0; i < n; ++i){  
        scanf("%d", &num[i]);  //Almacena tamaño de piedras en arreglo
        sum += num[i]; //Suma todos los pesos
    }
    ans = sum;
    for (int mask = 0; mask < (1<<n); mask++){  //Realiza la operación de bits para separar las
        int s = 0;                              //piedras en las dos pilas
        for (int j = 0; j < n; ++j) {   
            if((1<<j)&mask){
                s += num[j];
            }
        }
        ans = min(ans, abs(sum-s*2));   //Calcula la diferencia menor entre ambas pilas.
    }
    printf("%d\n",ans);
    return 0;
}
