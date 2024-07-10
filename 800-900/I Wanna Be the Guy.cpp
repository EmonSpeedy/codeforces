#include<bits/stdc++.h>
using namespace std;
int main()
{
    int level;
    cin>>level;
    int x;
    cin>>x;
    int ax[x];
    for(int k=0; k<x; k++)
    {
        cin>>ax[k];
    }
    int y;
    cin>>y;
    int ay[y];
    for(int k=0; k<y; k++)
    {
        cin>>ay[k];
    }

    vector<int> ara(level);
    for(int k=0; k<x; k++)
        ara[ax[k]-1]++;
    for(int k=0; k<y; k++)
        ara[ay[k]-1]++;

    for(int k=0; k<ara.size(); k++)
    {
        if(ara[k] == 0)
        {
            cout<<"Oh, my keyboard!\n";
            return 0;
        }
    }
    cout<<"I become the guy.\n";

    return 0;
}
