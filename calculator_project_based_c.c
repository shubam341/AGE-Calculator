

                                              // PROJECT ON AGE CALCULAT0R OF C PROGRAMMING........                                




#include<stdio.h>
  int main()
  {
    int d1,m1,y1,d2,m2,y2,r1,r2,r3;
    printf("===============================================================\n");
    printf("                     age calculator                            \n");
    printf("===============================================================\n");
    printf("enter your birth date\n");
    scanf("%d",&d1);
    printf("enter your  birth month\n");
    scanf("%d",&m1);
    printf("enter your birth year\n");
    scanf("%d",&y1);

    printf("enter your  current birth date\n");
    scanf("%d",&d2);
    printf("enter your   current birth month\n");
    scanf("%d",&m2);
    printf("enter your cureent birth year\n");
    scanf("%d",&y2);
     

     if((d1>31||d1<1)&&(d2>31||d2<1)&&(m1>12||m1<1)&&(m2>12||m2<1) && (y1<0||y2<0))
     {
        printf("you enter wrong something try again \n");
     }
     else
     {
        r3=y2-y1;
        if (d2>=d1)
         {
            r1=d2-d1;
        }
        else
        {
            m2=m2-1;
        d2=d2+30;
        r1=d2-d1;


        }
         if (m2>=m1)
        {
            r2=m2-m1;
        }
        else
        {
            y2=y2-1;
        m2=m2+12;
        r2=m2-m1;
        
        
     }
     
      }

     printf("your age is %d date %dmonth %d year\n",r1,r2,r3);
     
  return 0;
  }


                                                           