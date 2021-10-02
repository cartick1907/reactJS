#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        int And = (x - y) / 2;
        int a = 0, b = 0;
        for (int i = 0; i < 8 * sizeof(x); i++)
        {
            unsigned long int Xi = (y & (1 << i));
            unsigned long int Ai = (And & (1 << i));
            cout << Xi << " " << Ai << endl;
            if (Xi == 0 && Ai == 0)
            {
                //
            }
            else if (Xi == 0 && Ai > 0)
            {
                a = ((1 << i) | a);
                b = ((1 << i) | b);
            }
            else if (Xi > 0 && Ai == 0)
            {
                a = ((1 << i) | a);
            }
        }
        cout << (a & b) << " " << (a | b) << endl;
    }

    return 0;
}
