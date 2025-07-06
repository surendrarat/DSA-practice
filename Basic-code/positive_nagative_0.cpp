#include<iostream>

using namespace std;
int main (){
    int number;
    cout<<"enter the number ";
    cin>>number;
    if(number>0)
    {
        cout<<"the number is positive ";
    }
   else if (number<0)
    {
        cout<<"the number is nagative ";
    }
    if(number==0)
    {
        cout<<"the number is Zero ";
    }
    return 0;

}