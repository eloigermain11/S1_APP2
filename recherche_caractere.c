
// a enlever pour le projet final, juste pour les printf des tests:
#include <stdio.h>


 /*---------------------------------------------------------
Description: recherche un caractère dans une chaine
et qui retourne la position de sa premiere occurence.

Paramètres:
voulu (char): le caractere recherché.
chaine (char[]): la chaine de caractères scannée.
 
Retour:
i (int): la position de la premiere occurence du caractère (-1 si introuvable).

Préconditions: jsp
Postconditions: aucune.
---------------------------------------------------------*/
double recherche_caractere(char voulu, char chaine[100]) 
{
	int i;
		
	for (i = 0; chaine[i] != '\0'; i++) 
	{
		if (chaine[i] == voulu)
		{
			return i;
		} 
	}
	
	return -1;
}



int main(void) 
{
	char test_lettre = 'b';
	char test_nombre = '5';
	char test_symbole = '$';
	
	//char chaine[100] = {"J'ai acheté 5 pommes ajourd'hui pour 5$!"};
	char chaine[100] = {"   B   kjxkjhKZJXH "};
	
	printf("\n%lf", recherche_caractere(test_lettre, chaine));
	printf("\n%lf", recherche_caractere(test_nombre, chaine));
	printf("\n%lf", recherche_caractere(test_symbole, chaine));
	
	return 0;
}































