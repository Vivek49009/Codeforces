#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define yes cout<<"YES\n"
#define no  cout<<"NO\n"

void kv() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
}

signed main() {
    kv();
    // Precompute T-primes using the Sieve of Eratosthenes
    vector<bool> is_prime(1000001, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= 1000000; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= 1000000; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    unordered_set<int> t_primes;
    for (int i = 2; i <= 1000000; ++i) {
        if (is_prime[i]) {
            t_primes.insert(i * i);
        }
    }

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (t_primes.count(x)) 
                yes;
            else 
                no;
        }
    }
    return 0;
}
