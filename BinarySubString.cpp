#include<iostream>
#include<string.h>
using namespace std;
main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]=='1' && s[j] == '1')
            {
                count++;
            }
        }
    }
    cout<<count;
}
