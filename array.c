#include <stdio.h>
// wap to store roll number and marks obtained by 4 students side by side in matrix;
// find the sum of given matrix ;
void main()
{

     // ininsilize array
     // int m1[2]-r[3]-c={ {6,80,5},{7,5,6} };
     // int m2[4][4];
     // int r,c;
     // for(r=0;r<2;r++){
     //     for(c=0;c<3;c++){
     //         // printf("enter 1st matrix value :");
     //         printf("%d\t",m1[r][c]);
     //     }
     //       printf("\n");
     // }
      int m1[3][3];
      int r,c,sum=0;
      for(r=0 ;r<3 ; r++){
           for(c=0;c<3;c++){
                 printf("enter 1st matrix value :");
                 scanf("%d",&m1[r][c]);
           }
      }

      for(r=0;r<3 ;r++){
           for(c=0;c<3;c++){
                sum=sum+m1[r][c];
                
           }
           
      }
      printf("%d",sum);
}


// wap to find out max and min number :
/*
     int r, c;
     int m1[3][3], sum = 0, m2 = 0, m3 = 0;
     // printf("ente matrix value :");
     for (r = 0; r < 3; r++)
     {
          for (c = 0; c < 3; c++)
          {
               printf("ente matrix value :");
               scanf("%d", &m1[r][c]);
          }
     }
     printf("out put :\n");

     for (r = 0; r < 3; r++)
     {
          for (c = 0; c < 3; c++)
          {

               printf("%d\t", m1[r][c]);
          }
          printf("\n");
     }

     for (r = 0; r < 3; r++)
     {
          for (c = 0; c < 3; c++)
          {
               if (m1[r][c] > m2)
               {
                    m2 = m1[r][c];
               }
                else if(m3<m1[r][c])               
                    m3 = m1[r][c];
               }
          }
          
     }

     printf("%d\n", m2);
          printf("%d\n", m3);
*/