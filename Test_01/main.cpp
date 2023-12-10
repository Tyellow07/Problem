#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
//#define int long long
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define F first
#define S second
#define pb push_back
#define all(x) x.begin(), x.end()
using namespace std;

signed main(){
    fast;
    int n, m, i, k;
    cin >> n >> m;
    vector<int> a(n);
    for(auto &A: a){
        cin >> A;
    }
    sort(all(a));
    while(m--){
        int x;
        cin >> x;
        for(i=0;i+1<n;i++){
            for(k=i+1;k<n;k++){
                if(a[k]-a[i]==x) cout << "Yes" << endl;
                else if(a[k]-a[i]>x) break;
            }
            if(a[k]-a[i]>x) break;
        }
        if(i+1==n)
            cout << "NO" << endl;
    }
}
