/*************************************************************************
	> File Name: Permutation.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 10时57分16秒
 ************************************************************************/

#include<iostream>
void permutation(char* str) {
    if (str == null) {
        return;
    }
    permution_1(str, str);
}
void permution_1(char* pstr, char* begin) {
    if (begin == '\0') {
        printf("%s\n", pstr);
    }
    else {
        for (char* pCh = begin; begin != '\0', pCh++) {
            char temp = *pCh;
            *pCh = * begin;
        }
    }
}
int main() {

}
