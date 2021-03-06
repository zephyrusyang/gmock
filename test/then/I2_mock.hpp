#ifndef I2_MOCK_HPP
#define I2_MOCK_HPP

#include <gmock/gmock.h>
#include "I2.hpp"

namespace n1 {

class I2_mock : public I2
{
public:
    I2_mock();
    virtual ~I2_mock();

    MOCK_CONST_METHOD0(f0, void());
    MOCK_METHOD1(f1, void(int));
    MOCK_METHOD1(f2, void(double));
    MOCK_METHOD2(f3, void(int, double));
    MOCK_METHOD3(f4, void(int, double, const std::string &));
    MOCK_METHOD1(f5, int(const std::string &));
    MOCK_CONST_METHOD1(f6, boost::shared_ptr<int>(const boost::shared_ptr<int> &));
    MOCK_CONST_METHOD0(f7, const int&());
    MOCK_METHOD0(f8, boost::function<void(int)>());
    MOCK_CONST_METHOD2(f9, boost::non_type<int,0>(const boost::non_type<int, 1> &, const boost::non_type<int, 2> &));
    MOCK_METHOD0(f10, const int*const ());
    MOCK_METHOD0(f11, const void());
    MOCK_METHOD0(f12, const void());
    MOCK_METHOD0(f13, const void());
    MOCK_METHOD0(f14, const void());
    MOCK_METHOD0(f15,  const void());
    MOCK_METHOD0(f16, const  void());
    MOCK_METHOD0(f17, const  void());
    virtual int operator()() { return function_call_or_cast_operator(); }
    MOCK_METHOD0(function_call_or_cast_operator, int());
    virtual void operator()(int arg0, double arg1, boost::function<void (int, double)> arg2, const boost::non_type<int, 1> & arg3, const std::string & arg4) {  function_call_or_cast_operator(arg0, arg1, arg2, arg3, arg4); }
    MOCK_METHOD5(function_call_or_cast_operator, void(int, double, boost::function<void (int, double)>, const boost::non_type<int, 1> &, const std::string &));
    virtual double operator[](int arg0) { return array_subscript_operator(arg0); }
    MOCK_METHOD1(array_subscript_operator, double(int));
    virtual void* operator->() const { return member_selection_operator(); }
    MOCK_CONST_METHOD0(member_selection_operator, void*());
};

} // namespace n1

#endif // I2_MOCK_HPP

