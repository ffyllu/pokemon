#include "pokemon.h"
#include<type.h>
#include<string>
#include<statut.h>

Pokemon::Pokemon() {
    nom=" ";
    pv=0;
    pvMax=0;
    att=0;
    def=0;
    att_spe=0;
    def_spe=0;
    type=Type::inconnu;
    statut=Statut::rien;
}

Pokemon::Pokemon(string NOM, int PV, int PVMAX, int ATT, int DEF, int ATT_SPE, int DEF_SPE,int VIT, Type TYPE, Statut STATUT){
    nom=NOM;
    pv=PV;
    pvMax=PVMAX;
    att=ATT;
    def=DEF;
    att_spe=ATT_SPE;
    def_spe=DEF_SPE;
    vit=VIT;
    type=TYPE;
    statut=STATUT;
}

string Pokemon::get_nom(){
    return nom;
}
void Pokemon::set_pv(int nv_pv){
    pv=nv_pv;
}
int Pokemon::get_pv(){
    return pv;
}
int Pokemon::get_pvMax(){
    return pvMax;
}
void Pokemon::set_att(int nv_att){
    att=nv_att;
}
int Pokemon::get_att(){
    return att;
}
void Pokemon::set_def(int nv_def){
    def=nv_def;
}
int Pokemon::get_def(){
    return def;
}
void Pokemon::set_att_spe(int nv_att_spe){
    att_spe=nv_att_spe;
}
int Pokemon::get_att_spe(){
    return att_spe;
}
void Pokemon::set_def_spe(int nv_def_spe){
    def_spe=nv_def_spe;
}
int Pokemon::get_def_spe(){
    return def_spe;
}
void Pokemon::set_vit(int nv_vit){
    vit=nv_vit;
}
int Pokemon::get_vit(){
    return vit;
}
void Pokemon::set_statut(Statut nv_statut){
    statut=nv_statut;
}
Statut Pokemon::get_statut(){
    return statut;
}
