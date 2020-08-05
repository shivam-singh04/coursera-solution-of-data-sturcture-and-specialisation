#include <iostream>

int main() {
    long i,a,b,c,n = 0;
    std::cin >> n;
    a=-1;
    b=1;
    for(i=0;i<=n;i++)
    {
    	c=a+b;
    	
		a=b;
    	b=c;
      
    }
    std::cout <<c;
    return 0;
}

