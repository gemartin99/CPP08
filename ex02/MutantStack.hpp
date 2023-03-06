#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;

    MutantStack(void): std::stack<T>() {}
    ~MutantStack(void) {}
    MutantStack(const MutantStack& copy) : std::stack<T>(copy) {}
    MutantStack& operator=(const MutantStack& other)
    {
        if (this != &other)
        {
            std::stack<T>::operator=(other);
        }
        return *this;
    }
    iterator begin() { return std::stack<T>::c.begin(); }
    iterator end() { return std::stack<T>::c.end(); }
};

#endif