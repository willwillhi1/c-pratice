#include <iostream> 
using namespace std; 

int main() {
    const int n = 5;
    const int m = 5;
    
    int **arr = new int*[m];  //2-dim array

    for(int i = 0;i < m;i++){
        arr[i] = new int[n];
    }

    arr[1][1] = 1; 
    cout << arr[1][1] << endl;
    
    for(int i = 0;i < m;i++){
        delete [] arr[i]; 
    }
    
    return 0; 
}
