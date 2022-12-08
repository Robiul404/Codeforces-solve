#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    int a,b,c;
    cin >> b>>c;
    int arr[100];
    for (int i =1; i <= b; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=b; i++)
    {
        if(arr[i]>=arr[c] && arr[i]>0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
