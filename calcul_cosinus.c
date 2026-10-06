#include <stdio.h>

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

int factorielle(int valeur)
{
    double resultat = 1;
    int i;
    
    if (valeur == 0)
        resultat = 1;
        
    else
    {
        for (i = 1; i <= valeur; i++)
            resultat = resultat * i;
    }
    
    return resultat;
}




 /*---------------------------------------------------------
Description: calcule le cosinus d'un angle en radians

Paramètres:
angle (float) : angle en radians que l'on calcule le cos
 
Retour:
cos (double) : la valeur du cosinus de l'angle

Préconditions: l'angle doit être compris entre pi et -pi
Postconditions: 
---------------------------------------------------------*/
double calcul_cos(float angle)
{
	// déclarer les variables 
	const int n = 10;
	double cos = 1;

	// boucler à coup de 2
	for (int i = 2; i <= n; i = i + 2)
	{

		// pour i = 2, 6 et 10 additionner
		if (i % 4 == 2)
		{
			cos = cos - puissance(angle, i) / factorielle(i);
		}
		// pour i = 4 et 8 soustraire
		else
		{
			cos = cos + puissance(angle, i) / factorielle(i);
		}
	}
	return cos;
}

int main(void)
{
	// ceci est un test avec la valeur de pi/2.
	double cos = 0;
	float angle = 1.5708;
	
	cos = calcul_cos(angle);
	
	printf("%f", cos);
	
	return 0;
}
