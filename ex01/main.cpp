#include "Span.hpp"

#include <vector>

void
subjectTest() {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void
marzaTest() {
	srand(time(NULL));
	std::cout <<  "TRYING MAX INT MIN INT CASE" << std::endl;
	Span sp = Span(5);
	sp.addNumber(2147483647);
	sp.addNumber(-2147483648);
	std::cout <<  "LongestSpan: " << sp.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << sp.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "TRYING = OVERLOAD" << std::endl;
	Span spcopy = sp;
	std::cout <<  "LongestSpan: " << sp.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << sp.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "TRYING 50 NUMBERS (0 - 49)" << std::endl;
	Span spfifty = Span(50);
	for (int i = 0; i < 50; i++)
		spfifty.addNumber(i);
	std::cout <<  "LongestSpan: " << spfifty.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << spfifty.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "TRYING 0 and 1" << std::endl;
	Span zeroone = Span(50);
	zeroone.addNumber(0);
	zeroone.addNumber(1);
	std::cout <<  "LongestSpan: " << zeroone.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << zeroone.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "TRYING 1 and 0" << std::endl;
	Span onezero = Span(50);
	onezero.addNumber(0);
	onezero.addNumber(1);
	std::cout <<  "LongestSpan: " << onezero.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << onezero.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "TRYING SPAN of 10000" << std::endl;
	Span tenthousands = Span(10000);
	for (int i = 0; i < 10000; i++)
		tenthousands.addNumber(i);
	std::cout <<  "LongestSpan: " << tenthousands.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << tenthousands.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "TRYING COPY CONSTRUCOR FROM 50 NUMBERS (0 - 49) " << std::endl;
	Span spcopyc = Span(spfifty);
	std::cout <<  "LongestSpan: " << spcopyc.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << spcopyc.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "TRYING SPHARD EXPECTED 52 and 1" << std::endl;
	Span sphard = Span(50);
	sphard.addNumber(2);
	sphard.addNumber(5);
	sphard.addNumber(6);
	sphard.addNumber(12);
	sphard.addNumber(7);
	sphard.addNumber(9);
	sphard.addNumber(54);
	std::cout <<  "LongestSpan: " << sphard.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << sphard.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "TRYING 0 and 1" << std::endl;
	Span spzeroone = Span(2);
	spzeroone.addNumber(0);
	spzeroone.addNumber(1);
	std::cout <<  "LongestSpan: " << spzeroone.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << spzeroone.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "TRYING 0 and 0" << std::endl;
	Span zerozero = Span(2);
	zerozero.addNumber(0);
	zerozero.addNumber(0);
	std::cout <<  "LongestSpan: " << zerozero.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << zerozero.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "TRYING -1 and -1" << std::endl;
	Span minusone = Span(2);
	minusone.addNumber(0);
	minusone.addNumber(0);
	std::cout <<  "LongestSpan: " << minusone.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << minusone.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "100 NUMBERS FROM -50 to 49" << std::endl;
	Span sphundred = Span(100);
	for (int i = 0; i < 100; i++)
		sphundred.addNumber(i - 50);
	std::cout <<  "LongestSpan: " << sphundred.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << sphundred.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "100 NUMBERS ALL EQUALS" << std::endl;
	Span spallsame = Span(100);
	for (int i = 0; i < 100; i++)
		spallsame.addNumber(1);
	std::cout <<  "LongestSpan: " << spallsame.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << spallsame.shortestSpan() << std::endl;
	std::cout << std::endl;
	std::cout <<  "LETS GO FOR EXCEPTIONS" << std::endl;
	std::cout <<  "SEARCH RESULTS FROM A EMPTY SPAN" << std::endl;
	Span spexception(3);
	try
	{
		std::cout <<  "LongestSpan: " << spexception.longestSpan() << std::endl;
		std::cout <<  "ShorterSpan: " << spexception.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout <<  "SEARCH RESULTS FROM A SPAN WHIT ONLT ONE NUMBER" << std::endl;
	spexception.addNumber(1);
	try
	{
		std::cout <<  "LongestSpan: " << spexception.longestSpan() << std::endl;
		std::cout <<  "ShorterSpan: " << spexception.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	spexception.addNumber(1);
	spexception.addNumber(1);
	std::cout <<  "TRY ADD ONE MORE NUMBER THAN MAX" << std::endl;
	try
	{
		spexception.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int
main() {

	std::cout << "Subject" << std::endl;

	subjectTest();

	std::cout << std::endl;
	std::cout << "Marza Test" << std::endl;
	marzaTest();

}