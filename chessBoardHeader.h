#ifndef CHESS_BOARD_HEADER_H
#define CHESS_BOARD_HEADER_H
#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;

class board {
    public:
        bool whoseTurn = 1;
        vector<string> moves;
        int rows = 8;
        int columns = 8;
        vector<vector<string>> chessBoard = {
            {"bR","bN","bB","bQ","bK","bB","bN","bR"},
            {"bP","bP","bP","bP","bP","bP","bP","bP"},
            {"ES","ES","ES","ES","ES","ES","ES","ES"},
            {"ES","ES","ES","ES","ES","ES","ES","ES"},
            {"ES","ES","ES","ES","ES","ES","ES","ES"},
            {"ES","ES","ES","ES","ES","ES","ES","ES"},
            {"wP","wP","wP","wP","wP","wP","wP","wP"},
            {"wR","wN","wB","wQ","wK","wB","wN","wR"}
        };
        bool inCheck();
        bool canKingSideCastle();
        bool canQueenSideCastle();
        bool inCheckMate();

        vector<string> getAllMoves();
        void getRookMoves(int& r, int& c, vector<string>& allMoves);
        void getBishopMoves(int& r, int& c, vector<string>& allMoves);
        void getKnightMoves(int& r, int& c, vector<string>& allMoves);
        void getQueenMoves(int& r, int& c, vector<string>& allMoves);
        void getKingMoves(int& r, int& c, vector<string>& allMoves);
        void getPawnMoves(int& r, int& c, vector<string>& allMoves);

        bool isEnPassantPossible(vector<string>& pawnMoves, string lastMove, int& row, int& col);
        bool checkIfMoveIsLegal(vector<int>& start, vector<int>& end);
        string convertToChessNotation(vector<string>& start, vector<string>& end);
        string lastMove();

        string snortzAI(vector<int> moves);
};

#endif
