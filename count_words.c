#include <stdio.h>
/*
5. Compter le nombre de mots dans une chaîne
Compter combien de mots composent une chaîne (séparés par des espaces).
Objectif : détection des transitions entre espace et lettres.
Exemple d'exécution :
$ ./count_words
Bienvenue à Codeloccol, l'école du code !
Nombre de mots : 6
*/
int main() {
    char chaine[500];
    int count;
    scanf("%499[^'\n']", chaine);
    for(int i = 0; chaine[i] != '\0'; i++){
           if (chaine[i] == ' '){
            count = 0;
            }
           else {
            count = 1;
           }
        
    }


    for(int i = 1; chaine[i] != '\0'; i++) {
        if (chaine[i] == ' ' && chaine[i-1] != ' ' ){
            count++;
        }
    }
    
    printf("Nombre de mots : %d\n", count);
    return 0;
}
