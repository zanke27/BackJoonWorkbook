#include <iostream>
using namespace std;

int a = 0, b = 0;

int fibonacci(int n) {
    if (n == 0) {
        a++;
        return 0;
    }
    else if (n == 1) {
        b++;
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int i = 0, n = 0, r = 0;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> r;
        fibonacci(r);
        cout << a << " " << b << '\n';
        a = 0, b = 0;
    }
}