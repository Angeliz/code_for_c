#ifndef WORK3_2_H_INCLUDED
#define WORK3_2_H_INCLUDED

//��������һ���ַ����ԡ������������ֱ�ͳ��������ĸ�����ֺ������ַ�����������scanf������룩

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
    printf("��ĸ��%d\n���֣�%d\n������%d\n", letters, nums, others);
}
#endif // WORK3_2_H_INCLUDED
