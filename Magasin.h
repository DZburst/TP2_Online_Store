#pragma once
#include <vector>
#include "Produit.h"
#include "Client.h"
#include "Commande.h"

namespace magasin
{
    class Magasin
    {
        public:
            Magasin(std::vector<produit::Produit> produit, std::vector<client::Client> client, 
                    std::vector<commande::Commande> commande) ;
            std::vector<produit::Produit> produit() const ;
            std::vector<client::Client> client() const ;
            std::vector<commande::Commande> commande() const ;
            void addProduct(produit::Produit produit) ;
            void removeProduct(produit::Produit produit) ;
            void showProduct(std::string nom_produit) ;
            void updateQuantiteWithName(std::string nom_produit, int n) ;
            void addClient(client::Client client) ;
            void removeClient(client::Client client) ;
            void showClient(std::string nom_client, unsigned int id) ;
            void addCartItem(produit::Produit produit, client::Client client) ;
            void deleteCartItem(produit::Produit produit, client::Client client) ;
            void updateCartItemQuantity(produit::Produit produit, int n, client::Client client) ;
            
        private:
            std::vector<produit::Produit> _produits ;
            std::vector<client::Client> _clients ;
            std::vector<commande::Commande> _commandes ;

    } ;
    void showShopItems(std::vector<produit::Produit> produits) ;
    void showShopItemsName(std::vector<produit::Produit> produits) ;
    void showShopClients(std::vector<client::Client> clients) ;
    void showShopClientsName(std::vector<client::Client> clients) ;
}