#include <stdio.h>
#include <string.h>

int main() {
    char t[10][100]={
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };
    char s[100];
    printf("Entrez la phrase à chercher : ");
    fgets(s,100,stdin);
    int len=strlen(s);
    if(s[len-1]=='\n') s[len-1]='\0';
    int found=0;
    for(int i=0;i<10;i++){
        int j;
        for(j=0;t[i][j]!='\0';j++) if(t[i][j]!=s[j]) break;
        if(t[i][j]=='\0' && s[j]=='\0') {found=1; break;}
    }
    if(found) printf("Phrase trouvée\n");
    else printf("Phrase non trouvée\n");
    return 0;
}
