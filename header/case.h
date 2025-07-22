

#include <string.h>

using namespace std ;


class  Case  {


private:
    /* data */

protected:
    
    string nom ;
    string description ;

public :
    Case(/* args */){} ;
    ~Case() {}
    virtual bool marcherSur() {return false ;}


};



