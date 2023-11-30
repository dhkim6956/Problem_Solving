#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    long long sum = 1;

    for (int i = 1; i <= n; i++) {
        sum = sum * i % 1000000007;
    }

    cout << sum;

    return 0;
}