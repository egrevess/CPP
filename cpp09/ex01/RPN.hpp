#ifndef RPN_HPP
# define RPN_HPP

# include <string>
# include <vector>

class RPN {
	public:
		RPN();
		~RPN();
		RPN(const RPN &copy);

		RPN	&operator=(const RPN &copy);
		void parseExpression(const std::string& expression);
		int calculate();
		bool isError() const;
		std::string getErrorMessage() const;

	private:
		std::vector<int> 	_stack;
		bool 				_error;
		std::string 		_errorMessage;

		void push(int number);
		int pop();
		bool performOperation(const char operation);
};

#endif // RPN_HPP

