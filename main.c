#include <stdlib.h>
#include <stdio.h>

int main(){
	//volatile unsigned long i; for(i=0;i<1000000UL;i++);
	
	char mode[5];
	int caseNum = 0; 
	char tmp[4];
	int i ,j;
	
	scanf(" %s", &mode);
	scanf(" %d", &caseNum);
	
	int **caseData = (int**)malloc(sizeof(int*) * caseNum);
	
	for(i = 0; i < caseNum; i++){
		caseData[i] = (int*)malloc(sizeof(int) * 3);
	}

	for(i = 0; i < caseNum; i++){
		scanf(" %s", &tmp);
		for(j = 0; j < 2; j++){
			scanf(" %d", &caseData[i][j]);
		}
	}
	
	
	
	/*
	printf("mode : %s", mode);
	printf("\n\n");
	for(i = 0; i < caseNum; i++){
		for(j = 0; j < 2; j++){
			printf(" %d", caseData[i][j]);
		}
		printf("\n");
	}
	*/

	for(int i = 0; i < caseNum; i++){
		free(caseData[i]);
	}
	
	return 0;
}

