#ifndef                         DOUBLE_HH_
# define                        DOUBLE_HH_

# include						"Operand.hh"

namespace           			AbstractVM
{
    namespace       			Operand
    {
        class       			Double : public Operand<double>
        {
        public:
          Double(const std::string & value);
          ~Double();
        };
    }
}

#endif