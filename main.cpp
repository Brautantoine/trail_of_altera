#include "main.h" //header globale

using namespace std;

/** ***                                      *** **/
/** *** FONCTION MAIN                        *** **/
/** *** VERSION : 2.4.1                      *** **/
/** *** DERNIERE MODIF : 7 OCTOBRE           *** **/
/** *** TO DO: MOVE LOAD                     *** **/
/** *** INPUT: NONE                          *** **/
/** *** OUTPUT: 0                            *** **/
/** ***                                      *** **/
int main()
{
    /* ***                   *** */
    /* *** VARIABLES DU MAIN *** */
    /* ***                   *** */
    int i=0;
    bool core (true);
    bool game (false);
    char nfm[nbm][50]= {"img/menue.png","img/charac.png"}; //chemin d'accés des images (peut être remplacé par un string) //--> G_BITMAP

    /* ***                  *** */
    /* *** Pointeur Allegro *** */
    /* ***                  *** */
    BITMAP *page; //pointeur sur struct BITMAP specifiques a allegro (permet le gestion des images, pages représente ici un buffer)
    BITMAP *AtFirst[nbm];
    BITMAP *image[nbi]; //tableaux de bitmap qui contiendra les différentes images chargé par le programmes (nbi est définie dans le main.h et rprst le nombre total d'images)

    /* ***                                               *** */
    /* EXEMPLE DE POINTEUR INTELLIGENT AVEC ALLOC DYNAMIQUE  */
    /*boost::shared_ptr <projectiles> ptr(new projectiles);  */   //juste un memo qui traine au sujets d'un pointeur "intelligent" fournie par la librairies boost
    /*ptr->appear();                                         */
    /* ***                                               *** */


    /* ***                     *** */
    /* *** LANCEMENT D ALLEGRO *** */
    /* ***                     *** */ // <-->launch_allegro>
    set_alpha_blender(); // permet de prendre en compte les paramétres alpha d'un png comme une transparence
    allegro_init(); //lancement d'allegro
    install_timer(); //lancement de la clock spécifiques a allegro
    install_keyboard(); //lancement du pilote clavier d'allegro
    register_png_file_type(); //permet d'assimiler le codec png comme un codec bitmap et de l'utilisé dans allegro (plug-in d'allegro 4)
    set_color_depth(desktop_color_depth()); //créer une instance graphique spécifiques a l'harware de l'user

    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,1280,720,0,0)!=0)//detection d'erreur du lancement d'allegro
    {
        allegro_message("prb gfx mode"); //message d'erreur
        allegro_exit(); //fermeture d'allegro
        exit(EXIT_FAILURE); //fermeture du programme
    }

    /* ***                                                          *** */
    /* *** CREATION DES BUFFER ET CHARGEMENT DES IMAGES PRINCIPALES *** */
    /* ***                                                          *** */
    page=create_bitmap(SCREEN_W,SCREEN_H);// création du buffer // </--> launch_allegro> (envoyez page)

    /* bloc de chargement des images a migrer vers G_bitmap */
    for (i=0; i<nbm; i++) // <--> G_BITMAP>
    {

        AtFirst[i]=load_bitmap(nfm[i],NULL);
        cout << "CHARGEEZZZZZZ";

        if (!AtFirst[i])
        {
            allegro_message("pas pu trouver/charger %s", nfm[i]);
            allegro_exit();
            exit(EXIT_FAILURE);
        }
    } // </--> G_BITMAP>
    /*                                                    */


    /* ***                                     *** */
    /* *** ALLOC ET INIT DES CLASS PRINCIPALES *** */
    /* ***                                     *** */

    /* ***               *** */
    /* *** BOUCLE DE JEU *** */
    /* ***               *** */
    while(core)
    {
        LaCarte(&core,&game,page,AtFirst);
        InGame(&game,page,image);
    }
    destroy_all_Menue_bitmap(AtFirst);

    return 0;
}
END_OF_MAIN() //spécifiques a allegro
