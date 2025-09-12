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

vector<string> Intersection::autresRoutes(Chemin* ariver ) {

    vector<string> routes ;
    for (Chemin* vsn : sorties) {
        if (vsn != nullptr) {
            if (vsn != ariver && vsn->getRoute() != ariver->getRoute() ) {
                routes.push_back(vsn->getRoute()) ;
            }else if (vsn != ariver) {
                routes.push_back(ariver->getRoute()+" suite") ;
            }
        }
    }

    return routes ;
}

string Intersection::indicRoutes() {

    string paneau ;
    
    if (voisin[0] ) {
        paneau += "NORD : "+ sorties[0]->getRoute()+"\n" ;}

    if (voisin[1] ) {
        paneau += "SUD : "+ sorties[1]->getRoute()+"\n" ;}

    if (voisin[2] ) {
        paneau += "EST : "+ sorties[2]->getRoute()+"\n" ;}

    if (voisin[3]) {
        paneau += "OUEST : "+ sorties[3]->getRoute()+"\n" ;}

    return paneau ;
}


string Intersection::ptitDescrip() {

    string result = "Intersection entre les chemins :\n" ;
    result += indicRoutes() ;
    return result ;

}

Intersection::Intersection(Chemin& promu,Chemin* sort[4] ) : Chemin(promu) {

    nom = "Intersection des routes : " ;
    for (int i = 0; i < 4 ; i++  ) {
        sorties[i] = sort[i] ;
        if (sort[i] != nullptr) {
            nom += sort[i]->getRoute()+ " " ;
        }
    }


}

