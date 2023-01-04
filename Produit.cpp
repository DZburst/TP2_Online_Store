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

void produit::Produit::updateQuantite(unsigned int n)
{
    _quantite = n ;
}


std::ostream& produit::operator<<(std::ostream& os, const Produit& produit)
{
	os << produit.nom() + " : " + std::to_string(produit.prix()) + " €" << endl << produit.description() << endl << "Encore " + std::to_string(produit.quantite()) + " en stock." ;
	return os ;
}