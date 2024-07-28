#include <bits/stdc++.h>
using namespace std;

int binar2decimal(string x)
{
    int length = x.length();
    int num = 0; // Initialize num to 0
    int p = 1;   // Initialize p to 1 (2^0)

    for (int i = length - 1; i >= 0; i--)
    {
        if (x[i] == '1')
        {
            num += p;
        }
        p *= 2; // Increase the power of 2
    }
    return num;
}

int main()
{
    cout << "Enter a binary number: ";
    string bin;
    cin >> bin;
    cout << "Decimal equivalent: " << binar2decimal(bin) << endl;
    return 0;
}
