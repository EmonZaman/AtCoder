#include<bits/stdc++.h>
using namespace std;

int main()
{
    int V, T, S, D;
    cin >> V >> T >> S >> D;

    int vs, ve;
    vs = V * T;
    ve = V * S;

    if (vs <= D && ve >= D)
    {
        cout << "No" << std::endl;
    }
    else
    {
        cout << "Yes" << std::endl;
    }
}
