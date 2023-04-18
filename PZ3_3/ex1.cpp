#include <iostream>

using std::cin, std::cout, std::endl;


void enter_arr(float arr[], const unsigned int len);
void print_values(float &n_sum, float &p_sum, float &z_count);
void fpoint(float* arr, const unsigned int *len, float *n_sum, float *p_sum, float *z_count);
void flink(float* arr, const unsigned int &len, float &n_sum, float &p_sum, float &z_count);

int main() {
    const unsigned int len = 5;
    float arr1[len], arr2[len], arr3[len];
    float n_sum, p_sum, z_count;
    n_sum = p_sum = z_count = 0;

    enter_arr(arr1, len);
    fpoint(arr1, &len, &n_sum, &p_sum, &z_count);
    print_values(n_sum, p_sum, z_count);
    n_sum = p_sum = z_count = 0;
    flink(arr1, len, n_sum, p_sum, z_count);
    print_values(n_sum, p_sum, z_count);

    enter_arr(arr2, len);
    fpoint(arr2, &len, &n_sum, &p_sum, &z_count);
    print_values(n_sum, p_sum, z_count);
    n_sum = p_sum = z_count = 0;
    flink(arr2, len, n_sum, p_sum, z_count);
    print_values(n_sum, p_sum, z_count);

    enter_arr(arr3, len);
    fpoint(arr3, &len, &n_sum, &p_sum, &z_count);
    print_values(n_sum, p_sum, z_count);
    n_sum = p_sum = z_count = 0;
    flink(arr3, len, n_sum, p_sum, z_count);
    print_values(n_sum, p_sum, z_count);

    return 0;
}

void enter_arr(float arr[], const unsigned int len) {
    for (int i = 0; i < len; i++) {
        cout << "Введите " << i << "-ый элемент массива: ";
        cin >> arr[i];
    }
    cout << endl;
}

void print_values(float &n_sum, float &p_sum, float &z_count) {
    cout << "Сумма отрицательных = " << n_sum << endl;
    cout << "Сумма положительных = " << p_sum << endl;
    cout << "Количество нулевых = " << z_count << endl << endl;
}

void fpoint(float* arr, const unsigned int *len, float *n_sum, float *p_sum, float *z_count) {
    for(int i = 0; i < *len; i++) {
        if (arr[i] < 0) {
            *n_sum += arr[i];
        }
        else if(arr[i] > 0) {
            *p_sum += arr[i];
        }
        else {
            *z_count++;
        }
    }
}

void flink(float* arr, const unsigned int &len, float &n_sum, float &p_sum, float &z_count) {
    for(int i = 0; i < len; i++) {
        if (arr[i] < 0) {
            n_sum += arr[i];
        }
        else if(arr[i] > 0) {
            p_sum += arr[i];
        }
        else {
            z_count++;
        }
    }
}