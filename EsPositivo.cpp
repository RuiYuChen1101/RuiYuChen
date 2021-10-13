//
//  EsPositivo.cpp
//  prac2
//
//  Created by 陈瑞煜 on 6/10/21.
//

#include <iostream> //Incluye la libreria iostream

int esPositivo(int num1) // Crear la funcion "esPositivo" para verificar el numero introducido es positivo o no
{
    bool resultado; //Crear una variable de tipo booleano
    
    if (num1>=0) //Si el numero es mayor o igual que el 0
    {
        resultado=true; //Entonces el resultado es verdadero
    }
    else // Y si no
    {
        resultado=false; //El resultado es falso
    }
    return resultado; //Devuelve el resultado de tipo booleano
}


int main() //Crear la funcion "main"
{
    int a; //Crear un variable que guardar el numero introducido por el usuario 
    bool r; //Crear un variable que guarda el resultado booleano devuelto por la funcion "esPositivo"
    
    std::cout<<"Introduce un numero"; std::cin >> a; //Detectar el numero introducido por el usuario

    r=esPositivo(a); //Guarda el resutado devuelto por la funcion "esPositivo"
    std::cout<<"El resultado es" << r; //Imprimir el resultado en la pantalla
 
    
}


