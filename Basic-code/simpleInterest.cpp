#include<iostream>
using namespace std;

int main (){
    int value;
    float time;
    float rate;
    cout<<"enter the value ";
    cin>>value;
    cout<<"enter the Time ";
    cin>>time;
    cout<<"enter the rate ";
    cin>>rate;

    float Interst=(value*time*rate)/100;
    cout<<Interst<<endl;
    return 0;
}