#include<iostream>
using namespace std;
									//se puede usar tanto (class) como (typename), para declarar plantillas
template <class T> 					//se declara la plantilla, y se le asigna una clase T

T mayor(T a, T b, T c){				//se declara la funcion que retorna el mayor de 3 datos enviados por parametro
	
	if((a > b) && (a > c)){			//si el a es el mayor
		return a;					//retorna el dato a
	}
	else if((b > a) && (b > c)){	//si el b es el mayor
		return b;					//retorna el dato b
	}
	else{							//si el c es el mayor o igual
		return c;					//retorna el dato c
	}
}

int main(){
	
	//se llama a la funcion y se imprime sus resultados
	//al tener solo 1 class en la funcion generica, solo se pueden enviar datos del mismo tipo
	cout << "\nPrueba 1: " << mayor(9, 10, 10) << endl;
	cout << "Prueba 2: " << mayor(10.5, 20.6, 15.29) << endl; 
	cout << "Prueba 3: " << mayor('r','s','z') << endl;

	cout<<"\n";
	return 0;
}