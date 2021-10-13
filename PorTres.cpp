//
//  prac2.cpp
//  prac2
//
//  Created by 陈瑞煜 on 30/9/21.
//

#include<iostream> //Incluye la libreria iostream

int porTres(int n1) //Crear una funcion que se llama "suma" con las condiciones n1
{
    int resultado; //Crear una variable que se llama resultado para guardar el numero entero
    resultado=n1*3; //Hacer la operacion de la suma
    return resultado; //Devuelve un numero entero como el resultado
}

int main() // Crear la funcion "main"
{
    int a,r; //Crear dos variables que guardar el numero introducido por el usuario y el resultado
    std::cout<<" Introduce un numero: ";  std::cin >> a; //Detectar el numero introducido por el usuario
    r=porTres(a);  //Guarda el resultado devuelto por la funcion "porTres"
    std::cout<<" El resultado es: " << r; //Imprimir el resultado en la pantalla
}


