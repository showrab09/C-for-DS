#include<iostream>
#include<algorithm> //for min max
#include<utility>// for swap
#include<string>
using namespace std;
int main(){
    int a,b,c,d;
   // cin>>a>>b>>c>>d;
    int mx=max({a,b,c,d});
    int mn=min({a,b,c,d});

  //  swap(a,b);
  //taking string with space input
  //we use getchar() for not counting the enter(mod 1-8)
char s[100];
cin.getline(s,100);
cout<<s;

    // cout<<a  <<endl <<b;
    return 0;
}