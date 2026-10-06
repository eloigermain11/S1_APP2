/*--------------------------------------------------------
Fichier: Recherche caractere
Auteurs: Éloi Germain (GERE0402)
		 Nicolas Côté (COTN4582)
 Date:	 6 octobre 2026
 Description: Permet de trouver la position de la première occurence d'un caractère dans une chaine de caractères.
 --------------------------------------------------------*/
 
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
Postconditions: retourne la position de la première occurence du caractère recherché.
				La chaine de caractère est inchangée.
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
	char test_char;
	
	// Tests de la validation
	printf("Tests de la validation : ");
	// Test #1
	test_char = 'n';
	char chaine_1[100] = "anticonstitutionnellement";
	printf("\nTest #1 : recherche de 'n' dans \"anticonstitutionnelement\"\nResultat attendu : 1");
	printf("\nValeur retournee : %d", recherche_caractere(test_char, chaine_1));
	printf("\n");
	
	// Test #2
	test_char = 'e';
	char chaine_2[100] = "bonjour";
	printf("\nTest #2 : recherche de 'e' dans \"bonjour\"\nResultat attendu : -1");
	printf("\nValeur retournee : %d", recherche_caractere(test_char, chaine_2));
	printf("\n");


	// Test #3
	test_char = 'r';
	char chaine_3[100] = "bonjour";
	printf("\nTest #3 : recherche de 'r' dans \"bonjour\"\nResultat attendu : 6");
	printf("\nValeur retournee : %d", recherche_caractere(test_char, chaine_3));
	printf("\n");
	
	// Test #4
	test_char = 'a';
	char chaine_4[100] = "allocommentcava";
	printf("\nTest #3 : recherche de 'a' dans \"allocommentcava\"\nResultat attendu : 0");
	printf("\nValeur retournee : %d", recherche_caractere(test_char, chaine_4));
	printf("\n");

	// ------------------------------------------------------------------------------------------

	//Tests du plan de test
	printf("\n-----------------------------------------------------------------------------------\n");
	printf("\nTests du plan de test : ");

	// Test #1
	test_char = ' ';
	char chaine_5[100] = "salut ca va?";
	printf("\nTest #1 : recherche de ' ' dans \"salut ca va?\"\nResultat attendu : 5");
	printf("\nValeur retournee : %d", recherche_caractere(test_char, chaine_5));
	printf("\n");
	
	// Test #2
	test_char = 'o';
	char chaine_6[100] = "bonjour";
	printf("\nTest #2 : recherche de 'o' dans \"bonjour\"\nResultat attendu : 1");
	printf("\nValeur retournee : %d", recherche_caractere(test_char, chaine_6));
	printf("\n");


	// Test #3
	test_char = 'b';
	char chaine_7[100] = "Bonjour";
	printf("\nTest #3 : recherche de 'b' dans \"Bonjour\"\nResultat attendu : -1");
	printf("\nValeur retournee : %d", recherche_caractere(test_char, chaine_7));
	printf("\n");
	
	// Test #4
	test_char = 'M';
	char chaine_8[100] = "Maman";
	printf("\nTest #4 : recherche de 'a' dans \"allocommentcava\"\nResultat attendu : 0");
	printf("\nValeur retournee : %d", recherche_caractere(test_char, chaine_8));
	printf("\n");
	
	// Test #5
	test_char = '\0';
	char chaine_9[100] = "Maman";
	printf("\nTest #5 : recherche de '\\0' dans \"Maman\"\nResultat attendu : -1");
	printf("\nValeur retournee : %d", recherche_caractere(test_char, chaine_9));
	printf("\nExplication: la boucle s'arrete avant de teste le '\\0', donc il n'est pas detecte,\nmais il est bien present (a la position 6 dans cet exemple).");

	return 0;
}































