//
// Created by Administrador on 10/5/2023.
//

#ifndef PRACTICAEDYA100523_PERSONA_H
#define PRACTICAEDYA100523_PERSONA_H


typedef struct persona{
    int edad;
    int dni;
    char nombre[30];
}Persona;

Persona * newPersona();
void cargarPersonas();
void imprimirPersonas(Persona *);
#endif //PRACTICAEDYA100523_PERSONA_H
