#include <stdio.h>
#include <stdlib.h>

int main()
{
 /*  float x=6.4/4;
   printf("%f",x);


   int a = 10;
    float b = 5.5;
    float result;

    // Gizli d�n��t�rme: int to float
    result = a + b;  // 'a' int tipinde, 'b' float tipinde, sonu� float tipinde olacak
    printf("Sonuc (Gizli Donusturme): %f\n", result);

     float num1 = 5.5;
    int num2;

    // A��k d�n��t�rme: float to int
    num2 = (int)num1;  // 'num1' float tipinde, a��k d�n��t�rme ile int tipine d�n��t�r�l�yor
    printf("Sonu� (Acik donusturme): %d\n", num2);

*/
    int a = 10, b = 3;
    float result1;
    double result2;

    // Gizli d�n��t�rme: int to float
    result1 = a / b;  // 'a' ve 'b' int tipinde, sonu� int tipinde olacak
    printf("Sonu� (Gizli D�n��t�rme): %f\n", result1);

    // A��k d�n��t�rme: int to float
    result1 = (float)a / b;  // 'a' float tipine d�n��t�r�l�yor, sonu� float tipinde olacak
    printf("Sonu� (A��k D�n��t�rme 1): %f\n", result1);

    // A��k d�n��t�rme: int to double
    result2 = (double)a / (double)b;  // 'a' ve 'b' double tipine d�n��t�r�l�yor, sonu� double tipinde olacak
    printf("Sonu� (A��k D�n��t�rme 2): %lf\n", result2);




    return 0;
}
