#include <iostream>
#include <string>
#include <regex>

using namespace std;

string disemvowel(const string& str) {
    regex vowels("[aeiouAEIOU]");
    return regex_replace(str, vowels, "");
}


int main()
{
    cout << disemvowel("This website is for losers LOL!") << endl; // Ths wbst s fr lsrs LL!
}



