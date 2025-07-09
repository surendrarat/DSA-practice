#include<iostream>

using namespace std;

int main (){
    char ch;
    cout<<"enter the any charecter\n";
    cin>>ch;


    if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
       cout<<"the element is alphabet\n";
    }

    else if (ch>='0' && ch<= '9')
    {
        cout<<"the element is digits \n";
    }
    else {
        cout<<"enter element is special charecter";
    }
    
    
}