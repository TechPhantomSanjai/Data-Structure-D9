#include <stdio.h>
int totalHillWeight(int input1, int input2, int input3) {
    int sum = 0, i, j;
    for (i = 0; i < input1; i++) {
        for (j = 0; j <= i; j++) {
            sum += input2;
        }
        input2 = input2 + input3;
    }
    return sum;
}
//Main Function
int main() {
    int input1 = 5; // number of rows
    int input2 = 3; // weight of the first stone in the first row
    int input3 = 2; // weight increment per row
    int result = totalHillWeight(input1, input2, input3);
    printf("Total weight of the hill: %d\n", result);
    return 0;
}