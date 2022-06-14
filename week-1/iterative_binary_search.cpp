#include <iostream>
using namespace std;

void binary_search(int *a, int l, int num)
{
    int start,end,mid,count=0;
    start=0;
    end=l-1;
    mid=(start+end)/2;
    // mid=start+(end-start)/2
    while(start<=end)
    {
        count++;
        if(a[mid]==num)
        {
            cout << "Present " << count;
            return;
        }       
        else if(num<a[mid])
        end=mid-1;
        else
        start=mid+1;
        mid=(start+end)/2;
    }
    cout << "Not Present " << count;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, key, i;

        cin >> n;

        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];

        cin >> key;
        
        binary_search(a, n, key);
    }
    return 0;
}
