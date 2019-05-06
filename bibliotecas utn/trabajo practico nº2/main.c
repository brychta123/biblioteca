#include <stdio.h>
#include <stdlib.h>
#include "EMPLEADOS.H"

#define T 1000
int menudeopciones(char []);
int main()
{
eEmpleado lista[T];
inicializarEmpleados(lista,T);

int opcion;
    do
    {

        opcion = menudeopciones("\n SISTEMA PARA ADMINISTRAR NOMINA DE EMPLEADOS \n\n\n\n1.Dar de Alta un empleado\n2.Dar de Baja un empleado\n3.Modificar datos de un empleado\n4.Informar(Lista de empleados,Salarios,Empleados con mejor salario) \n5.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:


            break;
            case 2:

                break;
            case 3:

            break;

            case 4:

                break;
            case 5:


                break;


        }
    }while(opcion!=5);
}


int menudeopciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}
