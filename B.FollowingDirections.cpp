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

// Code Written By : The_logical77
// CodeForces Id: https://codeforces.com/profile/The_logical77
// CodeChef Id: https://www.codechef.com/users/the_logical77

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
        l Num;
        cin >> Num;
        string Str;
        cin >> Str;
        l K1 = Str.length();

        l x = 0, y = 0;

        l Arr[Num];
        bool flag = false;

        for (l i = 0; i < K1; i++)
        {
            if (Str[i] == 'U')
            {
                y++;
                // Arr[i] = (x, y);
            }

            else if (Str[i] == 'R')
            {
                x++;
                // Arr[i] = (x, y);
            }

            else if (Str[i] == 'L')
            {
                x--;
                // Arr[i] = (x, y);
            }

            else if (Str[i] == 'D')
            {
                y--;
                // Arr[i] = (x, y);
            }
            if (x == 1 && y == 1)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
