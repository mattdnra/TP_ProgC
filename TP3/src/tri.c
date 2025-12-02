#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int t[100];
    srand(time(NULL));
    for(int i=0;i<100;i++) t[i]=rand()%200-100;
    printf("Tableau non trié :\n");
    for(int i=0;i<100;i++) printf("%d ",t[i]);
    for(int i=0;i<99;i++)
        for(int j=0;j<99-i;j++)
            if(t[j]>t[j+1]){
                int tmp=t[j]; t[j]=t[j+1]; t[j+1]=tmp;
            }
    printf("\nTableau trié par ordre croissant :\n");
    for(int i=0;i<100;i++) printf("%d ",t[i]);
    return 0;
}
