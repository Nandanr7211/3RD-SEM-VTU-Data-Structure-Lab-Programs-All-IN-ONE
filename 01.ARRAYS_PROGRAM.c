#include<stdio.h>

 struct Week{
   char day[100];
   int date;
   char actdisp[100];
 };

 struct Week day[7];
  
   void read(){
       for(int i = 1;i<=7;i++){
       printf("Enter the date for week:\n");
       scanf("%d",&day[i].date);

       printf("Enter the Day for week:\n");
       scanf("%s",day[i].day);

       printf("Enter the activity discreption:\n");
       scanf("%s",day[i].actdisp);
    }
   }

    void display(){
      printf("------------Calendar---------\n");

      for(int i = 1; i<=7; i++){
         printf("Date:%d, \t Day:%s, \t ActivityDEScription:%s \n",day[i].date,day[i].day,day[i].actdisp);
      }

    }

     int main(){

         read();
         display();

         return 0;
     }
