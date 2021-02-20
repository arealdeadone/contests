#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int ans=0;

    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++) {
            int a; cin>>a;
            if(a) {
                ans = (abs(i-2)+abs(j-2));
            }
        }
    cout<<ans<<endl;

    return 0;
}
