#include <bits/stdc++.h>
using namespace std;
int main()
{
    // map<string,int>mp;
    map<string, int> mp;
    mp["tamim"] = 0;
    mp["ramim"] = 20;
    mp["zamim"] = 50;

    for(auto it = mp.begin(); it!= mp.end();it++)     // O(NlogN)
    {
        cout << it->first << " " << it->second << endl;      // logN
    }

    // if(mp.count("hamim"))
    // {
    //     cout<<"Acha";
    // }
    // else
    // {
    //     cout<<"Nai";
    // }

    return 0;
}