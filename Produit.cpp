#include <iomanip>
#include "Produit.h"
using std::endl ;

produit::Produit::Produit(std::string nom, std::string description, unsigned int quantite, unsigned int id, float prix):
_nom(nom), _description(description), _quantite(quantite), _id(id), _prix(prix)
{}

std::string produit::Produit::nom() const
{
    return _nom ;
}

std::string produit::Produit::description() const
{
    return _description ;
}

unsigned int produit::Produit::quantite() const
{
    return _quantite ;
}

unsigned int produit::Produit::id() const
{
    return _id ;
}

float produit::Produit::prix() const
{
    return _prix ;
}

void produit::Produit::updateQuantite(int n)
{
    _quantite = n ;
}

std::ostream& produit::operator<<(std::ostream& os, const Produit& produit)
{
	os << produit.nom() << " : " << std::setprecision(2) << std::fixed << std::to_string(produit.prix()) << " €" 
       << endl << produit.description() << endl << "Encore " + std::to_string(produit.quantite()) + " en stock." << endl ;
	return os ;     // need to fix setprecision, not working ...
}

bool produit::Produit::operator==(const Produit& produit) const
{
    if ( (_nom == produit.nom()) && (_description == produit.description()) && (_quantite == produit.quantite()) &&
         (_id == produit.id()) && (_prix == produit.prix()) )
        return true ;
    else
        return false ;
}