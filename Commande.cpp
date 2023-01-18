#include "Commande.h"

commande::Commande::Commande(client::Client client, std::vector<produit::Produit> produits, bool etat_commande) :
_client(client), _produits(produits), _etat_commande(etat_commande)
{}

client::Client commande::Commande::client() const
{
    return _client ;
}

std::vector<produit::Produit> commande::Commande::produits() const
{
    return _produits ;
}

bool commande::Commande::etat_commande() const
{
    return _etat_commande ;
}

std::ostream& commande::operator << (std::ostream& os, const Commande& commande)
{
    os << "Informations client :" << commande.client() << "Informations produits :" ;
    for (int i = 0 ; i < commande.produits().size() ; i++)
        os << commande.produits().at(i) ;
    os << "État de la commande : " ;
    if (commande.etat_commande() == true)
        os << "Produits commandés" ;
    else
        os << "En attente" ;
    return os ;
}