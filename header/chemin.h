#include "decor.h"



using namespace std ;

class Chemin : public Case 
{   

protected :
    /* data */
    bool voisin [4] ;
    // les chemins dan les dirrections cardnales
    // NORD-SUD-EST-OUEST
    // je pense que ca peut etre pertienent de faire des pointeurs vers chemin
    string route ;
    // cette string contiens le nom de la route qui est consitée de plusieurs chemins
    // un truc qui serai cool c pour le nom voila ce que j'ai en tete
    // le nom sera "chemin n°X de la route Y"
    // pour avoir le X on le demandera dans le constructeur 
    // si X est a -1 on peut le prendre comme plusieurs cas de figure :
    // le premier c que le chemin est seul et l'autre c ... g oublier


 
public:

    // il lui faut un nom
    //et une description
    Chemin() ;
    // les char vois1 et vois2 sont les directions de ses voisins (NSEO) 
    Chemin (string nomRoute, int posRoute,char vois1 , char vois2) ;

    bool marcherSur () {return true ;}
    ~Chemin() {}
    string ptitDescrip() ;
    string getVoisin () ;
    bool ajoutVoisin(char vois1) ;

    bool ajoutVoisin(string newRoute, char vois1) ;
    string getRoute() {return route ;}


};





