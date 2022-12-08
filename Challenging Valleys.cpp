#include <bits/stdc++.h>
using namespace std;
void valley()
{
    vector<int> a;
    int x,y,z=0;
    //cin>>n;
    //for(int k=0; k<n; k++)
        cin>>x;
        for(int j=0; j<x; j++)
        {
            cin>>y;
            if(j==0 || y!= a.back())
            {
                a.push_back(y);
            }
        }

        for(int k=0; k<a.size(); k++)
        {
            if((k==0 || a[k-1]>a[k]) && (k==a.size()-1 || a[k]<a[k+1]))
            {
                z++;
            }
        }

        if(z==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        valley();
    }
}

