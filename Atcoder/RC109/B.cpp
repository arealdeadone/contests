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


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin>>n;

    vector<double> x(n), y(n);

    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }

    long ans = 0;

    for(int i=0; i<n; i++){
        for(int j=(i+1); j<n; j++) {
            double slope = (y[j]-y[i])/(x[j]-x[i]);
            ans += (slope >= -1 && slope <= 1)? 1 : 0;
        }
    }

    cout<<ans<<endl;


    return 0;
}
