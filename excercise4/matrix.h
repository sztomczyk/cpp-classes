// matrix.h

class Matrix {
    private:
        int matrix[4][4];

    public:
        void set(int arr[4][4]);
        int* get();
        void print();
        void add(int* arr);
        void subtract(int* arr);
        void multiply(int* arr);
        void multiplyBy(int val);
};