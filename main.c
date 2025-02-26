#include <stdio.h>
#include "lab6.h"

int main(void)
{
    for (int x1=0;x1<3;x1++)
    {
        for (int y1=0;y1<3;y1++)
        {
            for (int x2=0;x2<3;x2++)
            {
                for (int y2=0;y2<3;y2++)
                {
                    if (x1!=x2 || y1!=y2)
                    {
                        printf("CartesianDistance(%d,%d,%d,%d)=%.2f\t",x1,y1,x2,y2,CartesianDistance(x1,y1,x2,y2));
                        printf("TaxiCabDistance(%d,%d,%d,%d)=%.2f\n",x1,y1,x2,y2,TaxiCabDistance(x1,y1,x2,y2));
#ifdef HONORS
                        printf("HammingBitDistance(%d,%d,%d,%d)=%.2f\n",x1,y1,x2,y2,HammingBitDistanceReference(x1,y1,x2,y2));
#endif
                    }
                }
            }
        }
    }
}

