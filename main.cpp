#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        unordered_map<int, bool> mp;
        for (int i = 0; i <= n + 1; i++) mp[i] = false;
        int k; cin >> k;
        mp[k] = true;

        for (int i = 1; i <= n + 1; i++) {
            cin >> k;
            if (mp[k - 1] or mp[k + 1]) mp[k] = true;
            else {
                cout << "NO" << endl;
                break;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}
