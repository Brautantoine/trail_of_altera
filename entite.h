#ifndef ENTITE_H_INCLUDED
#define ENTITE_H_INCLUDED
#include "main.h"
#include "projectiles.h"

/** ***                                                         *** **/
/** *** CLASS DE GESTION D'ENTITE POUR LE PERSONNAGE PRINCIPALE *** **/
/** *** VERSION : 1.3.0                                         *** **/
/** *** DERNIERE MODIF : 7 OCTOBRE                              *** **/
/** *** TO DO: NFN                                              *** **/
/** *** CONSTR TYPE: SIMPLE                                     *** **/
/** *** DESTRUCTEUR: NONE                                       *** **/
/** ***                                                         *** **/
class entite
{
//methode
public:
    entite();
    void depl(int force,int pousse);
    void presence(BITMAP *page,BITMAP *image);
    void give_to_su();

//attribut
private:
    //pos
    int pos_x;
    int pos_y;
    //vect
    int dx;
    int dy;
    //taille
    int t_x;
    int t_y;

    SU super_utilitaire;
};

#endif // ENTITE_H_INCLUDED
