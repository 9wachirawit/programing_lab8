#include <iostream>
#include <string>
using namespace std;

int main(){
int age,height,bounty;
string character;
cout << "Enter your age: ";
cin >> age;
if(height <= 25){
    cout << "\nEnter your height: ";
    cin >> height;
    if(height < 100){
    character = "Chopper";
    }else if (height < 180){
    character = "Usopp";
    }
    cout << "\nEnter your bounty: ";
    cin >> bounty;
    if(bounty > 1100000000){
    character = "Zoro";
    }else{
    character = "Sanji";
    }
}else if (age<60)
{
    cout << "\nEnter your bounty: ";
    cin >> bounty;
    if (bounty > 500000000)
    {
        character = "Jimbe";
    }else{
        character = "Franky";
    }
}else{
    character = "Brook";
}
cout <<"Your character = " << character;
}




/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
