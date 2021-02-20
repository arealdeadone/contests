#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n,t;
    cin>>n>>t;
    
    string s;
    cin>>s;
    
    vector<int> arr(n);

    for(int i=0; i<n; i++) arr[i] = s[i] == 'G' ? 0 : 1;


    for(int i=0; i<t; i++) {
        for(int j=0; j<n-1; j++) {
            if(arr[j] && !arr[j+1]){
                swap(s[j],s[j+1]);
                swap(arr[j],arr[j+1]);
                j++;
            }
        }
    }

    cout<<s<<endl;
    
    return 0;
}
