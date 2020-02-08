#ifndef LIBRAIRIE_H
#define LIBRAIRIE_H

#include <memory>
#include "Film.h"
#include "GestionnaireAuteurs.h"

class Librairie
{
public:
    Librairie();
    Librairie(const Librairie&);
    Librairie& operator=(const Librairie&);
    Librairie& operator+=(Film* film);
    Librairie& operator-=(const string& nomFilm);
    friend ostream& operator<<(ostream& o, const Librairie& lib);
  

    ~Librairie();

    
    Film* chercherFilm(const std::string& nomFilm);
    bool chargerFilmsDepuisFichier(const std::string& nomFichier,GestionnaireAuteurs& gestionnaireAuteurs);
    bool chargerRestrictionsDepuisFichiers(const std::string& nomFichier);
  
	const std::vector<std::unique_ptr<Film>>& getFilms() const;
    std::size_t getNbFilms() const;

private:
    void supprimerFilms();
    bool lireLigneRestrictions(const std::string& ligne);
    bool lireLigneFilm(const std::string& ligne, GestionnaireAuteurs& gestionnaireAuteurs);
    int trouverIndexFilm(const std::string& nomFilm) const;

    // Movies array
    vector<unique_ptr<Film>> films_;
};

#endif // LIBRAIRIE_H

