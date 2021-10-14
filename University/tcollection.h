#pragma once

#include <iostream>
#include <vector>

template <typename T>
class TCollection {
    public:
        TCollection() : size_(0){}
        ~TCollection() {}

        void Add(T data) {
            data_.push_back(data);
            size_++;
        }

        void Remove(int index) {
            if (0 <= index && index < size_) {
                data_[index] = data_[size_-1];
                size_--;              
            }
        }

        int Get(int index, T &elm) const {
             if (0 <= index && index < size_) {
                elm = data_.at(index);
                return 0;
            }
            return 1;
        }
    private:
        std::vector<T> data_;
        int size_;
};