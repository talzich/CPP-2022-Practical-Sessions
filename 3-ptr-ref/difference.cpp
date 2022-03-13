#include <iostream>
using namespace std;

int main(){
	
	int* p1; // -> pointer
    //int& r1; // -> reference, compile error

    int num = 1, num2 = 999;

    cout << "Pointer:" << endl;
    int* pnum = &num;
    cout << "pnum = " << pnum << " " << *pnum << " " << num << endl;
    (*pnum) = 2;
    cout << "pnum = " << pnum << " " << *pnum << " " << num << endl;
    pnum = &num2;
    cout << "pnum = " << pnum << " " << *pnum << " " << num << endl;
    pnum += 4; // unsafe
    cout << "pnum = " << pnum << " " << *pnum << " " << num << endl << endl;

    cout << "Reference:" << endl;
    int& rnum = num;
    cout << "rnum = " << &rnum << " " << rnum << " " << num << endl;
    rnum = 3;     // Here a reference is like a pointer
    cout << "rnum = " << &rnum << " " << rnum << " " << num << endl;
    rnum = num2;  // Here a reference is unlike a pointer
    cout << "rnum = " << &rnum << " " << rnum << " " << num << endl;
    rnum += 4;
    cout << "rnum = " << &rnum << " " << rnum << " " << num << endl << endl;
    return 0;
}
