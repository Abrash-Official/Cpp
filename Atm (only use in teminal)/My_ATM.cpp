#include<iostream>
using namespace std;
int main(){
    // Data
    int rpin=7896;
    int balance=50000;
    //  WelCome
    cout<<"Hi!Welcome to our Atm"<<endl;
    // Pin
    int pin;
    cout<<"Sir! please enter your pin here: ";
    cin>>pin;
    if(pin==rpin){
        // Welcome
        string input;
        cout<<"Welcome Sir!Select one of these options below\n 1:Cash Withdraw \n 2:Fast Cash \n 3:Check Cash \n 4:Cancle \n Your option= ";
        cin>>input;
        // Press 1
        if(input=="1" or input =="Cash Withdraw"){
            int amount;
            cout<<"Min-Amount=500    Max-amount=20000 \nEnter A amount that multiple of 500: ";
            cin>>amount;
            if (amount % 500 == 0  and amount>499 and amount< 20001){
                cout<<"Thank You Sir! Here your cash"<< endl;
                cout<<"Your Current Balance is: "<<balance-amount;
            }
            else{
                cout<<"Sir please Enter your Amount which can easily multiply with 500";
            }
        }
        // Press 2
        if(input=="2" or input =="Fast Cash"){
            int fcash;
            cout<<"1:500        2:1000 \n3:2000       4:3000 \n5:4000       6:5000 \nPress 1,2,3,4,5,6 to withdraw cash: ";
            cin>>fcash;
            if (fcash>0 and fcash<7){
                cout<<"Thank You Sir! Here your cash"<<endl;
                cout<<"Your Current Balance is: "<<balance-fcash;
            }
            else{
                cout<<"Invalid Option";
            }
        }
        // Press 3
        if(input=="3" or input =="Check Cash"){
            cout<<"Your Balance is: ";
            cout<<balance;
        }
        //  Press 4
        if(input=="4" or input =="Cancle"){
            cout<<"Thank You! for visiting our Branch.I hope we will meet again Again Soon.";
        }
    }
    else{
        cout<<"Invalid Option";
    }
}