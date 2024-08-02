#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		int fixedNumber;
		static const int fracBits = 8;

	public:
		Fixed();
		Fixed (const Fixed& src);
		Fixed& operator=(const Fixed& src);

		~Fixed();
		int getRawBits(void);
		void setRawBits(int const raw);
};

#endif