#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    string s;
    cout<<"Enter a binary string"<<endl;
    cin>>s;
    int n=s.length();
    bool flag=false;
    for(int i=0;i<n;i++){
        if(s[i]=='0' or s[i]=='1'){

        }
        else{
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"INVALID STRING"<<endl;
    }
    else{
        int i=0;
        char curr='a';
        while(i<n){
            if(curr=='a'){
                if(s[i]=='1') curr='b';
            }
            else if(curr='b'){
                if(s[i]=='0'){
                    curr='c';
                }
                else{
                    curr='a';
                }
            }
            else{
                if(s[i]=='0') curr='a';
                else curr='b';
            }
            i++;
        }
        if(curr=='a'){
            cout<<"Yes , its correct and acceptable input"<<endl;
        }
        else{
            cout<<"Not acceptable"<<endl;
        }
    }
}
