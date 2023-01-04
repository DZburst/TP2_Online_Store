#pragma once
#include <iostream>

namespace client
{
    class Client
    {
        public:
            Client(std::string nom, std::string prenom, unsigned int id, std::vector<produit::Produit> panier) ;
            std::string nom() const ;
            std::string prenom() const ;
            unsigned int id() const ;
            std::vector<produit::Produit> panier() const ;

        private:
            std::string _nom ;
            std::string _prenom ;
            unsigned int _id ;
            std::vector<produit::Produit> _panier ;

    } ;
}