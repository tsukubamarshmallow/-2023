     1	#include <stdio.h>
     2	
     3	void sort(int n, int num[]){
     4	  int i, j;
     5	
     6	  for(i=0; i<n-1; i++){
     7	    for(j=i+1; j<n; j++){
     8	      if (num[i] > num[j]){
     9	        int tmp;
    10	        tmp = num[i];
    11	        num[i] = num[j];
    12	        num[j] = tmp;
    13	      }
    14	    }
    15	  }
    16	}
    17	
    18	int main(int ac, char* av[]){
    19	  int num[] = { 3, 1, 4, 5, 9, 2, 6, 8, 7 };
    20	  int i;
    21	
    22	  for(i = 0; i < 9; i++){
    23	    printf("%3d", num[i]);
    24	  }
    25	  printf("\n");
    26	
    27	  sort(9, num);
    28	
    29	  for(i = 0; i < 9; i++){
    30	    printf("%3d", num[i]);
    31	  }
    32	  printf("\n");
    33	}
