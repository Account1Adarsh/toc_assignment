#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the string: "<<endl;
    string s;
    cin>>s;
    int z=0;
    int two=0;
    int extra=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0') z++;
        else if(s[i]=='1') two++;
        else extra++;
    }
    if(extra){
        cout<<"Invalid input "<<endl;
    }
    else{
        cout<<"Number of zeros are: "<<z<<endl;
        cout<<"Number of ones are: "<<two<<endl;
    }
}
