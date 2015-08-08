/* Derivirana iz 'EnterPosition' class, sastoji se od dvije ** funkcije: 'Show()'
** i 'ContinueYesNo()'. 'Show()' iscrtava pravougaonik a druga 'drži' program na
** konzoli da ne bi 'nestao' odmah nakon iscrtavanja pravougaonika. Takoðer, nudi
** mogućnost kratanja iz početka i crtanja novog pravougaonika ili kraj programa.*/

#ifndef SHOWRECTANGLE_H
#define SHOWRECTANGLE_H
#include <iostream>        // cout, endl
#include <string>          // string

class ShowRectangle: public EnterPosition<short, short, short>
{
    public:
        ShowRectangle()     // constructor
        {
        }
        void Show()
        {
            //Postavi se na Y - poziciju za crtanje - Adjust to the Y drawing position
            for (short iii = 1; iii < m_nY; iii++)
                cout << endl;
            //Postavi se na X - poziciju za crtanje - Adjust to the X drawing position
            string sX_leftSpaces(m_nX - 1, ' ');
            cout << sX_leftSpaces;
            //Crtanje 'gornje vodoravne' linije - Drawing the upper horizontal line
            string sHorizontalLine(m_nLengthX, '+');
            cout << sHorizontalLine << endl;
            //Crtanje dvije 'uspravne' linije - Drawing the vertical lines
            const char chLineElement('+');
            string sInsideSpaces(m_nLengthX - 2, ' ');
            for (short jjj = 1; jjj <= m_nWidthY -2; jjj++)
                cout << sX_leftSpaces << chLineElement << sInsideSpaces << chLineElement << endl;
            //Crtanje 'donje vodoravne' linije - Drawing the bottom horizontal line
            cout << sX_leftSpaces << sHorizontalLine << endl;
        }
        char ContinueYesOrNo()
        {
            //'chYesNo' ide u glavni program. Ako je 'y' nastavlja,
            //a ako je bilo koji drugi znak završava program.
            cout << endl << endl << " Continue y/n : ";
            char chYesNo;
            cin >> chYesNo;
            return chYesNo;
        }

    protected:

    private:

};
#endif // SHOWRECTANGLE_H

