#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
main()
{
    string s;
    cin>>s;
    int len = s.length();
    if(len % 2 == 0)
    {
        cout<<"String Length Is Odd"<<endl;
    }
    else
    {
        for(int i=0 , j=len-1;i<=len , j>=0;i++ , j--)
        {
            if(i < j)
            {
                for(int k=0;k<i;k++)cout<<' ';
                cout<<s[i];
                for(int k=0;k<j-i-1;k++)cout<<' ';
                cout<<s[j]<<endl;
            }
            else if(i == j)
            {
                for(int k=0;k<i;k++)cout<<' ';
                cout<<s[i]<<endl;
            }
            else if(i>j)
            {
                for(int k=j-1;k>=0-1;k--)cout<<' ';
                cout<<s[j];
                for(int k=0;k<i-j-1;k++)cout<<' ';
                cout<<s[i]<<endl;
            }
        }
    }
}
