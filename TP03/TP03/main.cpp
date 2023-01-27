#pragma once
#include "magasin.h"
#include "produit.h"
#include "client.h"



void main() {
	Magasin magasin;

	Produit p("PS5", "Une console de jeu bien trop chere", 0, 1000);
	Produit p2("Truc", "C'est un truc", 120, 2);
	Client client("Jesuisun","Client");

	magasin.addClient(client);
	magasin.addProduit(p);
	magasin.addProduit(p2);

	client.addProduit(p, 1);
	client.addProduit(p2, 3);

	std::cout << client.toStringPanier() << std::endl;
	
	std::cout << magasin.toStringProduits() << std::endl;

	std::string choix;
	int choix2;
	std::cin >> choix;

	if (magasin.ifProduit(choix)) {
		std::cout << magasin.unProduit(choix) << std::endl;
	}
	else {
		std::cout << "Le produit n'existe pas";
	}

	std::cout << magasin.getProduits().at(0).getQuantite() << std::endl;
	if (magasin.ifProduit(choix)) {
		std::cout << "Choisir la nouvelle quantite" << std::endl;
		std::cin >> choix2;
		magasin.changeQuantiteProduit(magasin.unProduit(choix),choix2);
	}
	else {
		std::cout << "Le produit n'existe pas";
	}

	std::cout << magasin.getProduits().at(0).getQuantite() << std::endl;

}