#include<iostream>
#include<math.h>
using namespace std;

void differences(int *a,int n,int k)
{
    int i,j,count=0;
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(abs(a[i]-a[j])==k)
    count++;
    cout<<count<<endl;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i,key;

        cin>>n;

        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];

        cin>>key;

        differences(a,n,key);
    }
    
    return 0;
}
