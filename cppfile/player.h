#include "board.cpp"
class player:public board
{
private:
    int **fillBoard;
    int count;
public:
    bool isDone();
    void fillIn();
    player();
    ~player();
};
