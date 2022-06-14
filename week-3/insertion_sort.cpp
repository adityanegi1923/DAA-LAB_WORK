
#include<iostream>
using namespace std;

void insertion_sort(int *a,int n)
{
    int i,j;
    int comps=0,shifts=0,key;

    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;

        while (j>=0 && a[j]>key)
        {
            comps++;
            shifts++;
            a[j+1]=a[j];
            j--;
        }
        shifts++;
        a[j+1]=key;
    }

    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;

    cout<<"comparisons = "<<comps<<endl;
    cout<<"shifts = "<<shifts<<endl;
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

        insertion_sort(a,n);
    }
    return 0;
}
