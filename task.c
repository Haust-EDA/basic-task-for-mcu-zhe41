

void delay_ms(unsigned int x)  // 延时函数
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)//延时1s
        {
            for(j=5;j>0;j--);
        }
    }
    else while(x--)for(j=115;j>0;j--);
}

// tips: 原理图当中led为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)



    #include <reg52.h>
#include <intrins.h>

#define uint unsigned int
#define uchar unsigned char

void delay_ms(uint x) 
{
    uint i, j;
    for(i = x; i > 0; i--)
        for(j = 112; j > 0; j--);
}

void main()
{
    uchar i;
    while(1)
    {
        for(i = 0; i < 8; i++)
        {
            P1 = ~(0x01 << i);
            delay_ms(500);
        }
    }
}
    

 

    return 0;
}

