#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout << "Enter rows of 1st matrix : ";
    cin >> m;
    int n;
    cout << "Enter cols of 1st matrix : ";
    cin >> n;
    int arr[m][n];
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // spiral
    int minr = 0;
    int minc = 0;
    int maxr = m-1;
    int maxc = n-1;
    int tne = n*m;
    int count = 0;
    while(minr<=maxr && minc<=maxc){
        // right 
        for(int j = minc; j<=maxc && count < tne; j++){
            cout << arr[minr][j] << " ";
            count++;
        }
        minr++;
        // if(minr>maxr || minc > maxc) break;
        // down
        for(int i = minr; i<=maxr && count < tne; i++){
            cout << arr[i][maxc] << " ";
            count++;
        }
        maxc--;
        // if(minr>maxr || minc > maxc) break;
        // left
        for(int j = maxc; j>=minc && count < tne; j--){
            cout << arr[maxr][j] << " ";
            count++;
        }
        maxr--;
        // if(minr>maxr || minc > maxc) break;
        // up
        for(int i = maxr; i>=minr && count < tne; i--){
            cout << arr[i][minc] << " ";
            count++;
        }
        minc++;
    }

    
}