#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  // k friends
  int k {};
  int j {};
  cin >> k >> j;
  vector<double> screams (k, 0);
  vector<bool> dis(k, 0);
  for (int i = 0; i < k; i++) {
    for (int l = 0; l < j; l++) {
       int curr = 0;
       cin >> curr;
      if (curr >= 100) {
        dis[i] = 1;
      }
      screams[i] += curr;
    }
    screams[i] = screams[i] / j;
  }

  double smallest = INT_MAX;
  double largest = INT_MIN;
  int n_dis = 0;
  for (int i = 0; i < k; i++) { 
    if (dis[i]) {
      n_dis++;
    } else {
      largest = max(largest, screams[i]);
    }

    smallest = min(smallest, screams[i]);
  }
  
  if (n_dis == k) {
    cout << round(smallest) << '\n';
  } else { 
    cout << round(largest) << '\n';
  }

  return 0;

}
