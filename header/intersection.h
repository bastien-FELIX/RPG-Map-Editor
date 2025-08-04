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
    string indicRoutes (Chemin* origine) ;

    vector<string> autresRoutes(string rte ) ; 

private :

    Chemin* sorties[4] ; 


} ;






