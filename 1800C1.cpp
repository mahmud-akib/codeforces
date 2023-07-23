#include<bits/stdc++.h>
#include<cmath>
#include<iomanip>
#define pi 3.1415926535
#define MOD 1000000007
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int
#define ld long double
#define N endl
using namespace std;

int main(){



    
ll t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
ll a[n+1];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
vector<ll>b;
ll res=0;
for(ll i=0;i<n;i++){
    if(a[i]!=0){
        b.push_back(a[i]);
    }
    else{
        if(b.size()!=0){
            sort(b.begin(),b.end());
            res=res+b[b.size()-1];
            b.pop_back();
        }
    }
}
cout<<res<<N;
}
}
