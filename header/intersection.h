#include "chemin.h"
#include <vector>

using namespace std ;

class Intersection : public Chemin {


public :

    Intersection(string nomR, int pos, char vois1, char vois2,Chemin* sort[4]) : Chemin(nomR, pos, vois1, vois2){
        for (int i = 0; i < 4 ; i++  ) {
            sorties[i] = sort[i] ;
        }

    }


    // on va prendre le chemin duquel on arrive pour pas le proposer 
    // si on vient pas d'un chemin on met un nullptr 
    string indicRoutes (Chemin* origine) {

        string paneau = "vous etes sur la route : "+ origine->getRoute() + "\n" ;
        paneau += "voici les directions possibles \n" ;

        if (voisin[0] && sorties[0] != origine && origine != nullptr) {
            paneau += "NORD : "+ sorties[0]->getRoute()+"\n" ;}

        if (voisin[1] && sorties[1] != origine && origine != nullptr) {
            paneau += "SUD : "+ sorties[1]->getRoute()+"\n" ;}

        if (voisin[2] && sorties[2] != origine && origine != nullptr) {
            paneau += "EST : "+ sorties[2]->getRoute()+"\n" ;}

        if (voisin[3] && sorties[3] != origine && origine != nullptr) {
            paneau += "OUEST : "+ sorties[3]->getRoute()+"\n" ;}

        return paneau ;
    } 


    vector<string> autresRoutes(string rte ) {

        vector<string> routes ;
        for (Chemin* vsn : sorties) {
            if (vsn != nullptr) {
                if (vsn->getRoute() != rte) {
                    routes.push_back(vsn->getRoute()) ;
                }
            }
        }

        return routes ;
    }

private :

    Chemin* sorties[4] ; 


} ;






