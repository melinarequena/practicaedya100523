
#include<stdio.h>
#include<stdlib.h>
#include"Persona.h"

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
