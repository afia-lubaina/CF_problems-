#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t; cin>>t; 
	while(t--){

	int n ; cin>>n;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	priority_queue<ll>pq;

	ll x=a[0];

	pq.push(x); 

	ll s=0;

	for (int i = 1; i <n ; ++i)
	{
		if(a[i]==0){
			if(pq.empty())
				continue;
			else 
			    {
			    	s+=pq.top();
			    	pq.pop();
			    }
		}
		else 

		pq.push(a[i]);
	}

	cout<<s<<"\n";

	}


}
