#pragma once
#include "Produit.h"

#include <iostream>
#include <vector>

namespace client
{
    class Client
    {
        public:
            Client(std::string nom, std::string prenom, unsigned int id, std::vector<produit::Produit> panier) ;
            std::string nom() const ;
            std::string prenom() const ;
            unsigned int id() const ;
            const std::vector<produit::Produit>& panier() const ;
            std::vector<produit::Produit>& panier() ;
            void addProduct(produit::Produit produit) ;
            void emptyCart() ;
            void updateQuantity(produit::Produit produit, int n) ;
            bool operator == (const Client& client) const ;

        private:
            std::string _nom ;
            std::string _prenom ;
            unsigned int _id ;
            std::vector<produit::Produit> _panier ;
    } ;
    std::ostream& operator<<(std::ostream& os, const Client& client) ;
}
