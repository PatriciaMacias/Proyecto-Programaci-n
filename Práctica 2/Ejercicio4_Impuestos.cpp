#include<stdio.h>
#include<conio.h>
int main()
{
  int opc;
  float ganancia, impuesto, importe_final;
  printf(" Introduzca una de las opciones:\n 1. Soltero\n 2. Casado\n" );
  scanf("%d", &opc);
  if (opc==1) {
    printf("Introduzca su ganancia mensual: \n" );
    scanf("%f", &ganancia );
    if (ganancia<=32000){
        impuesto = (ganancia*.10);
        printf("El total de impuestos a pagar es de: %f", impuesto );
        importe_final= (impuesto+ganancia);
        printf( "\n El total a pagar es de: %f", importe_final);
    }
    else {
      impuesto = (ganancia*.25);
      printf("El total de impuestos a pagar es de: %f", impuesto);
      importe_final= (impuesto+ganancia);
      printf("\n El total a pagar es de: %f", importe_final);
    }
  }
  else {
  printf("Introduzca su ganancia mensual: \n");
  scanf("%f", &ganancia);
      if (ganancia<=64000) {
        impuesto = (ganancia*.10);
        printf("El total de impuesto a pagar es de: %f", impuesto);
        importe_final=(impuesto+ganancia);
        printf("\n El total de importe a pagar es de: %f", importe_final);
      }
      else{
        impuesto = (ganancia*.25);
        printf("El total de impuesto a pagar es de: %f", impuesto);
        importe_final=(impuesto+ganancia);
        printf("\n El total de importe a pagar es de: %f", importe_final);
      }
    }
  return 0;
  }
