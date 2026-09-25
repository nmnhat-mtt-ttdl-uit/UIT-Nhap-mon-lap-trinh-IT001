#include <bits/stdc++.h>
using namespace std;

int main(){
	int dua, tra, tong;
	cin >> dua >> tong ;
	tra = dua - tong;
	int n1000, n2000, n5000, n10000, n20000, n50000, n100000, n200000, n500000;
	n1000= n2000 = n5000 = n10000 = n20000 = n50000 = n100000 = n200000 =n500000 = 0;
	n500000 += (tra >= 500000);
	tra = tra % 500000;
	n200000 += (tra >= 200000);
	tra = tra % 200000;
	
	n200000 += (tra >= 200000);
	tra = tra % 200000;
	
	n100000 += (tra >= 100000);
	tra = tra % 100000;
	
	n50000 += (tra >= 50000);
	tra = tra % 50000;
	
	n20000 += (tra >= 20000);
	tra = tra % 20000;
	
	n20000 += (tra >= 20000);
	tra = tra % 20000;
	
	n10000 += (tra >= 10000);
	tra = tra % 10000;
	
	n5000 += (tra >= 5000);
	tra = tra % 5000;
	
	n2000 += (tra >= 2000);
	tra = tra % 2000;
	
	n2000 += (tra >= 2000);
	tra = tra % 2000;
	
	n1000 += (tra >= 1000);
	tra = tra % 2000;
	cout << "500000: " << n500000 << endl;
	cout << "200000: " << n200000 << endl;
	cout << "100000: " << n100000 << endl;
	cout << "50000: " << n50000 << endl;
	cout << "20000: " << n20000 << endl;
	cout << "10000: " << n10000 << endl;
	cout << "5000: " << n5000 << endl;
	cout << "2000: " << n2000 << endl;
	cout << "1000: " << n1000 << endl;
	return 0;
}
