#include<bits/stdc++.h>
using namespace std;

#define endl             '\n'
#define ff              first
#define ss              second
#define ll             long long
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
void solve() {
    string str;
    cin >> str;
    int n = str.length();
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[str[i]]++;
    }
    unordered_map<char, bool> printed; // To keep track of printed characters
    for (int i = 0; i < n; i++) {
        if (isupper(str[i]) && !printed[str[i]]) {
            cout << str[i] << " " << mp[str[i]] << endl;
            printed[str[i]] = true; // Mark this character as printed
        }
        else{
            if (islower(str[i]) &&!printed[str[i]]) {
                cout << str[i] << " " << mp[str[i]] << endl;
                printed[str[i]] = true; // Mark this character as printed
            }
        }
    }
}
int main(){
  kv();
  int t;
  cin>>t;
  while(t--){solve();}
  return 0;
}