#include "Menus2075472.h"
#include <iostream>
using namespace std;



void echangerValeur(int& nb1, int& nb2) {

	int nb3;

	nb3 = nb1;
	nb1 = nb2;
	nb2 = nb3;
	cout << "\n\nNB F : " << nb1 <<"\n\n";
	cout << "\nNB R : " << nb2 << "\n\n";
	
}
// Fonction qui demande a l'utilisateur d'entrer la forme qu'il/elle désir/e.
int afficherMenu1()
{
	int choix1;
	cout << "Veuillez choisir la forme : " << endl;
	cout << "1. Rectangle" << endl;
	cout << "2. Triangle" << endl;
	cout << "3. Carré" << endl;
	cout << "4. Losange" << endl;
	cout << "5. Quitter" << endl;
	cout << "Votre Choix-- > ";
	cin >> choix1;
	return choix1;
}
// Fonction qui demande a l'utilisateur le remplissage qu'il/elle souhaite pour la forme voulu.
int afficherMenu2()
{	
	int choix2;
	cout << "Veuillez choisir le Remplissage : " << endl;
	cout << "1. Forme pleine" << endl;
	cout << "2. Forme vide" << endl;
	cout << "3. Retour au menu précédent" << endl;
	cout << "Votre Choix-- > ";
	cin >> choix2;
	return choix2;
}
// Fonction qui valide les réponses entré par l'utilisateur et qui confirme le choix des formes
int validerMenu(int choix1, int choix2)
{
	// Déclaration des constantes
	const int MINIMUM = 1;
	const int MAXIMUM_R = 3;
	const int MAXIMUM = 5;
	// Déclaration des Variables
	int choixF;
	int choixR;

	

	if (choix1 == 1)
	{
		choix1 = afficherMenu1();	// afficherMenu1(); Affiche le premier menu à l'utilisateur (Le menu des formes)
		system("cls");
		// Si l'utilisateur choisi entre (5) au début du programme se message s'affiche et 
		// l'utilisateur quitte le programme.
		if (choix1 == 5)
		{
			cout << "\n\n-- > Vous avez choisi de Quitter\n\n";
			return choixF = 5;
		}
		// Si l'utilisateur entre n'importe quel combinaison de chiffre ou de lettre
		// il y à un message d'erreur indiquant la réponse souhaité.
		while (!(choix1 >= MINIMUM && choix1 <= MAXIMUM))
		{
			cin.clear(); // Ceci efface la dernière entrer de l'utilisateur 
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
			//Ceci ignore l'erreur de l'utilisateur et s'assure d'effacer
			// Les caractères sans faire planter le programme.
			cout << "\n\nErreur . . . Votre choix dois être compris entre : ( " << MINIMUM << " et " << MAXIMUM << " )\n\n";
			// Message d'erreur rappelant que le choix dois être compris entre 1 et 5.
			system("pause"); // Laisse le temps à l'utilisateur de lire le message d'erreur
			system("cls");	 // Vide l'affichage à l'écran
			choix1 = afficherMenu1(); // Affiche de nouveau le Menu à l'utilisateur

			if (choix1 == 5)// Je laisse une chance à l'utilisateur de quitter s'il le souhaite
			{
				system("cls");
				cout << "\n\n-- > Vous avez choisi de Quitter\n\n";
				return choixF = 5;
			}
			choixF = choix1;
		}
		if (choix1 != 5) 
		{
			choixR = afficherMenu2(); // Affiche le Deuxième menu à l'utilisateur.
			system("cls"); // J'applique le même principe pour éviter que l'utilisateur entre des lettres et que
						   // Le programme démarre une boucle infini.
			while (!(choixR >= MINIMUM && choixR <= MAXIMUM_R))
			{
				cin.clear(); 
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "\n\nErreur . . . Votre choix dois être compris entre : ( " << MINIMUM << " et " << MAXIMUM_R << " )\n\n";
				system("pause");
				system("cls");
				choixR = afficherMenu2(); // Affiche de nouveau le deuxième menu.
				system("cls");
			}
			// Je laisse une chance a l'utilisateur de retourner au menu précédent s'il le souhaite.
			if (choixR == 3)
			{
				return choix2 = 3; // Pour entrer en contact avec le "MAIN"
			}
			choix2 = choixR;
			
			 // J'inverse les valeurs pour essayer d'envoyer les bonnes valeurs aux fonctions
			echangerValeur(choix1, choix2);								// "traiterFormes();"
			return choix2;
		}/* PROBLÈME concernant l'entrée du deuxième choix lorsque j'entre 3 sa fonctionne quand même. 
		 malheureusement je suis incapable de régler le problème donc je vous envoie mon TP ainsi, 
		 il est quand même tard j'ai fini à 1h36 donc je vais aller me coucher bonne nuit. :) */
	}
}