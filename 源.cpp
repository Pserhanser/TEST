#include <iostream>
using namespace std;

	int equationCount(int n, int m){
		if (n < 1 || m < 1) return 0;
		else if (n == 1 || m == 1)return 1;
		else if (n < m) return equationCount(n, n);
		else if (n == m) return equationCount(n, m - 1) + 1;
		return equationCount(n, m - 1)+equationCount(n-m,m);
	}
	int main() {
		int n, m;
		cout << "Please int n and m" << endl;
		while (cin>>n>>m) {
			cout << equationCount(n, m) << endl;
			system("pause");
		}
	}