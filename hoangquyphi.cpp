#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[10] = {"","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n <=9){
        cout << arr[n] << endl;
    }
    else cout << "Greater than 9";
    return 0;
}
