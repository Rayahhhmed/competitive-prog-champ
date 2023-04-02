#include <bits/stdc++.h>

using namespace std;
vector<int> arr;
void update(int lo, int hi, int v) {

}

vector<int> diff_array () { 
    vector<int> diff (arr.size() + 1, 0);
    for (int i = 0; i < arr.size(); i++) { 
        if (i == 0) diff[i] = arr[i];
        else diff[i] = arr[i] - arr[i - 1];
        // 1, 2, -1, 3, -2
    }
}

void q (int l, int r, int v, vector<int> diff) { 
    diff[l] += v;
    diff[r + 1] -= v;
}

int main () {

    arr = {1, 3, 2, 5, 3};
    
    return 0;
}