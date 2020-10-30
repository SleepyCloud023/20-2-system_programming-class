//Template
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int compare(int a, int b){
    if(a>b)  
    	return 1;
    else 
       	return -1;
}
    

/***************************************************************
define bubble sort that uses pointer to 'compare' function above
***************************************************************/
int bubble_sort(int *n_array, int len, int (*compare_func)(int, int)){
    //printf("%d", len);
    for(int i = 1; i < len; i++){
        for(int j = 0; j < len - i; j++){
            int first = n_array[j];
            int second = n_array[j + 1];
            if (first >= second){
                n_array[j+1] = first;
                n_array[j] = second;
                //printf("swap occurs! %d %d", first, second);
            }
        }
    }
    return 0;
}

int main(){
    int n_array[SIZE] = {2,-9, 10, 15, 1, 3, -12, 5, 4, 1};

    //source code
    int (*fp)(int,int) = compare;
    int len = sizeof(n_array)/sizeof(int);
    int result = bubble_sort(n_array, len, fp);
    for (int i=0; i<len; i++){
        printf("%d ",n_array[i]);
    }
    return 0;
}
