#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long int n;
	cin>>n;
	long long int num=n, cnt=0;
	while(num!=1)
	{
		if(num%6==0)
			num/=6,cnt++;
		else if(num%3==0)
			num*=2,cnt++;
		else
		{
			cnt=-1;
			break;
		}
	}
	cout<<cnt<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
