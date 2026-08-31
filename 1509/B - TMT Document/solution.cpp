#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        string str;
        cin >> str;
 
        int t_count = 0, m_count = 0;
 
        for(char c : str)
        {
            if(c == 'T') t_count++;
            else m_count++;
        }
 
        if(t_count != 2*m_count)
        {
            cout << "NO
";
            continue;
        }
 
        vector<int> v1, v2, v3;
 
        // first m_count T from left
        for(int i = 0; i < n && v1.size() < m_count; i++)
        {
            if(str[i] == 'T')
                v1.push_back(i);
        }
 
        // all M
        for(int i = 0; i < n; i++)
        {
            if(str[i] == 'M')
                v2.push_back(i);
        }
 
        // last m_count T from right
        for(int i = n-1; i >= 0 && v3.size() < m_count; i--)
        {
            if(str[i] == 'T')
                v3.push_back(i);
        }
 
        reverse(v3.begin(), v3.end());
 
        bool ok = true;
 
        for(int i = 0; i < m_count; i++)
        {
            if(!(v1[i] < v2[i] && v2[i] < v3[i]))
            {
                ok = false;
                break;
            }
        }
 
        if(ok) cout << "YES
";
        else cout << "NO
";
    }
}