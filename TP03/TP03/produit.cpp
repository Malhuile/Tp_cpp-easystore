#pragma once
#include "produit.h"

std::string Produit::getTitre() {
	return titre;
}

std::string Produit::getDescription() {
	return description;
}

int Produit::getQuantite() {
	return quantite;
}

double Produit::getPrix() {
	return prix;
}

void Produit::setQuantite(int i) {
	quantite = i;
}