#include <REGX52.H>
#include "Delay.h"

unsigned char Key()
{
    unsigned char KeyNumber = 0;

    if(P3_1 == 0){Delay(20); while(P3_1 == 0); Delay(20); KeyNumber = 1;}
    if(P3_0 == 0){Delay(20); while(P3_0 == 0); Delay(20); KeyNumber = 2;}
    if(P3_2 == 0){Delay(20); while(P3_2 == 0); Delay(20); KeyNumber = 3;}
    if(P3_3 == 0){Delay(20); while(P3_3 == 0); Delay(20); KeyNumber = 4;}

    return KeyNumber;
}

/*

    KeyNumber = Key();
    
    if(KeyNumber)
    {
        if(KeyNumber == 1){}
        if(KeyNumber == 2){}
        if(KeyNumber == 3){}
        if(KeyNumber == 4){}
    }

*/