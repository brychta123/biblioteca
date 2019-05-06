#include <stdio.h>

#define LIBRE
#define OCUPADO
typedef struct
{
int idEmpleado;
char nombre[51];
char segundonombre[51];
float salario;
int sector;
int estado;




}eEmpleado;


void inicializarEmpleados(eEmpleado[], int);
