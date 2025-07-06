#include<iostream>

using namespace std;

int main(){
    int n;
   cout<<" enter the value of the"<<endl;
    cin>>n;
    int number=0;
    for (int i = 1; i <= n; i++)
    {
        number=i+number;
    }
    cout<<number<<endl;
    
}