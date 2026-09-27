#include <iostream>
#include <windows.h>
using namespace std;

const int ARRAY_SIZE = 10;

int sumres(const int arr[ARRAY_SIZE]) {
    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += arr[i]; }
    return sum;
}

int resmin(const int arr[ARRAY_SIZE]) {
    int minVal = arr[0];
    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i]; }
    }
    return minVal;
}

int resmax(const int arr[ARRAY_SIZE]) {
    int maxVal = arr[0];
    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; }
    }
    return maxVal;
}

int countpos(const int arr[ARRAY_SIZE]) {
    int count = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] > 0) {
            count++; }
    }
    return count;
}

int countneg(const int arr[ARRAY_SIZE]) {
    int count = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] < 0) {
            count++; }
    }
    return count;
}

int counteven(const int arr[ARRAY_SIZE]) {
    int count = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] % 2 == 0) {
            count++; }
    }
    return count;
}

int countodd(const int arr[ARRAY_SIZE]) {
    int count = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] % 2 != 0) {
            count++; }
    }
    return count;
}

int resgreater(const int arr[ARRAY_SIZE], int x) {
    int count = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] > x) {
            count++; }
    }
    return count;
}

int resless(const int arr[ARRAY_SIZE], int x) {
    int count = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] < x) {
            count++; }
    }
    return count;
}

bool hasvalue(const int arr[ARRAY_SIZE], int x) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] == x) {
            return true; }
    }
    return false;
}

int main() {
    int numbers[ARRAY_SIZE];

    cout<<"Enter 10 numbers:\n";

    for (int i = 0; i < ARRAY_SIZE; i++) {
        cin>>numbers[i];
    }

    cout<<"\nNumbers: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout<<numbers[i]<<" ";
    }

    cout<<"\n\n";

    cout<<"Sum: "<<sumres(numbers)<<"\n";
    cout<<"Minimum: "<<resmin(numbers)<<"\n";
    cout<<"Maximum: "<<resmax(numbers)<<"\n";
    cout<<"Positive: "<<countpos(numbers)<<"\n";
    cout<<"Negative: "<<countneg(numbers)<<"\n";
    cout<<"Even: "<<counteven(numbers)<<"\n";
    cout<<"Odd: "<<countodd(numbers)<<"\n";

    int x = 0;
    cout<<"\nX: ";
    cin>>x;

    cout<<"\nGreater than "<<x<<": "<<resgreater(numbers, x)<<"\n";
    cout<<"Lesser than "<<x<<": "<<resless(numbers, x)<<"\n";

    if (hasvalue(numbers, x)) {
        cout<<"Contains "<<x<<": yes\n";
    } else {
        cout<<"Contains "<<x <<": no\n";
    }

    return 0;
}