//
// Created by Helga on 2019-08-08.
//

#ifndef CPPTETRIS_GAME_H
#define CPPTETRIS_GAME_H
#include "board.h"
#include "pieces.h"
#include <time.h>

#define WAIT_TIME 700           // Number of milliseconds that the piece remains before going 1 block down */

class Game {
public:
    Game (Board *pBoard, Pieces *pPieces, int pScreenHeight);
    
    void drawScene ();
    void createNewPiece ();
    
    int mPosX, mPosY;
    int mPiece, mRotation;
};


#endif //CPPTETRIS_GAME_H
