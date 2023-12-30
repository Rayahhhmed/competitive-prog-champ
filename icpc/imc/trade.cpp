#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int N {};
    cin >> N;
    int max_val = INT_MIN;
    string max_str = "";
    for (int i = 0; i < N; i++) { 
        string k {};
        cin >> k;
        int curr = 0;
        bool num = false;
        bool alph = false;
        for (int i = 0; i < k.size(); i++) {
            
            if (k[i] - 'a' < 26 && k[i] - 'a' >= 0) {
                curr += k[i] - 'a' + 1;
                alph = true;
            } else {

                curr += k[i] - '0';
                num = true;
            }
            if (num && alph) {
                curr = k.size();
                break;
            }
            
        }
        if (curr > max_val) {
            max_val = curr;
            max_str = k;
        }
    }

    cout << max_str << '\n';


    return 0;

}
