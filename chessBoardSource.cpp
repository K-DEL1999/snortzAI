#include "chessBoardHeader.h"
#include "pawn.hpp"
#include "knight.hpp"
#include "bishop.hpp"
#include "queen.hpp"
#include "king.hpp"
#include "rook.hpp"

/*
    make function that gets input from user
    belongs in main
*/

bool inCheck(){
    // check if whoevers turn it is king's is being attacked by a ...
    // rook, bishop, queen, pawn or knight
    // you do not have to seperately check rook bishop and queen
    // when mimicking queen attach pattern from king position...
    // check bishop of diagnols, and rooks on horizontal/vertical lines
    // same for pawns
    return true;
}
bool canKingSideCastle(){return true;}
bool canQueenSideCastle(){return true;}
bool inCheckMate(){return false;}

vector<string> board::getAllMoves(){
    vector<string> allMoves = {};
    
    for (int r = 0; r < this->rows; r++){
        for (int c = 0; c < this->columns; c++){
            if (this->chessBoard[r][c][1] == 'P'){
                this->getPawnMoves(r,c,allMoves);
            }
            else if (this->chessBoard[r][c][1] == 'R'){
                this->getRookMoves(r,c,allMoves);
            }
            else if (this->chessBoard[r][c][1] == 'B'){
                this->getBishopMoves(r,c,allMoves);
            }
            else if (this->chessBoard[r][c][1] == 'K'){
                this->getKingMoves(r,c,allMoves);
            }
            else if (this->chessBoard[r][c][1] == 'Q'){
                this->getQueenMoves(r,c,allMoves);
            }
            else if (this->chessBoard[r][c][1] == 'N'){
                this->getKnightMoves(r,c,allMoves);
            }
        }
    }

    return allMoves;
}


bool board::checkIfMoveIsLegal(vector<int>& start, vector<int>& end){
    return true;
}

string board::convertToChessNotation(vector<string>& start, vector<string>& end){
    return string(start[0],1) + start[1] + "-" + end[0] + end[1];
}

string board::lastMove(){
    if(this->moves.size() == 0){
        return "";
    }
    return this->moves.back(); 
}

int main(){
    board b;
    vector<string> moves = b.getAllMoves();

    for (int i = 0; i < moves.size(); i++){
        cout << moves[i] << "\n";        
    }

    return 0;
}
