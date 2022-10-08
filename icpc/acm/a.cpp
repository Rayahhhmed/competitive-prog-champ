#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
// #include <iostream>
using namespace std;
#define YES "yes"
#define NO "no"

int main () { 
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n = 0;
    cin >> n;
    vector<string> civilisation;
    vector<bool> contains_elephant;
    int eleph_c = 0;
    for (int i = 0; i < n; i ++) {  
        string civil;
        string eleph;
        cin >> civil;
        cin >> eleph;
        civilisation.push_back(civil);
        bool val = (eleph == YES);
        contains_elephant.push_back(val);
        eleph_c += eleph == YES ? 1 : 0; 
    }
    int i = 0;
    for (auto &elem : civilisation) { 
        cout << elem << " " << contains_elephant[i] ? n - eleph_c : 0 << '\n';
        i++; 
    }


    return 0;
}
