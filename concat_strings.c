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
    char resulta[55];

    scanf("%s", chaine);
    getchar();
    scanf("%s", chaine2);
    getchar();

    int i = 0;
   
    while (chaine[i] != '\0')
    {
        resulta[i]= chaine[i];
        printf("%c", resulta[i]);
        resulta[i+1]='\0';
        i++;
    }

    int j=0;
     while (chaine2[j] != '\0')
    {
        resulta[i]=chaine2[j];
        printf("%c", resulta[i]);
        resulta[i+1]='\0';
        i++;
        j++;
    }
    
    
    printf("Chaîne concaténée  : %s", resulta);

    return 0;
    
}