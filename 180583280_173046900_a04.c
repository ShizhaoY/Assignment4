#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_LEN 1000
#define MAX_RESOURCE_NUMBER 100
#define MAX_PROCESS_NUMBER 100

struct BankAlgorithmData{
    int available[MAX_RESOURCE_NUMBER];
    int maximum[MAX_PROCESS_NUMBER][MAX_RESOURCE_NUMBER];
    int allocated[MAX_PROCESS_NUMBER][MAX_RESOURCE_NUMBER];
    int need[MAX_PROCESS_NUMBER][MAX_RESOURCE_NUMBER];
} ;

struct BankAlgorithmData bankAlgorithmData;
int processRunSequence[MAX_PROCESS_NUMBER] ;
int processNumber = 0;
int resourceNumber = 0;

void synchronousNeed(){
    /*
    synchronous need data via maximum and allocated
    */
    for(int i = 0; i < processNumber; i++){
        for(int j = 0; j < resourceNumber; j++){
            bankAlgorithmData.need[i][j] = bankAlgorithmData.maximum[i][j] - bankAlgorithmData.allocated[i][j];
        }
    }
}

void readFileInitData(){
    /*
    Init bank algorithm data
    */
    FILE *file = fopen("./sample4_in.txt","r");
    while(!feof(file)){
        char oneLine[MAX_LINE_LEN];
        if(fgets(oneLine,MAX_LINE_LEN,file) != NULL){
            char *token = NULL;
            token = strtok(oneLine, ",");
            int i = 0;
            while (token != NULL) {
                bankAlgorithmData.maximum[processNumber][i] = atoi(token);
                token = strtok(NULL, ",");
                ++i;
            }
            processNumber++;
        }
    }
    synchronousNeed();
}

void printfBaseInformation(){
    printf("Number of Customer: %d \n",processNumber);
    printf("Currently Available resources:");
    for(int i = 0; i < resourceNumber; ++i){
        printf(" %d",bankAlgorithmData.available[i]);
        if(i == resourceNumber-1){
            printf("\n");
        }
    }
    printf("Maximum resources from file:\n");
    for(int i = 0; i < processNumber; ++i){
        for(int j = 0; j < resourceNumber; ++j){
            printf("%d ",bankAlgorithmData.maximum[i][j]);
            if(j == resourceNumber - 1){
                printf("\n");
            }
        }
    }
}

int main(int argc,char * argv[]) {
    for(int i = 1; i < argc; ++i){
        bankAlgorithmData.available[i-1] = atoi(argv[i]);
        resourceNumber++;
    }
    readFileInitData();
    printfBaseInformation();
	return 0;
}