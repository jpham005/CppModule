#pragma once

// ex02

#include <exception>
#include <string>

class BureaucratException : public std::exception {
 private:
  const std::string bureaucrat_name_;
  const std::string form_name_;

 public:
  BureaucratException() throw();
  BureaucratException(const std::string& bureaucrat,
                      const std::string& form) throw();
  ~BureaucratException() throw();
  const std::string& GetBureaucratName() const throw();
  const std::string& GetFormName() const throw();
};
