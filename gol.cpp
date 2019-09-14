/* Game of Life Cellular Automaton Program */

#include <iostream>
#include <stdio.h>
#include <random>
#include <chrono>
using namespace std;

/* Implementing evolutionary state changes */
int interaction(int grid, int evolutions, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (0 < i < n - 1 && 0 < j < n - 1)
            {

            }
            else
            {
                
            }
        }
    }
    return 0;
}

/* Program Driver */
int main()
{
    /* Request environment dimension */
    unsigned int n, evolutions;
    cout << "This program simulates the Game of Life Cellular Automaton.\n";
    cout << "Enter integer grid dimension: \n";
    cin >> n;
    cout << "Enter (large >10000) integer number of evolutionary events: \n";
    cin >> evolutions;

    /* Creating random starting grid */
    int grid[n][n];
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count(); //Seed random number generator with system time
    mt19937 eng(seed);                                                           //Mersenne-Twister random number generator
    uniform_int_distribution<int> distr(0, 1);                                   //Defining range of random numbers
    cout << "\n Here is how the initial population was distributed: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int random = distr(eng);
            grid[i][j] = random;
            cout << grid[i][j] << ' ';
        }
        cout << endl;
    }

    cout << grid[2][1];
    cout << grid[1][2];

    system("pause");
    return 0;
}