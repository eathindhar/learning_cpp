#include <iostream>

using namespace std;

int main(){
    int row, col;

    cout<<"Enter number of rows :";
    cin>>row;
    cout<<"Enter number of cols :";
    cin>>col;

    /*
    **arr is a pointer to a pointer, 
    *arr[] is an array of pointers. 
    They are not the same thing. 
    **arr may point to a pointer in an array, 
    or it may be pointing to a pointer that is not in an array. 
    *arr[] is not a pointer, it is an unsized array of pointers. 
    Never use the array syntax in a function parameter because it is misleading. 
    You can’t pass an array to a function. 
    It is only possible to pass a pointer to a value inside of an array **arr, or a pointer to an array * (*arr)[size]
    */
    //dynamically create array of pointers of size 'row'
    int **Arr = new int *[row];

    //dynamically allocate memory of col size 'col' for each row i.e for row indexed from 0 to row-1
    for(int i=0;i<row;i++){
        Arr[i] = new int[col];
    }

    //Assigning values to the allocated memory
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            Arr[i][j]= rand()%100;
        }
    }

    for(int i = 0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        delete[] Arr[i];
    }

    delete[] Arr;
    return 0;
}