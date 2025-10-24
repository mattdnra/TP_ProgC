#include <stdio.h>

int main(void) {
    int num1, num2;
    char op;
    int resultat;

    printf("Entrez le premier nombre : ");
    scanf("%d", &num1);
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("Résultat : %d\n", resultat);
            break;
        case '-':
            resultat = num1 - num2;
            printf("Résultat : %d\n", resultat);
            break;
        case '*':
            resultat = num1 * num2;
            printf("Résultat : %d\n", resultat);
            break;
        case '/':
            if (num2 != 0)
                printf("Résultat : %d\n", num1 / num2);
            else
                printf("Erreur : division par zéro !\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Résultat : %d\n", num1 % num2);
            else
                printf("Erreur : modulo par zéro !\n");
            break;
        case '&':
            resultat = num1 & num2;
            printf("Résultat : %d\n", resultat);
            break;
        case '|':
            resultat = num1 | num2;
            printf("Résultat : %d\n", resultat);
            break;
        case '~':
            printf("Complément de num1 : %d\n", ~num1);
            printf("Complément de num2 : %d\n", ~num2);
            break;
        default:
            printf("Opérateur non reconnu.\n");
    }

    return 0;
}



