
#include<stdio.h>
#include<stdlib.h>

typedef struct persona{
    int dni;
    struct persona *amigo;  //cada persona apunta a una direccion de memoria de su conocido
}Persona;
Persona * newPersona(int);
int main(){
    Persona * Melina = newPersona(45924375);
    Persona *  Barbie = newPersona(22656451);
    Persona * Sergio = newPersona(21697847);
    Persona * LilaNTLP = newPersona(49551859);

    Melina ->amigo = LilaNTLP;
    LilaNTLP ->amigo = Melina;
    Barbie ->amigo = LilaNTLP;
    Barbie ->amigo = Melina;
    Sergio ->amigo = LilaNTLP;
    Sergio ->amigo = LilaNTLP;
    return 0;
}
Persona * newPersona(int dni){
    Persona * aux = NULL;
    aux = malloc(sizeof(Persona));
    if(aux == NULL){
        printf("Error al asignar memoria\n");
        exit -1;
    }
    aux->dni = dni;
    aux->amigo = NULL;

    return aux;
}