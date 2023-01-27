#include <iostream>
#include "Magasin.h"

using std::cout ;
using std::cin ;
using std::endl ;

int main()
{ 
	std::vector<produit::Produit> produits ;
	std::vector<client::Client> clients ;
	std::vector<commande::Commande> commandes ;
	magasin::Magasin EasyStore(produits, clients, commandes) ;

	produit::Produit Nintendo_Switch("Nintendo Switch", "Console de jeux vidéos Nintendo", 213, 123456789, 300.00) ;
	produit::Produit PS5("PS5", "Console de jeux vidéos Sony", 2, 456789123, 500.00) ;
	produit::Produit Xbox_S("Xbox S", "Console de jeux vidéos Microsoft", 351, 789123456, 250.00) ;
	produit::Produit Atari_Retro("Atari Retro", "Console de jeux vidéos Atari", 50, 789456123, 120.00) ;
	produit::Produit Sega_MegaDrive("Sega MegaDrive", "Console de jeux vidéos Sega", 27, 123789456, 200.00) ;

	EasyStore.addProduct(Nintendo_Switch) ;
	EasyStore.addProduct(PS5) ;
	EasyStore.addProduct(Xbox_S) ;
	EasyStore.addProduct(Atari_Retro) ;
	EasyStore.addProduct(Sega_MegaDrive) ;
	//magasin::showShopItems(EasyStore.produit()) ;
	//EasyStore.showProduct("Nintendo Switch") ;
	//EasyStore.showProduct("Sega MegaDrive") ;
	//EasyStore.showProduct("PS1") ;
	//EasyStore.updateQuantiteWithName("PS5", 150) ;
	//EasyStore.updateQuantiteWithName("PS1", 50) ;

	std::vector<produit::Produit> panier ;
	client::Client Me("HADJI", "Rayan", 25112002, panier) ;
	Me.addProduct(Nintendo_Switch) ;
	Me.addProduct(Sega_MegaDrive) ;
	//cout << Me << endl ;
	client::Client NotMe("IJDAH", "Nayar", 20021152, panier) ;
	NotMe.addProduct(PS5) ;
	NotMe.addProduct(Atari_Retro) ;
	NotMe.addProduct(Xbox_S) ;
	//cout << NotMe << endl ;
	
	EasyStore.addClient(Me) ;
	EasyStore.addClient(NotMe) ;
	//magasin::showShopClients(EasyStore.client()) ;
	//EasyStore.showClient("HADJI", 0) ;

	cout << "                                                                        " << endl ;
	cout << " ______  ______  ______  ______  ______  ______  ______  ______  ______ " << endl ;
	cout << "|______||______||______||______||______||______||______||______||______|" << endl ;
	cout << "   _      _____                    _____  _                         _   " << endl ;
	cout << "  | |    |  ___|                  /  ___|| |                       | |  " << endl ;
	cout << " / __)   | |__   __ _  ___  _   _ \\ `--. | |_  ___   _ __  ___    / __) " << endl ;
	cout << " \\__ \\   |  __| / _` |/ __|| | | | `--. \\| __|/ _ \\ | '__|/ _ \\   \\__ \\ " << endl ;
	cout << " (   /   | |___| (_| |\\__ \\| |_| |/\\__/ /| |_| (_) || |  |  __/   (   / " << endl ;
	cout << "  |_|    \\____/ \\__,_||___/ \\__, |\\____/  \\__|\\___/ |_|   \\___|    |_|  " << endl ;
	cout << "                             __/ |                                      " << endl ;
	cout << "                            |___/                                       " << endl ;
	cout << " ______  ______  ______  ______  ______  ______  ______  ______  ______ " << endl ;
	cout << "|______||______||______||______||______||______||______||______||______|" << endl ;
	cout << "                                                                        " << endl << endl ;
	cout << "Welcome to EasyStore ! Please select a menu by typing its corresponding number :" << endl ;
	cout << "1. Product Management" << endl ;
	cout << "2. Customer Management" << endl ;
	cout << "3. Order Management" << endl ;				// Not coded -> if a = 3, nothing will happen ...
	int a = 0 ;
	while ((a != 1) && (a != 2) && (a != 3))
		cin >> a ;
	if (a == 1)
	{
		cout << "----------------------" << endl ;
		cout << "- PRODUCT MANAGEMENT -" << endl ;
		cout << "----------------------" << endl << endl ;
		cout << "Please select an option by typing its corresponding number :" << endl ;
		cout << "1. Add a product to the store" << endl ;
		cout << "2. Remove a product from the store" << endl ;
		cout << "3. Show all the available products in the store" << endl ;
		cout << "4. Update the quantity of an item in the store" << endl ;
		int b = 0 ;
		while ((b != 1) && (b != 2) && (b != 3) && (b != 4))
			cin >> b ;
		if (b == 1)
		{
			cout << "Please respectively provide a name, a description, a quantity, an ID and a price" << endl ;
			std::string name ;
            std::string description ;
            unsigned int quantity ;
            unsigned int id ;
            float price ;
			cin >> name >> description >> quantity >> id >> price ;
			produit::Produit product(name, description, quantity, id, price) ;
			EasyStore.addProduct(product) ;
		}
		if (b == 2)
		{
			cout << "Please respectively provide a name, a description, a quantity, an ID and a price" << endl ;
			std::string name ;
            std::string description ;
            unsigned int quantity ;
            unsigned int id ;
            float price ;
			cin >> name >> description >> quantity >> id >> price ;
			produit::Produit product(name, description, quantity, id, price) ;
			EasyStore.removeProduct(product) ;
		}
		if (b == 3)
		{
			magasin::showShopItemsName(EasyStore.produit()) ;
			cout << "If you want more details about a product, please type 1, else type 2" << endl ;
			int z = 0 ;
			while ((z != 1) && (z != 2))
				cin >> z ;
			if (z == 1)
			{
				cout << "Please provide the name of the product" << endl ;
				std::string name ;
				cin >> name ;
				EasyStore.showProduct(name) ;
			}
		}
		if (b == 4)
		{
			cout << "Please select an item's name from the following list, and type it :" << endl ;
			magasin::showShopItemsName(EasyStore.produit()) ;
			std::string name ;
			cin >> name ;
			cout << "Please input the new quantity for the item" << endl ;
			int y = 0 ;
			cin >> y ;
			EasyStore.updateQuantiteWithName(name, y) ;
		}
		
	}
	if (a == 2)
	{
		cout << "-----------------------" << endl ;
		cout << "- CUSTOMER MANAGEMENT -" << endl ;
		cout << "-----------------------" << endl << endl ;
		cout << "Please select an option by typing its corresponding number :" << endl ;
		cout << "1. Add a customer to the store's database" << endl ;
		cout << "2. Remove a customer from the store's database" << endl ;
		cout << "3. Show all the customers in the store's database" << endl ;
		int b = 0 ;
		while ((b != 1) && (b != 2) && (b != 3))
			cin >> b ;
		if (b == 1)
		{
			cout << "Please respectively provide a name, a surname, and an ID" << endl ;
			std::string name ;
            std::string surname ;
            unsigned int id ;
			std::vector<produit::Produit> cart ;
			cin >> name >> surname >> id ;
			client::Client client(name, surname, id, cart) ;
			EasyStore.addClient(client) ;
		}
		if (b == 2)
		{
			cout << "Please respectively provide a name, a surname, and an ID" << endl ;
			std::string name ;
            std::string surname ;
            unsigned int id ;
			std::vector<produit::Produit> cart ;
			cin >> name >> surname >> id ;
			client::Client client(name, surname, id, cart) ;
			EasyStore.removeClient(client) ;
		}
		if (b == 3)
		{
			magasin::showShopClientsName(EasyStore.client()) ;
			cout << "If you want more details about a customer, please type 1, else type 2" << endl ;
			int z = 0 ;
			while ((z != 1) && (z != 2))
				cin >> z ;
			if (z == 1)
			{
				cout << "Please provide the name and the ID of the customer" << endl ;
				std::string name ;
				int id ;
				cin >> name >> id ;
				EasyStore.showClient(name, id) ;
			}
		}
	}
	
	return 0 ;
}