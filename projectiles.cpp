#include "main.h"

using namespace std;

/* WORK IN PROGRESS */


/** ***                                                                  *** **/
/** *** CLASS DE GESTION DE LANCEMENT DE PROJECTILE DU PERSONNAGE        *** **/
/** *** VERSION : 0.2.2                                                  *** **/
/** *** DERNIERE MODIF : 6 OCTOBRE                                       *** **/
/** *** TO DO: IMPLEMENT ALLOC DYN PROJ || vector projectiles + CONSTR   *** **/
/** *** CONSTR TYPE: NONE                                                *** **/
/** *** DESTRUCTEUR: NONE                                                *** **/
/** ***                                                                  *** **/
SU::SU()
{
    Ancres=NULL;
    ptr_s=NULL;
}

void SU::update_proj(int pos_x,int pos_y)
{
   /* if (Ancres==NULL)
    {
        printf("\nnot yet\n\n\n");
        Ancres=boost::shared_ptr<projectiles>(projectiles(pos_x,pos_y)* ptr_s) ; // NEIN
    }
    else
    {
        printf("happy waifu happy laifu");
        ptr_s->where_i_am();
    } */
}

/** ***                                      *** **/
/** *** CLASS DE GESTION DE PROJECTILES      *** **/
/** *** VERSION : 0.0.1                      *** **/
/** *** DERNIERE MODIF : 5 OCTOBRE           *** **/
/** *** TO DO: CREATE                        *** **/
/** *** CONSTR TYPE: NONE                    *** **/
/** *** DESTRUCTEUR: NONE                    *** **/
/** ***                                      *** **/
projectiles::projectiles(int i_pos_x, int i_pos_y):pos_x(i_pos_x),pos_y(i_pos_y)
{

}

void projectiles::appear()
{

}

void projectiles::where_i_am()
{
    printf("\n\n %d \n\n",pos_x);
    printf("\n\n %d \n\n",pos_y);
}
