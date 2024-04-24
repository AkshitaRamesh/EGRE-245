#include <stdio.h>
#include <math.h> 

int countThem (int l[], int n, int v)
{
    int *p, count = 0; 
    for (p = 1; p < n; p++)
    {
        if (*p == v)
        {
            count++; 
        }

        return count; 
    }
}

int main(void) 
{
    /* // quiz 2
    int x, y; 
    float a, b, c; 

    x = -3; 
    a = 2.3788; 
    b = x; 
    c = 96.0281; 
    y = a; 
    printf("\n  %d %d %f", x, y, b);
    printf("hi\n mom\n you OK?%5.2f\n\n", c);
    printf("%-6.1f%.5f\n%d\n", a, a, x);
    return 0; */ 

    /* // quiz 3
    int i = 2, j = 3, k = 9; 
    float x = 2.82, y = 6.0; 
    printf("a) %d\n", j+2);
    printf("b) %d\n", k < 2);
    i = 2; 
    printf("c) %d\n", k / i);
    printf("d) %d\n", k / i * 2 % 4);
    printf("e) %f\n", y = k = x);
    printf("f) %d\n", k++);
    printf("g) %d\n", --k);
    k = 5; 
    printf("h) %d\n", ++j + k--);
    printf("i) %d\n", k > 4 ? 2 : 3);
    return 0; */ 

    /* // quiz 4
    int x = 27; 
    if (x % 10 >= 5)
    {
        printf("greater than");
    } else { 
        printf("less than"); 
    } */

    /* // quiz 6
    int n = 5; 
    int f = 1; 
    int i = 0; 

    for (i = n; i > 0; i--)
    {
        f = f * i; 

    }

    printf("%d", f); */ 

   /* unsigned short i,j; 
    i = 19; 
    j = i << 1; 
    printf("a)  %u\n", j);
    j = i >> 2; 
    printf("b) %u\n", j); 
    return 0; */ 

    /* int a = 1;
    int b = 1;
    int c = 0;
    int d = 0;
    /* switch(a+b)
    {
        case 1: a += 5; 
        case 2: b += 10; break;
        case 4: c += 15; break; 
        default: d = -1; break; 
    }  

    for (;;) 
    {
       if (a + b == 1)
        {
            a += 5; 
        } else if (a + b == 2)
        {
            b += 10; 
            break; 

        } else if (a + b == 4)
        {
            c += 15;
            break;
        }
        else {
            d = -1; 
            break; 
        } 
    }
    

    printf("%d %d %d %d", a, b, c, d); */

    /* // midterm question 2
    int a = 2, b = 2, c = 2, d = -1, e = 6, f = 10, g = 3; 
    float x = 5.8; 
    printf("a) %d\n", f + e % f - a * 5 / e);
    printf("b) %d\n", !(e >= 10));
    printf("c) %d\n", e/a + (g=x) - 3);
    printf("d) %d\n", a + d * 3.0 - b);
    printf("e) %d\n", ((f%2) ? c*2 : c*5));
    printf("f) %d\n", a = e-- / ++b);

    return 0; */ 

    // midterm question 3 
    int z; 
    float n = 42.82; 
    z = -212; 
    n = 36.09999;
    printf("12345678901234567890\n");
    printf("this is it -> %6.2f%%\n", n);
    printf("\n  or is this?\n no way whoops\n\n");
    printf("total = %0.5f\n", n);
    printf("%-7d bye\n", z);
    return 0;

    /* // midterm question 4
    int x = 5; 
    if (x % 10 < 3)
    {
        printf("less than"); 
    } else {
        printf("greater than"); 
    } */ 

    /* float x = 2.0; 
    printf("%f", sqrt(12*(x*x*x)) - (x * x) +  2); 
    return 0; */

    /* // question 6 midterm 
    int a = 1, b = 1, c = 0, d = 0; 
    switch (a + b)
    {
        case 1: a += 5; 
        case 2: b += 10; break; 
        case 4: c += 15; break; 
        default: d = -1; break; 
    }

    printf("a: %d b: %d c: %d d: %d \n", a, b, c, d); 
    a = 1;
    b = 1; 
    c = 0; 1
    d = 0;

    if (a + b == 5)
    {
        a += 5; 
    }
    else if (a + b == 2)
    {
        b += 10; 
    } else if (a + b == 4)
    {
        c += 15;    
    } else {
        d = -1; 
    }

    printf("a: %d b: %d c: % d: %d", a, b, c, d); */ 

    // question 7 midterm 

    /* int i = 10; 
    while (i)
    {
        i--; 
        printf("%d ", i);
        if (i <= 6) break; 
    }  

    int j = 1, k = 3; 
    for (; j <= 10 && k <= 5; j++, k++)
        printf("wee \n");
        
    printf("%d %d", j, k); */ 

    /* unsigned short i,j; 
    i = 19; 
    j = i << 1; 
    printf("a) %u\n", j); 
    j = i >> 2; 
    printf("b) %u\n", j); 
    return 0; */

    /* float r = 2343.3434;
    printf("%-5f", r);
    return 0; */ 

}