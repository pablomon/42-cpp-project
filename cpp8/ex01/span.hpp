#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <vector>

class span
{
	private:
	unsigned int size;
	std::vector<int> container;
	
	public:
	span(const unsigned int size);
	span(const span& other);
	~span();
	span& operator= (const span& other);
	
	void addNumber(int n);
	unsigned int shortestSpan();
	unsigned int longestSpan();

	class SpanException : public std::exception
	{
		public:
		virtual const char * what() const throw ();
	};

	template <typename T>
	void addRange(T begin, T end)
	{
		unsigned int distance = std::distance(begin, end);
		if (size - container.size() < distance)
			throw SpanException();
		std::copy(begin, end, std::back_inserter(container));
	}
};

#endif
