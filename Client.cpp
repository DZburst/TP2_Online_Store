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

void client::Client::addProduct(produit::Produit produit)
{
    _panier.push_back(produit) ;
}

void client::Client::emptyCart()
{
    _panier.clear() ;
}

void client::Client::updateQuantity(produit::Produit produit, int n)
{
    for (int i = 0 ; i < _panier.size() ; i++)
    {
        if (produit == _panier.at(i))
        {
            _panier.at(i).updateQuantite(n) ;
            std::cout << std::endl << "La quantité de " << _panier.at(i).nom() << " a bien été modifiée." <<std::endl ;
            std::cout << std::endl << _panier.at(i) << std::endl ;
        }
        else
            std::cout << std::endl << "Sorry, this item isn't in your cart ..." << std::endl ;
    }
}

std::ostream& client::operator<<(std::ostream& os, const Client& client)
{
	os << std::endl << client.nom() + " " + client.prenom() << std::endl
       << "ID : " << client.id() << std::endl
       << "Content of the cart :" << std::endl << std::endl ;
    for (int i = 0 ; i < client.panier().size() ; i++)
        os << client.panier().at(i) << std::endl ;
	return os ;
}

bool client::Client::operator==(const Client& client) const
{
    if ( (_nom == client.nom()) && (_prenom == client.prenom()) && (_id == client.id()) && (_panier == client.panier()) )
        return true ;
    else
        return false ;
}
