/*----------------------------------------------------------
Fichier: Recherche caractere
Auteurs: Éloi Germain (GERE0402)
		 Nicolas Côté (COTN4582)
 Date:	 6 octobre 2026
 Description: Permet d'additionner deux matrices et de stocker le resultat dans une autre matrice.
 ----------------------------------------------------------*/

#include <stdio.h>

#define m 3
#define n 2
/*----------------------------------------------------------
Description: additionne deux matrices

Paramètres:
matrice_a (tableau de tableau de doubles) : première matrice à additionner.
matrice_b (tableau de tableau de doubles) : deuxième matrice à additionner.
matrice_resultat (tableau de tableau de doubles) : matrice résultante de l'addition.
 
Retour:
aucun.

Préconditions: les matrices d'entrée matrice_a et matrice_b doivent être de 
			   même dimensions (m et n constants).
Postconditions: chaque élément de la matrice matrice_resultat contient la somme
				des éléments correspondants des matrices matrice_a et matrice_b.
				Les matrices d'entrées sont inchangées.
---------------------------------------------------------*/
void addition_matrices(double matrice_a[m][n], double matrice_b[m][n], double matrice_resultat[m][n]) 
{
	// m et n sont const donc pas besoin de verifier les dimensions avant d'additionner
	
	// déclare les variables d'incrémentation
	int i;
	int j;
	
	// boucles imbriquées: i pour chaque lignes et j pour chaque colonnes
	for (i = 0; i < m; i++) 
	{
		for (j = 0; j < n; j++) 
		{
			// additionner les deux nombres
			matrice_resultat[i][j] = matrice_a[i][j] + matrice_b[i][j];
			// j + 1
		}
		
		// i + 1
	}
}


void afficher_matrice(double matrice[m][n]) 
{
    int i;
    int j;
    
    for (i = 0; i < m; i++) 
    {
        printf("\n");
        for (j = 0; j < n; j++) 
        {
            printf("%8.2lf ", matrice[i][j]); 
        }
    }
    printf("\n");
}


int main(void) 
{	
	double matrice_a[m][n] = {{1, 2}, {3, 4}, {5, 6}};
	double matrice_b[m][n] = {{6, 5}, {4, 3}, {2, 1}};
	double matrice_resultat_1[m][n] = {0};
	double matrice_resultat_attendue_1[m][n] = {{7, 7}, {7, 7}, {7, 7}};
	
	// Test de la validation
	printf("Test de la validation : ");
	printf("\nTest #1 : addition de la matrice_a et de la matrice_b");
	
	printf("\nmatrice_a : "); afficher_matrice(matrice_a);
	printf("\nmatrice_b : "); afficher_matrice(matrice_b);
	printf("\nmatrice_resultat attendue : "); afficher_matrice(matrice_resultat_attendue_1);
	printf("\nMatrice_resultat retournee : ");
	addition_matrices(matrice_a, matrice_b, matrice_resultat_1);
	afficher_matrice(matrice_resultat_1);
	
	// ---------------------------------------------------------------------------------
	
	// Tests du plan de test
	printf("\nTests du plan de test");
	
	// Test #1 : matrices contenant des 0 :
	printf("\nTest #1 : matrices contenant des 0 : ");
	double matrice_c[m][n] = {{1, 0}, {1, 0}, {1, 0}};
	double matrice_d[m][n] = {{0, 1}, {0, 1}, {0, 1}};
	double matrice_resultat_2[m][n] = {0};
	double matrice_resultat_attendue_2[m][n] = {{1, 1}, {1, 1}, {1, 1}};
	
	
	printf("\nmatrice_a : "); afficher_matrice(matrice_c);
	printf("\nmatrice_b : "); afficher_matrice(matrice_d);
	printf("\nmatrice_resultat attendue : "); afficher_matrice(matrice_resultat_attendue_2);
	printf("\nMatrice_resultat retournee : ");
	addition_matrices(matrice_c, matrice_d, matrice_resultat_2);
	afficher_matrice(matrice_resultat_2);
	
	
	// Test #2 : matrices contenant des valeurs négatives :
	printf("\nTest #2 : matrices contenant des valeurs negatives : ");
	double matrice_e[m][n] = {{-1, -2}, {-3, -4}, {-5, -6}};
	double matrice_f[m][n] = {{-6, -5}, {-4, -3}, {-2, -1}};
	double matrice_resultat_3[m][n] = {0};
	double matrice_resultat_attendue_3[m][n] = {{-7, -7}, {-7, -7}, {-7, -7}};
	
	printf("\nmatrice_a : "); afficher_matrice(matrice_e);
	printf("\nmatrice_b : "); afficher_matrice(matrice_f);
	printf("\nmatrice_resultat attendue : "); afficher_matrice(matrice_resultat_attendue_3);
	printf("\nMatrice_resultat retournee : ");
	addition_matrices(matrice_e, matrice_f, matrice_resultat_3);
	afficher_matrice(matrice_resultat_3);
	
	
	// Test #3 : matrices contenant des valeurs décimales :
	printf("\nTest #3 : matrices contenant des valeurs decimales : ");
	double matrice_g[m][n] = {{0.1, 0.2}, {0.3, 0.4}, {0.5, 0.6}};
	double matrice_h[m][n] = {{0.6, 0.5}, {0.4, 0.3}, {0.2, 0.1}};
	double matrice_resultat_4[m][n] = {0};
	double matrice_resultat_attendue_4[m][n] = {{0.7, 0.7}, {0.7, 0.7}, {0.7, 0.7}};
	
	printf("\nmatrice_a : "); afficher_matrice(matrice_g);
	printf("\nmatrice_b : "); afficher_matrice(matrice_h);
	printf("\nmatrice_resultat attendue : "); afficher_matrice(matrice_resultat_attendue_4);
	printf("\nMatrice_resultat retournee : ");
	addition_matrices(matrice_g, matrice_h, matrice_resultat_4);
	afficher_matrice(matrice_resultat_4);
	
	
}
























