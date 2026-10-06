/*---------------------------------------------------------------------
Fichier: Palindrome.c
Auteur: Nicolas Côté (COTN4582)
		Éloi Germain (GERE0402)
Date: 6 octobre 2026
Description: permet de détecter si un mot est un palindrome. 
----------------------------------------------------------------------*/


# include <stdio.h>

/*----------------------------------------------------------------------
Description: cette fonction permet de déterminer la longueur d'une chaine
de caractère.

Paramètres:
	- chaine (caractère): la chaine de caractère pour laquelle on
	 cherche la longeuur

Retour: 
	- Longueur (entier): la longueur de la chaine de caractère. 

Préconditions:
	- Pas d'espace dans la chaine 
Postconditions:
	- retourne la longueur de la chaine
	- la chaine est inchangée
-----------------------------------------------------------------------*/
int chaineLongueur (char chaine [])
{
	int longueur = 0;
	/* tant que le caractère dans le tableau n'est pas "\0", on refait 
	la boucle*/
	while(chaine[longueur]!='\0')
		++longueur;
	return longueur;
}
/*----------------------------------------------------------------------
Description: 
fonction permettant de détecter si un mot est un palindrome.

Paramètres:
	- Palindrome (chaine de caractères): le mot qu'on vérifie s'il est un
	palindrome. 

Retour: 
	- resultat (entier): si le mot est palindrome resultat aura la 
	valeur de 1 et sinon de 0. 

Préconditions: 
	- le mot ne doit pas contenir de majuscule, de caractère de 
	ponctuation, d'accents ou d'espace. 
	
Postcondtions: 
	- retourne 0 ou 1 en fonction si la chaine est un palindrome
	- la valeur de Palindrome est inchangée
----------------------------------------------------------------------*/

int detection_palindrome(char palindrome [])
{
	int longueur = chaineLongueur(palindrome);
	int resultat;
	// on fait la boucle jusqu'à ce qu'on arrive au milieu du mot. 
	for (int i = 0; i < longueur/2; i++)
	{
		/* si les caractères diffèrent, on veut sortir de la boucle 
		 donc on retourne 0.*/
		if ( palindrome[i] == palindrome[longueur - 1 - i])
		{
			resultat = 1;
		}
		else 
		{
			return 0;
		}
	}
	return resultat;
}

int main (void)
{
	// ceci est un test avec un palindrome impair
	char palindrome[] = {"laval"};
	printf("Test palindrome laval\n");
	printf("Resultat attendue : 1\n");
	printf("Resultat obtenu : %d\n", detection_palindrome(palindrome));
	// test palindrome pair
	char palindrome1[] = {"elle"};
	printf("\nTest palindrome elle\n");
	printf("Resultat attendue : 1\n");
	printf("Resultat obtenu : %d\n", detection_palindrome(palindrome1));
	// test non-palindrome impair
	char palindrome2[] = {"voiture"};
	printf("\nTest palindrome voiture\n");
	printf("Resultat attendue : 0\n");
	printf("Resultat obtenu : %d\n", detection_palindrome(palindrome2));
	// test non-palindrome pair
	char palindrome3[] = {"allo"};
	printf("\nTest palindrome allo\n");
	printf("Resultat attendue : 0\n");
	printf("Resultat obtenu : %d\n", detection_palindrome(palindrome3));
	return 0;
}


