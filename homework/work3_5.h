#ifndef WORK3_5_H_INCLUDED
#define WORK3_5_H_INCLUDED

// ������е���λ��ˮ�ɻ�������
//��ν��λ��ˮ�ɻ�������ָһ��4λ�������λ���ֵ�4�η��͵��ڸ�������
//���磬1634��һ����λˮ�ɻ�������Ϊ1634=14+64+34+44��

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
