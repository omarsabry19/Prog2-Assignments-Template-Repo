//omar sabry
//20216573

#include <iostream>
#include <algorithm>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int arr[] = {a, b, c};
    std::sort(arr, arr + 3);

    std::cout << arr[0] << " " << arr[1] << " " << arr[2] << std::endl;

   
    std::cout << std::endl;

   
    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}
