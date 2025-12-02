#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int t[100];
    srand(time(NULL));
    for(int i=0;i<100;i++) t[i]=rand()%200-100;
    printf("Tableau :\n");
    for(int i=0;i<100;i++) printf("%d ",t[i]);
    int val;
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d",&val);
    int found=0;
    for(int i=0;i<100;i++) if(t[i]==val) found=1;
    if(found) printf("Résultat : entier présent\n");
    else printf("Résultat : entier absent\n");
    return 0;
}
