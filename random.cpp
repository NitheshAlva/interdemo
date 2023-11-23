#include<iostream>
#include<time.h>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string pass;
    int a,n,s,index=0;
    srand(time(0));
    string alpha="abcdefghijklmnopqrst";
    string spl="!@#$%^&*()_+";
    cout<<"How many alphabets: ";
    cin>>a;
    cout<<"How many numbers: ";
    cin>>n;
    cout<<"How many speacial chars: ";
    cin>>s;
    for(int i=0;i<a;i++)
    {
        pass+=(alpha[rand()%alpha.size()]);
    }
    for(int i=0;i<n;i++)
    {
        pass+=(char(rand()%10)+'0');
    }
    for(int i=0;i<s;i++)
    {
        pass+=(spl[rand()%spl.size()]);
    }
    random_shuffle(pass.begin(),pass.end());
    for(int i=0;i<pass.size();i++)
    {
        cout<<pass[i];
    }
    
    return 0;
}