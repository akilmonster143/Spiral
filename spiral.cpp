#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,i,j,k=1,c=0;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=k;
            k++;
        }
    }
    p=0;
    q=n-1;
    while(1)
    {
        if(p==q&&n%2!=0)
        {
            cout<<a[p][q]<<" ";
            break;
        }
        for(i=p;i<q;i++)
        {
            cout<<a[p][i]<<" ";
            if(c==n*n)
            {
                break;
            }
        }
        for(i=p;i<q;i++)
        {
            cout<<a[i][q]<<" ";
            c++;
            if(c==n*n)
            {
                break;
            }
        }
        for(i=q;i>p;i--)
        {
            cout<<a[q][i]<<" ";
            c++;
            if(c==n*n)
            {
                break;
            }
        }
        for(i=q;i>p;i--)
        {
            cout<<a[i][p]<<" ";
            c++;
            if(c==n*n)
            {
                break;
            }
        }
        p=p+1;
        q=q-1;
    }
}
