#include "Span.hpp"

Span::Span(unsigned int n): N(n)
{
	//std::cout << "Span default constructor called" << std::endl;
}

Span::~Span(void)
{

}

Span & Span::operator=(const Span & other)
{
	if (this == &other)
    	return *this;
    N = other.N;
    v = other.v;
    return *this;
}

Span::Span(const Span &copy): N(copy.N), v(copy.v)
{
	//std::cout << "Span copy constructor called" << std::endl;
}

void Span::addNumber(unsigned int n)
{
	if (v.size() == N)
    	throw MaxElements();
    v.push_back(n);
}

long int Span::shortestSpan()
{	
	if (v.size() < 2)
    	throw MinElements();
    std::vector<int> sortedVec(v);
    std::sort(sortedVec.begin(), sortedVec.end());
    int i = 1;
    int size = sortedVec.size();
    long int res;
    res = sortedVec[i] - sortedVec[i - 1];
    while (i < size)
    {
    	if (sortedVec[i] - sortedVec[i - 1] < res)
    		res = sortedVec[i] - sortedVec[i - 1];
    	i++;
    }
    return res;
}

long long int Span::longestSpan()
{
	if (v.size() < 2)
    	throw MinElements();
    std::vector<int> sortedVec(v);
    std::sort(sortedVec.begin(), sortedVec.end());
    int size = sortedVec.size() - 1;
    long int res = sortedVec[0] - sortedVec[size];
    return (res * -1);
}