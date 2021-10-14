
// -------------------------------------------------------------------------------------------
// Nombre: RuiYu Chen
// Fecha: 14-10-2021
// -------------------------------------------------------------------------------------------

#include <iostream> //Incluye la libreria iostream


// -------------------------------------------------------------------------------------------
// Diseño:
// Capta un numero introducido por el usuario, ese valor lo tomamos como valor maximo, y definimos 
// el valor minimo es el 0, la funcion recibe un numero, se suma los numeros pares, y devuelve
// otro numero natural como resultado para main.
// -------------------------------------------------------------------------------------------
int sumatorioPares(int num) //Crear la funcion "sumatorio"
{
    int resultado=0; //Crear una variable de tipo "int"

    if (num%2==0) //Si el resultado de la division por dos da 0
    {
      for (int i=0; i<=num ; i=i+2) //Un bucle "for", con un numero inicial de 0, condicion de si es menor que el numero introducido por el usuario y
    //cada vez que se ejecuta, se suma dos al "i"
    {
      resultado=resultado+i; //Hace el calculo y se guarda en la variable "resultado"
    }

    }
    if(num%2!=0) //Si el resultado de la division por dos no da 0
    {
        num=num-1; //Se resta un numero 
        for (int i = 0; i<=num; i=i+2) //Un bucle "for", con un numero inicial de 0, condicion de si es menor que el numero introducido por el usuario y
    //cada vez que se ejecuta, se suma dos al "i"
        {
            resultado=resultado+i; //Hace el calculo y se guarda en la variable "resultado"
        }
        
    }
    
    
    return resultado; //Devuelve el resultado obtenido en el calculo
    
}
    
int main() //Crear la funcion "main"
{
    int a,r; //Crear dos variables de tipo "int" para guardar numero enteros
    std::cout<<"Introduce un numero "; std::cin>>a; //Guarda el numero introducido por el usuario

    r=sumatorioPares(a); //Guarda el resultado devuelto por la funcion "sumatorio"
    std::cout<<"El resultado es" << r; //Imprimir el resultado en la pantalla
    
}
// -------------------------------------------------------------------------------------------
// Crear dos variables de tipo int para guardar numeros naturales, uno viene del numero introducido 
// por el usuario, y el otro es el numero calculado en la funcion porTres, una vez captar el resultado,
// imprimo ese numero en la pantalla.
// -------------------------------------------------------------------------------------------



