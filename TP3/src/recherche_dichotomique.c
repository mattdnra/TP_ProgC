#include <stdio.h>
#include <stdlib.h>

int main() {
    int t[100];
    for(int i=0;i<100;i++) t[i]=i;
    printf("Tableau trié :\n");
    for(int i=0;i<100;i++) printf("%d ",t[i]);
    int val;
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d",&val);
    int l=0, r=99, found=0;
    while(l<=r){
        int m=(l+r)/2;
        if(t[m]==val){found=1; break;}
        else if(t[m]<val) l=m+1;
        else r=m-1;
    }
    if(found) printf("Résultat : entier présent\n");
    else printf("Résultat : entier absent\n");
    return 0;
}
