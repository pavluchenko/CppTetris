//
// Created by Helga on 2019-08-08.
//

#ifndef CPPTETRIS_BOARD_H
#define CPPTETRIS_BOARD_H

#include "pieces.h"
#include <QBasicTimer>
#include <QFrame>
#include <QPointer>

#define BOARD_LINE_WIDTH 6			// Width of each of the two lines that delimit the board
#define BLOCK_SIZE 16				// Width and Height of each block of a piece
#define BOARD_POSITION 320			// Center position of the board from the left of the screen
#define BOARD_WIDTH 10				// Board width in blocks
#define BOARD_HEIGHT 20				// Board height in blocks
#define MIN_VERTICAL_MARGIN 20		// Minimum vertical margin for the board limit
#define MIN_HORIZONTAL_MARGIN 20	// Minimum horizontal margin for the board limit
#define PIECE_BLOCKS 5				// Number of horizontal and vertical blocks of a matrix piece

class Board : public QFrame {

public:

    Board						(Pieces *pPieces, int pScreenHeight);
    Board                       (QWidget *parent = nullptr);

    int getXPosInPixels			(int pPos);
    int getYPosInPixels			(int pPos);
    bool isFreeBlock			(int pX, int pY);
    bool isPossibleMovement		(int pX, int pY, int pPiece, int pRotation);
    void storePiece				(int pX, int pY, int pPiece, int pRotation);
    void deletePossibleLines	();
    bool isGameOver				();

private:

    enum { POS_FREE, POS_FILLED };			// POS_FREE = free position of the board; POS_FILLED = filled position of the board
    int mBoard [BOARD_WIDTH][BOARD_HEIGHT];	// Board that contains the pieces
    Pieces *mPieces;
    int mScreenHeight;

    void initBoard();
    void deleteLine (int pY);

};


#endif //CPPTETRIS_BOARD_H
