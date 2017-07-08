#include "../../include/strExt.hpp"
#include <iostream>

#include <ctime>


int main ( int argc, char ** argv )
{
	//std::cout << strFormat ( "10:\\{-{0, C5}-\\}\\{[D]\\} {1} {2}", 10, "haha", 12.0f ) << std::endl;

	std::cout << ws::strExt::strFormat ( "{0}", "string" ) << std::endl;
	std::cout << ws::strExt::strFormat ( "{0} {0}", "string" ) << std::endl;
	std::cout << ws::strExt::strFormat ( "{0} {1}", "string1", "string2" ) << std::endl;
	std::cout << ws::strExt::strFormat ( "{1} {0}", "string1", "string2" ) << std::endl;

	std::cout << ws::strExt::strFormat ( "|{0, 11}|", "string" ) << std::endl;
	std::cout << ws::strExt::strFormat ( "|{0, 12}|", "string" ) << std::endl;
	std::cout << ws::strExt::strFormat ( "|{0, 13}|", "string" ) << std::endl;
	std::cout << ws::strExt::strFormat ( "|{0, 14}|", "string" ) << std::endl;

	std::cout << ws::strExt::strFormat ( "|{0, -11}|", "string" ) << std::endl;
	std::cout << ws::strExt::strFormat ( "|{0, -12}|", "string" ) << std::endl;
	std::cout << ws::strExt::strFormat ( "|{0, -13}|", "string" ) << std::endl;
	std::cout << ws::strExt::strFormat ( "|{0, -14}|", "string" ) << std::endl;

	std::cout << ws::strExt::strFormat ( "{0}", 10 ) << std::endl;
	std::cout << ws::strExt::strFormat ( "{0, D}", 10 ) << std::endl;
	std::cout << ws::strExt::strFormat ( "{0, D4}", 10 ) << std::endl;
	std::cout << ws::strExt::strFormat ( "{0, D1}", 10 ) << std::endl;

	std::cout << ws::strExt::strFormat ( "{0}", 10.1f ) << std::endl;
	std::cout << ws::strExt::strFormat ( "{0, F}", 10.1f ) << std::endl;
	std::cout << ws::strExt::strFormat ( "{0, F2}", 10.1f ) << std::endl;
	std::cout << ws::strExt::strFormat ( "{0, F1}", 10.15f ) << std::endl;

	std::cout << ws::strExt::strFormat ( "{0, C}", 10.1f ) << std::endl;
	std::cout << ws::strExt::strFormat ( "{0, C2}", 10.1f ) << std::endl;
	std::cout << ws::strExt::strFormat ( "{0, C4}", 10.1f ) << std::endl;
	std::cout << ws::strExt::strFormat ( "{0, C2}", "$10.15" ) << std::endl;
	std::cout << ws::strExt::strFormat ( "{0, C2}", "$10.155" ) << std::endl;

	std::cout << ws::strExt::strFormat ( "{0}: {0, T}", (long)time( nullptr ) ) << std::endl;

	return 0;
}