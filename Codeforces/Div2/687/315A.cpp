#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;

    vector<pair<int,int>> ab(n);
    pair<int,int> bot;

    for(int i=0; i<n; i++){
        cin>>bot.first>>bot.second;
        ab[i] = bot;
    }

    int ans = n;

    // for(int i=0; i<n; i++) cerr<<"("<<ab[i].first<<", "<<ab[i].second<<") ";
    // cerr<<endl;
    // cerr<<"Ans currently = "<<ans<<endl;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i != j && ab[i].first == ab[j].second){
                ans--;
                break;
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}
