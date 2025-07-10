#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the vlaue of n : ";
    cin>>n;
    // int i=1;
    // int sum=0;
    // while (i<=n)
    // {
    //    sum=sum+i;
    //    i=i+1;

    // }
    // cout<<sum<<endl;

    // find the sum of n even number
   
    int i=2;
    int sum=0;
    while (i<=n)
    {
       sum=sum+i;
       i=i+2;
    }
    cout<<"the vlaue is "<<sum;
}

