//
// Created by Helga on 2019-08-08.
//

#include "game.h"


Game::Game(Board *pBoard, Pieces *pPieces, int pScreenHeight, IO* pIO) {
    mScreenHeight = pScreenHeight;
    mBoard = pBoard;
    mPieces = pPieces;
    mIO = pIO;
    initGame();
}

void Game::initGame() {
    // Init random numbers
    srand ((unsigned int) time(NULL));

    // First piece
    mPiece			= getRand (0, 6);
    mRotation		= getRand (0, 3);
    mPosX 			= (BOARD_WIDTH / 2) + mPieces->getXInitialPosition (mPiece, mRotation);
    mPosY 			= mPieces->getYInitialPosition (mPiece, mRotation);

    //  Next piece
    mNextPiece 		= getRand (0, 6);
    mNextRotation 	= getRand (0, 3);
    mNextPosX 		= BOARD_WIDTH + 5;
    mNextPosY 		= 5;
}

int Game::getRand (int pA, int pB) {
    return rand () % (pB - pA + 1) + pA;
}


void Game::drawScene () {

}

void Game::drawBoard () {

}

