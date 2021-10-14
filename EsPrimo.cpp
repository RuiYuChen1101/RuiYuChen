// -------------------------------------------------------------------------------------------
// Nombre: RuiYu Chen
// Fecha: 14-10-2021
// -------------------------------------------------------------------------------------------


#include <iostream>
using namespace std; // para no tener que ponerlo cada vez



// -------------------------------------------------------------------------------------------
// Diseño:
// Recibe un numero natural la funcion esPrimo, en dentro de él a traves de un algoritmo se calcula
// si es verdadero que es un numero primo, o falso si no es un numero primo.
// -------------------------------------------------------------------------------------------
bool esPrimo (int num)
{
    int res = 0;//Crear una variable de tipo int
    bool resultado; //crear la variable para guardar el resultado
    for(int i=1; i<= num; i++)
    {
        if(num % i==0){ //comprueba si alguno tiene resto cero
                res = res + 1;
    }

    }
    if(res == 2)
    { //comprueba si en el bucle anterior se han guardado mas de dos valores
        resultado=false;//devuelve un falso
    }
    else
    {
        resultado=true;//devuelve un verdadero
    }
    return resultado;//devolver el resultado
}
// -------------------------------------------------------------------------------------------
// Hacer un bucle primero, si la division de un numero(x) por ese numero menos uno(x-1) da cero,
// siendo ese numero dividido como minimo tiene que ser 2, entonces sumo un valor al res.
// Posteriormente compruebo el valor de res, si el valor de res es igual a dos, entonces devuelvo
// un false, que no es un numero primo, al contrario, y si no es dos, entonces devuelve un verdadero.
// -------------------------------------------------------------------------------------------

int main ()
{
  int a;//crear una variable
  int r;//crear otra variable
  cout<<"Introduce un numero";
  cin>>a;//Introducir un numero por el usuario
  r=esPrimo(a);//capta el resultado
  
    if( r == true)//si r es verdadero
    {
        cout<<"No es Primo"; //imprimir "no es primo"
    }
    else
    {
        cout <<"Si es Primo";  //y si no, imprime "es primo" 
    }
    return 0;
     
}
// -------------------------------------------------------------------------------------------
// En el main el usuario introduce un numero natural, y se pasa a la función esPrimo, una vez me
// devuelve el resultado, compruebo que el resultado es verdadero o no, y según el resultado, imprimo
// dicho resultado en la pantalla para el usuario.
// -------------------------------------------------------------------------------------------
