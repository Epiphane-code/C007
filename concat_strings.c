#include <stdio.h>
/*
2. Concaténer deux chaînes sans strcat
Lire deux chaînes et afficher la résultante de leur concaténation.
Objectif : copier une chaîne après une autre manuellement.
Exemple d'exécution :
$ ./concat_strings
Code
loccol
Chaîne concaténée : Codeloccol

*/


int main(){
    int n=0;
    char chaine[27];
    char chaine2[27];

    scanf("%s", chaine);
    getchar();
    scanf("%s", chaine2);
    getchar();


    printf("%s%s", chaine, chaine2);

   

    return 0;
    
}