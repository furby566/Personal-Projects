#include <string>
#include <iostream>

using namespace std;

/*TODO:
BUDGET TREE DEPTH
RECURSION TREE CLASSIFICATION
DISPLAY OUTPUTS
*/
string genomeNoiseCleaner(string& genomeSamp);

bool budgetCheck(string budgetInput);

int depthCalc(string budget);

int main()
{
    string sampOne, sampTwo, budget;
    cout << "Please enter two genome samples followed by a genome budget." << endl;
    cout << "Sample One: ";
    getline(cin, sampOne);
    cout << "Sample Two: ";
    getline(cin, sampTwo);
    cout << "Budget: ";
    cin >> budget;

    //keeps asking for an integer until one is provided 
    while( budgetCheck(budget) == false )
    {
        cout << "Budget must be an integer" << endl;
        cout << "Budget: ";
        cin >> budget;
    }

    sampOne = genomeNoiseCleaner( sampOne );
    cout << "Sample One is: " << sampOne << endl;
    sampTwo = genomeNoiseCleaner( sampTwo );
    cout << "Sample Two is: " << sampTwo << endl;
    return 0;

}


string genomeNoiseCleaner(string& genomeSamp)
{
    int i = 0;
    string cleanSamp;
    char currChar;

    for( i = 0; i < genomeSamp.size(); i++ )
    {

        currChar = toupper(genomeSamp[i]);

        if( currChar == 'G' || currChar == 'C' ||
            currChar == 'T' || currChar == 'A' )
        {
            cleanSamp.push_back(currChar);
        }
    }

    return cleanSamp;

}


bool budgetCheck(string budgetInput)
{
    int i = 0;

    for( i; i < budgetInput.size(); i++ )
    {
        if( isdigit(budgetInput[i]) == false )
        {
            return false;
        }
    }

    return true;
}


//TODO
int depthCalc(string budget)
{
    int budgetNum = stoi(budget);
    int depthNum = 1;
    if( budgetNum >= depthNum )
    {
        return depthNum - 1;
    }


    return 0;
}