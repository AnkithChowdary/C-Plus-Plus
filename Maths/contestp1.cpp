#include <bits/stdc++.h>
using namespace std;
void winningPlayerCount(int n, vector<vector<int>>& pick) {
    vector<unordered_map<int, int>> mp(n);
    for(auto k : pick) {
        int p = k[0];
        int b = k[1];
        mp[p][b]++;
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(auto pair : mp[i]) {
            if(pair.second > i) {
                ans++;
            cout << pair.second << " ";
            }
        }
    }
    
}

int main() {
    int n, m;
    cout << "Enter the number of players: ";
    cin >> n;
    cout << "Enter the number of picks: ";
    cin >> m;
    
    vector<vector<int>> pick(m, vector<int>(2));
    cout << "Enter the picks (player, ball):\n";
    for(int i = 0; i < m; i++) {
        cin >> pick[i][0] >> pick[i][1];
    }

    winningPlayerCount(n, pick);
    // cout << "The number of winning players is: " << result << endl;

    return 0;
}
