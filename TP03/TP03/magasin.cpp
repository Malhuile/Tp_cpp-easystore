#include "magasin.h"

void Magasin::addClient(Client c) {
	clients.push_back(c);
}

void Magasin::addProduit(Produit p) {
	produits.push_back(p);
}

std::string Magasin::toStringProduits() {
	std::string ans = "Produits disponibles : ";
	for (int i = 0; i < produits.size(); i++) {
		if (i == produits.size() - 1) {
			ans += produits.at(i).getTitre() + " : " + std::to_string(produits.at(i).getQuantite());
		}
		else {
			ans += produits.at(i).getTitre() + " : " + std::to_string(produits.at(i).getQuantite()) + " ,";
		}
	}
	return ans;
}

bool Magasin::ifProduit(std::string p) {
	for (int i = 0; i < produits.size(); i++) {
		if (p == produits.at(i).getTitre()) {
			return true;
		}
	}
	return false;
}

Produit Magasin::unProduit(std::string p) {
	for (int i = 0; i < produits.size(); i++) {
		if (p == produits.at(i).getTitre()) {
			return produits.at(i);
		}
	}
}

void Magasin::changeQuantiteProduit(Produit p, int i) {
	p.setQuantite(i);
}

std::vector<Produit> Magasin::getProduits() {
	return produits;
}