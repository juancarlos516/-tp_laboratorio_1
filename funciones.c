#include <stdio.h>
#include <stdlib.h>


/** \brief  suma dos parametros
 * \param primer parametro
 * \param segundo parametro
 * \return resultado
 *
 */

float suma(float num1, float num2)
{
return  num1+num2;
}

/** \brief  resta dos parametros
 * \param primer parametro
 * \param segundo parametro
 * \return resultado
 *
 */

float resta(float num1, float num2)
{
return num1-num2;
}

/** \brief  divide dos parametros
 * \param primer parametro
 * \param segundo parametro
 * \return resultado
 *
 */

float divide(float num1, float num2)
{
while (num2==0)
   {
    printf("ERROR: debe ingresar un operando mayor de 0: ");
    scanf("%f", &num2);
    }
return num1/num2;
}

/** \brief  multiplica dos parametros
 * \param primer parametro
 * \param segundo parametro
 * \return resultado
 *
 */

float multiplica(float num1, float num2)
{
return num1*num2;
}

/** \brief  factorial de un parametro
 * \param primer parametro
 *\param segundo parametro local para realizar las operaciones
 *\param tercer parametro local para realizar  un bucle hasta la cantidad del primer parametro
 *\param cuarto parametro local para realizar descartar decimales
 *\param bucle para  descartar decimales
 *\param bucle para descartar factorial de un numero demasiado grande que genere error
 * \return resultado
 *
 */

 int factorial(float num1)
{
    int operacion,cont;
    int auxnum1;

    cont=1;
    operacion=1;

    auxnum1=num1;

    while(num1-auxnum1>0)
    {
        printf("ERROR. Favor reingrese numero sin decimales : ");
        scanf("%f", &auxnum1);

        num1=auxnum1;
    }

    while (num1>13)
        {
            printf("ERROR. numero muy grande. Reingrese numero menor de 14: ");
            scanf("%d", &num1);
        }
    if (num1==0)
        {
            printf("el resultado factorial es : 1\n");
        }
     else
     {
        while(cont<=num1)
        {
            operacion=operacion*cont;
            cont++;
        }

     }
     return operacion;
}

/** \brief  funcion de todas las operaciones
 * \param se llama a la funcion suma
 *\param se llama a la funcion resta
 *\param se llama a la funcion multiplicacion
 *\param se llama a la funcion division
 *\param se llama a la funcion factorial
 * \return retorna 0 como flotante
 *
 */

float todo(float num1, float num2)
{
        printf("-----el resultado de todo es------ \n");
        printf("la suma es : %.2f\n",suma(num1,num2));
        printf("la resta es : %.2f\n",resta(num1,num2));
        printf("la multiplicacion es : %.2f\n",multiplica(num1,num2));
        printf("la division es : %.2f\n",divide(num1,num2));
        printf("el factorial es : %d\n",factorial(num1));

return 0;
}
