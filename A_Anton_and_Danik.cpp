#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int a = count(s.begin(),s.end(),'A');
    int d = n-a;
    if (a>d) 
    {
        cout << "Anton";
    }
    else if (d>a) 
    {
        cout << "Danik";
    }
    else 
    {
        cout << "Friendship";
    }
    return 0;
}
