#include <vector>
#include "Client.h"
#include "Produit.h"

client::Client::Client(std::string nom, std::string prenom, unsigned int id, std::vector<produit::Produit> panier) :
_nom(nom), _prenom(prenom), _id(id), _panier(panier)
{}

std::string client::Client::nom() const
{
    return _nom ;
}


std::string client::Client::prenom() const
{
    return _prenom ;
}


unsigned int client::Client::id() const
{
    return _id ;
}


std::vector<produit::Produit> client::Client::panier() const
{
    return _panier ;
}
