#include <bits/stdc++.h>
using namespace std;

void pal(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (char((s[i] > 31) && char(s[i] < 48)) || (char(s[i] > 57) && char(s[i] < 65)) || (char(s[i] > 90) && char(s[i] < 97)) || (char(s[i] > 122) && char(s[i] < 128)))
        {
            s.erase(s.begin() + i);
        }
        else if ((char(s[i] > 64) && char(s[i] < 91)))
        {
            char(s[i] += 32);
        }
    }
}

int main()
{
    string s = " ";
    pal(s);
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if(char(s[i]) == 32){
            s.erase(s.begin() + i);
        }
    }
    i-=1;
    for (int j = 0; i>= 0 ; j++, i--)
    {
        if (s[j] == s[i])
        {
            if (j == i)
        {
            cout<<"Yes It's a Palindrome";
        }
        }
        else
        {
            cout<<"Not a Palindrome";
            break;
        }
        
    }
}
