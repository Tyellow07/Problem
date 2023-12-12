#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
//#define int long long
#define ll long long
#define F first
#define S second
#define pii pair<int, int>
#define pll pair<long, long>
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define imp(x, y) insert(make_pair(x, y))
#define mp(x, y) make_pair(x, y)
#define all(x) x.begin(), x.end()
using namespace std;

const int MAXN = 1e5+5;


signed main(){
    fast;
    int n, x, d;
    cin >> n;
    set<int> t;
    vector<int> T;
    map<int, vector<int>> m;
    for(int i=0 ;i<n; i++){
        cin >> x;
        T.pb(x);
    }
    for(int i=0 ;i<n; i++){
        cin >> x;
        m[x].pb(i);
        t.insert(x);
    }
    for(int i=0; i<n; i++){
        x=T[i];
        int MIN = MAXN;
        auto it = find(t.begin(), t.end(), x);
        if(it==t.end())
            cout << -1 << " ";
        else{
            for(int k=0; k<m[x].size(); k++){
                MIN=min(abs(m[x][k]-i),MIN);
            }
            cout << MIN << " ";
        }
    }
}
