#include <stdio.h>

#define m 4
#define n 4
 /*---------------------------------------------------------
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
	double matrice_a[m][n] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
	double matrice_b[m][n] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
	double matrice_resultat[m][n] = {0};
	
	addition_matrices(matrice_a, matrice_b, matrice_resultat);
	
	afficher_matrice(matrice_resultat);
	
}
























