#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <string>
#include <iostream>

class Span
{
private:
	Span(void);
	unsigned int N;
	std::vector<long int> v;
public:
	Span(unsigned int n);
	~Span(void);
	Span& operator=(const Span & other);
	Span(const Span& copy);

	void addNumber(int n);
	void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
	long int shortestSpan();
	long long int longestSpan();


	class MaxElements: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("The span reached the maximum number of elements");
		}
	};
	class MinElements: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("The span need minum 2 elements");
		}
	};
};

#endif
