#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

inline bool add(int& a, int b) {
    for(int i=0; i<10; i++){
        int nn = (a*10)+i;
        if(nn%b==0){
            a = nn;
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a,b,n;
    cin>>a>>b>>n;
    bool exists = add(a,b);
    if(!exists){
        cout<<-1<<endl;
    }
    else {
        n--;
        cout<<a;
        for(int i=0; i<n; i++) cout<<0;
        cout<<endl;
    }
    return 0;
}
