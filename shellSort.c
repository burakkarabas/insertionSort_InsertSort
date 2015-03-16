/*SHELL sýralama algoritmasý için */
#include<stdio.h>
#include<conio.h>
#include <time.h>
#include <stdlib.h>
int rastgeleUret(int a, int b) { 
  if(b <= a) { 
    printf("Ikinci parametre mutlaka ilkinden buyuk olmalidir!\n"); 
    return(0); 
  } else { 
    int randomize = rand(); 
    srand(time(0) * randomize); 
    return rand() % ((b - a) + 1) + a; 
  } 
}
int main()
{
 int arr[10000];
 int i,j,k,tmp,num,numOfComparation=0,numOfSwap=0;
 printf("Enter total no. of elements : ");
 scanf("%d", &num);
 for(k=0; k<num; k++)
 {
   arr[k] = rastgeleUret(0,num);
 }
 for(i=num/2; i>0; i=i/2)
 {
   for(j=i; j<num; j++)
   {
     for(k=j-i; k>=0; k=k-i)
     {
        numOfComparation++;
        if(arr[k+i]>=arr[k])
            break;
        else
        {
            numOfSwap++;
            tmp=arr[k];
            arr[k]=arr[k+i];
            arr[k+i]=tmp;
        }
     }
   }
 }
 printf("\t**** Shell Sorting ****\n");
 for(k=0; k<num; k++)
     printf("%d\t",arr[k]);
     printf("\n\n");
     printf("Yapilan comparation sayisi = %d",numOfComparation);printf("\n");
     printf("Yapilan swap sayisi = %d",numOfSwap);
 getch();
 return 0;
}
