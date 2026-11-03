#include<stdio.h>
int main(){
    float tegangan[3][3]= {{220.1, 221.5, 219.8},
                        {220.0, 220.5, 221.2},
                        {218.9, 220.0, 223.1}};
    float diagonal1 = 0;
    float total;
    total = tegangan[0][0] + tegangan[1][1] + tegangan[2][2];
    printf("Jumlah tegangan diagonal utama: %.2f\n", total);
    p

}