#pragma once


int afficherMenu1();	 // : Fonction qui affiche le menu 1
int afficherMenu2();  // : Fonction qui affiche le menu 2
int validerMenu(int choix1, int choix2);				   // : Fonction qui lit le choix de l�utilisateur et v�rifie que le choix est bien parmi les
void echangerValeur(int& nb1, int& nb2);															//choix offerts dans le menu, informations pass�es en param�tre.Cette fonction
															//retourne le choix valid�.L�utilisateur peut taper n�importe quoi au clavier, le
															//programme ne part pas en boucle infinie.
