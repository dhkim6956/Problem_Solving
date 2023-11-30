#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    char target[101];
    int cnt = 0;

    cin >> n >> target;

    for (int i = 0; i < n; i++) {
        char num[200001];

        cin >> num;

        char* result = strstr(num, target);

        if (result) {
            continue;
        }
        else {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}