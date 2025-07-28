

#include "case.h"
#include <iostream> 
using namespace std ;

class Decor : public Case 
{   


private:
    /* data */

public:

    Decor(){}
    Decor(string typeDec) {
        nom = typeDec ;
        description = "c un decor de "+typeDec ;
    }
    bool marcherSur () {return false ;}
    ~Decor() {}
    string ptitDescrip() {
        return nom + "\n"+ description + " ";
    }


};
