#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <stdio.h>

struct Personaje
{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;
}Personajes[5];

unsigned int cont = 0;

void CapturaPersonajes(){
    if (cont < 5){
        printf("***Personaje %i***\n", cont + 1);
        printf("Nombre: ");
        scanf("%s", Personajes[cont].nombre);
        printf("Tipo: ");
        scanf("%s", Personajes[cont].tipo);
        printf("Fuerza: ");
        scanf("%f", &Personajes[cont].fuerza);
        printf("Salud: ");
        scanf("%i", &Personajes[cont].salud);

        cont++;
    }
    else{
        printf("El arreglo de personajes esta lleno\n");
    }
}

void MostrarPersonajes(){
    for (size_t i = 0; i < cont; i++)
    {
        printf("Personaje %i\n", i + 1);
        printf("Nombre: %s\n", Personajes[i].nombre);
        printf("Tipo: %s\n", Personajes[i].tipo);
        printf("Fuerza: %f\n", Personajes[i].fuerza);
        printf("Salud: %i\n", Personajes[i].salud);
    }
    
}
#endif 
