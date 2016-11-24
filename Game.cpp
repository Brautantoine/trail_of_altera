#include "main.h"

void InGame(bool *game,BITMAP* page,BITMAP* image[nbi])
{
    if (*game)
    {
        *game=false;
        entite Mrcarre; // la class entit� du personnage principale (s'appelle Mrcarre car sa version beta �tait un carr�)
        load_Game(image);

        while (!key[KEY_ESC]) //ESC permet de fermer le programme (comme la plupart des jeux japonais amateur d'ailleurs)
        {
            clear_bitmap(page); //RAZ du buffer

            /** bloc de surveillances des input **/

            /*input relativ au deplacement*/
            if (key[KEY_UP])Mrcarre.depl(0,-push); //push d�finie dans le "main.h"
            if (key[KEY_LEFT])Mrcarre.depl(-push,0);
            if (key[KEY_RIGHT])Mrcarre.depl(push,0);
            if (key[KEY_DOWN])Mrcarre.depl(0,push);
//          if (key[KEY_W])Mrcarre.give_to_su();

            /** bloc des actualisations et automatisations **/


            /** bloc d'affichage **/
            blit(image[1],page,0,0,0,0,SCREEN_W,SCREEN_H); //copie l'image 0 (fonds d'�cran) sur l'�cran
            Mrcarre.presence(page,image[0]); //methodes permettant au personnages de s'afficher sur le bufffer
            blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H); //copie du buffer sur l'�cran

            rest(25); //pause permettant de limiter la vitesse d'�xecution et donc le charge processeur ainsi que le taux de fps (fonction sp�cifiques a allegro)
        }
        destroy_all_Game_bitmap(image);
    }
}
