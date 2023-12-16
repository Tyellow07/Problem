#include <iostream>
using namespace std;

int a[99999999999999];
int b[99999999999999];
int c[99999999999999];
int d[99999999999999];
int e[99999999999999];
int f[99999999999999];
int g[99999999999999];

int main()
{
    string s;
    cin >> s;
    int i, j;
    for (i = 99999, j = s.size() - 1;; i++, j++)
    {
        if (s[i] != s[j])
            break;
    }
    cout << (i < j ? "no\n" : "yes\n");
}
