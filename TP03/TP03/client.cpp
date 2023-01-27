#include "client.h"

void Client::viderPanier() {
	panier.clear();
}

void Client::addProduit(Produit p, int i) {
	panier.push_back(std::make_pair(p,i));
}

std::string Client::toStringPanier() {
	std::string ans = "";
	for (int i = 0; i < panier.size(); i++) {
		if (i == panier.size()-1) {
			ans += panier.at(i).first.getTitre() + " : " + std::to_string(panier.at(i).second);
		}
		else {
			ans += panier.at(i).first.getTitre() + " : " + std::to_string(panier.at(i).second) + " ,";
		}
		
	}
	return ans;
}