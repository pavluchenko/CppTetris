//
// Created by Helga on 2019-08-08.
//

#ifndef CPPTETRIS_GAME_H
#define CPPTETRIS_GAME_H
#include "board.h"
#include "io.h"
#include "pieces.h"
#include <time.h>

#define WAIT_TIME 700           // Number of milliseconds that the piece remains before going 1 block down */

class Game {
public:
    Game (Board *pBoard, Pieces *pPieces, int pScreenHeight, IO *mIO);
    
    void drawScene ();
    void createNewPiece ();
    
    int mPosX, mPosY;
    int mPiece, mRotation;

private:
    int mScreenHeight;				// Screen height in pixels
    int mNextPosX, mNextPosY;		// Position of the next piece
    int mNextPiece, mNextRotation;	// Kind and rotation of the next piece

    Board *mBoard;
    Pieces *mPieces;
    IO *mIO;

    int getRand (int pA, int pB);
    void initGame();
    void drawPiece (int pX, int pY, int pPiece, int pRotation);
    void drawBoard ();
};


#endif //CPPTETRIS_GAME_H
