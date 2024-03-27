#include<stdio.h>
#include<ctype.h>
#include<math.h>

 int i,top=-1,op1,op2,res,s[20];
 char postfix[20],symb;

void push(int item){
    s[++top]=item;
}
int pop(){
    return (s[top--]);
}

 void main(){
    printf("Enter postfix expression:");
    scanf("%s",postfix);

    for(int i=0;postfix[i]!='\0';i++){
        symb=postfix[i];
        if(isdigit(symb)){
            push(symb-'0');
        }else{
            op2=pop();
            op1=pop();

                 switch(symb){
                    case '+':push(op1+op2);
                             break;
                    case '-':push(op1-op2);
                             break;
                    case '*':push(op1*op2);
                             break;
                    case '/':push(op1/op2);
                             break;
                    case '^':push(pow(op1,op2));
                             break;
                 }
        }
    }
    res=pop();
    printf("Result:%d",res);
 }
