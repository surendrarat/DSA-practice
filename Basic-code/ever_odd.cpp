#include<iostream>
using namespace std;

int main(){
    int number ;
    cout<<"enter the number ";
    cin>>number;
    if(number%2==0 &&number!=0)
    cout<<"the number is ever";
    else if(number==0){
        cout<<"the value of number is 0"<<endl;
    }
    else{
        cout<<"the number is odd"<<endl;
    }
    return 0;
}