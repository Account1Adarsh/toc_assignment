#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    int n=s.length();
    int extra=0;

    for(int i=0;i<n;i++){
        if(s[i]=='a') a++;
        else if(s[i]=='b') b++;
        else if(s[i]=='c') c++;
        else extra++;
    }
    if(extra) cout<<"INVALID INPUT"<<endl;
    else if(a!=b or b!=c or a!=c or n%3!=0){
        cout<<"NOT ACCEPTED"<<endl;
    }
    else{
        int check=0;
        if(s[0]!='a'){
            if(a==0 and b==0 and c==0) cout<<"ACCEPTED"<<endl;
            else cout<<"NOT ACCEPTED"<<endl;
        }
        else if(a==b and b==c and c==a){
            a--;
            for(int i=1;i<n;i++){
                if(s[i]==s[i-1]){
                    if(check==0) a--;
                    else if(check==1) b--;
                    else c--;
                }
                else{
                    check++;
                    if(check==1 and s[i]=='b') b--;
                    else if(check==2 and s[i]=='c')c--;
                    else break;
                }
            }
            if(a==0 and b==0 and c==0){
                cout<<"ACCEPTED"<<endl;
            }
            else cout<<"NOT ACCEPTED"<<endl;
        }
        else cout<<"NOT ACCEPTED"<<endl;
        
    }
    return  0;
}