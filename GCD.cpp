#include<bits/stdc++.h>
#define ll long long
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<" ";
#define n() cout<<endl;
#define inp(x) cin>>x;
#define pa(a,n) for(ll i=0;i<n;i++)cout<<a[i]<<" ";
#define geta(a,n) for(ll i=0;i<n;i++)cin>>a[i];
#define ll long long
using namespace std;

ll gcd(ll a,ll b){
	if(b == 0){
		return a;
	}	return gcd(b,a%b);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll a,b;
	inp(a);inp(b);
	cout<<"GCD of a and b is ";pn(gcd(a,b));
	return 0;
}
