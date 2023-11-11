//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//    ios_base::sync_with_stdio(false); cin.tie(0);
//    ll n,m,k;
//    cin >> n >> m >> k;
//    ll l,r;
//    while (r - l > 1)
//    {
//        LL mid = (l + r) >> 1, ans = 0;
//        for (LL i = 1; i <= n; ++i)
//        {
//            ans += min(m, mid / i);
//        }
//        (ans >= k ? r : l) = mid;
//    }
//    cout << r << '\n';
//}
