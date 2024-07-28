#include <bits/stdc++.h>
using namespace std;

string dec2binar(int n)
{
    if (n == 0)
        return "0"; // Handle the special case for 0

    string res = "";
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            res += '1';
        }
        else
        {
            res += '0';
        }
        n = n / 2;
    }
    reverse(res.begin(), res.end()); // Reverse the string to get the correct binary representation
    return res;
}

int main()
{
    cout << "Enter a decimal number: ";
    int dec;
    cin >> dec;
    cout << dec2binar(dec) << endl;
    return 0;
}
