#include <iostream>
using namespace std;

int main ()100
{
	 int i,j, c, m;
	while(cin >> i >> j){
		 int a, b;
		a = i<=j ? i:j;
		b = i<=j ? j:i;
		c=0;
		m=0;
		for(int k=a; k<=b; k++)
		{
			c=0;
			int k2=k;
			while(k2 !=1 )
			{
				if(k2%2 ==1) { k2 = k2*3 +1; c++;	}
				else { k2 /= 2;	c++;	}
			}
			c++;
			if(c>m) m =c;
		}
		cout << i << " " << j << " " << m << "\n";
	}

return 0;
}

