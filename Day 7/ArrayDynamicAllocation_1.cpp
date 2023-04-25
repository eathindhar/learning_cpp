#include <iostream>

using namespace std;

int main(){
    int row, col;

    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of cols: ";
    cin>>col;

    //Dynamically allocate memory of size row*col;
    int *Arr = new int [row*col];

    //Assign values to the allocated memory
    for(int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            //using pointer arithmetic to assign values to 2D array
            *(Arr +i * col+j) = rand()%100;
        }
    }

    //Printing the 2D Array
    for(int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<*(Arr + i * col +j )<<" ";
        }
        cout<<endl;
    }

    //Deallocate Memory
    delete[] Arr;
    return 0;
}