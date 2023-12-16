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
#define mp(x, y) make_pair(x, y)
#define imp(x, y) insert(make_pair(x, y))
#define all(x) x.begin(), x.end()
using namespace std;

int n, k;
int v[200005];
int block[200005];
const int MAXN=1e9+5;

int query(int l, int r){
    int ans=MAXN;
    for(int i=l; i<=r; i++){
        if(i/k != l/k)
            break;
        ans = min(ans, v[i]);
    }
    for(int i=r; i>=l; i--){
        if(i/k != r/k)
            break;
        ans = min(ans, v[i]);
    }
    for(int i=l/k+1; i<=r/k-1; i++)
        ans = min(ans, block[i]);
    return ans;
}

signed main(){
    fast;
    int m, q;
    cin >> n >> m;
    k=sqrt(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    for(int i=0; i<n; i++)
        block[i] = MAXN;
    for(int i=0; i<n; i++){
        block[i/k] = min(block[i/k], v[i]);
    }
    while(m--){
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if(l>r)
            swap(l, r);
        cout << query(l, r) << endl;
    }
}
