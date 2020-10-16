#include <iostream>
using namespace std;
int main()
{
    int n, i;
    int bits[64];

    while (cin >> n) {
        for (i = 0; n > 0; n/=3) {
            bits[i++] = n % 3;
        }
        for (i--; i >= 0; i--)
            cout << bits[i];
        cout << "\n";
    }
    return 0;
}

