#ifndef WORK3_1_H_INCLUDED
#define WORK3_1_H_INCLUDED

// ��������N��������ͳ������������ż���ĸ�����
void count_nums() {
    int i, n, m, jh = 0, oh = 0, jg = 0, og = 0;
    printf("������nֵ:\n");
    scanf("%d", &n); //������������n
    printf("������%d����,���ո������:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &m);
        if (m % 2 != 0) {
            jh = jh + m;
            jg++;
        } else {
            oh = oh + m;
            og++;
        }
    } //����ѭ������n��������
    printf("\n������%d��\nż����%d��\n", jg, og); //��ӡ
}

#endif // WORK3_1_H_INCLUDED
