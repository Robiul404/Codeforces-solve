#include<bits/stdc++.h>


using namespace std;
int main()
{
    //onordered_set is has _set to store unique value
    unordered_set<char>rony;
    string a;
    cin>>a;
    for_each(a.begin(), a.end(), [](char & x)
             {
                 x= ::tolower(x);
             });
    char c[a.length()+1];
    strcpy(c, a.c_str());

    for(int i=0; i<strlen(c); i++)
    {
        if(c[i]<123 && c[i]>96)
        {

        }
        //insert() to add unique value
        rony.insert(c[i]);

    }
    int m=rony.size();
    if(m%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}
