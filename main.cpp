#include <iostream>

using namespace std;

//step 3: Function to check for high temperatures
void checkHighTemperatures(int temperatureGrid[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(temperatureGrid[i][j] > 40)
            {
                cout << "⚠️ High Temperatures Detected at[" << i << "][" << j << "]: " << temperatureGrid[i][j] << " degrees celsius\n";
            }
        }
    }
}

int main()
{
    //step 1: Declare 2D array
    int tempGrid[3][3];

    //input values
    cout << "Enter temperatures for a 3x3 grid:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Temperatures at [" << i << "][" << j << "]: ";
            cin  >> tempGrid[i][j];
        }
    }


    //step 2: Dispaly the grid
    cout << "\n Temperature Grid:\n";
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << tempGrid[i][j] << "\t";
        }
        cout << endl;
    }

    //step 3; call the check function
    checkHighTemperatures(tempGrid);

    return 0;
}
