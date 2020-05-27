/**
 * @file cpu_types.hpp
 * @author paul
 * @date 25.05.20
 * Description here TODO
 */
#ifndef TEMPLATEPROCESSOR_CPU_TYPES_HPP
#define TEMPLATEPROCESSOR_CPU_TYPES_HPP

#include "value_list.hpp"
#include "type_list.hpp"

using namespace static_stl::list;

using base_type = int;
constexpr auto MEM_SIZE = 1;

enum class Register {
        ZERO,
        A,
        B,
        C,
        D,
        E,
        LENGTH
};

template<typename T>
concept Registers = IsValueList<T>::val && ListOfType<base_type, T>::val;

template<typename T>
concept Memory = IsValueList<T>::val && ListOfType<base_type, T>::val;

template<typename T>
concept Program = IsTypeList<T>::val;

template<typename...T>
using DeclareProgram = typename FromVariadicType<T...>::type;


#endif //TEMPLATEPROCESSOR_CPU_TYPES_HPP
