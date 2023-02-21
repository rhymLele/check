#include<bits/stdc++.h>
using namespace std;
int used[100],x[100],n,d1[100],d2[100],cnt=0;
void TRY(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(used[j]==1&&d1[i-j+n]==1&&d2[i+j-1]==1)
		{
			x[i]=j;
			used[j]=d1[i-j+n]=d2[i+j-1]=0;
			if(i==n)
			{
				++cnt;
			}else
			{
				TRY(i+1);
			}used[j]=d1[i-j+n]=d2[i+j-1]=1;
		}
		
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=99;i++)
	{
		used[i]=d1[i]=d2[i]=1;
	}
	TRY(1);
	cout<<cnt;
	return 0;
}
