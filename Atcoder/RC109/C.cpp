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

    map<string, bool> sp;
    vector<string> ss(n);

    for(int i=0; i<n; i++){
        cin>>ss[i];
        sp[ss[i]] = true;
    }

    bool sat = true;
    string ps;

    for(int i=0; i<n; i++){
        if(ss[i].front() != '!') {
            string also = "!"+ss[i];
            if(sp.find(also) != sp.end()){
                
                ps = ss[i];
                sat = false;
                break;

            }
        }
    }

    cout<<(sat ? "satisfiable" : ps)<<endl;

    return 0;
}
