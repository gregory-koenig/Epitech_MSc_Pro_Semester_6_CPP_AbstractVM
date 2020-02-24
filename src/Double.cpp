#include "Double.hh"

AbstractVM::Operand::Double::Double(const std::string & value) :
  Operand(DOUBLE, value)
{
}

AbstractVM::Operand::Double::~Double()
{
}