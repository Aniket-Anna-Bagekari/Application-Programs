#include<stdio.h>

struct Student
{
    int Marks;
    int Age;
    char Division;
};

int main()
{
    struct Student Aniket;
    struct Student Chaitu;

    Aniket.Marks = 99;
    Aniket.Age   = 20;
    Aniket.Division = 'A';

    Chaitu.Marks = 99;
    Chaitu.Age   = 20;
    Chaitu.Division = 'A';


    return 0;
}
