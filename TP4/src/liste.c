#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

void init_liste(struct liste_couleurs* l){l->tete=NULL;}

void insertion(struct couleur* c,struct liste_couleurs* l){
    struct couleur* nouv=(struct couleur*)malloc(sizeof(struct couleur));
    *nouv=*c;
    nouv->suivant=l->tete;
    l->tete=nouv;
}

void parcours(struct liste_couleurs* l){
    struct couleur* p=l->tete;
    while(p){printf("%02x %02x %02x %02x\n",p->r,p->g,p->b,p->a); p=p->suivant;}
}
