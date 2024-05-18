#include<bits/stdc++.h>
using namespace std;

#define endl             '\n'
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define vll             vector<long long>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define no              cout<<"NO \n";
#define yes              cout<<"YES \n";

  
 
void kv()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
}
void solve(){
    int x;
    cin>>x;
    int upper = 2*x + 1;
    vector<bool> is_prime(upper + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;
    for (int i = 2; i * i <= upper; i++) {
        if(is_prime[i]){
            for(int j = i*i; j<=upper; j+=i){
                is_prime[j] = false;
            }
        }
    }

    for(int i = x; i <= upper; i++){
        if(is_prime[i])
        {
            cout<<i<<" ";
            return;
        }
    }

}
signed main(){
  kv();
  int t=1;
  //cin>>t;
  while(t--){solve();}
  return 0;
}

/*
No, it is not always guaranteed that there will be a prime number between X and 2X + 1 for any arbitrary X. 
However, it is guaranteed that there is at least one prime number between n and 2n for any n ≥ 2, 
according to Bertrand's Postulate (also known as the Bertrand-Chebyshev theorem). 
Bertrand's Postulate states that for any integer n > 1, 
there is always at least one prime p such that n < p < 2n. 
Given this, the choice of 2X + 1 as an upper bound is 
more than sufficient to ensure you will find a prime number greater than or equal to X. 
In fact, you could use 2X as the upper bound instead of 2X + 1 
and still be confident that a prime number exists within that range if X ≥ 2.
*/
