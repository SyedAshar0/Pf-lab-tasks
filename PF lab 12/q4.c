#include<stdio.h>
#include<stdlib.h>
int main(){
    int N;
    int n;
    int count;
    int val;
    int max;    
     printf("Enter number of test cases:\n");
    scanf("%d",&n);
    for(int t=0; t<n; t++){  
        printf("Number of elements for test case %d:\n", t+1);
        scanf("%d", &N);  
        int *T = (int*)malloc(N * sizeof(int));     
        printf("Input elements for test case %d:\n", t+1);
        for(int j=0; j<N; j++){
            scanf("%d", &T[j]);
        }  
        int *fr = (int*)malloc(N * sizeof(int));       
        for(int j=0; j<N; j++){
            fr[j] = -1;
        }      
        max = 0;
        val = T[0];       
        for(int i = 0; i < N; i++){
            if(fr[i] == -1){  
                count = 1;  
                for(int j = i + 1; j < N; j++){
                    if(T[i] == T[j]){  
                        count++;
                        fr[j] = 0;  
                    }
                }
                fr[i] = count;   
                if(count > max){
                    max = count;
                    val = T[i];
                }
            }
        }       
        printf("Max occurrence in test case %d was: %d\n", t + 1, val);
        free(T);
        free(fr);
    }

    return 0;
}
