#include<stdio.h>
int main()
{
    char name[50];
    char lastname[50];
    char prn[20];
    int  marks[5];
    float average;

    printf("Enter student name: ");
    scanf("%s" ,name);
    printf("enter student lastname: ");
    scanf("%s" ,lastname);
    printf("Enter PRN number: ");
    scanf("%s" ,prn);

    printf("Enter marks for the following subjects :\n");
    printf("Digital Electronics :");
    scanf("%d" ,&marks[0]);
    printf("Computer Programming & Algorithm :");
    scanf("%d" ,&marks[1]);
    printf("Computer Architecture :");
    scanf("%d" ,&marks[2]);
    printf("Applied Maths :");
    scanf("%d" ,&marks[3]);
    printf("Cyber Security :");
    scanf("%d" ,&marks[4]);
    average = (marks[0] + marks[1] + marks[2] +marks[3] + marks[4])/5.0;

    printf("\n==========================================================\n");
    printf("                   UNIVERSITY NAME                  \n");
    printf("==========================================================\n");
    printf("student name: %S %S" , name , lastname);

    printf("PRN number: %s\n" , prn);
    printf("----------------------------------------------------------\n");
    printf("subjects           marks\n");
    printf("----------------------------------------------------------\n");
    printf("Digital Electronics :   %d\n" ,  marks[0]);
    printf("Computer Programming :  %d\n" ,  marks[1]);
    printf("Computer Architecture;  %d\n" ,  marks[2]);
    printf("Applied maths :         %d\n" ,  marks[3]);
    printf("Cyber Security :        %d\n" ,  marks[4]);
    printf("----------------------------------------------------------\n");
    printf("Average marks :         %.2f\n" , average);
    printf("----------------------------------------------------------\n");

    printf("Result :\n");

    if (average >=90) {
        printf("Grade: A+\n");
    } else if (average >=80)  {
        printf("Grade: A\n");
    } else if (average >70)   {
        printf("Grade: B\n");
    } else if (average >60)   {
        printf("Grade: C\n");
    } else if (average >50)   {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }        
    return 0;
}         
             


    
