// Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
    int i, x, n = 73;

    cout << "Welcome to the Game! " << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Guese the number between 0 and 100." << endl;
    cout << "" << endl;
    cout << "Remember that! You only have 5 chancese to Guese Right." << endl;
    cout << "" << endl;
    cout << "Enter your Guese!" << endl;
    cout << "" << endl;
    
    for (i = 1; i <= 5; i++)
    {
        cout << "Guese " << i << " :";
        cin >> x;
        
        if (x > 100 || x < 0)
        {
            cout << "ERROR~ Out of range! " << endl; 
            i--;
        }
        else
        {
            if (x != n)
            {
                if (x < n)
                {
                    cout << "The number is more than your Guese!" << endl;
                    cout << "" << endl;
                }
                else if (x > n)
                {
                    cout << "The number is lower than your Guese!" << endl;
                    cout << "" << endl;
                }
            }
            else
            {
                cout << "Congragalations! You Guese right ..." << endl;
                cout << "" << endl;
                break;
            }
        }

        cout << "Ooohhhh! You have no more Chances to guese! Try again. " << endl;
        cout << "" << endl;
    }
        




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
