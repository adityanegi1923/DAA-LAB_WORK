#include<iostream>
using namespace std;

void indices(int *a,int n)
{
    int i,j,k;
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            if(a[i]+a[j]==a[k])
            {
                cout<<i+1<<","<<j+1<<","<<k+1<<endl;
                return;
            }
        }
    }
    cout<<"No sequence found\n";
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i;

        cin>>n;

        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];

        indices(a,n);
    }
    
    return 0;
}
