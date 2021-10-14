//
//  prac2.cpp
//  prac2
//
//  Created by 陈瑞煜 on 30/9/21.
//
//
// -------------------------------------------------------------------------------------------
// Nombre: RuiYu Chen
// Fecha: 14-10-2021
// -------------------------------------------------------------------------------------------


#include <iostream> //Incluye la libreria iostream

// -------------------------------------------------------------------------------------------
// Diseño:
// Recibe un numero natural desde main, en dentro de la funcion decimos que multiplica ese numero
// por tres, y devuelve que resultado calculado para main.
// -------------------------------------------------------------------------------------------
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
// -------------------------------------------------------------------------------------------
// Crear dos variables de tipo int para guardar numeros naturales, uno viene del numero introducido 
// por el usuario, y el otro es el numero calculado en la funcion porTres, una vez captar el resultado,
// imprimo ese numero en la pantalla.
// -------------------------------------------------------------------------------------------

