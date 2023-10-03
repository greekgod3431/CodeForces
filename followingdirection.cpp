#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define pi 3.141592653589793238462
#define pb push_back
using l = long int;
using ll = long long int;
using ull = unsigned long long int;
using namespace std;

int nxt()
{
     int n;
     cin >> n;
     return n;
}
 
signed main()
{
 
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
 
     cp(t)
     {
          int n;
          cin >> n;
          string str;
          cin >> str;
          map<char, int> mpp;
          int flg = 0;
          forl
          {
               // mpp[str[i]]++;
               if ((str[i] == 'L'))
               {
                    if (mpp['R'])
                    {
                         mpp['R']--;
                    }
                    else
                    {
                         mpp['L']++;
                    }
               }
               if ((str[i] == 'R'))
               {
                    if (mpp['L'])
                    {
                         mpp['L']--;
                    }
                    else
                    {
                         mpp['R']++;
                    }
               }
               if ((str[i] == 'U'))
               {
                    if (mpp['D'])
                    {
                         mpp['D']--;
                    }
                    else
                    {
                         mpp['U']++;
                    }
               }
               if ((str[i] == 'D'))
               {
                    if (mpp['U'])
                    {
                         mpp['U']--;
                    }
                    else
                    {
                         mpp['D']++;
                    }
               }
               if ((mpp['L'] == 0) && (mpp['R'] == 1) && (mpp['U'] == 1) && (mpp['D'] == 0))
               {
                    flg = 1;
               }
          }
               cout << (flg ? "YES" : "NO") << endl;
     }
 
     return 0;
}
