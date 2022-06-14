
#include<iostream>
using namespace std;

void merge(int *a,int l,int m,int r,int *c,int *in)
{
    int n1=m-l+1;
    int n2=r-m;
    
    int larr[n1],rarr[n2];
    int i,j,k;

    for(i=0;i<n1;i++)
    larr[i]=a[i+l];

    for(i=0;i<n2;i++)
    rarr[i]=a[m+1+i];

    i=0;
    j=0;
    k=l;

    while(i<n1 && j<n2)
    {
        (*c)++;
        if(larr[i]<=rarr[j])
        a[k++]=larr[i++];
        else
        {
            a[k++]=rarr[j++];
            (*in)+=n1-i;
        }
        
    }

    while(i<n1)
    a[k++]=larr[i++];

    while(j<n2)
    a[k++]=rarr[j++];

}

void mergeSort(int *a,int l,int r,int *c,int *in)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(a,l,mid,c,in);
        mergeSort(a,(mid+1),r,c,in);
        merge(a,l,mid,r,c,in);
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

        int i,c=0,in=0;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];

        mergeSort(a,0,n-1,&c,&in);

        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
        cout<<"comparisons="<<c<<endl;
        cout<<"inversions="<<in<<endl;
    }
    
    return 0;
}
