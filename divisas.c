#include <stdio.h>
 

int main () {


    float a = 0, 
          b = 19.83,
          c = 24.00,
          d = 27.53,
          ResultadoDivisa;
    int opcion; 

        printf ("\t------------------------------------\n");
        printf ("\tBIENVENIDO A TU CONVERSOR DE DIVISAS\n"); 
        printf ("\t ¿QUÉ DESEAS HACER?\n");
        printf ("\t1. CONVERTIR PESOS MEXICANOS A DOLARES\n");
        printf ("\t2. CONVERTIR PESOS MEXICANOS A EUROS\n");
        printf ("\t3. CONVERTIR PESOS MEXICANOS A LIBRAS\n ");
    
        scanf ("%d", &opcion); 

    switch ( opcion ){
        case 1:
            printf ("\tINGRESA LA CANTIDAD QUE QUIERES CONVERTIR\n");
            scanf ("%f", &a);
            ResultadoDivisa = ((a*b)/a);
            printf ("%0.2f PESOS MEXICANOS SON %0.2f DOLARES\n", ResultadoDivisa, a);
            break;

        case 2: 
        printf ("\tINGRESA LA CANTIDAD QUE QUIERES CONVERTIR\n");
            scanf ("%f", &a);
            ResultadoDivisa = ((a*c)/a);
            printf ("%0.2f PESOS MEXICANOS SON %0.2f EUROS\n", ResultadoDivisa, a);
            break;
        case 3: 
        printf ("\tINGRESA LA CANTIDAD QUE QUIERES CONVERTIR\n");
            scanf ("%f", &a);
            ResultadoDivisa = ((a*d)/a);
            printf ("%0.2f PESOS MEXICANOS SON %0.2f LIBRAS\n", ResultadoDivisa, a );
            break;
       default:
           break;
       }
        
        /*printf ("\tINGRESA LA CANTIDAD QUE QUIERES CONVERTIR\n");
        scanf ("%f", a);
        
            printf ("%f PESOS MEXICANOS SON %f DÓLARES\n", a, b == a*b );

        }
*/
        


    return 0; 
}