#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string disemvowel(const string& str) {
    string res;
    for (auto c : str)
    {
        if (!strchr("aeiouAEIOU", c))
        {
            res += c;
        }
    }
    return res;
}


int main()
{
    cout << disemvowel("This website is for losers LOL!") << endl; // Ths wbst s fr lsrs LL!
}



