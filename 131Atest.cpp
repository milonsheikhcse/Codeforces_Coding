#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
printf("%d", 'z');

    //if(s[0]>=97 && s[0]<=122) s[0]=s[0]-32;
    for(int i=1; i<s.size(); i++) {
        if((s[0]>=92 && s[0]<=122)&& s[i]<=92) {
            s[i]=s[i]+32;
        }
    }

    cout <<s <<endl;


    return 0;
}
