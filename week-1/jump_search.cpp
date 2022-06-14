#include <iostream>
#include <math.h>
using namespace std;

void jump_search(int *a, int l, int num)
{
    int count = 0;
    int low, high, jump;
    low = 0;
    jump = int(sqrt(l));
    high = low + jump;
    while (num >= a[min(high, l - 1)])
    {
        count++;
        if(num == a[min(high, l - 1)])
        {
            cout << "Present " << count;
            return;
        }
        low = high;
        high = low + jump;
        if (low >= l)
        {
            cout << "Not Present " << count;
            return;
        }
        
    }
    for (int i = low; i < min(high, l - 1); i++)
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
    cin >> t;
    while (t--)
    {
        int n, key, i;

        cin >> n;

        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];

        cin >> key;

        jump_search(a, n, key);
    }
    return 0;
}
