#include<bits/stdc++.h>


using namespace std;
int main()
{
    string rony,robi;
    cin>>rony;
    string remv = "aeiouyAEIOUY";
    //transform function to transfer string to lower
    transform(rony.begin(),rony.end(),rony.begin(), ::tolower);
    for (const char c:rony)
    {
        //string::npos find the string until end of the string
        if(remv.find(c)==string::npos)
        {
            /*push_back() used refor string
            it used when iserted and deleted*/
            robi.push_back(c);
        }
    }
    //loop for output formating
    for(int i=0; i<robi.size(); i++)
    {
        cout<<"."<<robi[i];
    }
    return 0;
}
