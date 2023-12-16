#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define int long long
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

ll a[500005], block[500005], laz[500005];
int K;

void modify(int l, int r, int d){
    for(int i=l/K+1; i<r/K; i++){ //完整
        laz[i] += d;
        block[i] += K*d;
    }
    
    for(int i=l; i<=r; i++){ //左邊不完整
        if(l/K!=i/K)
            break;
        block[i/K] += d;
        a[i] += d;
    }
    if(l/K == r/K)
        return;
    for(int i=r; i>=l; i--){ //右邊不完整
        if(r/K != i/K)
            break;
        block[i/K] += d;
        a[i] += d;
    }
}

ll query(int l ,int r){
    ll ans=0;
    if(laz[l/K]){
        for(int i=(l/K)*K; i<(l/K+1)*K; i++)
            a[i] += laz[l/K];
        laz[l/K] = 0;
    }
    if(laz[r/K]){
        for(int i=(r/K)*K; i<(r/K+1)*K; i++)
            a[i] += laz[r/K];
        laz[r/K] = 0;
    }
    for(int i=l/K+1; i<r/K; i++)
        ans += block[i];
    for(int i=l; i<r; i++){
        if(i/K != l/K)
            break;
        ans += a[i];
    }
    if(l/K == r/K)
        return ans;
    for(int i=r; i>=l; i--){
        if(i/K != r/K)
            break;
        ans += a[i];
    }
    return ans;
}

signed main(){
    fast;
    int n, m, x, y, z, v;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    K=sqrt(n);
    for(int i=1; i<=n; i++)
        block[i/K] += a[i];
    cin >> m;
    while(m--){
        cin >> v;
        if(v==1){
            cin >> x >> y >> z;
            modify(x, y ,z);
        }
        else{
            cin >> x >> y;
            cout << query(x, y) << endl;
        }
    }
}
