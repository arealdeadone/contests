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

    int a,b;
    cin>>a>>b;

    int sa=0,sb=0;

    while(a){
        sa += (a%10);
        a /= 10;
    }

    while(b) {
        sb += (b%10);
        b /= 10;
    }

    cout<<max(sa,sb)<<endl;

    return 0;
}
