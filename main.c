#include <stdio.h>
#include <stdlib.h>
#define L 9
#define C 9

int explorar (int A[L][C], int i, int j){
	
	  if (i < 0 || j < 0) return 0;
    if (i >= L || j >= C) return 0;
    if (A[i][j] == 1) return  0;
    if ((i + 1) == L && (j +1) == C) return 1; // caminho encontrado
   
    
    if (A[i][j] == 0){
        A[i][j] = 2;

        if (explorar(A, i+1, j)){
            printf("A[%d][%d]: %d\t", i, j, A[i][j]);
           return 1;
        }
         if (explorar(A, i-1, j)){
            printf("A[%d][%d]: %d\t", i, j, A[i][j]);
           return 1;
        }
         if (explorar(A, i, j+1)){
            printf("A[%d][%d]: %d\t", i, j, A[i][j]);
            return 1;
        }
         if (explorar(A, i, j-1)){
          printf("A[%d][%d]: %d\t", i, j, A[i][j]);
            return 1;
        }
        return 0;
    } else return 0;
}

 main (){
/*      int A[L][C] = {
         0,0,0,0,1,1,1,0,0,
         1,1,0,0,1,1,0,0,1,
         0,1,0,1,0,0,1,1,1,
         1,1,0,0,0,0,0,1,1,
         0,1,1,1,1,0,0,0,0,
         1,1,1,0,0,1,1,0,1,
         0,0,0,1,0,1,0,0,0,
         1,1,1,0,1,1,1,1,0  
     }; */
/* 	int A[L][C] = {
			0,1,0,0,0,0,0,0,0,
			1,1, 1,1,1,1,1,1,1,
			1,1,1,1,1,0,1,1,1,
			1,1,0,1,1,1,1,1,1,
			1,1,1,1,1,1,1,1,1,
			1,1,1,1,1,1,1,1,1,
			1,1,1,1,0,1,1,1,1,
			1,1,1,1,1,1,1,0,1,
			1,1,1,1,1,1,1,1,1
	}; */
     int A[L][C] = {
         0,0,0,0,1,1,1,0,0,
         0,1,0,0,1,1,0,0,1,
         0,0,0,1,0,0,1,1,1,
         1,1,0,0,0,0,0,1,1,
         0,1,1,0,1,0,0,0,0,
         1,1,1,0,0,1,1,0,1,
         0,0,0,1,0,1,1,1,1,
         1,1,1,0,0,0,0,0,0  
     };
     
    if(explorar(A, 0, 0) == 1) printf("\nCaminho encontrado!\n");
    else  printf("\nNão existe um caminho para a saída!\n");
}
