#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int T;
    printf("Input no of test cases : \n");
    scanf("%d", &T);

    int i;
    int j;
    int b;
    int steps = 0;
    char testcase[100];
    for( i=0; i<T; i++ ){
    printf ("%s", "Input testcase \n");
    scanf ("%s", testcase);
    for (b = 0; testcase[b] != 'D' && testcase[b] == 'U';b++){
        steps ++;
        ;


    };
    printf("In this test case, he falls down after ");
    printf("%d", steps);
    printf(" steps");
    printf("%c", '\n');
    steps = 0;
    

    };

    

}