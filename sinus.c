/*--------------------------------------------------------------------
Fichier: sinus.c
Auteurs: Nicolas Côté (COTN4582)
		Éloi Germain (GERE0402)
Date: 6 octobre 2026
Description: Permet de calculer le sinus d'un angle donné en radians
à l'aide d'une aproximation de série. 
----------------------------------------------------------------------*/
#include <stdio.h>
#define n 10
/*---------------------------------------------------------------------
 Description: fonction permettant le cacul de la puissance d'une valeur.
 Paramètres: 
	- x (float): c'est la valeur qui sera multipliée par elle-même.
	- exposamt (int): c'est le nombre de fois que la valeur sera multipliée.
 Retour: 
	- total (float): valeur de la puissance calculée. 
Préconditions: 
	- la fonction ne permet pas d'exposant négatif.
Postconditions:
	- retourne la valeur de la puissance calculée.
	- les valeurs de "x" et "exposant" sont inchangées.
 ----------------------------------------------------------------------*/

float puissance(float x, int exposant)
{
	float total = 1;
	
	/* boucle se répétant le même nombre de fois que la valeur de 
	l'exposant */
	for(int i = 0; i < exposant; i++)
	{
		total *= x;
	}
	return total; 
}

/*---------------------------------------------------------------------
 Description: fonctione permettant de calculer la factorielle d'une valeur.
 Paramètre:
	- valeur (int): le nombre dont on cherche la factorielle.
Retour: 
	- facto (int): résultat du calcul de la factorielle.
 Préconditions: 
	- la valeur entrée ne peut pas être négative.
Postconditions: 
	- retourne la factorielle de "valeur".
	- la valeur de "valeur" reste inchangée. 
-----------------------------------------------------------------------*/

int factorielle(int valeur)
{
	int facto = 1;
	/* en partant de "valeur" on diminue la valeur de i jusqu'à ce 
	qu'elle atteigne 1 */
	for(int i = valeur; i > 0; i--)
	{
		facto = facto * i;
	}
	return facto;	
}

/*---------------------------------------------------------------------
Description: fonction permettant de calculer le sinus d'un angle donné 
à l'aide d'une série. 
Paramètre:
	- x(float): l'angle en radians dont in souhaite calculer le sinus.
Retour:
	- sinus(double): valeur du sinus calculé. 
Préconditions: 
	- le nombre de termes "n" ne peut pas être de plus de 13 ou moins 
	que 8 afin de conserver une bonne précision.
	- la valeur de "x" doit être entre pi et -pi. 
Postconditions: 
	- retourne le sinus de l'angle "x".
	-  la valeur de "x" reste inchangée. 
----------------------------------------------------------------------*/

double calcul_sinus(float x)
{
	double sinus = 0;
	// on répète la boucle jusqu'à ce que la valeur de i atteigne 10.
	for (int i = 1; i <= n; i = i + 2)
	{
		/* pour savoir si on doit additionner ou 
		 soustraire, on fait le modulo 4 de "i". */
		 // pour "i" =  3, 7
		if (i % 4 == 3)
		{
			sinus = sinus - puissance(x, i) / factorielle(i);
		}
		// pour "i" = 5, 9
		else
		{
			sinus = sinus + puissance(x, i) / factorielle(i);
		}
	}
	return sinus;
}

int main(void)
{
	printf("Tests pour la validation\n");
	
	// ceci est un test avec la valeur de pi/2.
	double sinus = 0;
	float x = 1.57080;	
	sinus = calcul_sinus(x);
	printf("Test pour pi/2\n");
	printf("valeur attendue : 1\n");
	printf("valeur obtenue: %f\n", sinus);
	
	// test avec 1
	sinus = 0;
	x = 1;	
	sinus = calcul_sinus(x);
	printf("\nTest pour 1\n");
	printf("valeur attendue : 0.8415\n");
	printf("valeur obtenue : %f\n", sinus);
	
	// test avec 0
	sinus = 0;
	x = 0;	
	sinus = calcul_sinus(x);
	printf("\nTest pour 0\n");
	printf("valeur attendue : 0\n");
	printf("valeur obtenue: %f\n", sinus);
	
	// test avec pi/4
	sinus = 0;
	x = 0.78540;	
	sinus = calcul_sinus(x);
	printf("\nTest pour pi/4\n");
	printf("valeur attendue : 0.7071\n");
	printf("valeur obtenue : %f\n", sinus);
	
	
	
	//test plan de test
	printf("\nTests plan de test\n");
	
	//test avec pi
	sinus = 0;
	x = 3.14159;
	sinus = calcul_sinus(x);
	printf("\nTest pour pi\n");
	printf("valeur attendue: 0\n");
	printf("Valeur obtenue : %f", sinus);
	
	// test avec -pi/2
	sinus = 0;
	x = -1.5780;	
	sinus = calcul_sinus(x);
	printf("\nTest pour -pi/2\n");
	printf("valeur attendue : -1\n");
	printf("valeur obtenue: %f\n", sinus);
	
	//test pour -pi
	sinus = 0;
	x = -3.14159;	
	sinus = calcul_sinus(x);
	printf("\nTest pour -pi\n");
	printf("valeur attendue : 0\n");
	printf("valeur obtenue: %f\n", sinus);
	
	// test pour -pi/4
	sinus = 0;
	x = -0.78540;	
	sinus = calcul_sinus(x);
	printf("\nTest pour -pi/4\n");
	printf("valeur attendue : -0.7071\n");
	printf("valeur obtenue: %f\n", sinus);
	
	return 0;
}
		
