
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		const std::string	Name;
		int					Grade;
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string _Name, const int _Grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat	&operator=(const Bureaucrat &other);
		~Bureaucrat(void);

		int	GetGrade(void) const;
		const std::string GetName(void) const;
		void IncGrade(void);
		void DecGrade(void);
		void AddGrade(const int _Grade);
		class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);




#endif
