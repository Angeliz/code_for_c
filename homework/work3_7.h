#ifndef WORK3_7_H_INCLUDED
#define WORK3_7_H_INCLUDED

/*
按下述形式输出九九乘法表。
1*1=1
1*2=2   2*2=4
1*3=3   2*3=6   3*3=9
    ······
1*9=9   2*9=18    ······      9*9=81
*/
void print_multi() {
    int i, j;
    for (i = 1; i <=9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%d ", j, i, i*j);
        }
        printf("\n");
    }
}


#endif // WORK3_7_H_INCLUDED
