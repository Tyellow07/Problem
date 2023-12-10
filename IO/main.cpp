#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
//#define int long long
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define F first
#define S second
#define all(x) x.begin(), x.end()
using namespace std;

const int mx=1e6;
int a[1000000]{0};
signed main(){
    fast;
    for(int i=1;i<=mx;i++){
        for(int k=1;k*i<=mx;k++){
            a[i*k]++;
        }
    }
    int N;
    cin >> N;
    while(N--){
        int x;
        cin >> x;
        cout << a[x] << endl;
    }
}
