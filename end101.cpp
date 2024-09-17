// binary string ending with "101"

#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        cout<<"Enter a binary string"<<endl;
        string s;
        cin>>s;
        
        int n=s.length();
        if(n>=3){
            if(s[n-1]=='1' and s[n-2]=='0' and s[n-3]=='1'){
            cout<<"accepted string "<<endl;
            break;
        }
        else{
            int z=0;
            int one=0;
            for(int i=0;i<n;i++){
                if(s[i]=='1') one++;
                else if(s[i]=='0') z++;
            }
            if(z+one==n){
                cout<<"String not accepted"<<endl;
            }
            else cout<<"invalid string"<<endl;
            }
        }
        
        
        cout<<"want to again enter input 1 for yes 0 for no"<<endl;
        bool flag;
        cin>>flag;
        if(!flag) break;
        
    }
    return 0;
}
