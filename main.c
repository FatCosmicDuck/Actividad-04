#include <stdio.h>

void capturarEnteros(){
    int enteros[5];
    float promedio;
    int suma = 0;

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%i", &enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%i\n", enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma = suma + enteros[i]; // suma += enteros[i]
    }
    printf("Suma: %i\n", suma);
    printf("Promedio: %f\n", suma/5.0);
}

int main (){
    char op;

    do{
        printf("1-. Capturar enteros\n");
        printf("2-. Mostrar cadena n veces\n");
        printf("3-. Agregar personajes\n");
        printf("0-. Salir\n");
        printf("Digita la opcion: ");
        scanf("%c",&op);

        switch (op)
        {
        case '1':
            printf("***Captura enteros***\n");
            capturarEnteros();
            break;
        case '2':
            printf("***Mostrar cadena n veces***\n");
            break;
        case '3':
            printf("***Agregar personajes***\n");
            break;
        default:
            break;
        }

        fflush(stdin);
    }while(op != '0');

    return 0;
}