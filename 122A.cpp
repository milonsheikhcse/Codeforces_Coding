///AC

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;
    /// 47 74 777 774 747

    if((n%4==0) || (n%7==0) || (n%47==0) || (n%774==0) || (n%744==0) || (n%447==0)|| n%474==0 || n%447==0 || n%477==0) {
        cout << "YES" << endl;
    } else
        cout << "NO" << endl;



    return 0;
}
