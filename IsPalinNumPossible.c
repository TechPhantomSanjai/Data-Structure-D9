#include <stdio.h>
int isPalinNumPossible(int input1) {
    int h1[10] = {0};
    int i;
    while (input1 > 0) {
        h1[input1 % 10]++;
        input1 /= 10;
    }
    int odd = 0;
    for (i = 0; i < 10; i++) {
        if (h1[i] % 2 != 0) {
            odd++;
        }
        if (odd > 1) {
            return 1;
        }
    }
    return 2;
}
//Main Function
int main() {
    int input = 1221;
    int result = isPalinNumPossible(input);
    if (result == 1) {
        printf("Palindrome cannot be formed from the given number.\n");
    } else {
        printf("Palindrome can be formed from the given number.\n");
    }
    return 0;
}