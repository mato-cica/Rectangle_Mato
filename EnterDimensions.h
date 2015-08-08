/* Baza urađena kao template class. Varijable m_nLengthX, m_nWidthY (dužina i širina pravougaonika).
** Funkcije 'EnterLengthX()', 'EnterWidthY()' za unos i validaciju dimenzija. Dva gettera i settera
** za svaku dimenziju. */

#ifndef ENTERDIMENSIONS_H
#define ENTERDIMENSIONS_H
#include <iostream>            // cout, cin
#include "Mato_valid.h"    // Za validaciju

using namespace std;

template <typename T_ED_Num, typename T_Valid_Num>
class EnterDimensions
{
    public:
        EnterDimensions()
        {
        }
        void EnterLengthX()
        {
            //Min i max dužina. Da ne bude preko konzole (ekrana).
            const T_Valid_Num nLowL(3), nUpL(70);
            cout << " Unesi duzinu - Enter length (X) " << nLowL << "-" << nUpL << " : ";
            Mato_valid<T_Valid_Num> Validacija;
            Validacija.Valid(m_nLengthX, nLowL, nUpL);
         }
        void EnterWidthY()
        {
            //Min i max širina (visina). Radi izgleda (da stane u konzolu).
            const T_Valid_Num nLowW(3), nUpW(20);
            cout << " Unesi sirinu - Enter width (Y) " << nLowW << "-" << nUpW << " : ";
            Mato_valid<T_Valid_Num> Validacija;
            Validacija.Valid(m_nWidthY, nLowW, nUpW);
        }
        T_ED_Num GetLengthX()
        {
            return m_nLengthX;
        }
        T_ED_Num GetWidthY()
        {
            return m_nWidthY;
        }
        void SetLengthX(T_ED_Num nLengthX)
        {
            m_nLengthX = nLengthX;
        }
        void SetWidthY(T_ED_Num nWidthY)
        {
            m_nWidthY = nWidthY;
        }
    protected:
        T_ED_Num m_nLengthX;
        T_ED_Num m_nWidthY;
    private:
};

#endif // ENTERDIMENSIONS_H
