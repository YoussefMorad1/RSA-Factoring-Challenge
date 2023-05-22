#include <iostream>
using namespace std;

void solve()
{
	int n;
	while(cin >> n)
	{
		for (int i = 2; i*i <= n; i++){
			if (n % i == 0)
			{
				cout << n << "=" << i << "*" << n/i << endl;
				break;
			}	
		}
	}
}


signed main(int argc, char **argv){
	freopen(argv[1], "r", stdin);
	solve();
}
