#ifndef WORK3_3_H_INCLUDED
#define WORK3_3_H_INCLUDED

// �ҳ�1-500��������ͬʱ���㱻3����2����5����3����7����4������
void find_nums() {
    int i;
    for(i = 1; i <= 500; ++i){
        if(i%3==2 && i%5==3 && i%7==4) {
            printf("%d\n", i);
        }
    }
}
#endif // WORK3_3_H_INCLUDED
