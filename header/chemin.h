#include "decor.h"



using namespace std ;

class Chemin : Case 
{   

private:
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
    Chemin(){

        nom = "un chemin sans nom e ne faisant partie d'aucune route..." ;

        for (bool voi : voisin) {
            voi = false ;
        }
        description = "un petit bout de chemin isolé, éseulé, rejeté :,( " ;
        route = "" ;
}
    // les char vois1 et vois2 sont les directions de ses voisins (NSEO) 
    Chemin (string nomRoute, int posRoute,char vois1 , char vois2) {

        route = nomRoute ;
        nom = "cheminn N°" + posRoute ;
        nom +=  " de la route : " +route ;

        if (vois1 == 'N' || vois2 == 'N') { voisin[0] = true ; }else {voisin[0] = false; }
        if (vois1 == 'S' || vois2 == 'S') { voisin[1] = true ; }else {voisin[1] = false; }
        if (vois1 == 'E' || vois2 == 'E') { voisin[2] = true ; }else {voisin[2] = false; }
        if (vois1 == 'O' || vois2 == 'O') { voisin[3] = true ; }else {voisin[3] = false; }

        description = "un chemin de la route "+ route ;

    }

    bool marcherSur () {return true ;}
    ~Chemin() {}
    string ptitDescrip() {

        string voiVoisins = "chemin avec des voisins : ";
        bool vsn ;

        if (voisin[0]) {
            voiVoisins += "au Nord - " ;
            vsn = true ;
        }

        if (voisin[1]) {
            voiVoisins += "au Sud - " ;
            vsn = true ;
        }

        if (voisin[2]) {
            voiVoisins += "a l'Est - " ;
            vsn = true ;
        }

        if (voisin[3]) {
            voiVoisins += "a l'Ouest - " ;
            vsn = true ;
        }

        if (vsn ) {
            return  voiVoisins ;
        }else {
            return "un petit bout de chemin isolé, éseulé, rejeté :,( " ;
        }
        

    }
    string getVoisin () {
        string value ;

        if (voisin[0]) {
            value += "N" ;
        }

        if (voisin[1]) {
            value += "S" ;
        }

        if (voisin[2]) {
            value += "E" ;
        }

        if (voisin[3]) {
            value += "O" ;
        }

        return value ;
    }
    bool ajoutVoisin(char vois1) {
        
        bool un = false ;
        for (bool truc : voisin) {
            if (truc && !un) {
                un = true ;
            }else if (truc && un) {
                return false ;
            }
        }

        if (vois1 == 'N' ) { voisin[0] = true ; return true; } 
        if (vois1 == 'S' ) { voisin[1] = true ; return true; } 
        if (vois1 == 'E' ) { voisin[2] = true ; return true; } 
        if (vois1 == 'O' ) { voisin[3] = true ; return true; } 
        return NULL ;

    }

    bool ajoutVoisin(string newRoute, char vois1) {
        route = newRoute ;
        if (vois1 == 'N' ) { voisin[0] = true ; return true; }
        if (vois1 == 'S' ) { voisin[1] = true ; return true; }
        if (vois1 == 'E' ) { voisin[2] = true ; return true; }  
        if (vois1 == 'O' ) { voisin[3] = true ; return true; }
        return false ;

    }

};





