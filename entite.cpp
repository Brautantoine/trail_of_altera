#include "main.h"

using namespace std;

entite::entite():pos_x(348),pos_y(438),t_x(90),t_y(90),dx(0),dy(0),super_utilitaire() //constructeur de l'entité utilisable juste pour le personnage principales
{

}

void entite::depl(int force,int pousse) //permet de réactualiser la position du personnage par rapport au input ainsi que de gerer la collision avec les bords
{
    if(pos_x+force<=0)force=0;
    if(pos_x+t_x+force>=SCREEN_W)force=0;
    if(pos_y+pousse<=0)pousse=0;
    if(pos_y+t_y+pousse>=SCREEN_H)pousse=0;

    pos_x+=force;
    pos_y+=pousse;
}

void entite::presence(BITMAP *page,BITMAP *image) ////methodes permettant au personnages de s'afficher sur le bufffer
{
    draw_trans_sprite(page,image,pos_x,pos_y);
    system("cls");
    printf("%d,%d,%d,%d",pos_x,pos_y,SCREEN_W,SCREEN_H);
}

void entite::give_to_su()
{
   super_utilitaire.update_proj(pos_x,pos_y);
}
