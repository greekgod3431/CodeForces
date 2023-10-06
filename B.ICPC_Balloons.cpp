#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using l = long int;
using ll = long long int;
using ull = unsigned long long int;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ull Tc;
    cin >> Tc;
    while (Tc--)
    {
        l N;
        cin >> N;
        string Str;
        cin >> Str;
        l K = Str.length();
        // sort(Str, Str + K);
        sort(Str.begin(), Str.end());

        l Op = 2;
for (l i = 0; i < K; i++)
        {
            /* code */

            if (Str[i] == Str[i + 1])
            {
                Op += 1;
            }

            else if (Str[i] != Str[i + 1])
            {
                Op += 2;
            }
        }
        cout << Op - 2 << endl;
    }
    return 0;
}
