#ifndef WORK2_4_H_INCLUDED
#define WORK2_4_H_INCLUDED

//�������볬��1600Ԫʱ���������ֽ�˰��20%����д�Գ������˰��������ɼ������룩��
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
