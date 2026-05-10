#include<iostream>
using namespace std;

int main() {

    int arr[5] = {20, 78, 2220, 39, 90};

    int largestNumber = arr[0];

    for(int i = 1; i < 5; i++) {

        if(arr[i] > largestNumber) {

            largestNumber = arr[i];
        }
    }

    cout << "Largest Number: " << largestNumber << endl;

    return 0;
}
