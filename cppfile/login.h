#pragma once
#include <iostream>
#include <string>
using namespace std;
class login
{
private:
    string username;
public:
    login();
    bool checkLoginInfo();
    void loginScreen();
    void menuScreen();
    string hashFunction();
    ~login();
};
bool login::checkLoginInfo(string name, string pass){
    string username=hashFunction(name);
    string passwork=hashFunction(pass);
    if(            //lay thong tin tu sql len so sanh
)
}
string login::hashFunction(string a){

}
void login::menuScreen(){
    
}
void login::loginScreen(){
    string curUserName;
    string pass;
    int choice;
    do
    {
        cout<<"\nDcm may co tai khoan chua?";
        cout<<"\n1.Tao co roi, cho tao dang nhap";
        cout<<"\n2.Tao chua co, cho dang ky";
        cout<<"\nMoi nhap lua chon: ";
        cin>>choice;
        switch (expression)
        {
        case 1:{
            do
            {
            cout <<"\n\t\t\tNhap cai username cua may di: ";
            cin>>curUserName;
            cout <<"\n\t\t\tThem cai passwork nua: ";
            fflush(stdin);
            cin>>pass;
            } while (true);
            break;
        }
        case 2:
            do
            {
                cout<<"\n\t\t\tNhap username may muon vao day: ";
                cout<<"\n\t\t\tThem cai passwork nua: ";
                cout<<"\n\t\t\tNhap lai de bo may xem m nhap dung khong: ";
                cout<<"\n\t\t\tCho xin them cai email, pls: ";
                cout<<"\n\t\t\tTen hien thi khi may choi: ";
                //luu thong tin da duoc ma hoa va email , ten hien thi khi choi xuong sql
            } while ();
            
        default:
            break;
        }
    } while (choice==1||choice==2);
    
    
}