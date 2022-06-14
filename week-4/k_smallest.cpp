#include<iostream>
#include<cstdlib>
using namespace std;

void swap(int *n1,int *n2)
{
    int t=*n1;
    *n1=*n2;
    *n2=t;
}

int partition(int *a,int l,int r)
{
    int x=rand()%(r-l+1)+l;
    swap(&a[x],&a[r]);
    int pivot=a[r];
    int i,j;
    for(i=l-1,j=l;j<r;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[r]);
    return (i+1);
}

int quick_sort(int *a,int l,int r,int k)
{
    if(l<r)
    {
        int pivot=partition(a,l,r);
        if(pivot==k)
        return a[pivot];
        if(k<pivot)
        return quick_sort(a,l,pivot-1,k);
        else
        return quick_sort(a,pivot+1,r,k);
    }
    return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int i;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];

        cin>>k;

        int ans=quick_sort(a,0,n-1,k-1);

        if(ans==-1)
        cout<<"not present\n";
        else
        cout<<ans<<endl;
    }
    
    return 0;
}
