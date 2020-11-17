#include "Formes2075472.h"
#include "Menus2075472.h"
#include <iostream>
#include <string>

using namespace std;

/*-> FONCTION TRAITANT LES FORMES <-*/

int traiterRectangle(int choix2)
{
	int largeur;
	int hauteur;
	int choixR;
	int choix1;
	int choixF;
				system("cls");
				// Phrase d'accueil :)
				cout << "Vous avez choisi le Rectangle :" << endl;
				/* ICI, je demande a l'utilisateur d'entrer la hauteur du rectangle. */
				cout << "Veuillez entrer la hauteur de votre rectangle" << endl;
				cout << "-- > ";
				cin >> hauteur;
				/* ICI, je demande a l'utilisateur d'entrer la largeur du rectangle. */
				cout << endl << "Veuillez entrer la largeur de votre rectangle" << endl;
				cout << "-- > ";
				cin >> largeur;
				system("cls");

				dessinerRectangle(hauteur, largeur, choix2);
				return 0;
}
int traiterTriangle(int choix2)
{
		int hauteur;
		// Phrase d'accueil :)
		cout << "Vous avez choisi le Triangle :\n";
		/* ICI, je demande a l'utilisateur d'entrer la hauteur du triangle. */
		cout << "Veuillez entrer la Hauteur de votre triangle\n";
		cout << "-- > ";
		cin >> hauteur;
		system("cls");

			dessinerTriangle1(hauteur, choix2);
	return 0;
}

int traiterCarre(int choix2)
{
	int hauteur;

		// Phrase d'accueil :)
		cout << "Vous avez choisi le Carré :\n";
		/* ICI, je demande a l'utilisateur d'entrer la hauteur du carré. */
		cout << "Veuillez entrer la Hauteur de votre carré\n";
		cout << "-- > ";
		cin >> hauteur;
		system("cls");

		dessinerCarre(hauteur, choix2);
		return 0;
}

int traiterLosange(int choix2)
{
		int hauteur;
		// Phrase d'accueil :)
		cout << "Vous avez choisi le Losange :\n";
		/* ICI, je demande a l'utilisateur d'entrer la hauteur du losange. */
		cout << "Veuillez entrer la Hauteur de votre Losange\n(* Chiffre *ou* nombre pair uniquemment *)\n";
		cout << "-- > ";
		cin >> hauteur;
		system("cls");
		dessinerLosange(hauteur, choix2);
		return 0;
}
/*-> FONCTION DESSINANT LES FORMES <-*/

int dessinerRectangle(int hauteur, int largeur, int& choix1)
{
	
	for (int numChar = 0; numChar < largeur; hauteur++)
	{
		cout << "\n\nCette Partie n'est pas terminé :(\n\n";
		system("pause");
		system("cls");
	
	return 0;
	}
}
 
int dessinerTriangle1(int hauteur, int& choix1)
{

	for (int numChar = 0; numChar < hauteur; hauteur++)
	{
		cout << "\n\nCette Partie n'est pas terminé :(\n\n";
		system("pause");
		system("cls");

		return 0;
	}
}

int dessinerTriangle2(int hauteur, int& choix1)
{

	for (int numChar = 0; numChar < hauteur; hauteur++)
	{
		cout << "\n\nCette Partie n'est pas terminé :(\n\n";
		system("pause");
		system("cls");

		return 0;
	}
}

int dessinerTriangle3(int hauteur, int& choix1)
{

	for (int numChar = 0; numChar < hauteur; hauteur++)
	{
		cout << "\n\nCette Partie n'est pas terminé :(\n\n";
		system("pause");
		system("cls");

		return 0;
	}
}

int dessinerTriangle4(int hauteur, int& choix1)
{

	for (int numChar = 0; numChar < hauteur; hauteur++)
	{
		cout << "\n\nCette Partie n'est pas terminé :(\n\n";
		system("pause");
		system("cls");

		return 0;
	}
}

int dessinerLosange(int hauteur, int& choix1)
{

	for (int numChar = 0; numChar < hauteur; hauteur++)
	{
		cout << "\n\nCette Partie n'est pas terminé :(\n\n";
		system("pause");
		system("cls");

		return 0;
	}
}

int dessinerCarre(int cote, int& choix1)
{

	for (int numChar = 0; numChar < cote; cote++)
	{
		cout << "\n\nCette Partie n'est pas terminé :(\n\n";
		system("pause");
		system("cls");

		return 0;
	}
}
