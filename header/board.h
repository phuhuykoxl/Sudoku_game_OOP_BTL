#include <iostream>
using namespace std;
class board
{
private:
    int boardsize;
    int **a;
public:
    board();
    ~board();
    virtual void generator()=0;
    virtual void isSafe()=0;
    virtual void solver()=0;
    void printResult();
};
