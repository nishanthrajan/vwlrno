#include <stdio.h>
int main()
{
    char alp;
    scanf("%c",&alp);
    if((alp>='a'&&alp<='z')||(alp>='A'&&alp<='Z'))
    {
    printf("Consonant");
    }
    else
    {
    printf("no");
    }
    return 0;
}
