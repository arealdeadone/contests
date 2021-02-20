#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

bool find(vector<string>& haystack, string needle) {
    for(string s : haystack)
        if(s == needle)
            return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin>>s;

    int sz=s.size();

    vector<string> codes = {".","-.","--"};
    map<string, char> mp = {
        {".", '0'},
        {"-.", '1'},
        {"--", '2'}
    };

    string ts;
    string ans;

    for(size_t i=0; i<sz; i++){
        ts.push_back(s[i]);
        if(find(codes, ts)){
            ans.push_back(mp[ts]);
            ts.clear();
        }
    }
    cout<<ans<<endl;
    return 0;
}
