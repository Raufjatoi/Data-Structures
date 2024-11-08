#include <stdio.h>
#include <conio.h>

int main (){
    int mat[3][3];
    int r , c = 0;

    mat[0][0] = 6; // stored at 0 row 0col
    mat[0][1] = 5;
    mat[0][2] = 10;
    mat[1][0] = 4;
    mat[1][1] = 3;
    mat[1][2] = 11;
    mat[2][0] = 2;
    mat[2][1] = 1;
    mat[2][2] = 14;

    for (r= 0; r < 3; r ++){
            printf("[%d][%d]",mat[r][c], " " , "\n");
            c++;
        }
    }