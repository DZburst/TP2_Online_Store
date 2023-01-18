#pragma once
#include <vector>
#include "Client.h"
#include "Produit.h"

namespace commande
{
    class Commande
    {
        public:
            Commande(client::Client client, std::vector<produit::Produit> produits, bool etat_commande) ;
            client::Client client() const ;
            std::vector<produit::Produit> produits() const ;
            bool etat_commande() const ;

        private:
            client::Client _client ;
            std::vector<produit::Produit> _produits ;
            bool _etat_commande ;
    } ;
    std::ostream& operator << (std::ostream& os, const Commande& commande) ;
}