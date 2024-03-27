#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
 int s[MAX];
 int top=-1;

 void push();
 void pop();
 void display();
 void palindrome();

 int main(){
    int ch;
    while(1){
        printf("\nENTER THE CHOICE\n 1.Push\n 2.pop\n 3.display \n 4.palindrome\n");
        scanf("%d",&ch);

        switch(ch){
            case 1 : push();break;
            case 2 : pop();break;
            case 3 : display();break;
            case 4 : palindrome();break;
        }
    }
    return 0;
 }

 void push(){
    int x;

    if(top==MAX-1){
        printf("Overflow");
    }else{
    printf("Enter to push element:");
    scanf("%d",&x);
    top=top+1;
    s[top]=x;
 }
 }
  
 void pop(){
    if(top==-1){
       printf("Underflow");
    }else{
    printf("The poped element is :%d",s[top]);
    top=top-1;
 }
 }

 void display(){
    for(int i=top;i>=0;i--){
        printf("|%d|\n",s[i]);
    }
 }
  void palindrome(){

    char a[10],b[10];
    printf("Enter the str\n");
    fflush(stdin);
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0){
    printf("this is palindrome");
    }else{
    printf("This is not palindrome");
  }
  }
