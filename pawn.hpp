#ifndef PAWN_HPP
#define PAWN_HPP

//#include "chessBoardHeader.h"

void board::getPawnMoves(int& row, int& col, vector<string>& allMoves){
    allMoves.push_back("pawn");
}

bool isEnPassantPossible(vector<string>& pawnMoves, string lastMove, int& row, int& col){
    return false;
}

#endif
