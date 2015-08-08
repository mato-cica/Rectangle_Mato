/* Čini se da kod GNU gcc kompilera ne rade .cpp fileovi na inherited classama.
** Zbog toga su u headeru ne sve definicije clase i funkcija.
** Template class derivirana iz template class 'EnterDimension', ima dvije
** varijable m_nX, m_nY (koordinate X i Y pravougaonika), dvije funkcije unosa
** tih koordinata sa validacijom, te dva gettera i settera za
** svaku koordinatu (varijablu). */

#ifndef ENTERPOSITION_H
#define ENTERPOSITION_H
#include "EnterDimensions.h"
#include <iostream>           // cout
#include "Mato_valid.h"   // Za validaciju

using namespace std;

template <typename T_EP_int, typename T_Valid_Num, typename T_ED_Num>
class EnterPosition: public EnterDimensions<T_ED_Num, T_Valid_Num>
{
    public:
        EnterPosition()   //constructor
        {
        }
        void Enter_X()
        {
            //Min i max za x. Max - od širine konzole se oduzme dužina pravougaonika
            const T_Valid_Num nLowX = 2;
            T_Valid_Num nUpX = 79 - static_cast<T_Valid_Num>(EnterDimensions<T_ED_Num, T_Valid_Num>::m_nLengthX);
            cout << " Pozicija - Position X (" << nLowX << "-"  << nUpX << "): ";
            Mato_valid<T_Valid_Num> Validacija;
            Validacija.Valid(m_nX, nLowX, nUpX);
        }

        void Enter_Y()
        {
            //Min i max za y. Samo radi izgleda na konzoli (da ne bude preveliko).
            const T_Valid_Num nLowY(2);
            const T_Valid_Num nUpY(20);
            cout << " Pozicija - Position Y (" << nLowY << "-"  << nUpY << "): ";
            Mato_valid<T_Valid_Num> Validacija;
            Validacija.Valid(m_nY, nLowY, nUpY);
        }
        T_EP_int Get_X()
        {
            return m_nX;
        }
        T_EP_int Get_Y()
        {
            return m_nY;
        }
        void Set_X(T_EP_int nX)
        {
            m_nX = nX;
        }
        void Set_Y(T_EP_int nY)
        {
            m_nY = nY;
        }
    protected:
        T_EP_int m_nX;
        T_EP_int m_nY;
    private:

};
#endif // ENTERPOSITION_H

