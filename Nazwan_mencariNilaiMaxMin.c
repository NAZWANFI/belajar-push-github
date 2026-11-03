#include<stdio.h>
int main(){
    float arus[5] = {1.2,3.5,0.8,4.1,2.7};
    printf("Nama : Nazwan Fatihul Ihsan\n");
    float max = arus[0];
    float min = arus[0];
    for(int i=1; i<5; i++){
        if(arus[i] > max){
            max = arus[i];
        }
        if(arus[i] < min){
            min = arus[i];
        }
    }
    printf("Nilai maksimum: %.1f\n", max);
    printf("Nilai minimum: %.1f\n", min);
    return 0;

}