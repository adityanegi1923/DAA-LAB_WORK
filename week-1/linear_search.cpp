
#include <iostream>
using namespace std;

void linear_search(int *a, int l, int num)
{
    int i, count = 0;
    for (i = 0; i < l; i++)
    {
        count++;
        if (a[i] == num)
        {
            cout << "Present " << count;
            return;
        }
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
        
        linear_search(a, n, key);
    }
    return 0;
}
