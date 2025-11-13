#include "bigint.hpp"


bigint::bigint()
{
    digits.push_back(0);
}

bigint::~bigint()
{

}

bigint::bigint(long long n)
{
    if (n == 0)
        digits.push_back(0);
    else
        while (n > 0)
    {
        digits.push_back(n % 10);
        n /= 10;
    }
}

bigint::bigint(const std::string& s)
{
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if (s[i] >= '0' && s[i] <= '9')
            digits.push_back(s[i] - '0');
    }
}

bigint::bigint(const bigint& copy)
{
    this->digits = copy.digits;
}

bigint& bigint::operator=(const bigint& other)
{
    if (this != &other)
    {
        this->digits = other.digits;
    }
    return (*this);
}

bigint bigint::operator+(const bigint& other) const
{
    bigint result;
    result.digits.clear();
    int carry = 0;
    int a = 0;
    int b = 0;
    int sum = 0;

    size_t max_size = std::max(this->digits.size(), other.digits.size());
        
    for (size_t i = 0; i < max_size || carry; ++i)
    {
        a = ( i < this->digits.size() ? this->digits[i] : 0);
        b = ( i < other.digits.size() ? other.digits[i] : 0);

        sum = a + b + carry;
        carry = sum / 10;

        result.digits.push_back(sum % 10);
        if (carry)
            result.digits.push_back(carry);
    }
    return (result);
   // 10005556666777  = 15 nbrs
    //    2222444488  = 10
}




std::ostream& operator<<(std::ostream& os, const bigint& c)
{

    for (int i = c.digits.size() - 1; i >= 0; --i)
    {
        os << c.digits[i];
    }

    return (os);
}
