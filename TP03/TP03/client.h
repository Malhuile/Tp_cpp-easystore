#pragma once
#include <string>
#include <vector>
#include "produit.h"

class Client
{
public:
	Client(std::string p, std::string n) {
		prenom = p;
		nom = n;
	}
	void viderPanier();
	void addProduit(Produit, int);
	std::string toStringPanier();

private:
	std::string prenom;
	std::string nom;
	std::vector<std::pair<Produit,int>> panier;
};
