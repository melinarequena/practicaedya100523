//
// Created by Administrador on 10/5/2023.
//

#include "Persona.h"
#include<stdio.h>
#include<stdlib.h>

Persona * newPersona(){
    Persona * aux = NULL;
    aux = malloc(sizeof(Persona));
    if(aux == NULL){
        printf("Error al asignar memoria\n");
        exit -1;
    }
    printf("Ingrese edad\n");
    scanf("%d", &aux->edad); //guardar en la estructura mediante un puntero
    printf("Ingrese DNI\n");
    scanf("%d", &aux->dni);
    // antes de ingresar un nombre o rellenar un vector de este tipo, fflush(stdin)
    fflush(stdin);
    printf("Ingrese el nombre\n");
    scanf("%s", &aux->nombre);

    return aux;
}

void cargarPersonas(){
    int cantPersonas;
    printf("Ingrese la cantidad de personas a llenar\n");
    scanf("%d", &cantPersonas);
    for(int i=0; i<cantPersonas; i++){
        Persona * persona = newPersona();
        imprimirPersonas(persona);
    }
}

void imprimirPersonas(Persona * persona){
    printf("La persona se llama %s, su DNI es %d y tiene %d años\n", persona->nombre, persona->dni, persona->edad);
}
