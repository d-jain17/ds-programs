/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
void linearPro(int k,int ts, int tableLP[]){
    int flag=0;
    int m=k%ts;
    if(tableLP[m]==0){
        tableLP[m]=k;
    }
    else{
        flag=1;
        for(int i=1;i<=ts;i++){
            if(tableLP[(m+i)%ts]==0){
                tableLP[(m+i)%ts]=k;
                flag=0;
                break;
            }
        }
    }
    
}
void quadPro(int k,int ts, int tableLP[]){
    int flag=0;
    int m=k%ts;
    if(tableLP[m]==0){
        tableLP[m]=k;
    }
    else{
        flag=1;
        int i=1;
        while(flag==1){
            if(tableLP[(m+i*i)%ts]==0){
               tableLP[(m+i*i)%ts]=k;
               flag=0;
            }
            else{
                i++;
            }
        }
        
    }
    
}
void doubleHash(int k,int ts, int tableLP[]){
    int flag=0;
    int m=k%ts;
    if(tableLP[m]==0){
        tableLP[m]=k;
    }
    else{
        flag=1;
        int hDash=(2*k-7)%ts;
        int i=1;
        while(flag==1){
            if(tableLP[(m+i*(hDash))%ts]==0){
               tableLP[(m+i*(hDash))%ts]=k;
               flag=0;
            }
            else{
                i++;
            }
        }
        
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
   int* tableLP=(int*)calloc(15,sizeof(int));
   for(int i=0;i<n;i++){
       int k;
       scanf("%d",&k);
       //linearPro(k,15,tableLP);
        //quadPro(k,15,tableLP);
         doubleHash(k,15,tableLP);
   }
   for(int i=0;i<15;i++){
       printf("%d  ",tableLP[i]);
   }
   

    return 0;
}
