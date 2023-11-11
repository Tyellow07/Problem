#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , t;
    cin >> n >> t;
    vector<int> a(n);
    for(int i=0 ; i<n ; ++i) cin >> a[i];
    int ans = 0 , sum = 0 , l = 0;
    for(int i=0 ; i<n ; ++i)
    {
        sum += a[i];
        while(sum > t)
        {
            //代表此段範圍已超過（此段範圍無法再更大）推左界，向右繼續延伸尋找可能
            sum -= a[l++];
        }
        ans = max(ans, i-l+1);
    }
    cout << ans << '\n';
}
