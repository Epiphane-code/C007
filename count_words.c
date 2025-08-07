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
    int count = 0;
    fgets(chaine, sizeof(chaine), stdin);
    for(int i = 0; chaine[i] != '\0'; i++) {
        // Vérifier si le caractère actuel est un espace
        if (chaine[i] == ' ') {
            count++;
        }

    }
    printf("Nombre de mots : %d\n", count + 1); // Ajouter 1 pour le dernier mot
    return 0;
}
