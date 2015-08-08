/*************       Glavni program - main      *****************************
** Template class 'EnterDimension' kao baza, 'EnterPosition' template class
** deriviran iz baze, i 'ShowRectangle' deriviran iz 'EnterPosition'.
** Template class 'Mato_valid_int' za validaciju unosa u 'EnterDimension' i
** 'EnterPosition' classama.
*****************************************************************************/

#include "EnterDimensions.h" // Unos i verifikacija dimenzija pravougaonika
#include "EnterPosition.h"   // Unos i verifikacija pozicije prvaougaonika
#include "ShowRectangle.h"   // Iscrtavanje pravougaonika

using namespace std;

int main()
{
    char chYesOrNo = 'y';
    while (chYesOrNo == 'y')
    {
        ShowRectangle Rectangle;
        Rectangle.EnterLengthX();
        Rectangle.EnterWidthY();
        Rectangle.Enter_X();
        Rectangle.Enter_Y();
        Rectangle.Show();
        chYesOrNo = Rectangle.ContinueYesOrNo();
    }
    return 0;
}
