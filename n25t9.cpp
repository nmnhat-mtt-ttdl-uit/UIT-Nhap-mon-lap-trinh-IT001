#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, m, s, giay, giayyy;
    giayyy = 0;
    cin >> h >> m >> s >> giay;
    giayyy = h*60*60 + m*60 + s;
    giayyy += giay;
    h = giayyy / 3600;
    m = (giayyy - h*3600) / 60;
    s = (giayyy - h*3600 - m*60);
    h= h%24;
    cout << setfill('0');
	 
    cout << setw(2) << h << ":" << setw(2) << m << ":" << setw(2) << s << endl;
    return 0;
}
