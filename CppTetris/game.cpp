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

void Game::createNewPiece() {
    mPiece			= mNextPiece;
    mRotation		= mNextRotation;
    mPosX 			= (BOARD_WIDTH / 2) + mPieces->getXInitialPosition (mPiece, mRotation);
    mPosY 			= mPieces->getYInitialPosition (mPiece, mRotation);

    // Random next piece
    mNextPiece 		= getRand (0, 6);
    mNextRotation 	= getRand (0, 3);
}

void Game::drawPiece(int pX, int pY, int pPiece, int pRotation) {
    color mColor;				// Color of the block

    int mPixelsX = mBoard->getXPosInPixels (pX);
    int mPixelsY = mBoard->getYPosInPixels (pY);

    for (int i = 0; i < PIECE_BLOCKS; i++) {
        for (int j = 0; j < PIECE_BLOCKS; j++) {
            switch (mPieces->getBlockType (pPiece, pRotation, j, i)) {
            case 1: mColor = GREEN; break;	// For each block of the piece except the pivot
            case 2: mColor = BLUE; break;	// For the pivot
            }
        }
    }

}

void Game::drawScene () {

}

void Game::drawBoard () {
    int mX1 = BOARD_POSITION - (BLOCK_SIZE * (BOARD_WIDTH / 2)) - 1;
        int mX2 = BOARD_POSITION + (BLOCK_SIZE * (BOARD_WIDTH / 2));
        int mY = mScreenHeight - (BLOCK_SIZE * BOARD_HEIGHT);
}

