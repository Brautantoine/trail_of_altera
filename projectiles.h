#ifndef PROJECTILES_H_INCLUDED
#define PROJECTILES_H_INCLUDED

#include "main.h"

/** ***                                      *** **/
/** *** CLASS DE GESTION DE PROJECTILES      *** **/
/** *** VERSION : 0.0.1                      *** **/
/** *** DERNIERE MODIF : 5 OCTOBRE           *** **/
/** *** TO DO: CREATE                        *** **/
/** *** CONSTR TYPE: LISTE                   *** **/
/** *** DESTRUCTEUR: NONE                    *** **/
/** ***                                      *** **/
class projectiles
{
public:
    projectiles(int pos_x,int pos_y);
    void appear();
    void where_i_am();

private:
    //projectiles* FR_suiv;
    //projectiles* FR_prec;
    int pos_x;
    int pos_y;
};

/** ***                                                                  *** **/
/** *** CLASS DE GESTION DE LANCEMENT DE PROJECTILE DU PERSONNAGE        *** **/
/** *** VERSION : 0.2.2                                                  *** **/
/** *** DERNIERE MODIF : 6 OCTOBRE                                       *** **/
/** *** TO DO: IMPLEMENT ALLOC DYN PROJ || vector projectiles + CONSTR   *** **/
/** *** CONSTR TYPE: NONE                                                *** **/
/** *** DESTRUCTEUR: NONE                                                *** **/
/** ***                                                                  *** **/
class SU
{
public:
    SU();
    void update_proj(int pos_x,int pos_y);
private:
    projectiles** Ancres;
    projectiles* ptr_s;

};




#endif // PROJECTILES_H_INCLUDED
