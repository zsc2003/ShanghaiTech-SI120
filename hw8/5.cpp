#include<bits/stdc++.h>
#define ll long long
using namespace std;
inline int read()
{
	int r,s=0,c;
	for(;!isdigit(c=getchar());s=c);
	for(r=c^48;isdigit(c=getchar());(r*=10)+=c^48);
	return s^45?r:-r;
}

void print(int x)
{
	if(x==0)
		cout<<"F ";
	else
		cout<<"T ";
}
int implication(int a,int b)
{
	if(a==1&&b==0)return 0;
	return 1;
}
int main()
{
	for(int p=1;p>=0;p--)
		for(int q=1;q>=0;q--)
			for(int r=1;r>=0;r--)
			{
				int A=((!p) and (!q)) or (!r);
				print(A),cout<<'\n';
			} 
	return 0;
}
