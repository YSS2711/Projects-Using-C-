#include<iostream>
#include<string>
#include<ctime>
#include<unistd.h>
#include<cstdlib>
using namespace std;

class Team
{
    public:
        string name;
        string players[3];
        int runs;
        void displaydetails()
        {
            cout << name << endl;
            for(int i=0;i<3;i++)
            {
                sleep(1);
                cout << players[i] << endl;
            }

        }
};
void startInning(int inning, string batTeam[], string bowlTeam[])
{
    cout << "Inning " << inning << " starts" << endl << endl;
    sleep(1);
    cout << "The Batsmen is: " << batTeam[0] << endl << endl;
    sleep(1);
    cout << "The Bowler is: " << bowlTeam[2] << endl << endl;
    sleep(1);
}
int playInnings()
{
    int runs=0, randomValue;
    for(int i=1;i<7;i++)
    {
    srand(time(NULL));
    randomValue = rand() % 7;
    cout << "Ball " << i << " Scored:- " << randomValue << " Runs" << endl << endl;
    runs = runs + randomValue;
    sleep(3);
    }
    return runs;
}
void result(int runsA, int runsB)
{
    cout << endl;
    if(runsA > runsB)
        cout << "************Royal Challengers Banglore win by " << (runsA-runsB) << " Runs************" << endl;
    else if(runsB > runsA)
        cout << "************Mumbai Indians win by " << (runsB-runsA) << " Runs************" <<endl;
    else
        cout << "Match is Draw" << endl;
}

int main()
{
    sleep(1);
    cout << "Welcome to Cricket Game" << endl << endl;
    sleep(1);
    Team teamA;
    teamA.name = "Royal Challengers Banglore";
    teamA.players[0] = "ABD";
    teamA.players[1] = "Kohli";
    teamA.players[2] = "Siraj";
    teamA.runs;
    teamA.displaydetails();
    cout << endl;
    sleep(1);

    Team teamB;
    teamB.name = "Mumbai Indians";
    teamB.players[0] = "Rohit";
    teamB.players[1] = "Pollard";
    teamB.players[2] = "Bumrah";
    teamB.runs;
    teamB.displaydetails();
    cout << endl;
    sleep(1);

    startInning(1, teamA.players, teamB.players);
    teamA.runs = playInnings();
    cout << "Total Runs Scored By " << teamA.name << " is:- " << teamA.runs << " Runs" << endl << endl;
    sleep(2);

    startInning(2, teamB.players, teamA.players);
    teamB.runs = playInnings();
    cout << "Total Runs Scored By " << teamB.name << " is:- " << teamB.runs << " Runs" << endl << endl;
    sleep(2);

    result(teamA.runs, teamB.runs);
}
