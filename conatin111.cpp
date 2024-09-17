//binary string conating substring "111"

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Yougraj sir please enter a binary string : "<<endl;
    cin>>s;
    int zero=0;
    int one=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='0') zero++;
        if(s[i]=='1') one++;
    }
    if(zero+one==n){
        int count=0;
        int mx=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count++;
                mx=max(count,mx);
            }
            else count=0;
        }
        if(mx>=3){
            cout<<"valid input"<<endl;
        }
        else cout<<"No consecutive 1s "<<endl;
    }
    else{
        cout<<"Enter a valid binary string"<<endl;
    }

    return 0;
}
