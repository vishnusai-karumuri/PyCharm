#include<iostream>
using namespace std;
main()
{
    int s,q;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++)cin>>a[i];
    cin>>q;
    int qu[q];
    for(int i=0;i<q;i++)cin>>qu[i];
    int count=0;
    for(int i=0;i<q;i++)
    {
        count = 0;
        for(int j=0;j<s;j++)
        {
            if(a[j] < qu[i])count++;
        }
        cout<<count<<' ';
    }
}
