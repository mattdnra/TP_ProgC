#include <stdio.h>

int main() {
    char noms[5][30] = {"Dupont", "Martin", "Durand", "Bernard", "Petit"};
    char prenoms[5][30] = {"Marie", "Pierre", "Luc", "Sophie", "Lina"};
    char adresses[5][100] = {"1 rue A", "2 rue B", "3 rue C", "4 rue D", "5 rue E"};
    float note_prog[5] = {15.5, 12.0, 9.5, 18.0, 14.5};
    float note_sys[5] = {11.0, 14.1, 13.5, 10.0, 16.0};
    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d:\n", i+1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note C : %.2f\n", note_prog[i]);
        printf("Note SE : %.2f\n\n", note_sys[i]);
    }
    return 0;
}
