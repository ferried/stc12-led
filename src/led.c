/*
 * @Author: ferried
 * @Email: harlancui@outlook.com
 * @Date: 2020-12-13 15:35:01
 * @LastEditTime: 2020-12-13 16:56:57
 * @LastEditors: ferried
 * @Description: Basic description
 * @FilePath: /led/src/led.c
 * @LICENSE: Apache-2.0
 */

#include <stc12.h>

#define R P0_2
#define G P0_1
#define B P0_0

void delay_ms(unsigned int s)
{

    unsigned int x;

    for (s; s > 0; s--)
    {
        x = 98;
        while (x--)
            ;
    }
}

void main()
{
    while (1)
    { //主循环

        R = 0xff;
        G = 0xff;
        B = 0xff;

        delay_ms(150);

        for (int i = 0; i < 8; i++)
        {
            R = R << 1;
            G = G << 1;
            B = B << 1;
            delay_ms(150);
        }

        R = 0xff;

        delay_ms(150);

        for (int i = 0; i < 8; i++)
        {
            R = R >> 1;
            G = G >> 1;
            B = B >> 1;
            delay_ms(150);
        }
    }
}