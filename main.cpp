#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	//volatile unsigned long i; for(i=0;i<1000000UL;i++);
	
	char mode[4];
	int caseNum = 0; 
	char tmp[3];
	cin >> mode >> caseNum;
	
	int process[caseNum][2];
	
	for(int i = 0; i < caseNum; i++){
		cin >> tmp >> process[i][0] >> process[i][1];		
	}
	for(int i = 0; i < caseNum; i++){
		cout << process[i][0] << " " << process[i][1] << endl;
	}
		
	
	/*
	int* ptr[2] = malloc(sizeof(int)*caseNumber);
	
	for(int i = 0; i < caseNumber; i++){
		cin >> tmp >> ptr[i][0] >> ptr[i][2];
	}
	for(int i = 0; i < caseNumber; i++){
		cout << tmp << ptr[i][0] << ptr[i][2];
	}
	//cout << mode;
	
	free(ptr);
	*/
	return 0;
}

