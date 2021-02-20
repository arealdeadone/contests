
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

bool isDiff(ll n) {

    set<int> d;
    int dlen = 0;
    while(n) {
        int y = n%10;
        d.insert(y);
        dlen++;
        n /= 10;
    }
    return d.size() == dlen;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    ll n;
    cin>>n;
    while(!isDiff(++n));
    cout<<n<<endl;
    return 0;
}
