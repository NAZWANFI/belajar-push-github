#include<stdio.h>
int main(){
    float arus[5];
    float total = 0;
    printf("masukan angka pemakaian kWh selama 7 hari:");
    scanf("%f %f %f %f %f", &arus[0], &arus[1], &arus[2], &arus[3], &arus[4]);
    for(int i=0; i<5; i++){
    total += arus[i];
   }
    printf("Total: %.1f\n", total);
    printf("Rata-rata: %.1f\n", total/5);
    return 0;
}