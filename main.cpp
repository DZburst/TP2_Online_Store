#include <iostream>
#include "Magasin.h"

using std::cout ;
using std::cin ;
using std::endl ;

int main()
{ 
	std::vector<produit::Produit> produits ;
	std::vector<client::Client> clients ;
	std::vector<commande::Commande> commandes ;
	magasin::Magasin EasyStore(produits, clients, commandes) ;
	produit::Produit Nintendo_Switch("Nintendo Switch", "Console de jeux vidéos Nintendo", 213, 123456789, 300.00) ;
	produit::Produit PS5("PS5", "Console de jeux vidéos Sony", 2, 456789123, 500.00) ;
	produit::Produit Xbox_S("Xbox S", "Console de jeux vidéos Microsoft", 351, 789123456, 250.00) ;
	produit::Produit Atari_Retro("Atari Retro", "Console de jeux vidéos Atari", 50, 789456123, 120.00) ;
	produit::Produit Sega_MegaDrive("Sega MegaDrive", "Console de jeux vidéos Sega", 27, 123789456, 200.00) ;
	EasyStore.addProduct(Nintendo_Switch) ;
	EasyStore.addProduct(PS5) ;
	EasyStore.addProduct(Xbox_S) ;
	EasyStore.addProduct(Atari_Retro) ;
	EasyStore.addProduct(Sega_MegaDrive) ;
	magasin::showProducts(EasyStore.produit()) ;

	return 0 ;
}