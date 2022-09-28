#include "player.h"
bool player::isDone(){
    if(count==K)
        return true;
    else
        return false;
}
void player::fillIn(){
    int row,col,val;
    do
    {
        system("cls");
        cout <<"\nNhap vao vi tri ban muon dien (hang cot): ";
        cin>>row>>col;
        cout<<"\nNhap gia tri can dien: ";
        cin >>val;
        if(isSafe(fillBoard,row,col,num)){
            fillBoard[row][col]=val;
            count ++;
        }
    } while (x<=0||x>9||y<=0||y>9||isSafe(fillBoard,row,col,val));
}
player::player()
{
    count =0;
    fillBoard=new int*[N];
    for (int i = 0; i < N; i++)
    {
        fillBoard[i]= new int[N];
        memset(fillBoard[i],0,N*sizeof(int));
    }
    copyBoard(fillBoard);
}

player::~player()
{
}
