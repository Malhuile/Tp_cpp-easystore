#include "produit.h"
#include <vector>

std::string toString(Produit p) {
	return "Produit : " + p.getTitre() + " Description : " + p.getDescription() + " Quantite restante : " + std::to_string(p.getQuantite()) + " Prix : " + std::to_string(p.getPrix());
}

std::ostream& operator<<(std::ostream& os, const Produit& p)
{
	os << "Produit : " << p.titre << " Description : " << p.description << " Quantite restante : " << p.quantite << " Prix : " << p.prix;
	return os;
}
