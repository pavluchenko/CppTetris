//
// Created by Helga on 2019-08-08.
//

#ifndef CPPTETRIS_PIECES_H
#define CPPTETRIS_PIECES_H


class pieces
{
public:

    int getBlockType		(int pPiece, int pRotation, int pX, int pY);
    int getXInitialPosition (int pPiece, int pRotation);
    int getYInitialPosition (int pPiece, int pRotation);
};


#endif //CPPTETRIS_PIECES_H
