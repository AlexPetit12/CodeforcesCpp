//Codeforces
//478A - Worms

#include<iostream>
using namespace std;
int i,j,n,m,c[1000001],x,p;
int main()
{
	cin>>n;
	p=1;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		for(j=p;j<=p+x-1;j++)
			c[j]=i;
		p=p+x;
	}
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>x;
		cout<<c[x]<<endl;
	}
}
