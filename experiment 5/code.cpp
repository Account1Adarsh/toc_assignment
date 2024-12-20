#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the string: "<<endl;
    string s;
    cin>>s;
    int z=0;
    int one=0;
    int extra=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0') z++;
        else if(s[i]=='1') one++;
        else extra++;
    }
    if(extra){
        cout<<"Invalid input "<<endl;
    }
    else{
        if(one==z) cout<<"Acceptable "<<endl;
        else cout<<"Not acceptable "<<endl;
    }
}