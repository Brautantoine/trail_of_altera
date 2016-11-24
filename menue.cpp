#include "main.h"

using namespace std;

void LaCarte(bool *core,bool *game,BITMAP *page,BITMAP *image[nbm])
{
    cout << "bonjour";

    int display(0);
    bool coriandre (true);
    bool paprika (true);
    while(coriandre)
    {
        clear_bitmap(page);
        blit(image[display],page,0,0,0,0,SCREEN_W,SCREEN_H);
        if(key[KEY_Q])
        {
            *game=true;
            coriandre=false;
        }
        if(key[KEY_E])
        {
            *core=false;
            coriandre=false;
        }
        if(key[KEY_W])
        {
            cout << "hapy waifu happy laifu";
            display=1;
            paprika=true;
            while(paprika)
            {
                clear_bitmap(page);
                blit(image[display],page,0,0,0,0,SCREEN_W,SCREEN_H);

                if(key[KEY_Q])
                {
                    ofstream charac(CHARAC);
                    if(charac)
                    {
                        charac << ALTERA ;
                    }
                    else
                    {
                        allegro_message("can't read/open charac.alter"); //message d'erreur
                        allegro_exit(); //fermeture d'allegro
                        exit(EXIT_FAILURE); //fermeture du programme
                    }
                    paprika=false;
                }
                if(key[KEY_E])
                {
                    ofstream charac(CHARAC);
                    if(charac)
                    {
                        charac << CHARLOTTE ;
                    }
                    else
                    {
                        allegro_message("can't read/open charac.alter"); //message d'erreur
                        allegro_exit(); //fermeture d'allegro
                        exit(EXIT_FAILURE); //fermeture du programme
                    }
                    paprika=false;

                }
                if(key[KEY_T])
                {
                    ofstream charac(CHARAC);
                    if(charac)
                    {
                        charac << LEGARSDUFUTUR ;
                    }
                    else
                    {
                        allegro_message("can't read/open charac.alter"); //message d'erreur
                        allegro_exit(); //fermeture d'allegro
                        exit(EXIT_FAILURE); //fermeture du programme
                    }
                    paprika=false;
                }
                if(key[KEY_Z])
                {
                    ofstream charac(CHARAC);
                    if(charac)
                    {
                        charac << NARUTARDEMENTAL ;
                    }
                    else
                    {
                        allegro_message("can't read/open charac.alter"); //message d'erreur
                        allegro_exit(); //fermeture d'allegro
                        exit(EXIT_FAILURE); //fermeture du programme
                    }
                    paprika=false;
                }
                if(key[KEY_R])
                {
                    ofstream charac(CHARAC);
                    if(charac)
                    {
                        charac << PALADINE ;
                    }
                    else
                    {
                        allegro_message("can't read/open charac.alter"); //message d'erreur
                        allegro_exit(); //fermeture d'allegro
                        exit(EXIT_FAILURE); //fermeture du programme
                    }
                    paprika=false;
                }
                if(key[KEY_Y])
                {
                    ofstream charac(CHARAC);
                    if(charac)
                    {
                        charac << SOUBRETTE ;
                    }
                    else
                    {
                        allegro_message("can't read/open charac.alter"); //message d'erreur
                        allegro_exit(); //fermeture d'allegro
                        exit(EXIT_FAILURE); //fermeture du programme
                    }
                    paprika=false;
                }
                if(key[KEY_ESC])paprika=false;

                blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);
                rest(25);
            }
            display=0;
        }

        blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);
        rest(25);

    }
}
