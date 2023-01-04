#include <iostream>
#include "Magasin.h"

using std::cout ;
using std::cin ;
using std::endl ;

int main()
{ 
	magasin::Magasin EasyStore() ;
	produit::Produit Nintendo_Switch("Nintendo Switch", "Console de jeux vidéos de Nintendo", 100, 123456789, 300.00) ;
	cout << endl << Nintendo_Switch << endl ;
	
	return 0 ;
}