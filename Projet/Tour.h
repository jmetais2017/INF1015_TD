/**
* D�claration de la classe Tour du mod�le pour le projet de jeu d'�checs.
* \file   Tour.h
* \author Maya Kurdi-Teylouni et Julien M�tais
* \date   11 avril 2021
* Cr�� le 11 avril 2021
*/

#pragma once

#include "Piece.h"

class Tour : public Piece {
public:
	Tour(int i, int j, bool estBlanc) : Piece(i, j, estBlanc) {}

	bool estUneDestinationValide(const Position& arrivee) const override;
	std::unordered_set<Position, PositionHasher> obtenirChemin(const Position& arrivee) const override;

	const std::string& lireNom() const override { return nom_; }

private:
	std::string nom_ = "Tour"; // Utile pour l'affichage textuel de l'�tat de la partie.
};