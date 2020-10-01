/*
author:  Devansh_0007  (CF)
*/

#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int , int>> vpii;
typedef pair<int ,int > pi;
typedef pair<long long,long long> pll;
typedef pair<string , string > ps;
//sort vectro<pair> with second val
//sort(v.begin(),v.end(),comparison) 
bool comparison(const pair<int,int> &a,const pair<int,int> &b){ 
    return a.second<b.second; 
}
void usaco(string filename) {
  // #pragma message("be careful, freopen may be wrong")
	freopen((filename + ".in").c_str(), "r", stdin);
	freopen((filename + ".out").c_str(), "w", stdout);
}
const ll mod = 1000000007;
const int max = 1e6+5 , inf  = 1e9+7;
#define endl "\n"
#define fi first
#define se second
#define pb push_back 
#define mp make_pair
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define forl0(i,n) for(long long i=0;i<n;i++)
#define inf = 1e7+7
#define nmax = 1000005
double PI = 3.1415926536;
int c[100010], s[100010];
ll MAX(ll a , ll b){
    return a>b?a:b;
}
lli dp[100000+7];
void solve(){
   ll n,t,count=0;
    cin>>n;
    while(n){
        t = n%10;
        if(t == 4 || t == 7){
            count++;
        }
        n = n/10;
    }
    if(count == 4 || count == 7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();   
        cout<<endl;
    } 
    return 0;    
}
