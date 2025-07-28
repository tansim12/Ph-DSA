#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    long long int cal1 = a+b;
    long long int calc2 = a*b;
    long long int calc3 = a-b;
    // 5 + 10 = 15
    cout << a << " " << "+ " << b << " = " << cal1 << endl;
    cout << a << " " << "* " << b << " = " << calc2 << endl;
    cout << a << " " << "- " << b << " = " << calc3;
    return 0;
}