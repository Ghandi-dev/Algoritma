#include <cstdio>
using namespace std;

int main() {
    int min,input,data[5];
    for(int i = 0; i<(sizeof(data) / sizeof(int));i++){
        printf("Input data A [%d]: ",i);
        scanf("%d",&input);
        data[i]= input;
    }
    min = data[0];
    for(int i = 0; i<(sizeof(data) / sizeof(int)); i++){
        if(data[i]<min){
            min = data[i];
        }
    }
    printf("\n\nNilai minimun = %d", min);

    return 0;
}