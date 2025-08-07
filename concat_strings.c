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
    //char resultat[54]; // Suffisamment grand pour contenir les deux chaînes concaténées

    scanf("%s", chaine);
    getchar();
    scanf("%s", chaine2);
    getchar();

    for (int i = 0; chaine[i] != '\0'; i++) {
        n++;
    }

    for (int i = 0; chaine2[i] != '\0'; i++) {
        n++;
    }

    char resultat[n+1]; // +1 pour le caractère nul de fin de chaîne

    int i = 0;
    // Copier la première chaîne dans le résultat
    while (chaine[i] != '\0') {
        resultat[i] = chaine[i];
        i++;
    }

    // Copier la deuxième chaîne dans le résultat
    int j = 0;
    while (chaine2[j] != '\0') {
        resultat[i] = chaine2[j];
        i++;
        j++;
    }

    resultat[i] = '\0'; // Ajouter le caractère nul de fin de chaîne

    printf("Chaîne concaténée : %s\n", resultat);
    

   

    return 0;
    
}