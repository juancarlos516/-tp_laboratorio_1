#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()//funcion principal
{
char seguir='s'; //variable para continuar
int opcion=0;   //variable para la opcion de la operacion a escoger
float A,B;        //variable para primer y segundo numero

A=0;
B=0;

while(seguir=='s')//bucle para continuar operando la calculadora sin cerrar la terminal
        {
        //system("cls");//para windows
        system("clear");//para linux

        //opciones de la calculadora vistas por el usuario

        printf("----------CALCULADORA----------------\n");
        printf("1- Ingresar 1er operando (A=%.2f)\n",A);
        printf("2- Ingresar 2do operando (B=%.2f)\n",B);
        printf("3- Calcular la suma (A+B)(%.2f+%.2f)\n",A,B);
        printf("4- Calcular la resta (A-B)(%.2f-%.2f)\n",A,B);
        printf("5- Calcular la division (A/B)(%.2f/%.2f)\n",A,B);
        printf("6- Calcular la multiplicacion (A*B)(%.2f*%.2f)\n",A,B);
        printf("7- Calcular el factorial (A!)(%.0f)\n",A);
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        printf("escoja una opcion: \n");
        scanf("%d",&opcion);

            //opciones de la calculadora una vez el usuario escogio la operacion
                        switch (opcion)
                        {
                            case 1:
                            printf("\ndigite primer numero: ");
                            scanf ("%f", &A);

                            break;

                            case 2:
                            printf("introduzaca segundo numero: ");
                            scanf ("%f", &B);

                            break;

                            case 3:
                                printf("suma: %.2f\n",suma(A,B));
                            break;

                            case 4:
                                printf("resta: %.2f\n",resta(A,B));
                            break;

                            case 5:
                                printf("division: %.2f\n",divide(A,B));
                            break;

                            case 6:
                                printf("multiplicacion: %.2f\n",multiplica(A,B));
                                break;

                            case 7:
                                printf("factorial primer numero: %d\n",factorial(A));
                                break;

                            case 8:
                                printf("%f\n",todo(A,B));
                                break;

                            case 9:
                                seguir='n';
                            break;

                            default:
                                printf("\nEscoja una opcion correcta\n\n");
                                break;
                        }

                        //generar algun valor a la variable seguir y asi saber si se sale del bucle o se continua
                        printf("quiere continuar s/n : ");
                        //fflush(stdin);para windows
                        setbuf(stdin,NULL);//para linux
                        seguir=getchar();
        } //fin del bucle while
        return 0;
}//fin de la funcion principal
