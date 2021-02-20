#include <bits/stdc++.h>
#define TEST(t) int t; \
                cin>>t; \
                while(t--)

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<llu> vllu;

bool cmp(pair<ll,ll> i, pair<ll,ll> j){

    return (2*i.first+i.second) > (2*j.first+j.second);
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin>>n;

    vector<pair<ll,ll>> tw(n);

    ll va=0, vb=0;

    for(int i=0; i<n; i++){
        cin>>tw[i].first>>tw[i].second;
        va += tw[i].first;
    }

    /*if(vb > va){
        cout<<0<<endl;
        return 0;
    }*/

    sort(tw.begin(), tw.end(), cmp);
    int towns = 0;

    // cerr<<vb<<" "<<va<<endl;

    for(auto i = tw.begin(); i != tw.end(); ++i){
        vb += (i->first + i->second);
        va -= (i->first);
        towns++;
        if(vb > va) {
            break;
        }
    }

    // cerr<<vb<<" "<<va<<endl;

    cout<<towns<<endl;



    return 0;
}

