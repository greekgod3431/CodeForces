// Pupil when ??
// 2⭐ when ??
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

#define pi 3.141592653589793238462
#define pb push_back
using l = long int;
using ll = long long int;
using ull = unsigned long long int;
using namespace std;

//          =======================================================================
//          =                   Code Written By : The_logical77                   =
//          =======================================================================
//          =                                                                     =
//          =      CodeForces Id: https://codeforces.com/profile/The_logical77    =
//          =      CodeChef Id:   https://www.codechef.com/users/the_logical77    =
//          =                                                                     =
//          =======================================================================

int hcf(l a, l b)
{
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

int lcm(l a, l b)
{
    return a * b / hcf(a, b);
}

/******************* Functions ****************/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ull Tc;
    cin >> Tc;
    while (Tc--)
    {
        int chs[128] = {0};
        ll cnt = 0, n1;
        char ch[1000];
        cin >> n1;
        cin >> ch;
        for (int i = 0; i < ch[i]; i++)
        {
            if (chs[ch[i]])
            {
                cnt++;
            }
            else
            {
                cnt += 2;
            }
            chs[ch[i]]++;
        }
        cout << cnt << endl;
    }
    return 0;
}
