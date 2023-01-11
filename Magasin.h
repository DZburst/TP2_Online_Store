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
            void showProduct(std::string nom_produit) ;
            void updateQuantiteWithName(std::string nom_produit, int n) ;
            void addClient(client::Client client) ;
            void showClient(std::string nom_client = "name", unsigned int id = 12345678) ;
            void addItemCart(produit::Produit produit) ;
            void deleteItemCart(produit::Produit produit) ;
            void updateCartItemQuantity(produit::Produit produit, int n) ;
            
        private:
            std::vector<produit::Produit> _produits ;
            std::vector<client::Client> _clients ;
            std::vector<commande::Commande> _commandes ;

    } ;
    void showShopItems(std::vector<produit::Produit> produits) ;
    void showShopClients(std::vector<client::Client> clients) ;
}