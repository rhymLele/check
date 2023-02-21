#include<bits/stdc++.h>
using namespace std;
class hocsinh{
	private:
		int msv,tuoi;
		string hoten;
	public:
		friend istream &operator>>(istream &is,hocsinh &a)
		{
			is>>a.msv>>a.tuoi;
			return is;
		}
		friend ostream &operator<<(ostream &os,hocsinh a)
		{
			os<<a.msv<<" "<<a.tuoi<<endl;
			return os;
		}
	bool operator==(hocsinh &a)
	{
		if(hoten==a.hoten&&msv==a.msv&&tuoi==a.tuoi)
		return true;
		else return false;
	}
	
	bool operator!=(hocsinh &a)
	{
		if(hoten!=a.hoten&&msv!=a.msv&&tuoi!=a.tuoi)
		return true;
		else return false;
	}
	void operator=(hocsinh &a)
	{

		
		hoten=a.hoten;
		msv=a.msv;
		tuoi= a.tuoi;
	}
	
		
};
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);cout.tie(0);
	hocsinh a,b;
	cin>>a;
	cout<<"nhap b";cin>>b;
	if(a==b)
	{
		cout<<"t";
	}else cout<<"f";
	return 0;
}
