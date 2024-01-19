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
	puts("p q r s A B C D E F");
	int A,B,C,D,E,F;
	for(int p=1;p>=0;p--)
		for(int q=1;q>=0;q--)
			for(int r=1;r>=0;r--)
				for(int s=1;s>=0;s--)
				{
					A=implication(p,r);
					B=implication(q,s);
					C=p or q;
					D=A and B and C;
					E=r or s;
					F=implication(D,E);
					print(p),print(q),print(r),print(s);
					print(A),print(B),print(C),print(D),print(E),print(F),cout<<'\n';
				} 
	return 0;
}
