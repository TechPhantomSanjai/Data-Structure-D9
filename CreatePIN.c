#include <stdio.h>
int createPIN(int input1, int input2, int input3) {
    int u1 = input1 % 10, u2 = input2 % 10, u3 = input3 % 10;
    int t1 = (input1 / 10) % 10, t2 = (input2 / 10) % 10, t3 = (input3 / 10) % 10;
    int h1 = input1 / 100, h2 = input2 / 100, h3 = input3 / 100;
    int u = (u1 < u2) ? ((u1 < u3) ? u1 : u3) : ((u2 < u3) ? u2 : u3);
    int t = (t1 < t2) ? ((t1 < t3) ? t1 : t3) : ((t2 < t3) ? t2 : t3);
    int h = (h1 < h2) ? ((h1 < h3) ? h1 : h3) : ((h2 < h3) ? h2 : h3);
    int th = (u1 > u2) ? ((u1 > u3) ? u1 : u3) : ((u2 > u3) ? u2 : u3);
    th = (t1 > t2) ? ((t1 > t3) ? ((t1 > th) ? t1 : th) : ((t3 > th) ? t3 : th)) : ((t2 > t3) ? ((t2 > th) ? t2 : th) : ((t3 > th) ? t3 : th));
    th = (h1 > h2) ? ((h1 > h3) ? ((h1 > th) ? h1 : th) : ((h3 > th) ? h3 : th)) : ((h2 > h3) ? ((h2 > th) ? h2 : th) : ((h3 > th) ? h3 : th));
    int num = th * 1000 + h * 100 + t * 10 + u;
    return num;
}
//Main Function
int main() {
    int input1 = 379, input2 = 582, input3 = 467;
    int result = createPIN(input1, input2, input3);
    printf("Created PIN: %d\n", result);
    return 0;
}