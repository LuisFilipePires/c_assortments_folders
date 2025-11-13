#include "bigint.hpp"
#include <iostream>

int main()
{

    const bigint aa;
    std::cout << "aa = " << aa << std::endl;

    bigint bb(aa);
    std::cout << "bb = " << bb << std::endl;

    const bigint a(42);
    std::cout << "a = " << a << std::endl;

    bigint cc(a);
    std::cout << "cc = " << cc << std::endl;


    bigint b(21), c, d(1337), e(d);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;

    bigint f = e;
    std::cout << "f = " << f << std::endl;

    bigint g("21215512151521515584888799000009989000000000000000098980");
    std::cout << "g = " << g << std::endl;


    std::cout << "a + b = " << a + b << std::endl;
    /*std::cout << "(c += a) = " << (c += a) << std::endl;

    std::cout << "b = " << b << std::endl;
    std::cout << "++b = " << ++b << std::endl;
    std::cout << "b++ = " << b++ << std::endl;

    std::cout << "(b << 10) + 42 = " << ((b << 10) + 42) << std::endl;
    std::cout << "(d <<= 4) = " << (d <<= 4) << std::endl;
    std::cout << "(d >>= 2) = " << (d >>= (const bigint)2) << std::endl;

    std::cout << "a =" << a << std::endl;
    std::cout << "d =" << d << std::endl;

    std::cout << "(d < a) = " << (d < a) << std::endl;
    std::cout << "(d <= a) = " << (d <= a) << std::endl;
    std::cout << "(d > a) = " << (d > a) << std::endl;
    std::cout << "(d >= a) = " << (d >= a) << std::endl;
    std::cout << "(d == a) = " << (d == a) << std::endl;
    std::cout << "(d != a) = " << (d != a) << std::endl;*/
}
