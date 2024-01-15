#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	public:
		virtual ~Base(){};
};

class A: public Base
{
	public:
		A(){};
		~A(){};
		void	print_type();
};

class B: public Base
{
	public:
		B(){};
		~B(){};
		void	print_type();
};

class C: public Base
{
	public:
		C(){};
		~C(){};
		void	print_type();
};

#endif