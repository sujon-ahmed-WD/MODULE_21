#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> mp;
        int max_count=-1;
        string ans;

        while (ss >> word)
        {
            mp[word]++;
            if(mp[word]>max_count)
            {
                ans=word;
                max_count=mp[word];
            }

            
        }


        cout<<ans<<" "<<max_count<<endl;

         
    }
    return 0;
}


 