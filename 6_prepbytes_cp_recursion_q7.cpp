#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";_print(x); cerr<<endl;
#else 
#define debug(x)
#endif

template<class T> void _print(T t)
{
	cerr<<t<<" ";
}

template<class T> void _print(vector<T> v1)
{
	cerr<<"{ ";
	for(T i :v1)
		cerr<<i<<" ";
	cerr<<"}";
	
}


template<class T> void _print(set<T> s )
{	
	cerr<<"{ ";
	for(T x : s)
		cerr<<x<<" ";
	cerr<<"}";
}

template <class T, class V> void _print(pair <T, V> p) 
{
	cerr << "{ "; 
	_print(p.first); 
	cerr << " , "; 
	_print(p.second); 
	cerr << "}";
}

template<class T, class V> void _print(unordered_map<T,V>map)
{	
	cerr<<"unordered_map"<<endl;
	for(pair<T,V> x :map)
	{
		cerr<<x.first<<" "<<x.second<<endl;
	}
}

template<class T, class V> void _print(map<T,V>map)
{	
	cerr<<"map"<<endl;
	for(pair<T,V> x :map)
	{
		cerr<<x.first<<" "<<x.second<<endl;
	}
}

template<class T> void _print(unordered_set<T> s )
{	
	cerr<<"{ ";
	for(T x : s)
		cerr<<x<<" ";
	cerr<<"}";
}




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


int checkStr(string str,char ch1,char ch2)
{
	int flag=0;
	int size = str.length();
	for(int g=0;g<size-1;g++)
	{
		if((str[g]==ch2)&&(str[g+1]==ch2))
		{
			return 0;
		}

	}
	return 1;
}


void solve(char ch1,char ch2,ll k, string str,vector<ll>v,ll curr)
{
	debug(curr);
	debug(v);

	if(curr<0)
	{
		
		return ;
	}

	if(v[curr]==0)
	{
		str[curr]=ch1;
		v[curr]++;
	}
	else if(v[curr]==1)
	{
		str[curr]=ch2;
		v[curr]++;
	}
	else if(v[curr]==2)
	{
		v[curr]=0;	
		curr--;

		return(solve(ch1,ch2,k,str,v,curr));
	}

	if(curr+1==str.length())
	{

		if(auto valid=checkStr(str,ch1,ch2))
			cout<<str<<endl;

	}


	if(curr==(k-1))
	{	//cout<<"this is last "<<endl;
		if(v[curr]<2)
			return(solve(ch1,ch2,k,str,v,curr));
		else 
		{
			v[curr]=0;
			curr--;
			return(solve(ch1,ch2,k,str,v,curr));
		}
		
	}
	else
	{
		curr++;
		return(solve(ch1,ch2,k,str,v,curr));
	}


}


int main()
{

	
	#ifndef ONLINE_JUDGE
		freopen("Error.txt","w",stderr);
	#endif


	ll t; cin>>t;
	
	for(int g=0;g<t;g++)
	{
		
		char ch1,ch2; 
		cin>>ch1>>ch2; // given ch1<ch2; 
		ll k ;cin>>k;
		ll curr=0;
		string str;
		for(int g=0;g<k;g++)
			str+=' ';

		vector<ll>v(k,0);
		solve(ch1,ch2,k,str,v,curr);
		
	}
	



}
		

