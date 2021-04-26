#include <stdio.h>
#include <stdlib.h>

int main () {


    float a = 0, 
          b = 19.83,  //DOLAR
          c = 24.00,  // EURO
          d = 27.53,  // LIBRAS
          ResultadoDivisa;
    int opcion, e = 1;


        printf ("\t------------------------------------\n");
        printf ("\tBIENVENIDO A TU CONVERSOR DE DIVISAS\n"); 
        printf ("\t------------------------------------\n");
do{       
        printf ("\t¿QUE DESEAS HACER?\n");
        printf ("\t1. CONVERTIR PESOS MEXICANOS A DOLARES\n");
        printf ("\t2. CONVERTIR PESOS MEXICANOS A EUROS\n");
        printf ("\t3. CONVERTIR PESOS MEXICANOS A LIBRAS\n ");
        printf ("\t4. SALIR DEL PROGRAMA\n ");
        printf ("\t------------------------------------\n");

        scanf ("%d", &opcion); 

    switch ( opcion ){
        case 1:
        printf ("\tINGRESA LA CANTIDAD QUE QUIERES CONVERTIR\n");
            scanf ("%f", &a);
            ResultadoDivisa = ((a*e)/b);
            printf ("\tCALCULANDO . . .\n");
            printf ("\t%0.2f PESOS MEXICANOS SON %0.2f DOLARES\n", a, ResultadoDivisa );
            printf ("\t------------------------------------\n");
            break;
        case 2: 
        printf ("\tINGRESA LA CANTIDAD QUE QUIERES CONVERTIR\n");
            scanf ("%f", &a);
            ResultadoDivisa = ((a*e)/c);
            printf ("\tCALCULANDO . . .\n");
            printf ("\t%0.2f PESOS MEXICANOS SON %0.2f EUROS\n", a, ResultadoDivisa );
            printf ("\t------------------------------------\n");
            break;
        case 3: 
        printf ("\tINGRESA LA CANTIDAD QUE QUIERES CONVERTIR\n");
            scanf ("%f", &a);
            ResultadoDivisa = ((a*e)/d);
            printf ("\tCALCULANDO . . .\n");
            printf ("\t%0.2f PESOS MEXICANOS SON %0.2f LIBRAS\n", a, ResultadoDivisa);
            printf ("\t------------------------------------\n");
            break;
        case 4: 
            printf ("\tSALIENDO...\n");
            exit (0);

        default:
            printf ("\tELIGE UNA OPCIÓN VÁLIDA");
            break;
       }
} while ( opcion != 7);

    return 0; 
}