#include "fichier.h"
#include <stdio.h>

void lire_fichier(char* nom_de_fichier){
    FILE *f=fopen(nom_de_fichier,"r");
    if(!f){printf("Erreur ouverture fichier %s\n",nom_de_fichier);return;}
    char c;
    while((c=fgetc(f))!=EOF) putchar(c);
    fclose(f);
}

void ecrire_dans_fichier(char* nom_de_fichier,char* message){
    FILE *f=fopen(nom_de_fichier,"w");
    if(!f){printf("Erreur ouverture fichier %s\n",nom_de_fichier);return;}
    fprintf(f,"%s\n",message);
    fclose(f);
    printf("Le message a été écrit dans le fichier %s.\n",nom_de_fichier);
}
