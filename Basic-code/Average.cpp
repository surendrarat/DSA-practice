#include<iostream>

using namespace std;
 
int main (){
    int no;
    cout<<"enter the vlaue the of numbers"<<endl;
    cin>>no;
    float total=0;
    int number;

    for(int i=no; i>0; i--){
        cout<<"enter the numbe"<<endl;
        cin>>number;
        total=number+total;
    }
    cout<<"the total value is " <<endl;
    cout<<total/no<<endl;
}

