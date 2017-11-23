#ifndef WORK3_5_H_INCLUDED
#define WORK3_5_H_INCLUDED

// 输出所有的四位“水仙花数”。
//所谓四位“水仙花数”是指一个4位数，其各位数字的4次方和等于该数本身。
//例如，1634是一个四位水仙花数，因为1634=14+64+34+44。

void daffodil() {
    int a, b, c, s;

    for(a = 1; a < 10; a++){
        for(b = 0; b < 10; b++) {
            for(c = 0;c < 10; c++) {
                s = 100*a+10*b+c;
                if(s==(a*a*a+b*b*b+c*c*c)) {
                    printf("%d\n",s);
                }
            }
        }
    }
}


#endif // WORK3_5_H_INCLUDED
