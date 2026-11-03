#include<stdio.h>
int main(){
    float volt;
    printf("Masukan angka volt:");
    scanf("%f", &volt);
    if(volt < 198){
        printf("tegangan terlalu rendah %.1f v\n", volt);
    } else if(198<=volt && volt<=242){
        printf("tegangan aman %.1f v\n", volt);
    } else if(volt > 242){
        printf("tegangan terlalu tinggi %.1f\n", volt);
    }
    return 0;
}