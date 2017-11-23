#ifndef WORK3_6_H_INCLUDED
#define WORK3_6_H_INCLUDED
/*
输出如下图形
*********
 *******
  *****
   ***
    *
*/
void print_tri() {
    int i, j;
    for(i = 9; i >= 1; i-=2) {
        if (i < 9) {
            for (j = 0; j < (9-i)/2;j++) {
                printf(" ");
            }
            for (j = 0; j < i; j++) {
                printf("*");
            }
            for (j = 0; j < (9-i)/2;j++) {
                printf(" ");
            }
            printf("\n");
        } else {
            printf("*********\n");
        }
    }
}

#endif // WORK3_6_H_INCLUDED
