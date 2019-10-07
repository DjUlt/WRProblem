#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

bool endw(string l) {
    int count = 0;
    for (int i = l.length() - 1; i > -1; i--) {
        if (l[i] == 'w') count++;
        else break;
    }
    if (count % 2 == 1)return false;
    return true;
}

int main()
{
    string s, s2;
    cin >> s;
    cout << s << "\n";
    while (s.length() > 0) {
        if (s[0] != 'r' && endw(s)) {
            s2 = "";
            for (int i = 0, m = 0; i < s.length(); i++) {
                if (s[i] == 'w') { m = i; s2 += s[i + 1]; i++; }
                else if (s[i] == 'r') { s.replace(i, 1, " "); i = m - 1; }
                else if (s[i] == ' ') if (s[i + 1] == 'w') { m = i + 1; }
            }
            s = s2;
            cout << s << "\n";
        }
        else { return 0; }
    }
    return 0;
}