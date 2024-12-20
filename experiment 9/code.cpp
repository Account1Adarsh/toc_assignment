#include<bits/stdc++.h>
using namespace std;

bool check(string s){

}

int main(){
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a') a++;
        else if(s[i]=='b') b++;
        else c++;
    }
    if(c!=1){
        cout<<"INVALID INPUT"<<endl;
    }
    else{
        string temp;
        int n=s.length();
        if(n%2==0) cout<<"NOT ACCEPTABLE"<<endl;
        else{
            n/=2;
            temp=s.substr(0,n);
            reverse(temp.begin(),temp.end());
            string temp2=s.substr(n+1,n);
            if(temp==temp2){
                cout<<"ACCEPTED"<<endl;
            }
            else{
                cout<<"NOT ACCEPTABLE"<<endl;
            }
        }
    }
    

    return 0;
}