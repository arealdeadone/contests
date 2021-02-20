#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin>>n;

    ll xf=0, yf=0, zf=0;

    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        xf+=x; yf+=y; zf+=z;
    }

    // cerr<<xf<<" "<<yf<<" "<<zf<<endl;

    ll ans = (xf|yf|zf);

    cout<<(ans?"NO":"YES")<<endl;

    return 0;
}
