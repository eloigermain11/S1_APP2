#include <stdio.h>

/*---------------------------------------------------------
Description: recherche un caractère dans une chaine
et qui retourne la position de sa premiere occurence.

Paramètres:
voulu (char): le caractere recherché.
chaine (char[]): la chaine de caractères scannée.
 
Retour:
i (int): la position de la premiere occurence du caractère (-1 si introuvable).

Préconditions: la chaine de caractère doit se terminer par le caractère nul '\0'.
Postconditions: aucune.
---------------------------------------------------------*/
int recherche_caractere(char voulu, char chaine[100]) 
{
	// déclarer les variables
	int i;
		
	// boucle sur chaque caractère jusqu'à la fin de la chaine
	for (i = 0; chaine[i] != '\0'; i++) 
	{
		// si le caractère est le bon retourner sa position
		if (chaine[i] == voulu)
		{
			return i;
		} 
	}
	
	// sinon retourner -1
	return -1;
}



int main(void) 
{
	char test_lettre = 'b';
	char test_nombre = '5';
	char test_symbole = '$';
	
	//char chaine[100] = {"J'ai acheté 5 pommes ajourd'hui pour 5$!"};
	char chaine[100] = {"   B   kjxkjhKZJXH "};
	
	printf("\n%d", recherche_caractere(test_lettre, chaine));
	printf("\n%d", recherche_caractere(test_nombre, chaine));
	printf("\n%d", recherche_caractere(test_symbole, chaine));
	
	return 0;
}































