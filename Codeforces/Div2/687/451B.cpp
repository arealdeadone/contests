#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    
    vector<int> v(n);

    for(int i=0; i<n; i++) cin>>v[i];

    int ss=-1, es=-1, cnt=0, s=-1, e=-1;
    bool poss = true;

    for(int i=0; i<n; i++) {
        if(i<n-1 && v[i] > v[i+1]){
            ss = i;
        }

        while( i<n-1 && v[i] > v[i+1]){
            // cerr<<v[i]<<" "<<v[i+1]<<" "<<i<<endl;
            i++;
            // cerr<<i<<endl;
        }

        if(ss > -1) {
            es = i;
            cnt += (int)(ss != es);
            if(cnt > 1 || (es+1 < n && v[ss] > v[es+1]) || (ss-1 > -1 && v[es] < v[ss-1])){
                poss = false;
                break;
            }
            s = ss; e = es;
            ss = es = -1;
        }
    }

    // cerr<<"[ss]="<<s<<" [ss-1]="<<(s-1)<<" [es]="<<e<<" [es+1]="<<(e+1)<<" [cnt]="<<cnt<<endl;

    if(!cnt) cout<<"yes"<<endl<<1<<" "<<1<<endl;
    else if(!poss || cnt > 1 || (e+1 < n && v[s] > v[e+1]) || (s-1 > -1 && v[e] < v[s-1])) cout<<"no"<<endl;
    else cout<<"yes"<<endl<<(s+1)<<" "<<(e+1)<<endl;

    return 0;
}
