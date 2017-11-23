#ifndef WORK2_2_H_INCLUDED
#define WORK2_2_H_INCLUDED

// 输入3个整数，按从大到小顺序输出
void range_nums(int a, int b, int c) {
    int min = a;
    int max = a;
    if (min > b) {
        min = b;
    }
    if (min > c) {
        min = c;
    }
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    int mid;
    if (a!=max && a!=min) {
        mid = a;
    }
    if (b!=max && b!= min) {
        mid = b;
    }
    if (c!=max && c!= min) {
        mid = c;
    }
    printf("%d>%d>%d", max, mid, min);
}

#endif // WORK2_2_H_INCLUDED
