/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD12-marie.liber
** File description:
** Array
*/

#ifndef ARRAY_HPP_
#define ARRAY_HPP_
#include <iostream>
#include <exception>
#include <functional>

template <typename T, unsigned int _size>
class Array {
    public:
        Array(){
            this->_Size = _size;
            this->list = NULL;
            if (this->_Size >= 0)
                this->list = new T[this->_Size];};
        ~Array(){};
        T& operator[](size_t index) const{
            if (index >= _size) 
                throw std::out_of_range("Out of range");
            else
                return this->list[index];
        };
        T& operator[](unsigned int index){
            if (  index > _size) 
                throw std::out_of_range("Out of range");
            else{
                //this->list[index] = value;
                return this->list[index];
            }
        };
        std::size_t size() const
        {
            return _size;
        };
        template<typename U>
        Array<U, _size>  convert(const std::function<U(const T&)>& converter) const
        {
            Array<U, _size> temp;
            for (unsigned int x = 0; x < _Size; x++) {
                temp[x] = (converter)(list[x]);
            }
                return temp;
        }
        void forEach(const std::function<void(const T&)>& task) const
        {
            for (unsigned int x = 0; x < _Size; x++)
                (task)(list[x]);
        }
        T *list;
        size_t _Size;
        T _Type;
};

template <typename T, unsigned int _size>
std::ostream& operator<<(std::ostream &os, const Array<T, _size> &array)
{
    os << "[";
    for (size_t i = 0; i < array._Size - 1; i++)
        os << array.list[i] << ", ";
    os << array.list[array._Size] << "]" << std::endl;
    return os;
};



#endif /* !ARRAY_HPP_ */
