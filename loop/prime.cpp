#include<iostream>

using namespace std;
int main(){

    int n ;
    cout<<"enter the number  :";
    cin>>n;
    int i=2;
    while (i<n)
    {
       if(n%i!=0) {
        cout<<"the number is not prime :"<<i<<endl;
       }
      else  if (n%1==0&&n%n==0)
       {
        cout<<"the number is   prime :"<<i<<endl;
       }
       
       i++;
       
    }
     
}