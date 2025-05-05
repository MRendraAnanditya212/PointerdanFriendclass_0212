#include <iostream>
using namespace std;

class mahasiswa 
{
public:
    int nim;
    void showNim()
    {
        cout << "No induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa mhs; // object mhs
    mhs.nim = 2024;
    mhs. showNim(); // Member access Operator

    
    mahasiswa *pMhs = &mhs; // pointer Dereference pMhs 
    pMhs->nim = 3;      // Arrow Operator
    pMhs->showNim();
    return 0;
} 