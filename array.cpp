template <typename T>
class Array : public IPrint {
private:
    T* data;
    size_t size;
public:
    Array(size_t size) : size(size) {
        data = new T[size];
    }

    ~Array() {
        delete[] data;
    }

    T& operator[](size_t index) {
        return data[index];
    }

    const T& operator[](size_t index) const {
        return data[index];
    }

    size_t getSize() const {
        return size;
    }

    void print() const override {
        for (size_t i = 0; i < size; ++i) {
            if (data[i]) {
                data[i]->print();
            }
        }
    }
};
