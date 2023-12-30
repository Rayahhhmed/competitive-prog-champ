#include <algorithm>
#include <bits/stdc++.h>
using namespace std;





int main() {

    string N {};
    cin >> N;
    string s {};
    for (int i = 0; i < N.size(); i++) { 
        if (N[i] == 'I' ||   N[i] == 'M' || N[i] == 'C') {
            s = s + N[i];
        }
    }
    long long n = s.size();
    map<char, int> m = {{'I',  1}, {'M', 2}, {'C', 3}};
    vector<long long> dp(n, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'I') dp[i]++;
        for (int j = i - 1; j >= 0; j--) { 
            int k = m[s[i]] - 1 > 0 ? i - 1 : i;
            if (s[i] == w[k]) dp[i] += dp[j];
        }
    }

    long long c {};
    for (int i = 0; i < s.size(); i++) { 
        if (s[i] == 'C') c += dp[i];
    }

    cout << c << '\n';
    return 0;

}
