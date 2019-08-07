//
// Created by Helga on 2019-08-08.
//

#ifndef CPPTETRIS_PIECES_H
#define CPPTETRIS_PIECES_H


class Pieces
{
public:

    int GetBlockType		(int pPiece, int pRotation, int pX, int pY);
    int GetXInitialPosition (int pPiece, int pRotation);
    int GetYInitialPosition (int pPiece, int pRotation);
};


#endif //CPPTETRIS_PIECES_H
