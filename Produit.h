#pragma once
#include <iostream>

namespace produit
{
    class Produit
    {
        public:
            Produit(std::string nom, std::string description, unsigned int quantite, unsigned int id, float prix) ;
            std::string nom() const ;
            std::string description() const ;
            unsigned int quantite() const ;
            unsigned int id() const ;
            float prix() const ;
            void updateQuantite(unsigned int n) ;

        private:
            std::string _nom ;
            std::string _description ;
            unsigned int _quantite ;
            unsigned int _id ;
            float _prix ;

    } ;
    std::ostream& operator<<(std::ostream& os, const Produit& produit) ;
}