#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    cin >> str;
 
    vector<char> nstr;
 
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
 
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&
           str[i]!='o'&&str[i]!='u'&&str[i]!='y')
        {
            nstr.push_back('.');
            nstr.push_back(str[i]);
        }
    }
 
    for(char c : nstr)
        cout << c;
}