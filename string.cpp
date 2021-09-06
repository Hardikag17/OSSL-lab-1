//A program to remove duplicate characters from the string;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cout << "Enter the string with some duplicate characters";
    cin >> a;
    map<char, int> ourMap;
    for (int i = 0; i < a.length(); i++)
    {
        ourMap[a[i]]++;
    }

    for (int i = 0; i < a.length(); i++)
    {
        if (ourMap[a[i]] > 0)
        {
            cout << a[i];
            ourMap[a[i]] = 0;
        }
    }
}
