#include "Commande.h"

commande::Commande::Commande(client::Client client, std::vector<produit::Produit> produits, bool statut) :
_client(client), _produits(produits), _statut(statut)
{}

client::Client commande::Commande::client() const
{
    return _client ;
}

std::vector<produit::Produit> commande::Commande::produits() const
{
    return _produits ;
}

bool commande::Commande::statut() const
{
    return _statut ;
}

std::ostream& commande::operator << (std::ostream& os, const Commande& commande)
{
    os << "Informations client :" << commande.client() << "Informations produits :" ;
    for (int i = 0 ; i < commande.produits().size() ; i++)
        os << commande.produits().at(i) ;
    os << "État de la commande : " ;
    if (commande.statut() == true)
        os << "Produit(s) livré(s)" ;
    else
        os << "Produit(s) en cours de livraison" ;
    return os ;
}