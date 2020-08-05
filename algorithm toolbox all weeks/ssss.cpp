
#include<iostream>

int main()
{
	long long m,n,s,i,c,mul;
	std::cin>>s;
	long long a[s];
	for(i=0;i<s;i++)
	{
		std::cin>>a[i];
	}
	m=a[1];
	n=a[0];
	for(i=2;i<s;i++)
	{
		if(n<a[i])
		{
			n=a[i];
		}
		if(m<n)
		{
			c=m;
			m=n;
			n=c;
		}
	}
	std::cout<<m*n;
	return 0;
}
