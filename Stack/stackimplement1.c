#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 100


int stack[MAX_SIZE];

int top = -1;
//stack'ten veri çekme işlemi
int pop(){
    if (top == -1){
        printf("Error: Stack is empty\n");
        return -1;
    }
    else {
        int value = stack[top];
        top--;
        return value;
    }
}
//stack'e veri ekleme işlemi
void push(int value){
    if (top == MAX_SIZE -1){
        printf("Error: Stack is full\n");
    }
    else {
        top++;
        stack[top] = value;
    }
}
//stackteki elemanlari yazdir
void print(){
    int i;
    for(i=0; i<= top; i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
//stack bos mu degil mi
void Isempty(){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else if(top != -1){
        printf("Stack is not empty\n");
    }
}
//stackin en üstteki elemanını gösterme
int peek(){
    if(top==-1){
        printf("Stack is empty so there is no element in the top\n");
    }
    else {
        printf("%d \n",stack[top]);
    }
}
int main(){
    push(5);
    push(10);
    push(15);
    print();
    Isempty();
    peek();
    pop();
    pop();
    print();
    peek();
    pop();
    peek();
    Isempty();

}
