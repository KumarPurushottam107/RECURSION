#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007



ll fact(ll x )
{
	ll ans=1;
	while(x>0)
	{
		ans=(ans*x)%mod;
		x--;
	}
	return ans ; 
}

void print(vector<ll>v)
{
	for(int g=0;g<v.size();g++)
	{
		cout<<v[g]<<" ";
	}
	cout<<endl;
}

unordered_map<ll,ll> findPrime(ll limit)
{
	vector<ll> prime(limit+1,1);
	unordered_map<ll,ll> ans;
	for(ll g=2;g<=limit+1;g++)
	{   if(prime[g]==1)
		{	ans[g]++;
			for(ll r=g*g;r<=limit+1;r+=g)
			{
				prime[r]=0;
			}
		}
	}

	return ans ;

}

vector<ll> arrayinput(ll size)
{    vector<ll>v(size);
	for(ll g=0;g<size;g++)
		cin>>v[g];
	return v; 
}

ll solve(ll no)
{	
	//cout<<"no is "<<no<<endl;
	if(no==0)
		return 1;
	ll val=no%10;
	no/=10; 

	//cout<<"val and no are "<<val<<" "<<no<<endl;

	return((val*solve(no))%mod);

}


int main()
{
	int t; 
	cin>>t; 
	for(int g=0;g<t;g++)
	{	
		ll no ; cin>>no;
		ll ans = solve(no);
		cout<<ans<<endl;
	}
}