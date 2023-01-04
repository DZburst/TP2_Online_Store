#include <iostream>
#include "Magasin.h"

using std::cout ;
using std::cin ;
using std::endl ;

int main()
{ 
	magasin::Magasin EasyStore() ;
	produit::Produit Nintendo_Switch("Nintendo Switch", "Console de jeux vidéos Nintendo", 213, 123456789, 300.00) ;
	produit::Produit PS5("PS5", "Console de jeux vidéos Sony", 2, 456789123, 500.00) ;
	produit::Produit Xbox_S("Xbox S", "Console de jeux vidéos Microsoft", 351, 789123456, 250.00) ;
	produit::Produit Atari_Retro("Atari Retro", "Console de jeux vidéos Atari", 50, 789456123, 120.00) ;
	produit::Produit Sega_MegaDrive("Sega MegaDrive", "Console de jeux vidéos Sega", 27, 123789456, 200.00) ;

	return 0 ;
}