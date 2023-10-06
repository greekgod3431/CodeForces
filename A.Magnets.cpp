#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int Op = 1;
    char A[3], B[3];
    cin >> A;
    // int A[N];
    for (int i = 1; i < N; i++)
    {
        cin >> B;
        if (A[0] != B[0])
            Op++;
        strcpy(A, B);
    }
    cout << Op << endl;
    return 0;
}
