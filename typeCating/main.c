#include <stdio.h>
#include <stdlib.h>

int main()
{
 /*  float x=6.4/4;
   printf("%f",x);


   int a = 10;
    float b = 5.5;
    float result;

    // Gizli dönüþtürme: int to float
    result = a + b;  // 'a' int tipinde, 'b' float tipinde, sonuç float tipinde olacak
    printf("Sonuc (Gizli Donusturme): %f\n", result);

     float num1 = 5.5;
    int num2;

    // Açýk dönüþtürme: float to int
    num2 = (int)num1;  // 'num1' float tipinde, açýk dönüþtürme ile int tipine dönüþtürülüyor
    printf("Sonuç (Acik donusturme): %d\n", num2);

*/
    int a = 10, b = 3;
    float result1;
    double result2;

    // Gizli dönüþtürme: int to float
    result1 = a / b;  // 'a' ve 'b' int tipinde, sonuç int tipinde olacak
    printf("Sonuç (Gizli Dönüþtürme): %f\n", result1);

    // Açýk dönüþtürme: int to float
    result1 = (float)a / b;  // 'a' float tipine dönüþtürülüyor, sonuç float tipinde olacak
    printf("Sonuç (Açýk Dönüþtürme 1): %f\n", result1);

    // Açýk dönüþtürme: int to double
    result2 = (double)a / (double)b;  // 'a' ve 'b' double tipine dönüþtürülüyor, sonuç double tipinde olacak
    printf("Sonuç (Açýk Dönüþtürme 2): %lf\n", result2);




    return 0;
}
