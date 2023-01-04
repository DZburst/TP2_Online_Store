#include "Magasin.h"
#include <iostream>

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


void magasin::showProducts(std::vector<produit::Produit> produits)
{
    for ( int i = 0 ; i < produits.size() ; i++)
        std::cout << produits.at(i) << std::endl ;
}