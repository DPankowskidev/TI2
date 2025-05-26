#define line_SIZE 5
#include <iostream>
#include <stdio.h>
int line_table[line_SIZE] = { 0 };
int line_index = 0;
int start = 0;
int end = 0;

int isLineEmpty(void){
    return (line_index == 0) ? 1 : 0;
}

int isLineFull(void){
    return (line_index == (line_SIZE)) ? 1 : 0;
}

int Pop(void){
    if (!isLineEmpty()){
        if(start == line_SIZE){
            start = 0;
        }
        line_index--;
        start++;
        printf("w1 - %d, w2 - %d, w3 - %d, w4 - %d, w5 - %d\n",line_table[0], line_table[1], line_table[2], line_table[3], line_table[4]);
        //return line_table[(start-1)%line_SIZE];
        return line_table[start-1];
    }
    return line_table[0];
}

int Top(void){
    if (!isLineEmpty()){
        //return line_table[start%line_SIZE];
        printf("w1 - %d, w2 - %d, w3 - %d, w4 - %d, w5 - %d\n",line_table[0], line_table[1], line_table[2], line_table[3], line_table[4]);
        return line_table[start];
    }
    return line_table[0];
}

void Push(int val){
    if (!isLineFull()){
        if(end == line_SIZE){
            end = 0;
        }
        //line_table[end%line_SIZE] = val;
        line_table[end] = val;
        end++;
        line_index++;
        printf("w1 - %d, w2 - %d, w3 - %d, w4 - %d, w5 - %d\n",line_table[0], line_table[1], line_table[2], line_table[3], line_table[4]);
    }
}