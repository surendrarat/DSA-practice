#include<iostream>
using namespace std;

int main(){
   
    int n;
    cout<<"enter the size of rows" <<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
     int j=1;
     while (j<=n)
     {
        cout<<i<<" ";
        j++;
     }
     cout<<endl;
     i++;
    }
    
}