/*----------------------------------------------------------
Fichier: Recherche caractere
Auteurs: Éloi Germain (GERE0402)
		 Nicolas Côté (COTN4582)
 Date:	 6 octobre 2026
 Description: Permet de calculer la valeur du cosinus d'un angle en radians à l'aide d'une série.
 ----------------------------------------------------------*/

#include <stdio.h>

/*---------------------------------------------------------
Description: calcule la puissance demandée

Paramètres:
base (float) : la base qui sera multipliée par elle-même
exposant (int) : l'exposant / le nombre de fois que la base sera multipliée par elle-même
 
Retour:
resultat (double) : la valeur de la puissance calculée.

Préconditions: l'exposant doit être un entier.
Postconditions: retourne la valeur de la puissance calculée.
				La valeur de la base et de l'exposant sont inchangées.
---------------------------------------------------------*/
double puissance(float base, int exposant) 
{
	// initialiser les variables
	int i;
	double resultat = 1.0;

	// si l'exposant est 0, retourner 1
	if (exposant == 0)
		return 1.0;

	// boucle qui multiplie la base par elle même "exposant" fois
	for (i = 1; i <= exposant; i++)
		resultat *= base;
		
	// retourner le resultat
	return resultat;
}


/*---------------------------------------------------------
Description: calcule la factorielle demandée

Paramètres:
valeur (int) : la valeur dont la factorielle est calculée.
 
Retour:
resultat (int) : la valeur de la puissance calculée.

Préconditions: la valeur doit être un entier.
Postconditions: retourne la valeur de la factorielle calculée.
				La valeur est inchangée.
---------------------------------------------------------*/
int factorielle(int valeur)
{
	// initialiser les variables
    double resultat = 1;
    int i;
    
    // factorielle de 0 est 1
    if (valeur == 0)
        resultat = 1;
        
    else
    {
		// boucle de 1 a la valeur
        for (i = 1; i <= valeur; i++)
			// multiplie le resultat par l'incrémentation
            resultat = resultat * i;
    }
    
    // retourner le resultat
    return resultat;
}


/*---------------------------------------------------------
Description: calcule le cosinus d'un angle en radians

Paramètres:
angle (float) : angle en radians que l'on calcule le cos
 
Retour:
cos (double) : la valeur du cosinus de l'angle

Préconditions: l'angle doit être compris entre pi et -pi.
Postconditions: retourne la valeur du cosinus de l'angle d'entrée. 
				La valeur de l'angle est inchangée.
---------------------------------------------------------*/
double calcul_cos(float angle)
{
	// déclarer les variables 
	const int n = 10;
	double cos = 1;

	// boucler à coup de 2
	for (int i = 2; i <= n; i = i + 2)
	{

		// pour i = 2, 6 et 10, soustraire
		if (i % 4 == 2)
		{
			cos = cos - puissance(angle, i) / factorielle(i);
		}
		// pour i = 4 et 8, additionner
		else
		{
			cos = cos + puissance(angle, i) / factorielle(i);
		}
	}
	
	// retourner le resultat
	return cos;
}


int main(void)
{
	// Tests du plan de test
	printf("Tests du plan de test : ");
	double cos = 0;
	
	// Test #1 : cos(pi)
	float angle_1 = 3.1416;
	printf("\nTest #1 : cosinus de pi\nResultat attendu : -1");
	cos = calcul_cos(angle_1);
	printf("\nValeur retournee : %lf", cos);
	
	// Test #2 : cos(pi/2)
	float angle_2 = 1.5708;
	printf("\n\nTest #2 : cosinus de pi/2\nResultat attendu : 0");
	cos = calcul_cos(angle_2);
	printf("\nValeur retournee : %lf", cos);
	
	// Test #3 : cos(0)
	float angle_3 =  0;
	printf("\n\nTest #3 : cosinus de 0\nResultat attendu : 1");
	cos = calcul_cos(angle_3);
	printf("\nValeur retournee : %lf", cos);
	
	// Test #4 : cos(pi/4)
	float angle_4 =  0.7854;
	printf("\n\nTest #4 : cosinus de pi/4\nResultat attendu : 0.7071");
	cos = calcul_cos(angle_4);
	printf("\nValeur retournee : %lf", cos);
	
	return 0;
}
