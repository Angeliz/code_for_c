#ifndef WORK3_1_H_INCLUDED
#define WORK3_1_H_INCLUDED

// 任意输入N个整数，统计其中奇数和偶数的个数。
void count_nums() {
    int i, n, m, jh = 0, oh = 0, jg = 0, og = 0;
    printf("请输入n值:\n");
    scanf("%d", &n); //先输入数据数n
    printf("请输入%d个数,按空格键隔开:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &m);
        if (m % 2 != 0) {
            jh = jh + m;
            jg++;
        } else {
            oh = oh + m;
            og++;
        }
    } //利用循环输入n数并计算
    printf("\n奇数有%d个\n偶数有%d个\n", jg, og); //打印
}

#endif // WORK3_1_H_INCLUDED
