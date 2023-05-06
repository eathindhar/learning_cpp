#include <iostream>
using namespace std;

string predictPartyVictory(string senate)
{
    int n,players,reset=0;
    n = players = senate.length();
    size_t found;
    string team = "";
    for (int i = 0; i < n; i++)
    {
        cout<<"Selected Senator : "<<senate[i]<<endl;
        if (senate[i] == 'D')
        {
            team = "Dire";
            if(reset==1 || i == n-1)
            {
                found = senate.find('R');
            }
            else
            {
                found = senate.find('R',i);
            }
            if (found != string::npos)
            {
                senate[found] = 'X';
                players--;
                cout<<senate<<endl;
                
            }
            else
            {
                cout<<"Return at D"<<endl;
                return team;
            }

        }
        else if (senate[i] == 'R')
        {
            team = "Radiant";
            
            if(reset==1 || i == n-1)
            {
                found = senate.find('D');
            }
            else
            {
                found = senate.find('D',i);
            }
            if (found != string::npos)
            {
                senate[found] = 'X';
                players--;
                cout<<senate<<endl;
            }
            else
            {
                cout<<"Return at R"<<endl;
                return team;
            }

        }
        else
        {
            cout<<senate<<endl;
        }
        
        if (i + 1 == n)
        {
            if (players > 1)
            {
                i = -1;
                reset=1;
                cout<<"Loop reset"<<endl;
            }
        }
        else if (players == 1)
        {
            cout<<"Return at players"<<endl;
            return team;
        }
        
    }
    return team;
}
int main()
{
    // write code below
    string senate = "RRDRDDRDRRDDDDDRDRDR";
    cout << predictPartyVictory(senate);
    return 0;
}