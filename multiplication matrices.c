/*---------------------------------------------------------------------
Fichier: multiplactio matrices.c
Auteur: Nicolas Côté (COTN4582)
		Éloi Germain (GERE0402
Date: 6 octobre 2026
Description: permet de multiplier 2 matrices carrées entre elles.
----------------------------------------------------------------------*/

#include <stdio.h>

#define N 2
/*----------------------------------------------------------------------
Description: ceci est une fonction permmettant un affichage propre 
d'une matrice. 
Paramètre: 
	- m (tableau d'entier): m correspond à la matrice que l'on
	souhaite afficher.
Retour: 
	- il n'y pas de retour puisque l'on veut seulement afficher 
	la matrice.
	- de plus la fonction est un "void" ce qui signifie qu'elle
	n'a pas de retour.
Préconditions:
	- les nombres entrés dans le tableau doivent être des entiers.
Postconditions: 
	- imprime la matrice m
	- les valeurs de m sont inchangées
-----------------------------------------------------------------------*/
void afficherMatrice (int m[N][N])
{
	int x, y;
	// "x" correspond aux coordonnées horizontales de la matrice
	for (x=0; x<N; x++)
	{
		// "y" correspond au coordonnées verticales de la matrice
		for (y=0; y<N; y++)
		{
		printf("%d\t", m[x][y]);
		}
	printf("\n");
	}
}
/*---------------------------------------------------------------------
Description: cette fonction permet de multiplier 2 matrices carrées 
entre elles. 
Paramètres: 
	- a (tableau d'entier): la première matrice à multipliée.
	- b (tableau d'entier): la deuxième matrice à multipliée.
	- c (tableau d'entier): la matrice résultante du calcul.
Retour :
	- il n'y a pas de retour puisque la fonction est un "void".
Préconditions: 
	- les matrices "a" et "b" et "c" doivent être carrées et de mêmes
	dimensions. 
	- les nombres entrés dans les matrices doivent être entiers. 
Postconditions: 
	- la matrice "c" correspond à la multiplication des matrices "a" et "b"
	- retourne la matrice "c".
----------------------------------------------------------------------*/
void calcul_matrice (int a[N][N], int b[N][N], int c[N][N])
{
	int x,y;
	// boucle pour les colonnes
	for (x=0; x<N; x++)
	{
		// boucle pour les lignes
		for (y=0; y<N; y++)
		{
			// boucle pour le terme à position variable
			for (int z = 0; z<N; z++)
			{
			c[x][y] = c[x][y] + a[x][z] * b[z][y];
			}
		}
	}
}
int main (void)
{	
	// ceci est le test avec la matrice identité
	 int a[N][N] = {{1, 2}, {3, 4}};
	 int b[N][N] = {{1, 0}, {0, 1}};
	 int c[N][N] = {{0, 0}, {0, 0}};
	 int var_attendue[N][N] = {{1, 2}, {3, 4}};
	 printf("Test avec la matrice identite\n");
	 printf("valeur attendue :\n"); 
	 afficherMatrice(var_attendue);
	 printf("\nvaleur obtenue: \n");
	calcul_matrice ( a, b, c);
	
	afficherMatrice(c);
	
	// matrices avec des 0
	printf("\nTest pour matrices remplies de 0\n");
	 int d[N][N] = {{1, 2}, {3, 4}};
	 int e[N][N] = {{0, 0}, {0, 0}};
	 int f[N][N] = {{0, 0}, {0, 0}};
	 int var_attendue2[N][N] = {{0, 0}, {0, 0}};
	 printf("valeur attendue :\n"); 
	 afficherMatrice(var_attendue2);
	 printf("\nvaleur obtenue: \n");
	calcul_matrice ( d, e, f);
	
	afficherMatrice(f); 
	/* ceci est le test avec des matrices 3x3 (on doit changer N)
	printf("\nTest avec matrice 3x3\n");
	int g[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int h[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i[N][N] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
	int var_attendue3[N][N] = {{30, 36, 42}, {66, 81, 96}, {102, 126, 150}};
	printf("\nvaleur attendue :\n"); 
	 afficherMatrice(var_attendue3);
	 printf("\nvaleur obtenue: \n");
	calcul_matrice ( g, h, i);
	
	afficherMatrice(i);*/ 
	
	return 0;
}
	

		
