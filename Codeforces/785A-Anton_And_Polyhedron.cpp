#include <iostream>
using namespace std;
int main(){
    int tt; 
    cin >> tt;
    int ans(0);
    while(tt--){
        string s;
        cin >> s;
        if(s[i]=='T')ans+=4;
        if(s[i]=='C')ans+=6;
        if(s[i]=='O')ans+=8;
        if(s[i]=='D')ans+=12;
        if(s[i]=='I')ans+=20;
    }
    cout << ans;
    return 0;
}