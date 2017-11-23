#ifndef WORK2_5_H_INCLUDED
#define WORK2_5_H_INCLUDED

// 已知银行整存整取存款不同期限的年息利率分别为：
// 期限1年3%，期限2年3.75%，期限3年4.25%，期限5年4.75%。
// 要求输入存钱的本金和期限，求到期时能从银行得到的利息（利息=本金*年息利率*期限）。
// 用switch语句编写程序。
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
