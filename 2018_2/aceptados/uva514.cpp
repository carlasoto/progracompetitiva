#include <bits/stdc++.h>
//Codigo conseguido
using namespace std;

int correct(int n){    //funcion que guarda y saca carros de manera requerida
	stack<int> salida, llegada; //el orden en que deben entrar y salir los carros del tren se representan mediante la estructura stack
	int b, x;
	bool val = true;
	b = n;
	for(int i=0; i<n; i++){ //almacena numero de los carros
		cin >> x;
		if(x == 0){ //representa ultima linea del bloque
			cout << endl;
			return 3;
		}else{
			salida.push(x);
		}	
	}
	while(val && b!=0){
		if(llegada.empty()){
			if(salida.empty() && b==0){
				val = false;
			}else{
				llegada.push(salida.top());   //va sacando los carros en el orden
				salida.pop();				  //en que llegaron pero inverso, el ultimo en entrar sera el primero en salir
			}
		}else{
			if(llegada.top() == b){
				llegada.pop();
				b--;
			}else if(salida.empty() || b==0){
				val = false;
			}else if(!salida.empty()){
				llegada.push(salida.top());
				salida.pop();
			}
		}
	}
	return val;
	}

int main(){
	int cant, op;   
	cin >> cant;
	while(1){    //imprimirá si es posible sacar los carros de la forma requerida con un yes o no
		op = correct(cant);      
		if(op == 3){
			cin >> cant;
			if (cant == 0){
				return 0;
			}
		} else {
			op ? cout << "Yes" << endl : cout << "No" << endl;
		}
	}
}
