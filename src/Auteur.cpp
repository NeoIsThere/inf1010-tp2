#include "Auteur.h"
#include <iostream>

using namespace std;

//! Constructeur de la classe Auteur
//! \param nom              Nom de l'auteur
//! \param anneeDeNaissance Année de naissance de l'auteur
Auteur::Auteur(const std::string& nom, unsigned int anneeDeNaissance)
    : nom_(nom)
    , anneeDeNaissance_(anneeDeNaissance)
    , nbFilms_(0)
{
}

//! Méthode qui retourne le nom de l'auteur
//! \return Le nom de l'auteur
const std::string& Auteur::getNom() const
{
    return nom_;
}

//! Méthode qui retourne l'année de naissance de l'auteur
//! \return L'année de naissance de l'auteur
unsigned int Auteur::getAnneeDeNaissance() const
{
    return anneeDeNaissance_;
}

//! Méthode qui retourne le nombre de films de l'auteur
//! \return Le nombre de films de l'auteur
unsigned int Auteur::getNbFilms() const
{
    return nbFilms_;
}

//! Méthode qui set le nombre de films de l'auteur
//! \param nbFilms  Le nombre de films de l'auteur
void Auteur::setNbFilms(unsigned int nbFilms)
{
    nbFilms_ = nbFilms;
}

//! Méthode qui affiche un auteur
//! \param stream Le stream dans lequel afficher et Auteur L'auteur à afficher

ostream& operator<<(ostream& o, Auteur& auteur)
{
    o << "Nom: " << auteur.nom_ << " | Date de naissance: " << auteur.anneeDeNaissance_
      << " | Nombre de films: " << auteur.nbFilms_;
    return o;
}

bool Auteur::operator==(const string& nomAuteur)
{
	return (nom_ == nomAuteur ? true : false);
}

bool operator==(const string& nomAuteur, Auteur& auteur)
{
    return (auteur == nomAuteur);
}