// Benjamin Ilkenhans

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMBER 5

int main(int argc,char* argv[]){
    printf("Hello World!\n");
    printf(":(\n");
    printf("%d) option %s", 1, "ONE");
    
    int number = 32;
    char phrase[20] = "Hello World!";
    

    int whole_number=42;
    int* whole_number_pointer = &whole_number;

    *whole_number_pointer=21;

    printf("\n\n%d", whole_number);
    printf("\n%d",*whole_number_pointer);
    printf("\n%p",whole_number_pointer);


    printf("\n\nbytes in int: %ld", sizeof(int));


    whole_number_pointer+=1;
    printf("\n\n%p", whole_number_pointer);

    int* malloced_int =(int*) malloc(sizeof(int));

    double* malloc_double=(double*) malloc(sizeof(double));
    *malloc_double=102.45;
    printf("\n\n%lf", *malloc_double);

    int* bad_pointer = (int*) 42;
    printf("%d", *bad_pointer);

    int num;
    printf("prompt! ");
    scanf("%d", &num);

    int* array = (int*) calloc(5, sizeof(int));
    return 0; //no error
    

}

int getSum(int a,int b){
    return a+b;
}