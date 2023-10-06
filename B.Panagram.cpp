#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    string s;
    cin >> s;
    int C[26] = {0};
    for (int i = 0; i < n; i++)
    {
        if (s[i] < 97)
        {
            s[i] = s[i] + 32;
            C[s[i] - 'a'] += 1;
        }
        else
        {
            C[s[i] - 'a'] += 1;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (C[i] == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
