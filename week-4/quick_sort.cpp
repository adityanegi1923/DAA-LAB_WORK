
#include<iostream>
#include<cstdlib>
using namespace std;

void swap(int *n1,int *n2)
{
    int t=*n1;
    *n1=*n2;
    *n2=t;
}

int partition(int *a,int l,int r,int *c,int *s)
{
    int x=rand()%(r-l+1)+l;
    swap(&a[x],&a[r]);
    int pivot=a[r];
    int i,j;
    for(i=l-1,j=l;j<r;j++)
    {
        (*c)++;
        if(a[j]<pivot)
        {
            i++;
            (*s)++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[r]);
    return (i+1);
}

void quick_sort(int *a,int l,int r,int *c,int *s)
{
    if(l<r)
    {
        int pivot=partition(a,l,r,c,s);
        quick_sort(a,l,pivot-1,c,s);
        quick_sort(a,pivot+1,r,c,s);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int i,c=0,s=0;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];

        quick_sort(a,0,n-1,&c,&s);

        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
        cout<<"comparisons="<<c<<endl;
        cout<<"swaps="<<s<<endl;
    }
    
    return 0;
}
