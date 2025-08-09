#include <stdio.h>
#include <string.h>
/*
4. Vérifier si une chaîne est un palindrome
Afficher si une chaîne est identique à elle-même à l'envers.
Objectif : parcours double index, début et fin.
Exemple d'exécution :
$ ./is_palindrome
kayak
La chaîne est un palindrom.
*/
int main(){
    char chaine[50];
    int i, j, verify = 1;
    scanf("%49[^\n]", chaine); // Lire la chaîne jusqu'à la nouvelle ligne
    getchar(); // Consommer le caractère de nouvelle ligne restant
    // Calculer la longueur de la chaîne
    int length = 0;
    for (i = 0; chaine[i] != '\0'; i++) {
        length++;
    }
    for( i = 0, j = length - 1; i < j; i++, j--){

        if (chaine[i] != chaine[j]){
            verify = 0;
        }
    }
    verify? printf("La chaîne est un palindrom") : printf("La chaiîe n'est pas un palindrom");
    return 0;

}