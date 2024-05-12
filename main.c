#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Nombre1 = 0;
    int Nombre2 = 0;
    char operateur = 0;
    int resultat = 0;

    printf("Qu'elle est votre premiere valeur : ");
    scanf(" %d", &Nombre1);
    system("@cls||clear");

    printf("Quel est l'operateur a utiliser : ");
    scanf(" %c", &operateur);
    system("@cls||clear");

    printf("Quelle est la deuxieme valeur : ");
    scanf(" %d", &Nombre2);
    system("@cls||clear");

    if (operateur == '+')
    {
        resultat = Nombre1 + Nombre2;
    }
    else if (operateur == '-')
    {
        resultat = Nombre1 - Nombre2;
    }
    else if (operateur == '*')
    {
        resultat = Nombre1 * Nombre2;
    }
    else if (operateur == '/')
    {

        if (Nombre2 == 0)
          printf("Tu ne peux pas diviser un nombre par 0 desole pour toi, recommence\n");
        else
          resultat = Nombre1 / Nombre2 ;
    }

    printf("Voici la reponse des deux valeurs : %d\n\n ", resultat);

}
/**   ICI C'est le deuxième code que j'ai écris...
int main()
{
    int Numero1 = 0;
    int Numero2 = 0;
    char Operant [4] = {'+','-','*','/'};
    int resultat = 0;
debut:

    printf("\Calcul : ");
    scanf("%d %c %d", &Numero1, &Operant, &Numero2);

    switch (Operant [0])
    {
        case '+':
        resultat = Numero1+Numero2;
        break;

        case '-':
        resultat = Numero1-Numero2;
        break;

        case '*':
        resultat = Numero1*Numero2;
        break;

        case '/':
        if (Numero2 == 0)
            printf("\n Tu ne peux pas faire ca par 0");
        else
            resultat= Numero1/Numero2;
        break;

        default :
            printf("\nJe ne connais pas cela desole GAME OVER");
            return 1;

    }

    printf("\n%d %c %d = %d\n\n", Numero1, Operant, Numero2, resultat);
    goto debut;
}
*/
