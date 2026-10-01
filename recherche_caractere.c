
// a enlever pour le projet final, juste pour les printf des tests:
#include <stdio.h>

double recherche_caractere(char voulu, char chaine[100]) 
{
	int i;
		
	for (i = 0; chaine[i] != '\0'; i++) 
	{
		if (chaine[i] == voulu)
		{
			return 1;
		} 
	}
	
	return 0;
}



int main(void) 
{
	char test_lettre = 'b';
	char test_nombre = '5';
	char test_symbole = '$';
	
	char chaine[100] = {"J'ai acheté 5 pommes ajourd'hui pour 5$!"};
	
	printf("\n%lf", recherche_caractere(test_lettre, chaine));
	printf("\n%lf", recherche_caractere(test_nombre, chaine));
	printf("\n%lf", recherche_caractere(test_symbole, chaine));
	
	return 0;
}




























