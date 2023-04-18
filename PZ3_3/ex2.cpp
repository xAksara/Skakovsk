#include <iostream>

using std::cin, std::cout, std::endl;


void enter_arr(float arr[], const unsigned int len);
void print_values(float &min, float &min_i, float &max, float &max_i);
void fpoint(float* arr, const unsigned int *len, float *min, float *min_i, float *max, float *max_i);
void flink(float* arr, const unsigned int &len, float &min, float &min_i, float &max, float &max_i);

int main() {
    const unsigned int len = 5;
    float arr1[len], arr2[len], arr3[len];
    float min, max, min_index, max_index;
    min = max = min_index = max_index = 0;

    enter_arr(arr1, len);
    fpoint(arr1, &len, &min, &min_index, &max, &max_index);
    print_values(min, min_index, max, max_index);
    flink(arr1, len, min, min_index, max, max_index);
    print_values(min, min_index, max, max_index);

    enter_arr(arr2, len);
    fpoint(arr2, &len, &min, &min_index, &max, &max_index);
    print_values(min, min_index, max, max_index);
    flink(arr2, len, min, min_index, max, max_index);
    print_values(min, min_index, max, max_index);

    enter_arr(arr2, len);
    fpoint(arr2, &len, &min, &min_index, &max, &max_index);
    print_values(min, min_index, max, max_index);
    flink(arr2, len, min, min_index, max, max_index);
    print_values(min, min_index, max, max_index);

    return 0;
}

void enter_arr(float arr[], const unsigned int len) {
    for (int i = 0; i < len; i++) {
        cout << "Введите " << i << "-ый элемент массива: ";
        cin >> arr[i];
    }
    cout << endl;
}

void print_values(float &min, float &min_i, float &max, float &max_i) {
    cout << "Наибольший элемент находится на месте " << max_i << " и равен " << max << endl;
    cout << "Наименьший элемент находится на месте " << min_i << " и равен " << min << endl << endl;
}

void fpoint(float* arr, const unsigned int *len, float *min, float *min_i, float *max, float *max_i) {
    *min_i = *max_i = 0;
    *min = *max = arr[0];
    for(int i = 1; i < *len; i++) {
        if(arr[i] < *min) {
            *min = arr[i];
            *min_i = i;
        }
        else if(arr[i] > *max) {
            *max = arr[i];
            *max_i = i;
        }
    }
}

void flink(float* arr, const unsigned int &len, float &min, float &min_i, float &max, float &max_i) {
    min_i = max_i = 0;
    min = max = arr[0];
    for(int i = 1; i < len; i++) {
        if(arr[i] < min) {
            min = arr[i];
            min_i = i;
        }
        else if(arr[i] > max) {
            max = arr[i];
            max_i = i;
        }
    }
}