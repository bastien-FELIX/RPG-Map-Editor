

/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Example complexity rating: [★☆☆☆] 1/4
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute 'raylib_compile_execute' script
*   Note that compiled executable is placed in the same folder as .c file
*
*   To test the examples on Web, press F6 and execute 'raylib_compile_execute_web' script
*   Web version of the program is generated in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2025 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

//#include "src/test.cpp"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------

#include <iostream> 
#include "header/intersection.h"

using namespace std ;

int main(void) {

    //test();
    Decor foret ("foret");
    cout << foret.ptitDescrip() << endl ;
    Chemin unPtitCheminEsseuler ("route de nullepart",1, 'N', 'P') ;
    cout << unPtitCheminEsseuler.ptitDescrip() << endl ;
    Chemin unCheminrelou ("route de par ici",3, 'O', 'P') ;
    Chemin* voisinsInter[4] = {nullptr,&unPtitCheminEsseuler,&unCheminrelou,nullptr} ;
    Intersection zeitoun ("route de nullepart",2, 'S','E', voisinsInter ) ;

    cout << "descip" << endl ;
    cout << zeitoun.ptitDescrip() << endl  ;
    cout << "version panneau" << endl ;
    cout << zeitoun.indicRoutes(&unCheminrelou) ;
    vector<string> test = zeitoun.autresRoutes("route de nullepart") ;

    // c pour peut etre faire des coordonées en 1 float plutot que 2 int
    cout << ((int) 13.60)+1 ;

    return 0;
}



