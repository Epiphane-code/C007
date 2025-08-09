#include <stdio.h>
// Accepté par Sorkho
/*
  3. Comparer deux chaînes sans strcmp
Lire deux chaînes et indiquer si elles sont égales ou non.
Objectif : comparaison caractère par caractère jusqu'à la fin.
Exemple d'exécution :
$ ./compare_strings
piscine
piscine
Les chaînes sont identiques.

*/

int main(){
  int n = 0;
    char chaine[27];
    char chaine2[27];

    scanf("%s", chaine);
    getchar();
    scanf("%s", chaine2);
    getchar();
    
    // On suppose que les chaînes sont de même longueur et ne dépassent pas 26 caractères

    // Comparaison caractère par caractère
    // On utilise une boucle pour comparer chaque caractère des deux chaînes
    // jusqu'à ce qu'on trouve une différence ou qu'on atteigne la fin de la chaîne

    for (int i = 0; i < 27; i++)
    {
        if (chaine[i] == '\0' && chaine2[i] == '\0') {
            break;
        }
        if (chaine[i] != chaine2[i]) {
            n = 1;
            break;
        }
    }

    if (n == 0)
        printf("Les chaînes sont identiques.\n");
    else
       printf("Les chaînes sont différentes.\n");
       return 0;
    
}