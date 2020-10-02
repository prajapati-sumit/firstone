#include<bits/stdc++.h>

using namespace std;

const int MX=4e5+5;
const int INF=1e8+7;

int a[MX];
int LB(int key,int n){
	
	int max_ans=n;
	int l=1,r=n,mid;
	while(l<=r){
		mid=(l+r)/2;
		if(a[mid]>key)
			r=mid-1;
		else if(a[mid]<=key){
			max_ans=min(max_ans,mid);
			l=mid+1;
		}
	}
	return max_ans;
}
void solve(){
	memset(a,0,sizeof(a));
	int n,x,p,k;
	cin>>n>>x>>p>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+1+n);
	a[n+1]=INF;
	if(p==k){
		if(a[p]==x)
			cout<<"0\n";
		else cout<<"1\n";
		return;
	}
	cout<<LB(4,7)<<" ";
	
	
}
int main(){
	
	int t;
	cin>>t;

	while(t--)
		solve();
}
