#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <memory>

namespace ft {
	template <class T, class Allocator = std::allocator<T> >
	class vector {
		public:
			typedef typename Allocator::reference reference;
			typedef typename Allocator::const_reference const_reference;
			typedef implementation defined iterator;
			typedef implementation defined const_iterator;

	};
}

#endif