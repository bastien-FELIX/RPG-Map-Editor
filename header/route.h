#include "intersection.h"


class Route
{

private:

    vector<Chemin*> laRoute ;
    /* data */
public:

    
    void ajouterChem(Chemin* leChem, int position, char direction) ; // le int c 1ou -1 je voulais faire un shortInt mais g pas trouver le char c NSEO pour tourner
    void retirerChem (int pos) ; // ici pareil on peut pas mettre ou enlever de chemins n'importe ou on peut que au debut ou a la fin 
    void promouvoir(int pos) ;
    void promouvoir(Chemin* leReuxElu) ; 
    Route(/* args */);
    Route(string nom) ;
    ~Route();

};




