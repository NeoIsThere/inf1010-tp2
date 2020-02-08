#ifndef AUTEUR_H
#define AUTEUR_H

#include <iostream>
#include <string>

using namespace std;

class Auteur
{
public:
    Auteur() = default;
    Auteur(const std::string& nom, unsigned int anneeDeNaissance);

    friend ostream& operator<<(ostream& o, Auteur& auteur);
    bool operator==(const string& nomAuteur);
	const string& getNom() const;
    unsigned int getAnneeDeNaissance() const;
    unsigned int getNbFilms() const;
    void setNbFilms(unsigned int nbFilms);

private:
    std::string nom_;
    unsigned int anneeDeNaissance_;
    unsigned int nbFilms_;
};

bool operator==(const string& nomAuteur, Auteur& auteur);

#endif // AUTEUR_H