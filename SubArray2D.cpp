#include<iostream>
using namespace std;
main()
{
    int m , n;
    cin>>m>>n;
    int a[m*m],s[n*n];
    for(int i=0;i<m*m;i++)cin>>a[i];
    for(int i=0;i<n*n;i++)cin>>s[i];
    int i,j;
    for(i=0;i<n*n;i++)
    {
        for(j=0;j<m*m;j++)
        {
            if(s[i] == a[j])
            {
                break;
            }
        }
    }
    if(j==m*m)
    {
        cout<<"Array Not Sub Array"<<endl;
    }
    else
    {
        cout<<"Array Is Sub Array"<<endl;
    }
}
