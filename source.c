// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    float  r, t, v;
    printf("masukan radius(mm) : ");
    scanf("%f",&r);
    printf("radius = %f\n", r);
    printf("masukan tinggi(mm): ");
    scanf("%f",&t);
    printf("radius = %f\n", t);
    v=M_PI*r*r*t;
    printf("Volume(mm^3)= %f\n", v);
    printf("Kapasitas (ml) =%f\n", v/1000);
    sleep(5);
	return 0;
}
