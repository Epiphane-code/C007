#include <stdio.h>
/*
1. Remplacer toutes les occurrences d'un caractère
Demander à l'utilisateur une chaîne, un caractère à remplacer, et le caractère de remplacement.
Objectif : parcours avec remplacement conditionnel.
Exemple d'exécution :
$ ./replace_char
bonjour o a
Résultat : banjaur
*/

int main(){
    int n=0;
    char chaine[27];
    char a, b;
    scanf("%s", chaine);
    getchar();
    scanf("%c", &a);
    getchar();
    scanf("%c", &b);
    while (chaine[n] != '\0')
    {
        n++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (chaine[i]==a)
        {
            chaine[i]=b;
        }
        
    }

    printf("Résultat : %s", chaine);

    return 0;
    
}