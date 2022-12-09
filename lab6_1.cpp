#include<iostream>
using namespace std;

int main(){
    int x=0;
    int y=0;
    int number=1;
    while(number != 0){
    cout << "Enter an integer: ";
    cin >>number;
    if(number%2==0){
        x++;
    }else{
        y++;
    }
}
    cout << "#Even numbers = "<<x-1;
    cout << "\n#Odd numbers = "<<y;
    return 0;
}
