

#include <string.h>

using namespace std ;


class  Case  {


private:
    /* data */

public:
    
    string nom ;
    string description ;
    virtual bool marcherSur() {return false ;}

protected :
    Case(/* args */);
    ~Case();


};



