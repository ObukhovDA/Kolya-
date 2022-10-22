#include <iostream>
#include <cstdlib>

int* task1(int&, int&, int&);
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int* result = task1(x, y, z);
    
    cout << "Output: " << endl;
    for (int i = 0; i <= sizeof(result) / sizeof(*result); i++) {
        cout << result[i] << " ";
    }

    return EXIT_SUCCESS;
}

int* task1(int& var1, int& var2, int& var3) {
    int* nums = new int[3];
    int k = 0;
    if (var1 < 0) {
        nums[k] = var1;
        k++;
    }
    if (var2 < 0) {
        nums[k] = var2;
        k++;
    }
    if (var3 < 0) {
        nums[k] = var3;
    }
    return nums;
}