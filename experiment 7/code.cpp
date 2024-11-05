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
        bool flag=false;
        for(int i=s.length()-1;i>=0;i--){
            if(flag){
                if(s[i]=='1') s[i]='0';
                else s[i]='1';
            }
            else{
                if(s[i]=='1'){
                    flag=true;
                }
            }
        }
        cout<<"Two's complement of the input string is: "<<s<<endl;
    }
}