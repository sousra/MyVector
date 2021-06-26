#include "MyVector.h"

MyVector::Iterator::Iterator(ValueType* ptr) {
    _ptr = ptr;
}

ValueType& MyVector::Iterator::operator*() {
    return  *_ptr;
}

MyVector::Iterator& MyVector::Iterator::operator++() {
    ++_ptr;
    return *this;
}

MyVector::Iterator& MyVector::Iterator::operator--() {
    --_ptr;
    return *this;
}

MyVector::Iterator MyVector::Iterator::operator++(int) {
    Iterator temp = *this;
    ++(*this);
    return temp;
}

MyVector::Iterator MyVector::Iterator::operator--(int) {
    Iterator temp = *this;
    --(*this);
    return temp;
}

bool MyVector::Iterator::operator==(const Iterator& other) {
    return _ptr == other._ptr;
}

bool MyVector::Iterator::operator!=(const Iterator& other) {
    return !(*this == other);
}

MyVector::Iterator MyVector::begin() {
    return Iterator(&_data[0]);
}

MyVector::Iterator MyVector::end() {
    return Iterator(&_data[_size]);
}