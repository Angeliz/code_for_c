#ifndef WORK2_5_H_INCLUDED
#define WORK2_5_H_INCLUDED

// ��֪����������ȡ��ͬ���޵���Ϣ���ʷֱ�Ϊ��
// ����1��3%������2��3.75%������3��4.25%������5��4.75%��
// Ҫ�������Ǯ�ı�������ޣ�����ʱ�ܴ����еõ�����Ϣ����Ϣ=����*��Ϣ����*���ޣ���
// ��switch����д����
double count_interest(double money, int year) {
    double result = 0;
    switch(year) {
    case 1:
        result = money*0.03*year;
        break;
    case 2:
        result = money*0.0375*year;
        break;
    case 3:
        result = money*0.0425*year;
        break;
    case 5:
        result = money*0.0475*year;
        break;
    }
    return result;
}

#endif // WORK2_5_H_INCLUDED
