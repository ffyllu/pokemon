#ifndef DRESSEUR_H
#define DRESSEUR_H

#include <string>
#include <vector>

class Pokemon;

using namespace std;

class Dresseur
{

protected:
    string nomDresseur;
    vector<Pokemon*> equipe;
    int pokemonActif;

public:
    // 1. Le Constructeur
    Dresseur(std::string nom);

    // 2. Le Destructeur
    virtual ~Dresseur();

    void ajouterPokemon();
};

#endif // DRESSEUR_H
