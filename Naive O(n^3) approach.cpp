#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the order of the matrices\n";
    cin>>n;
    int ar[n][n],br[n][n],cr[n][n];
    cout<<"Now enter the first matrix A\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    cout<<"Now enter the second matrix B\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&br[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cr[i][j]=0;
            for(int k=0;k<n;k++)
            {
                cr[i][j]+=ar[i][k]*br[k][j];
            }
        }
    }
    cout<<"Matrix C=AxB is\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout.width(6);
            cout<<cr[i][j]<<" ";
        }
        cout<<endl;
    }

}
