
#include <stdio.h>

int main()
{   
    int answer, s1, s2, s3;
    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&s3);
    answer = (s1 == s2 && s2 == s3)*1 + (s1 == s2 && s2 != s3)*2 + (s1 != s2 && s2 == s3)*2 + (s1 != s2 && s3 == s1)*2 + (s1 != s2 && s2 != s3)*3;
    printf("%d",answer);
    
 return 0;
}