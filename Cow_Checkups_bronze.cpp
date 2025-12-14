#include <bits/stdc++.h> // see /general/running-code-locally

using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

int main() {
    int n;
    cin >> n;
    vector<int> ans(n + 1, 0);

    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    int already_checked = 0;
    for (int i = 0; i < n; i++){
        cin >> B[i];
        if (A[i] == B[i]) already_checked++;
    }

    auto expand = [&](int l, int r){
        int match = already_checked;
        for(; l >= 0 && r < n; l--, r++){
            match += ((A[l] == B[r]) + (A[r] == B[l])) - ((A[l] == B[l]) + (A[r] == B[r]));
            ans[match]++;
        }
    };

    for (int mid = 0; mid < n; mid++){
        expand(mid, mid);
        expand(mid, mid + 1);
    }

    for (auto i : ans){
        cout << i << endl;
    }

    return 0;
}