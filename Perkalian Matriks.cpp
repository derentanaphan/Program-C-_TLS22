#include <iostream>
using namespace std;

int main(){
    int baris1, baris2, kolom1, kolom2;

    cout << "Ukuran baris matriks pertama: " << endl;
    cin >> baris1;

    cout << "Ukuran kolom matriks pertama: " << endl;
    cin >> kolom1;

    cout << "Ukuran baris matriks kedua: " << endl;
    cin >> baris2;

    cout << "Ukuran kolom matriks kedua: " << endl;
    cin >> kolom2;

    cout << "---------------------------------------------------------------------------" << endl;

    if(baris1 == baris2 && kolom1==kolom2){
        double matriks1[baris1][kolom1], matriks2[baris2][kolom2], matriksHasil[baris1][kolom1];
        for(int i=0; i<baris1; i++)
        {
            cout << "Masukkan komponen baris ke " << i+1<< " matriks 1: " << endl;
             for(int j=0; j<kolom1; j++)
             { 
                cin >> matriks1[i][j];
             }
        }
        cout << "Matriks 1: " << endl;
        for(int i=0; i<baris1; i++)
        {
             for(int j=0; j<kolom1; j++)
             { 
                cout << matriks1[i][j] << " ";
             }
             cout << endl;
        }
        cout << "---------------------------------------------------------------------------" << endl;
        for(int i=0; i<baris2; i++)
        {
            cout << "Masukkan komponen baris ke " << i+1<< " matriks 2: " << endl;
             for(int j=0; j<kolom2; j++)
             { 
                cin >> matriks2[i][j];
             }
        }
        cout << "Matriks 2: " << endl;
        for(int i=0; i<baris2; i++)
        {
             for(int j=0; j<kolom2; j++)
             { 
                cout << matriks2[i][j] << " ";
             }
             cout << endl;
        }
        cout << "---------------------------------------------------------------------------";
        for(int i=0; i<baris1; i++)
        {
             for(int j=0; j<kolom1; j++)
             { 
                matriksHasil[i][j] = matriks1[i][j] + matriks2[i][j];
             }
             cout << endl;
        }
        cout << "Hasil pertambahan dari matriks tersebut: " << endl;
        for(int i=0; i<baris1; i++)
        {
             for(int j=0; j<kolom1; j++)
             { 
                cout << matriksHasil[i][j] << " ";
             }
             cout << endl;
        }
        
    }
    else 
    cout << "Masukkan ukuran matriks yang sama!!";

    return 0;
}