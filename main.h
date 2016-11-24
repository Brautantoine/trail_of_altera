#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <iostream> //basic input output pour du debug en temps réel en console
#include <allegro.h> // le header principale d'allegro
#include <png.h> //le header spécifiques au plug-in png
#include <loadpng.h> //2nd header spécifiques au plug_in png
#include <shared_ptr.hpp> //header pour les pointeur intelligent de types shared_ptr de boost
#include <fstream> //lecture de fichier

#define nbi 2 // nombre total d'images du jeu
#define nbm 2 // nombre total d'image du menu
#define push 40 //vitesse de déplacement du perso


/* header maison */
#include "menue.h"
#include "entite.h"
#include "projectiles.h"
#include "G_BITMAP.h"
#include "acess.h"
#include "Game.h"


#endif // MAIN_H_INCLUDED
