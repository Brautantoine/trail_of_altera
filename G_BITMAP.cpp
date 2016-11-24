#include "main.h"

using namespace std;

/** ***                                      *** **/
/** *** FONCTION DE LIBERATION IMAGES        *** **/
/** *** VERSION : 1.0.0                      *** **/
/** *** DERNIERE MODIF : 7 OCTOBRE           *** **/
/** *** TO DO: NFN                           *** **/
/** *** INPUT: BITMAP* []                    *** **/
/** *** OUTPUT: 0                            *** **/
/** ***                                      *** **/
void destroy_all_Game_bitmap(BITMAP* image[nbi]) //desalloue tout les BITMAP*
{
    int i=0;
    for(i=0; i<nbi; i++)
    {
        destroy_bitmap(image[i]);
    }
}

void destroy_all_Menue_bitmap(BITMAP* image[nbm]) //desalloue tout les BITMAP*
{
    int i=0;
    for(i=0; i<nbm; i++)
    {
        destroy_bitmap(image[i]);
    }
}

void load_Game(BITMAP *image[nbi])
{
    //string data("");
    int i(0);
    int length(0);
    char nfi[nbi][50]= {"n","img/back.png"}; //chemin d'accés des images (peut être remplacé par un string)
    ifstream charac(CHARAC);
    if(charac)
    {
        //getline(charac, data);
        charac.seekg(0,ios::end);
        length = charac.tellg();
        charac.seekg(0,ios::beg);
        for (i=0; i<length; i++)
        {
            charac.get(nfi[0][i]);
        }
        i=0;
        for (i=0; i<nbi; i++)
        {

            image[i]=load_bitmap(nfi[i],NULL);
            cout << "chargez" ;

            if (!image[i])
            {
                allegro_message("pas pu trouver/charger %s", nfi[i]);
                allegro_exit();
                exit(EXIT_FAILURE);
            }
        }
    }
    else
    {
        allegro_message("can't read/open charac.alter"); //message d'erreur
        allegro_exit(); //fermeture d'allegro
        exit(EXIT_FAILURE); //fermeture du programme
    }

}
