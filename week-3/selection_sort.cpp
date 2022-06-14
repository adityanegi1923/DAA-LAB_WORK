
#include<iostream>
using namespace std;

void selection_sort(int *a,int n)
{
    int i,j;
    int comps=0,swaps=0,min,pos;

    for(i=0;i<n-1;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            comps++;
            if(min>a[j])
            {
                pos=j;
                min=a[j];
            }
        }
        if(pos!=i)
        {
            int t=a[i];
            a[i]=a[pos];
            a[pos]=t;
            swaps++;
        }
    }

    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;

    cout<<"comparisons = "<<comps<<endl;
    cout<<"swaps = "<<swaps<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int i,n;
        cin>>n;

        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];

        selection_sort(a,n);
    }
    return 0;
}
