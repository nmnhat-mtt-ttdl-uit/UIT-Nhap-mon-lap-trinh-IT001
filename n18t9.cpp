#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    bool am = n < 0;
    cout << n * (1-2*am) << endl;
    return 0;
}
