/*find the total number of illiterate men and women (10)*/

#include<stdio.h>
int main(){

    int t_p = 80000; //total population
    int m ,w,t_l_p ,t_l_m,t_l_w,t_il,tM;

    m = t_p*0.52; //men
    w = t_p-m; //women

    t_l_p = t_p*0.48; //total literal population
    t_l_m = t_p*0.35; //total literal man
    tM = t_l_m-t_l_w; //total literal men on count

    t_il = t_p-t_l_p; //total literacy
    t_l_w = t_il-t_l_m; //total literal women

    printf("Total number of illiterate man and women = %d",t_il);

    printf("\nTotal illiterate man =%d", t_l_m);

    printf("\nTotal illiterate women =%d", t_l_w);

    return 0;

}
