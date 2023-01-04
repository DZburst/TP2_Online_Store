#include "Magasin.h"

magasin::Magasin::Magasin(std::vector<produit::Produit> produit, std::vector<client::Client> client, 
std::vector<commande::Commande> commande) :
_produit(produit), _client(client), _commande(commande)
{}

std::vector<produit::Produit> magasin::Magasin::produit() const
{
    return _produit ;
}

std::vector<client::Client> magasin::Magasin::client() const
{
    return _client ;
}

std::vector<commande::Commande> magasin::Magasin::commande() const
{
    return _commande ;
}