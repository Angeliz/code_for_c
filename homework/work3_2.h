#ifndef WORK3_2_H_INCLUDED
#define WORK3_2_H_INCLUDED

//任意输入一串字符，以“？”结束，分别统计其中字母、数字和其他字符个数。（用scanf语句输入）

void count_char() {
    int letters = 0,nums = 0,others = 0;
    char c;
    scanf("%c",&c);
    while(c!='?'){
        if(isalpha(c)) {
            letters++;
        } else if(isdigit(c)) {
            nums++;
        } else {
            others++;
        }
        scanf("%c",&c);
    }
    printf("字母：%d\n数字：%d\n其它：%d\n", letters, nums, others);
}
#endif // WORK3_2_H_INCLUDED
