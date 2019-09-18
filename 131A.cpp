#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int f=1;
    for(int i=1; i<s.size(); i++)
        if(s[i]>'Z') {
            f=0;
            break;
        }
    if(f) {
        for(int i=0; i<s.size(); i++) {
            if(s[i]<='Z')
                s[i]+=32;
            else
                s[i]-=32;
        }
    }
    cout<<s;
    return 0;

