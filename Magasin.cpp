#include <iostream>
#include <vector>
#include "Magasin.h"

magasin::Magasin::Magasin(std::vector<produit::Produit> produit, std::vector<client::Client> client, 
std::vector<commande::Commande> commande) :
_produits(produit), _clients(client), _commandes(commande)
{}

std::vector<produit::Produit> magasin::Magasin::produit() const
{
    return _produits ;
}

std::vector<client::Client> magasin::Magasin::client() const
{
    return _clients ;
}

std::vector<commande::Commande> magasin::Magasin::commande() const
{
    return _commandes ;
}

void magasin::Magasin::addProduct(produit::Produit produit)
{
    _produits.push_back(produit) ;
}

void magasin::showShop(std::vector<produit::Produit> produits)
{
    for ( int i = 0 ; i < produits.size() ; i++)
        std::cout << produits.at(i) << std::endl << std::endl ;
}

void magasin::Magasin::showProduct(std::string nom_produit)
{
    unsigned int k = 0 ;
    for (int i = 0 ; i < _produits.size() ; i++)
    {
        if (_produits.at(i).nom() == nom_produit)
            std::cout << _produits.at(i) << std::endl ;
        else
            k++ ;
    }
    if (k == _produits.size())
        std::cout << "Sorry, the item you're looking for isn't available in our store, or you misspelled its name." 
                  << endl ;
}