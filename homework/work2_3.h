#ifndef WORK2_3_H_INCLUDED
#define WORK2_3_H_INCLUDED

// ����һ���ַ����ж��������֡���ĸ���������ַ�
void what_is_it(char c) {
    if(c >='0' && c<='9'){
        printf("is a number\n");
    } else  if((c >='a' && c<='z')|| (c >='A' && c<='Z')) {
        printf("is a letter\n");
    } else printf("is a special char\n");
}

#endif // WORK2_3_H_INCLUDED
