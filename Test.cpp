/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A;
    set<int> S;
    int n, t, tmp;
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> tmp;
            A.push_back(tmp);
        }
        for (i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                for (int k = 1; k <= n; k++)
                {
                    if (A[i] < A[j] && A[j] > A[k])
                    {
                        S.insert(i);
                        S.insert(j);
                        S.insert(k);
                        break;
                    }
                }
                if (S.size() == 3)
                {
                    break;
                }
                if (S.size() == 3)
                {
                    break;
                }
            }
        }
    }
}
