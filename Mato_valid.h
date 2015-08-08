/* Template class validacije unosa u ulazni buffer. U stvari je to primjer iz
** online udžbenika, komad programa koji sam oblikovao kao class. Sastoji
** se samo od jedne funkcije, ali pošto je zasebna radnja stavio sam je u
** posebnu klasu. Napisana kao template da bi važila za više tipova podataka. */

#ifndef MATO_VALID_H
#define MATO_VALID_H

using namespace std;

template <typename T_Valid_Num>
class Mato_valid
{
public:
    void Valid (T_Valid_Num &variable, const T_Valid_Num &lowLimit, const T_Valid_Num &upLimit)
    {
        while (1)
        {
            cin >> variable;
            if (cin.fail())
                {
                    cin.clear(); // reset the state bits back to goodbit so we can use ignore()
                    cin.ignore(1000, '\n'); // clear out the bad input from the stream
                    cout << " Wrong data type. Try again: ";
                    continue; // try again
                }
            cin.ignore(1000, '\n'); // clear out any additional input from the stream
            if (cin.gcount() > 1) // if we cleared out more than one additional character
                {
                    cout << " Wrong data type. Try again: ";
                    continue; // we'll consider this input to be invalid
                }
            // Check limits
            if (variable < lowLimit || variable > upLimit)
            {
                cout << " Out of limits (" << lowLimit << "-" << upLimit << ") Try again: ";
                continue;
            }
            break;
        }
    }

};
#endif // MATO_VALID_H
