#include <stdio.h>

int main() {
    int rows = 5, cols = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
        
            if (i == 0 || j == 0 || j == cols-1 || (i==rows/2&& j>0)) {
                printf("*  ");
            } else {
               
                printf("   ");
            }
        }
       
        printf("\n");
    }

    return 0;
}
