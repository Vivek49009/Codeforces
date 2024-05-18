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
vector<int> findDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i*i<=n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) { 
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}
signed main(){
  kv();
  int t=1;
  //cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> divisors = findDivisors(n);
    for (int divisor : divisors) {
        cout << divisor << endl;
    }
  }
  return 0;
}






    

