#ifndef WORK3_4_H_INCLUDED
#define WORK3_4_H_INCLUDED

double calculate_1() {
    double result = 0;
    int n, k;
    for (n = 1; n <= 100; n++) {
        result += n;
    }
    for (k = 1; k <= 50; k++) {
        result +=k*k;
    }
    for (k = 1; k <= 10; k++) {
        result += 1/k;
    }
    return result;
}

#endif // WORK3_4_H_INCLUDED
