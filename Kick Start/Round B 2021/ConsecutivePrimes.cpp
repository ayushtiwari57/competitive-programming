/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

//STL
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define mp make_pair 
#define all(v) v.begin(), v.end()

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

bool check(ll n){
    if(n<=2) return true;
    forn(i,2,sqrt(n)+1){
        if(n%i==0) return false;
    }
    return true;
}

void solution(int t){

    // This is the main code
    // vector<int> ans;
    // cout<<check(3);
    ll n;
    cin>>n;
    ll x=sqrt(n)+1;
    ll a=x;
    while(!check(a)){
        a++;
    }
    ll b=x-1;
    while(!check(b)) b--;
    ll c=b-1;
    while(!check(c)) c--;
    ll ans;
    if(a*b<=n) ans=a*b;
    else ans=b*c;
    cout<<"Case #"<<t<<": "<<ans<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    cin>>t;
    forn(test,1,t+1)
    {
        solution(test);
    }
    return 0;
}