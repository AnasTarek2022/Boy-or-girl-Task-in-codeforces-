#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
   int counter=0;
   sort(s.begin(),s.end());

    for(int i=1; i<s.size(); i++)
    {

        if(s[i]!=s[i-1])
        {
            counter++;
        }
    }
  if(counter%2==0)
  {
      cout<<"IGNORE HIM!"<<endl;
  }
  else{cout<<"CHAT WITH HER!"<<endl;}

}
