#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int counter;
    int i;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    //Loop with for
    //Loop for ascending
    for(counter = 0; counter < 5; counter++){
        cout << "Nilai counter = " << counter << " TI UMY" << end1;
    }
    cout << "Nilai counter terakhir = " << counter << end1;
    cout << end1;

    //Loop for descending
    for(counter = 5; counter > 0; counter--){
        cout << "Nilai counter = " << counter << " TI UMY" << end1;
    }
    cout << "Nilai counter terakhir = " << counter << end1;
    cout << end1;

    //Loop with while
    srand(time(0));
    i = rand() % 10;

    cout << "Nilai awal i = " << i << end1;
    while (i < 7)
    {
        cout << "Nilai i = " << i << " TI UMY" << end1;
        i = rand() % 10;
        perulanganWhile++;
    }
    cout << "Jumlah perulangan = " << perulanganWhile << end1;
    cout << "Nilai akhir i = " << i << end1;

    cout << end1;

     //Loop do while
     cout << "Perulangan Do "
}