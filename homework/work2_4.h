#ifndef WORK2_4_H_INCLUDED
#define WORK2_4_H_INCLUDED

//当月收入超过1600元时，超过部分交税款20%。编写以程序计算税款（月收入由键盘输入）。
void count_tax() {
    int income;
    printf("Input income:");
    scanf("%d", &income);
    if (income > 1600) {
        printf("%f", (double)(income-1600)*0.2);
    } else {
        printf("0");
    }
}


#endif // WORK2_4_H_INCLUDED
