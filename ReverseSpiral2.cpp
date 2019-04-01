#include<iostream>
using namespace std;
main()
{
    int row , col;
    cin>>row>>col;
    int a[row][col];
    cout<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
    int i, k=0 , l=0;
    int m=row;
    int n=col;
    while (k < m && l < n)
    {
        for (i = l; i < n; i++)
        {
            cout<<a[k][i]<<' ';
        }
        k++;
        for (i = k; i < m; i++)
        {
            cout<<a[i][n-1]<<' ';
        }
        n--;
        if ( k < m)
        {
            for (i = n-1; i >= l; i--)
            {
                cout<<a[m-1][i]<<' ';
            }
            m--;
        }
        if (l < n)
        {
            for (i = m-1; i >= k; i--)
            {
                cout<<a[i][l]<<' ';
            }
            l++;
        }
    }
}
