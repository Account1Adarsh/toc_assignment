#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"Divisible by 2"<<endl;
    }
    else{
        cout<<"Not Divisible by 2"<<endl;
    }
    return 0;
}