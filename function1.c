#include<stdio.h>
void display()
 {
    printf("Inside display function...\n");
 }
int main(){
    printf("Inside main function....\n");
    display();

    display();
    return 0;
}