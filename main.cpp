#include <iostream>

using namespace std;

int divRic(int num, int div){
    if(num<0) return -1;
    return 1+divRic(num-div,div);
}

int main()
{
    int num,divis;
    cout << "numero:" << endl;
    cin>>num;
    cout << "divisore:" << endl;
    cin>>divis;
    cout<<divRic(num,divis);
    return 0;
}
