#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int a;
    cin >> a;
    if(a >= 90)
    {
        cout << "A" << endl;
    }
    else
    {
        if(a >= 80)
        {
            cout << "B" << endl;
        }
        else
        {
            if(a >= 70)
            {
                cout << "C" << endl;
            }
            else
            {
                if(a >= 60)
                {
                    cout << "D" << endl;
                }
                else
                {
                    cout << "E" << endl;
                }
            }
        }
    }
    return 0;
}
