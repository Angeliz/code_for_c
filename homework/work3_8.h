#ifndef WORK3_8_H_INCLUDED
#define WORK3_8_H_INCLUDED

//输出100～200之间全部的素数
void print_prime(){
    int check_number(int x);
    int enter = 1;
    int i;
    for(i = 101; i < 201; i++){
        if(check_number(i) == 1){
            printf("%d ",i);
        }
    }
}

int check_number(int x){
    int j;
    for(j = 2; j < x/2; j++){
        int mod = x % j;
        if(mod == 0){
            return 0;
        }
    }
    return 1;
}
#endif // WORK3_8_H_INCLUDED
