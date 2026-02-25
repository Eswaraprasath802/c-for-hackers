#include<stdio.h>
#include<math.h>

typedef struct point
{
 double a,b;
 double (*calculate_distance)(struct point*);
}point_t;

double _calculate_distance(point_t *p){
  return sqrt(p->a*p->b);
}

void __init__value(point_t *p,double a,double b){
  p->a=a;
  p->b=b;
  p->calculate_distance=_calculate_distance;
}

int main(){
  point_t p;
  __init__value(&p,1,2);
  printf("%lf",p.calculate_distance(&p));
}

