//
//  Sumatorio.cpp
//  prac2
//
//  Created by 陈瑞煜 on 6/10/21.
//

#include <iostream> //Incluye la libreria iostream

int sumatorio(int num) //Crear la funcion "sumatorio"
{
    int resultado=0; //Crear una variable de tipo "int"
    for (int i=0; i<num ; i=i+1) //Un bucle "for", con un numero inicial de 0, condicion de si es menor que el numero introducido por el usuario y
    //cada vez que se ejecuta, se suma uno al "i"
    {
      resultado=resultado+i; //Hace el calculo y se guarda en la variable "resultado", y si se ejecuta otra vez
      //se suma el resultado guardo otra vez con el numero i
    }
    return resultado; //Devuelve el resultado obtenido en el calculo
}
    
int main() //Crear la funcion "main"
{
    int a,r; //Crear dos variables de tipo "int" para guardar numero enteros
    std::cout<<"Introduce un numero "; std::cin>>a; //Guarda el numero introducido por el usuario

    r=sumatorio(a); //Guarda el resultado devuelto por la funcion "sumatorio"
    std::cout<<"El resultado es" << r; //Imprimir el resultado en la pantalla
}
