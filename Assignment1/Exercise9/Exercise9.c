#include <stdio.h>

int main(void)
{
    float grade = 0;

    printf("Enter student grade: ");
    scanf("%f", &grade);

    if(grade >= 85)
    {
        printf("Excellent\n");
    }
    else if((grade < 85) && (grade >= 75))
    {
        printf("Very Good\n");
    }
    else if((grade < 75) && (grade >= 65))
    {
        printf("Good\n");
    }
    else if((grade < 65) && (grade >= 50))
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

    return(0);
}