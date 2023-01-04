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

        private:
            std::vector<produit::Produit> _produit ;
            std::vector<client::Client> _client ;
            std::vector<commande::Commande> _commande ;

    } ;
}