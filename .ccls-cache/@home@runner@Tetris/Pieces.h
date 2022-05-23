#ifndef _PIECES_  // if _PIECES_ not defined
#define _PIECES_

class Pieces {
public:
  int BlockType(int pPiece, int pRotation, int pX, int pY);
  int InitPosX(int pPiece, int pRotation);
  int InitPosY(int pPiece, int pRotation);
};

#endif // _PIECES_

int Pieces::BlockType(int pPiece, int pRotation, int pX, int pY) {
/*  Return the type of a block (0 = none, 1 = normal, 2 = pivot).
     
    Arguments:
    - pPiece: Piece to draw
    - pRotation: 1 of the 4 rotations
    - pX: Horizontal position
    - pY: Vertical position
*/
  return mPieces[pPiece][pRotation][pX][pY];
}


int Pieces::InitPosX(int pPiece, int pRotation) {
/*  Return the horizontal displacement needed to create a piece in its correct position.

    Arguments:
    - pPiece: Piece to draw
    - pRotation: 1 of the 4 possible rotations
*/
  return mInitPos [pPiece][pRotation][0];
}

int Pieces::InitPosY (int pPiece, int pRotation) {
/*  Return the vertical displacement needed to create a piece in its correct position.

    Arguments:
    - pPiece: Piece to draw
    - pRotation: 1 of the 4 possible rotations
*/
  return mInitPos [pPiece][pRotation][1];
}