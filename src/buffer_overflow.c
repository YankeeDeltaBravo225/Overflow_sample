#include <stdio.h>
#include <stdint.h>

void main(void)
{
    uint8_t  buf[4];

    /* Correct condition is "i < 4" */
    for(i = 0; i <= 4; i++){
        buf[i] = i;
    }
}
