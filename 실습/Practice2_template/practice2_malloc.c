#include <stdio.h>
#include <stdlib.h>

int main(void){
	char** pp_data = NULL;
	int n;
	int length;
	int i;
	printf("input the number of strings:");
	scanf("%d", &n);
	printf("input the max lenght of string:");
	scanf("%d", &length);
	//1. define & dynamic allocation
	pp_data = (char**)malloc(sizeof(char*) * n);
	for (int i=0; i<n; i++){
		pp_data[i] = (char*)malloc(sizeof(char) * length);
	}
	for (int i=0; i<n; i++){
		printf("input %d th string\n",i);
		scanf("%s",pp_data[i]);
	}
	//2. print string
	printf("-----------")
	for (int i=0; i<n; i++){
		printf("%s\n", pp_data[i]);
	}

	//3. free memory
	for (int i=0; i<n; i++){
		printf("free %d th memory \n", i);
		free(pp_data[i]);
		pp_data[i] = NULL;
	}
	free(pp_data);
	pp_data = NULL;
	printf("value of pp_data: %d", pp_data);
	return 0;
}
