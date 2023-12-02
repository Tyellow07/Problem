#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define int long long
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define F first
#define S second
#define pb push_back
#define all(x) x.begin(), x.end()
using namespace std;
const int MaxN = 1000000+5;
const int MaxQ = 100000+5;
int A[MaxN];
bool C[MaxQ];
int X[MaxQ] , Y[MaxQ];
int k,m,N,Q;
void gen_dat()
{
    int i,j;
    for( i=k+1; i<=max(Q,N); ++i )
         A[i] = ( A[i-2]*97 + A[i-1]*3 )%m+1;
    for(i=1,j=max(Q,N); i<=Q; ++i,--j)
    {
        C[i] = A[i]&1;
        X[i] = (A[i]+A[j])%N+1;
        if(C[i]) Y[i] = X[i]+ ( (A[i]<<3)+(A[j]<<5)+m )%( N-X[i]+1 );
        else Y[i] = ((A[i]<<3)+(A[j]<<5))%m+1;
    }
}

signed main(){
    fast;
    
}
