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
    char chaine[500];
    int i, j, verify = 1;
    fgets(chaine, 500, stdin);
    // Enlever le caractère de nouvelle ligne si présent
    //chaine[strcspn(chaine,"\n")] = '\0';
     for (i = 0; chaine[i] != '\0'; i++) {
        if(chaine[i] == '\n'){
            chaine[i] = '\0'; // Remplacer le caractère de nouvelle ligne par un terminateur de chaîne
            break;
        }
    }

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