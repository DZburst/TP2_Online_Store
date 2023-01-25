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

void magasin::Magasin::showProduct(std::string nom_produit)
{
    unsigned int k = 0 ;
    for (int i = 0 ; i < _produits.size() ; i++)
    {
        if (_produits.at(i).nom() == nom_produit)
        {
            std::cout << std::endl << "Voici le produit que vous avez demandé :" << std::endl << std::endl ;
            std::cout << _produits.at(i) << std::endl ;
        }
        else
            k++ ;
    }
    if (k == _produits.size())
        std::cout << std::endl
                  << "Sorry, the item you're looking for isn't available in our store, or you misspelled its name." 
                  << std::endl ;
}

void magasin::Magasin::updateQuantiteWithName(std::string nom_produit, int n)
{
    unsigned int k = 0 ;
    for (int i = 0 ; i < _produits.size() ; i++)
    {
        if (_produits.at(i).nom() == nom_produit)
        {
            _produits.at(i).updateQuantite(n) ;
            std::cout << std::endl << "Here are the updated caraceristics of the product :"
                      << std::endl << _produits.at(i) << std::endl ;
        }
        else
            k++ ;
    }
    if (k == _produits.size())
        std::cout << std::endl
                  << "Sorry, the item you're looking for isn't available in our store, or you misspelled its name." 
                  << std::endl ;
}

void magasin::Magasin::addClient(client::Client client)
{
    _clients.push_back(client) ;
}

void magasin::Magasin::showClient(std::string nom_client, unsigned int id)
{
    int k = 0 ;
    for (int i = 0 ; i < _clients.size() ; i++)
    {
        if ( (_clients.at(i).nom() == nom_client) || (_clients.at(i).id() == id) )
            std::cout << std::endl << _clients.at(i) << std::endl ;
        else
            k++ ;
    }
    if (k == _clients.size())
        std::cout << std::endl << "Sorry, this person isn't part of our database ..." << std::endl ;
}

void magasin::Magasin::addCartItem(produit::Produit produit, client::Client client)
{
    for (int i = 0 ; i < _clients.size() ; i++)
    {
        if (_clients.at(i) == client)                       // Don't forget to overload == for Client
            _clients.at(i).panier().push_back(produit) ;
    }

}

void magasin::Magasin::deleteCartItem(produit::Produit produit, client::Client client)
{
    std::vector<produit::Produit> vect ;
    for (int i = 0 ; i < _clients.size() ; i++)
    {
        if (_clients.at(i) == client)
        {
            for (int j = 0 ; j < _clients.at(i).panier().size() ; j++)
            {
                if (_clients.at(i).panier().at(j) != produit)
                    vect.push_back(_clients.at(i).panier().at(j)) ;
            }
            _clients.at(i).panier() = vect ;
        }
    }
}

void magasin::Magasin::updateCartItemQuantity(produit::Produit produit, int n, client::Client client)
{
    for (int i = 0 ; i < _clients.size() ; i++)
    {
        if (_clients.at(i) == client)
        {
            for (int j = 0 ; j < _clients.at(i).panier().size() ; j++)
            {
                if (_clients.at(i).panier().at(j) == produit)
                    _clients.at(i).panier().at(j).updateQuantite(n) ;
            }
        }
    }
}

void magasin::showShopClients(std::vector<client::Client> clients)
{
    for ( int i = 0 ; i < clients.size() ; i++)
        std::cout << clients.at(i) << std::endl << std::endl ;
}

void magasin::showShopItems(std::vector<produit::Produit> produits)
{
    for ( int i = 0 ; i < produits.size() ; i++)
        std::cout << produits.at(i) << std::endl << std::endl ;
}
