#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        char n;
        cin >> n;
        if (n == 'b' || n == 'B')
        {
            cout << "BattleShip" << endl;
        }
        if (n == 'c' || n == 'C')
        {
            cout << "Cruiser" << endl;
        }
        if (n == 'd' || n == 'D')
        {
            cout << "Destroyer" << endl;
        }
        if (n == 'f' || n == 'F')
        {
            cout << "Frigate" << endl;
        }
    }

    return 0;
}