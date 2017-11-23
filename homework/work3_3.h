#ifndef WORK3_3_H_INCLUDED
#define WORK3_3_H_INCLUDED

// 找出1-500中所有能同时满足被3除余2，被5除余3，被7除余4的整数
void find_nums() {
    int i;
    for(i = 1; i <= 500; ++i){
        if(i%3==2 && i%5==3 && i%7==4) {
            printf("%d\n", i);
        }
    }
}
#endif // WORK3_3_H_INCLUDED
