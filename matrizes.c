#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[2][2] = {{1, 2},
                        {3, 4}};
    int i, j;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
    
    return 0;
}