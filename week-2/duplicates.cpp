#include<iostream>
using namespace std;

void duplicates(int *a,int n,int key)
{
    int low,high,mid,first,last;
    low=0;
    high=n-1;
    
    while(low<high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            int x=mid;
            first=mid;
            last=mid;
            while(a[--x]==key)
            first=x;
            x=mid;
            while(a[++x]==key)
            last=x;
            cout<<key<<" - "<<last-first+1<<endl;
            return;
        }
        else if(key<a[mid])
        high=mid-1;
        else
        low=mid+1;
    }
    cout<<"Key not present\n";
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

        duplicates(a,n,key);
    }
    
    return 0;
}
