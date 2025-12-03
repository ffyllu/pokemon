#ifndef POKEMON_H
#define POKEMON_H

using namespace std;

#include<type.h>
#include<statut.h>
#include<string>

class Pokemon
{
public:
    Pokemon();
    Pokemon (string, int, int, int, int, int, int, int, Type, Statut);
    string get_nom();
    void set_pv(int);
    int get_pv();
    int get_pvMax();
    void set_att(int);
    int get_att();
    void set_def(int);
    int get_def();
    void set_att_spe(int);
    int get_att_spe();
    void set_def_spe(int);
    int get_def_spe();
    void set_vit(int);
    int get_vit();
    void set_type(Type);
    Type get_type();
    void set_statut(Statut);
    Statut get_statut();
private :
    string nom;
    int pv, pvMax, att, def, att_spe, def_spe, vit;
    Type type;
    Statut statut;
};

#endif // POKEMON_H
