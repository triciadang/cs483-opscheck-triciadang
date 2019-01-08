/** PEX0.c
 * =============================================================
 * Name: Tricia Dang
 * Section: M3
 * Project: PEX0 - C Proficiency
 * Documentation Statement:
 * =============================================================
 */
#include <stdio.h>

int main(int argc, char *argv[]) {

    printf("PEX0\n");

    printf(argv[1]);
    printf("\n");

    for (int i = 1; i<21; i++){
        if (i%3 == 0){
            printf("%d\n",i);
        }
    }

    int* intArray = {5,4,3,2,1};
    printf("%d\n", func1(intArray));

    NodeType node1;
    node1.
    strncpy("", node1)



    return 0;
}

int func1(int* intArray){
    return intArray[0]*2;
}