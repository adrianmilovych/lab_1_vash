#include 

using namespace std;

const int SIZE = 10;

int sumres(const int arr[SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i]; }
    return sum;
}

int resmin(const int arr[SIZE]) {
    int minVal = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i]; }
    }
    return minVal;
}

int resmax(const int arr[SIZE]) {
    int maxVal = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; }
    }
    return maxVal;
}

int countpos(const int arr[SIZE]) {
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > 0) {
            count++; }
    }
    return count;
}

int countneg(const int arr[SIZE]) {
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < 0) {
            count++; }
    }
    return count;
}

int counteven(const int arr[SIZE]) {
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            count++; }
    }
    return count;
}

int countodd(const int arr[SIZE]) {
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 != 0) {
            count++; }
    }
    return count;
}

int resgreater(const int arr[SIZE], int x) {
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > x) {
            count++; }
    }
    return count;
}

int resless(const int arr[SIZE], int x) {
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < x) {
            count++; }
    }
    return count;
}

bool hasvalue(const int arr[SIZE], int x) {
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == x) {
            return true; }
    }
    return false;
}

int main() {
    int numbers[SIZE];

    cout<<"Введіть 10 чисел:\n";

    for (int i = 0; i < SIZE; i++) {
        cin>>numbers[i];
    }

    cout<<"\nЧисла: ";
    for (int i = 0; i < SIZE; i++) {
        cout<<numbers[i]<<" ";
    }

    cout<<"\n\n";

    cout<<"Сума: "<<sumres(numbers)<<"\n";
    cout<<"Мінімум: "<<resmin(numbers)<<"\n";
    cout<<"Максимум: "<<resmax(numbers)<<"\n";
    cout<<"Додатнє: "<<countpos(numbers)<<"\n";
    cout<<"Від'ємне: "<<countneg(numbers)<<"\n";
    cout<<"Парне: "<<counteven(numbers)<<"\n";
    cout<<"Непарне: "<<countodd(numbers)<<"\n";

    int x = 0;
    cout<<"\nX: ";
    cin>>x;

    cout<<"\nБільше за "<<x<<": "<<resgreater(numbers, x)<<"\n";
    cout<<"Меньше за "<<x<<": "<<resless(numbers, x)<<"\n";

    if (hasvalue(numbers, x)) {
        cout<<"Contains "<<x<<": yes\n";
    } else {
        cout<<"Contains "<<x <<": no\n";
    }

    return 0;
}