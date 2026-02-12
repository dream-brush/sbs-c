#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>



// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int bytes = strlen(my_string);
    char* answer = (char*)malloc(bytes);
    if (!answer)
        return NULL;
    memset(answer, 0, bytes);

    const char* vow = "aeiou";
    for(int i = 0, j = 0; i < bytes-1;i++)
    {
        if (!strchr(vow, my_string[i]))
        {
            answer[j] = my_string[i];
            j++;
        }
    }
    return answer;
}

int main()
{
    char* sz = solution("bus");
    printf("%s\n", sz);
    if (sz)
    {
        free(sz);
        sz = NULL;
    }

    return 0;
}