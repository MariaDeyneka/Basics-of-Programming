#include <iostream>
using namespace std;
#define N 4
int main()
{
    /*int mat[N][N] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };*/
    int mat[N][N] = {
    { 0, 1, 1, 0 },
    { 0, 6, 7, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 }
    };


    const int k = 2;
    int maxMat[k][k];

    int maxSum = 0;
    for (int i = 0; i < N - k+1; ++i) {
        for (int j = 0; j < N - k +1; ++j) {
            int blockSum = 0;
            for (int kRow = 0; kRow < k;++kRow) {
                for (int kCol = 0; kCol < k; ++kCol) {
                    blockSum += mat[i + kRow][j + kCol];
                }
            }

            if (blockSum > maxSum) {
                maxSum = blockSum;

                for (int kRow = 0; kRow < k; ++kRow) {
                    for (int kCol = 0; kCol < k; ++kCol) {
                        maxMat[kRow][kCol] = mat[i + kRow][j + kCol];
                    }
                }
            }
        }
    }

    for (int i = 0; i < k; ++i, cout << endl)
        for (int j = 0; j < k; ++j)
            cout << maxMat[i][j] << " ";
    
    return 0;
}

/*1.Вивід: 1 1
           6 7
2.Ввід:{
    { 4, 16, 12, 0 },
    { 3, 6, 7, 2 },
    { 10, 0, 1, 4 },
    { 5, 5, 5, 5 }
    };
Вивід: 16 12                                                                                                     
        6 7

3.Ввід:{
    { 20, 31, 61, 0 },
    { 23, 63, 7, 10 },
    { 37, 4, 2, 2 },
    { 100, 20, 6, 9 }
    };
Вивід:31 61                                                                                                     
      63 7 */
