#include<stdio.h>
#include<stdlib.h>
char str[100],pat[100],rep[100],ans[100];
int i=0,j=0,m=0,c=0,k,flag=0;

 void strs(){
    while(str[c]!='\0'){
        if(str[m]==pat[i]){
              i++;
              m++;
              if(pat[i]=='\0'){
                flag=1;
                for(k=0;rep[k]!='\0';k++,j++){
                    ans[j]=rep[k];
                }
                i=0;
                c=m;
              }
        }else{
            ans[j]=str[c];
            j++;
            c++;
            m=c;
            i=0;
        }
    }
    ans[j]='\0';
 }

 void main(){
    printf("Enter the string:\n");
    gets(str);
    printf("Enter the pattern:\n");
    gets(pat);
    printf("Enter the replacement:\n");
    gets(rep);
    strs();
    if(flag==1){
        printf("%s",ans);
    }else{
        printf("not working");
    }
 }
