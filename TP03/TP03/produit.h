#pragma once
#include <string>
#include <iostream>

class Produit
{
public:
	Produit(std::string t, std::string d, int q, double p) {
		titre = t;
		description = d;
		quantite = q;
		prix = p;
	};
	std::string getTitre();
	std::string getDescription();
	int getQuantite();
	double getPrix();
	void setQuantite(int);

	friend std::ostream& operator<<(std::ostream& os, const Produit& p);
private:
	std::string titre;
	std::string description;
	int quantite;
	double prix;
};

