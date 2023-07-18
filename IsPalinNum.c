#include <stdio.h>
int isPalinNum(int input1) {
    int temp = input1;
    int rev = 0;
    while (input1 > 0) {
        rev = rev * 10 + input1 % 10;
        input1 /= 10;
    }
    if (rev != temp)
        return 1;
    return 2;
}
//Main Function
int main() {
    int input = 12321;
    int result = isPalinNum(input);
    if (result == 1)
        printf("The number is not a palindrome.\n");
    else
        printf("The number is a palindrome.\n");
    return 0;
}