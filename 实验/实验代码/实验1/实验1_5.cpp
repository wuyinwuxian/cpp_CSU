#include<iostream>
using namespace std;

// int�͡�float�͡�double�ͼӷ���������
int add(int a, int b){
    return a + b;
}

float add(float a, float b){
    return a + b;
}

double add(double a, double b){
    return a + b;
}


// һά����ӷ�ģ�庯��
template<typename T>
T* array_add(T* arr1, T* arr2, int len){
    T* result = new T[len];
    for(int i = 0; i < len; i++){
        result[i] = add(arr1[i],arr2[i]);
    }
    return result;
}

// һά����ӷ���������
int* add(int* arr1, int* arr2, int len){
    return array_add<int>(arr1, arr2, len);
}

float* add(float* arr1, float* arr2, int len){
    return array_add<float>(arr1, arr2, len);
}

double* add(double* arr1, double* arr2, int len){
    return array_add<double>(arr1, arr2, len);
}


int main(){
    // int�͡�float�͡�double����Ӳ���
    cout << add(1, 2) << endl;
    cout << add(1.2f, 2.3f) << endl;
    cout << add(1.23, 2.34) << endl;

    // һά������Ӳ���
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int len = sizeof(arr1)/sizeof(arr1[0]) ;
    int* arr3 =  add(arr1, arr2, len);
    for(int i = 0; i < len; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;
	return 0;
}


