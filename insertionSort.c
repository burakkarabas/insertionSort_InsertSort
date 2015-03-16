/*Insertion Sort içindir*/
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
  int n, array[1000], c, d, t,numOfComp=0,numOfSwap=0;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++) {
    //scanf("%d", &array[c]);
    array[c] = rastgeleUret(0,n);
  }
 
  for (c = 1 ; c <= n - 1; c++) {
    d = c;
    numOfComp++;
    while ( d > 0 && array[d] < array[d-1]) {
      numOfComp++;
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
      numOfSwap++;
 
      d--;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <= n - 1; c++) {
    printf("%d - ", array[c]);
  }
  printf("\n\n");
  printf("Num Of Comp = %d",numOfComp);printf("\n");
  printf("Num Of Swap = %d",numOfSwap);
  getch();
  return 0;
}
