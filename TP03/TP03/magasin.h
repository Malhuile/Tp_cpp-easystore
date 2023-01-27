#pragma once
#include "produit.h"
#include "client.h"
#include <vector>


class Magasin
{
public:

	void addProduit(Produit);
	void addClient(Client);
	std::vector<Produit> getProduits();
	std::string toStringProduits();
	Produit unProduit(std::string);
	bool ifProduit(std::string);
	void changeQuantiteProduit(Produit, int);

private:
	std::vector <Produit> produits;
	std::vector <Client> clients;
};
