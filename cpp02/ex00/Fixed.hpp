#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		int fixedNumber;
		static const int fracBits = 8;

	public:
		Fixed();

		Fixed(const Fixed& src);

		Fixed& operator=(const Fixed& rhs);

		// Destructor
		~Fixed();

		int getRawBits(void) const;

		void setRawBits(int const raw);
};

#endif