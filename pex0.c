/** PEX0.c
 * =============================================================
 * Name: Tricia Dang
 * Section: M3
 * Project: PEX0 - C Proficiency
 * Documentation Statement: C v Python sheet that was given and
 * website given in part a.
 * =============================================================
 */
#include <stdio.h>
#include "pex0.h"
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    printf("PEX0\n");


    //Part A,B
    printf(argv[1]);
    printf("\n\n");


    //Part C
    for (int i = 1; i<21; i++){
        if (i%3 == 0){
            printf("%d\n",i);
        }
    }

    //Part E
    int intArray[6] = {5,4,3,2,1};
    printf("\n%d\n", func1(intArray));


    //Part G
    NodeType node1;

    strncpy(node1.name, "Node 1",sizeof("Node 1"));

    //Part H
    NodeType node2;

    strncpy(node2.name, "Node 2",sizeof("Node 2"));

    //Part I
    node1.next = &node2;

    //Part J
    node2.next = NULL;

    //Part H2 and J2
    printf("%s\n", node1.name);
    printf("%s\n", node1.next->name);

    //Part K
    NodeType* nodePtr;

    nodePtr = (NodeType *) malloc(sizeof(NodeType));

    //Part M
    strncpy(nodePtr->name, "Node 3",sizeof("Node 3"));

    //Part M
    nodePtr->next = NULL;

    //Part N
    printf("%s\n\n", nodePtr->name);

    //Part I2
    printf("%s\n", "Amount of Time to Complete Assignment: 30 minutes");

    return 0;
}

//Part D
int func1(int intArray[]){
    return intArray[0]*2;
}