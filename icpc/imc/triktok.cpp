#include <bits/stdc++.h>
using namespace std;

int main() {
  // k friends
    int N {};
    int k {};
    int res {};
    cin >> N;

    vector<int> rem(3, 0);
    for (int i = 0; i < N; i++) { 
        cin >> k;
        rem[k % 3]++;
        
    }
    int m = min(rem[1], rem[2]);
    res += m;
    rem[1] -= m;
    rem[2] -= m;
    res += rem[1] / 3 + rem[2] / 3;
    res += rem[0];
    cout << res << '\n';
    return 0;

}
