/*
#include<iostream>
using namespace std;

int esPrimo(int num)
{
bool resultado;
  for (int i = 2; i < num; i++)
  {
    if (num%2==0)
    {
      resultado=false;
    }
    else
    {
      resultado=true;
    }

  }
return resultado;
}


int main()
{
    int a; 
    bool r;
  std::cout<<"introducir un numero"; std::cin >> a;
  r=esPrimo(a);
if(r== true)
{
   std::cout<<"El resultado es primo numbre" ;
}
else
{
    std::cout<<"El resultado no es primo numbre";
}
}
*/

//Fecha: 04/10/2019
//Descripcion: funcion que recibe un numero natural y nos devuelve verdadero si este es un numero primo y falso si no lo es


#include <iostream>
using namespace std; // para no tener que ponerlo cada vez

// el dato de entrada sera un numero natural
// el dato de salida sera un booleano
// si el numero natural es primo nos devolvera que si lo es
// si el numero natural no es primo nos devolvera que no

// definimos la funcion
bool esPrimo (int num){
    int res = 0;
        for(int i=1; i<= num; i++){
        if(num % i==0){ //comprueba si alguno tiene resto cero
                res = res + 1;
        }
    }
    if(res == 2){ //comprueba si en el bucle anterior se han guardado mas de dos valores
        return false;
    }else{
        return true;
    }
}

//------------------------------------

//Llamamo a bool esPrimo con el maim y se hace una prueba automática
int main (){
   int a = esPrimo(3); //prueba automatica con el 3
    //cout<<"Ingrese numero"<<endl;
    //cin>>num;
    if(a == true){
        cout<<"No es Primo";
        }else{
        cout <<"Si es Primo";
        }
    return 0;
}i
