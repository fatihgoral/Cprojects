#include <stdio.h>
#include <stdlib.h>
struct nokta{
float abs;
float ord;
};


int main()
{
  struct nokta p;
  p.abs=3.0;
  p.ord=2.0;
  printf("x,y koordinatlari %.2f,%.2f ",p.abs,p.ord);
    return 0;
}
