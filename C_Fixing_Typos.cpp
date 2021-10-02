#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    vector<char> ans;
    int ctr = 0;
    char x = '0';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i - 1] && ctr >= 2)
        {
            continue;
        }
        else if (s[i] == s[i - 1] && ctr < 2)
        {
            ctr = 2;
            ans.push_back((s[i]));
        }
        else
        {
            ans.push_back(s[i]);
            ctr = 0;
        }
        //cout << s[i] << " " << ctr << endl;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        //cout << ans[i] << " " << ans[i + 1] << " " << ans[i + 2] << " " << ans[i + 3] << endl;
        if (ans[i] == ans[i + 1] && ans[i + 2] == ans[i + 3])
        {
            //cout << "this happened\n";
            ans[i + 2] = '0';
            //cout << ans[i + 2];
        }
    }
    for (auto c : ans)
    {
        if (c == '0')
            continue;
        cout << c;
    }
    return 0;
}
