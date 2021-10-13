

#include <iostream> //Incluye la libreria iostream

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




