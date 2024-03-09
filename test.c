#include <stdio.h>
#define TC_DOLAR_GTQ 7.75 // Tipo de cambio: 1USD = 7.75 GTQ
int main() { 
    int opcion;
    float cantidad;

    printf("Bienvenido al conversor de moneda/n");
    printf("1. convertir de dolar a quetzales/n");
    printf("2. convertir de quetzales a dolares/n");
    printf("ingrese su opcion: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
    printf("ingrese la cantidad en dolares: ");
    scanf("%f", &cantidad);
    printf("%.2f USD equivale a %.2f GTQ/n", cantidad, cantidad * TC_DOLAR_GTQ);
        break;
    case 2:
    printf("ingrese la cantidad en quetzales: ");
    scanf("%f", &cantidad);
    printf("%.2f GTQ equivale a %.2f USD/n", cantidad, cantidad / TC_DOLAR_GTQ);
        break;
    
    default:
    printf("opcion no valida/n");
        
    }
    return 0;
    }
