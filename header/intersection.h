#include "chemin.h"

class Intersection : public Chemin {


public :

    Intersection(string nomR, int pos, char vois1, char vois2,Chemin* sort[4]) : Chemin(nomR, pos, vois1, vois2){
        for (int i = 0; i < 4 ; i++  ) {
            sorties[i] = sort[i] ;
        }

    }


    // 
    string indicRoutes () {

        string paneau = getRoute() + "\n" ;

        if (voisin[0]) {
            paneau += "NORD : "+ sorties[0]->getRoute() ;}

        if (voisin[1]) {
            paneau += "SUD : "+ sorties[0]->getRoute() ;}

        if (voisin[2]) {
            paneau += "EST : "+ sorties[0]->getRoute() ;}

        if (voisin[3]) {
            paneau += "OUEST : "+ sorties[0]->getRoute() ;}

    } 

private :

    Chemin* sorties[4] ; 


} ;






