#include "../header/intersection.h"


string Intersection::indicRoutes (Chemin* origine) {

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

vector<string> Intersection::autresRoutes(string rte ) {

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


