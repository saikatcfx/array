#include<stdio.h>
// wap to add elements tow matriecs
int main()
{
      int r,c,m1[3][3],m2[3][3],sum[3][3];


      for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("enter 1 nuber:");
            scanf("%d",&m1[r][c]);
        }
      }
      
    //   for(r=0;r<3;r++){
    //     for(c=0;c<3;c++){
    //         printf("%d\n",m1[r][c]);
            
    //     }
    //   }

      

      for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("enter 2nuber:");
            scanf("%d",&m2[r][c]);
        }
      }
    
      for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            sum[r][c]=m1[r][c]+m2[r][c];
        }
      }
        
      for(r=0;r<3;r++){
        for(c=0;c<3;c++){
             printf("  %d\t",sum[r][c]);
        }
        printf("\n");
      }
        
     
      


}