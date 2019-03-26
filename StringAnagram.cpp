#include<iostream>
#include<strings.h>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool flag;
    string s1 , s2;
    getline(cin , s1);
    getline(cin , s2);
    if(s1.length() != s2.length())
    {
        cout<<"Not Anagrams as lengths are different"<<endl;
        return  0;
    }
    sort(s1.begin() , s1.end());
    sort(s2.begin() , s2.end());

    for(int i=0;i<s1.length();i++)
    {
        flag = false;
        if(s1[i] == s2[i])
        {
            flag = true;
        }
    }
    if(flag)
    {
        cout<<"Strings are anagrams"<<endl;
    }
    else
    {
        cout<<"Given Strings re not anagrams"<<endl;
    }
}
