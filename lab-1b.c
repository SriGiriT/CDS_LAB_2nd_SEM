#include<stdio.h>
int main(){
    float input1, input2, result12;
    int output1, output2;
    printf("Enter the values to subract the fractions : ");
    scanf("%f%f", &input1, &input2);
    output1 = input1;
    output2 = input2;
    input1 = input1 - output1;
    input2 = input2 - output2;
    result12 = input1 - input2;
    printf("The diffrence between the fractions of given = %f", result12);
}
