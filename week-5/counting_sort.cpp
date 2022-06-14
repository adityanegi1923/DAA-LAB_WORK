#include<iostream>
using namespace std;

void count(char *a,int n)
{
    int i;

    int c[26]={0};
    for(i=0;i<n;i++)
    c[a[i]-'a']++;

    int max=0;
    for(i=1;i<26;i++)
    if(c[i]>c[max])
    max=i;

    if(c[max]==1)
    {
        cout<<"No duplicates present\n";
        return;
    }
    cout<<char('a'+max)<<"-"<<c[max]<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i;

        int n;
        cin>>n;

        char a[n];
        for(i=0;i<n;i++)
        cin>>a[i];

        count(a,n);
    }
    
    return 0;
}
