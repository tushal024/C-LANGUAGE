#include<stdio.h>

int main(){

    int num ,guj,eng,hin;

    printf("Gujarati mate 1 dabavo...\n");
    printf("Hindi ke liye 2 dabaeye...\n");
    printf("press 3 for English...2\n");

    scanf("%d",&num);

    switch (num)
    {
        case 1:
      
            printf("internet recharge mate 1 dabavo... \n");
            printf("Top-up recharge mate 2 dabavo... \n");
            printf("Special recharge mate 3 dabavo... \n");

            scanf("%d",&guj);

            switch (guj)
            {
                case 1:
                {
                    printf("tamaru internet  recharge safaltapurvak thay gyu che..");
                    break;
                    
                }
                
                case 2:
                {
                    printf("tamaru top-up recharge safaltapurvak thay gyu che...");
                    break;
                }

                case 3:
                {
                    printf("tamaru special recharge safaltapurvak thayu che...");
                    break;
                }

                default:{
                    printf("krupa kari ne 1,2,3 mathi vikalp pasand karo...");
                    break;
                }
               
            }
 break;  

          case 2:
        
            printf("internet recharge ke liye 1 dabayiye... \n");
            printf("Top-up recharge ke liye 2 dabayiye... \n");
            printf("Special recharge ke liye 3 dabayiye... \n");

            scanf("%d",&hin);

            switch (hin)
            {
                case 1:
                {
                    printf("apaka internet  recharge safaltapurvak ho chuka he...");
                    break;
                }

                case 2:
                {
                    printf("apaka top-up recharge safaltapurvak ho chuka he...");
                    break;
                }

                case 3:
                {
                    printf("apaka special recharge safaltapurvak ho chuka he...");
                    break;
                }

                default:{
                    printf("krupa kari  1,2,3 me se vikalp pasand kijiye...");
                    break;
                }
             
            }
 break;  
       

          case 3:
        
            printf(" press 1 for internet recharge...\n");
            printf(" press 2 for Top-up recharge...\n");
            printf(" press 3 for Special recharge...\n");

            scanf("%d",&eng);

            switch (eng)
            {
                case 1:
                {
                    printf("your internet recharge is successfully done..");
                    break;
                }

                case 2:
                {
                    printf("your top-up recharge is successfully done...");
                    break;
                }

                case 3:
                {
                    printf("your special recharge is successfully done...");
                    break;
                }

                default:{
                    printf("plese select your choice in this number 1,2,3");
                    break;
                }
               
            

        }
        
         break; 
         
        default:
       
            printf("plese select your choice in this number 1,2,3");
            break;
       

    }


}

