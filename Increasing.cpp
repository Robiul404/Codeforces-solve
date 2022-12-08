#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        unordered_set<int>rony;
        cin>>a;
        for(int j=0; j<a; j++)
        {
            cin>>b;
            rony.insert(b);
        }

        if(a==rony.size())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

