#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,y;
    int a;
    cin>>x>>y;
    if(x<y){
    a=y-x;
        cout<<"O JOGO DUROU "<<a<<" HORA(S)"<<endl;
    }
    else if(x>y){
        a=24-(x-y);
        cout<<"O JOGO DUROU "<<a<<" HORA(S)"<<endl;
    }
    else if(x==y){
        cout<<"O JOGO DUROU "<<24<<" HORA(S)"<<endl;
    }
return 0;
}
