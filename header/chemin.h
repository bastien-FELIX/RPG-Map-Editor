#include "decor.h"



using namespace std ;

class Chemin : Case 
{   

private:
    /* data */

public:
    string objet ;
    Chemin(){}
    Chemin(int voisins) {
    }
    bool marcherSur () {return true ;}
    ~Chemin() {}
    string ptitDescrip() {
        return nom + "\n"+ description + " ";
    }


};





