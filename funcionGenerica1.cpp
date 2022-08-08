#include<iostream>
using namespace std;

												//se puede usar tanto (class) como (typename), para declarar plantillas
template <typename T, typename U, typename S>   //se declara varios tipos de datos, para que estos puedan ser de cualquier tipo

T mayor(T a, U b, S c){							//se declara la funcion que retorna el mayor de 3 datos enviados por parametro 
	
	if((a > b) && (a > c)){						//si el a es el mayor
		return a;								//retorna el dato a
	}
	else if((b > a) && (b > c)){				//si el b es el mayor
		return b;								//retorna el dato b
	}
	else{										//si el c es el mayor o igual
		return c;								//retorna el dato c
	}
}

int main(){									
	
	//se llama a la funcion y se imprime sus resultados
	//al tener diversos typenames en la funcion generica, se pueden mezclar los datos enviados
	cout << "\nPrueba 1: " << mayor(5, 10, 8.7) << endl;			
	cout << "Prueba 2: " << mayor(3, 2.6, 1.5) << endl;	
	cout << "Prueba 3: " << mayor('a',25,'z') << endl;		

	cout<<"\n";
	return 0;
}