#include<bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define ll long long

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

#define pb push_back
#define mp make_pair

#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))

#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

#define fio std::ios_base::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr)

typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

struct data { 
    int N;
    int a, b;
};

void solve (struct data& d) { 
    
}

int main() {
    fio;
    int N;
    struct data d;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a;
        cin >> b;
        solve(d);
    }
    return 0;
}

