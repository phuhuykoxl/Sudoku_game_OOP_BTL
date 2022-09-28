#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
class board
{
protected:
    int **matrix;
    int N; // size of matrix
    int SRN;//sqrt of N
    int K; // num of remove cell
public:
    board();
    ~board();
    void copyBoard(int **a);
    int randomGenerator(int num);
    void fillValues();
    //virtual void generator()=0;
    bool isSafe(int **matrix, int row,int col, int num);
    //virtual void solver()=0;
    bool fillRemaining(int i, int j);
    void fillDiagonal();
    void fillBox(int row, int col);
    void removeKDigits();
    void printResult();
};

