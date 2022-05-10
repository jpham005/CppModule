#pragma once

#include <stdexcept>

template <typename T>
void swap(T& arg1, T& arg2) {
  T temp = arg1;
  arg1 = arg2;
  arg2 = temp;
}

template <typename T>
class Array {
 public:
  Array() : data_(NULL), size_(0) {}
  Array(unsigned int nelem) : data_(new T[nelem]), size_(nelem) {}
  Array(const Array& origin) {
    if (origin.size_) {
      this->data_ = new T[origin.size_];
      this->size_ = origin.size_;

      for (unsigned int i = 0; i < origin.size_; ++i)
        this->data_[i] = origin.data_[i];
    }
  }
  Array& operator=(const Array& rhs) {
    Array temp(rhs);
    swap(temp.data_, this->data_);
    swap(temp.size_, this->size_);
  }
  ~Array() throw() {
    if (this->size_)
      delete[] data_;
  }

  T& operator[](std::size_t index) {
    if (index >= this->size_)
      throw std::exception(); // throw out_of_range("index out of range");
    return data_[index];
  }

  const T& operator[](std::size_t index) const {
    if (index >= this->size_)
      throw std::exception();
    return data_[index];
  }

  std::size_t size() const throw() {
    return this->size_;
  }

 private:
  T* data_;
  unsigned int size_;
};
