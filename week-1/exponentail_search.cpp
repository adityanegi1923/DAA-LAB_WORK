
#include <iostream>
using namespace std;

void binary_search(int *a,int start, int end, int num,int *count)
{
    int mid;
    mid=(start+end)/2;
    // mid=start+(end-start)/2
    while(start<=end)
    {
        (*count)++;
        if(a[mid]==num)
        {
            cout << "Present " << *count;
            return;
        }       
        else if(num<a[mid])
        end=mid-1;
        else
        start=mid+1;
        mid=(start+end)/2;
    }
    cout << "Not Present " << *count;
}

void exponential_search(int *a, int l, int num)
{
    int count=1;
    int i=0;

    if(a[i]==num)
    {
        cout << "Present " << count;
            return;
    }
    i=1;
    while (i<l && a[i]<=num)
    {
        count++;
        i*=2;
    }
    binary_search(a,i/2,min(i,l-1),num,&count);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, key, i;

        cin >> n;

        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];

        cin >> key;

        exponential_search(a, n, key);
    }
    return 0;
}
