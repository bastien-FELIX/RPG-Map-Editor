#include "intersection.h"


class Route
{

private:

    vector<Chemin*> laRoute ;
    int len ;
    /* data */
public:


    void ajouterChem(Chemin* leChem, int position, char direction) ; // le int c 1 ou len le char c NSEO pour tourner
    void retirerChem (int pos) ; // ici pareil on peut pas mettre ou enlever de chemins n'importe ou on peut que au debut ou a la fin 
    vector<Chemin*> couperRoute(int pos, int dir) ; // donc en gros la on va prendre la route a la pos donnée et on va garder que ceux ans la dir donnée
    // ceux qu'on va les retourner en leur metant une nouvelle route qui sera un nom en mode ancienement route de truc

    void promouvoir(int pos) ;
    void promouvoir(Chemin* leReuxElu) ; 
    
    Route(/* args */);
    Route(string nom) ;
    ~Route();

    int length() {return len ;}
    Chemin* debut () ;
    Chemin* fin () ;

};




