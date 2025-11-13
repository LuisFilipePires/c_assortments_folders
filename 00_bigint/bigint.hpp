#ifndef BIGINT_HPP
# define BIGINT_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

class bigint
{
    public:
        std::vector<int> digits;
        bigint();
        bigint(long long n);
        bigint(const std::string& s);
        ~bigint();
        bigint(const bigint& copy);
        bigint& operator=(const bigint& other);
        bigint operator+(const bigint& other) const;

        friend std::ostream& operator<<(std::ostream& os, const bigint& c);
};


#endif