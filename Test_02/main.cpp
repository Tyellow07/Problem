#include <iostream>         // d539
#include <math.h>
#define IO ios::sync_with_stdio(false);cin.tie(0);
#define N 500005
using namespace std;

int a[N], block[N], K;

inline int query(int L, int R)
{
    int ans=0;
    for (int i=L; i <= R; ++i)
    {
        if (i/K != L/K) break;
        ans = max(ans, a[i]);
    }

    for (int i=R; i >= L; --i)
    {
        if (i/K != R/K) break;
        ans = max(ans, a[i]);
    }

    for (int i=L/K+1; i < R/K; ++i) ans = max(ans, block[i]);

    return ans;
}

int main(void)
{
    int n, i, q, l, r;

    IO
    cin >> n;
    for (i=0; i < n; ++i) cin >> a[i];

    K = sqrt(n);
    for (i=0; i < n; ++i)
        block[i/K] = max(block[i/K], a[i]);
    
    cin >> q;
    do {
        cin >> l >> r;
        if (l > r) swap(l, r);

        --l, --r;
        cout << query(l, r) << '\n';
    } while (--q);



    return 0;
}
