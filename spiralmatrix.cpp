#include <iostream>
using namespace std;

// void spiralMatrix(int arr[][n], int m){
    

//     for(int i = minc;i <= maxc;i++){
//         cout<< arr[minr][i];
//     }

// }

int main(){
    int m,n;
    cout<< "Enter number of rows: ";
    cin>> m;
    cout<< "Enter number of columns: ";
    cin>> n;

    int arr[m][n];
    cout<< "Enter the elements of the matrix: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>> arr[i][j];
        } 
    } 
// 1 2 3 4 
// 5 6 7 8
//9 10 11 12
//13 14 15 16

    int minr=0,minc=0,maxr=m-1,maxc=n-1;
    while(minr<=maxr or minc<=maxc){
    for(int i = minc;i <= maxc;i++){
        cout<< arr[minr][i]<<" ";
    }
    minr++;
    
    for(int i = minr;i <= maxr;i++){
        cout<< arr[i][maxc]<<" ";
    }
    maxc--;
    
    for(int i = maxc;i >= minc;i--){
        cout<< arr[maxr][i]<<" ";
    }
    maxr--;

    for(int i = maxr;i >= minr;i--){
        cout<< arr[i][minc]<<" ";
    }
    minc++;
}
    return 0;
}