#include <iostream>

using namespace std;

int main()
{
    int i, j, count = 1, b = 0, N;
    cin >>N;
    if(N==1){
        cout << 2<<endl;
        return 2;
    }
    cout << "\nFirst " << N <<  " Prime Numbers Are\n" << "2 ";

    for (i = 3; i > 0; ++i){
        for (j = 2; j <= i / 2; ++j){
            if (i % j == 0){
                b = 1;
                break;
            }
        }
        if (b == 0){
            cout  << i << " ";
            count++;
        }
        b = 0;
        if (count == N)
            break;
    }

    cout << endl;
    return 0;
}
