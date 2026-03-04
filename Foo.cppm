module;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct  __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
enum __rlimit_resource
{
  RLIMIT_CPU = 0,
  RLIMIT_FSIZE = 1,
  RLIMIT_DATA = 2,
  RLIMIT_STACK = 3,
  RLIMIT_CORE = 4,
  __RLIMIT_RSS = 5,
  RLIMIT_NOFILE = 7,
  __RLIMIT_OFILE = RLIMIT_NOFILE,
  RLIMIT_AS = 9,
  __RLIMIT_NPROC = 6,
  __RLIMIT_MEMLOCK = 8,
  __RLIMIT_LOCKS = 10,
  __RLIMIT_SIGPENDING = 11,
  __RLIMIT_MSGQUEUE = 12,
  __RLIMIT_NICE = 13,
  __RLIMIT_RTPRIO = 14,
  __RLIMIT_RTTIME = 15,
  __RLIMIT_NLIMITS = 16,
  __RLIM_NLIMITS = __RLIMIT_NLIMITS
};
typedef __rlim_t rlim_t;
typedef __rlim64_t rlim64_t;
struct rlimit
  {
    rlim_t rlim_cur;
    rlim_t rlim_max;
  };
struct rlimit64
  ;
enum __rusage_who
{
  RUSAGE_SELF = 0,
  RUSAGE_CHILDREN = -1
  ,
  RUSAGE_THREAD = 1
};
struct timeval
;;
struct rusage
  ;
enum __priority_which
{
  PRIO_PROCESS = 0,
  PRIO_PGRP = 1,
  PRIO_USER = 2
};
extern "C" ;
typedef __id_t id_t;
extern "C" {
typedef int __rlimit_resource_t;
typedef int __rusage_who_t;
typedef int __priority_which_t;
;
;
;
;
;
;
;
}
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmacro-redefined"
#pragma clang diagnostic pop
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, _Tp __v>
struct [[_Clang::__no_specializations__]] integral_constant {
  static inline constexpr const _Tp value = __v;
  typedef _Tp value_type;
  typedef integral_constant type;
};
typedef integral_constant<bool, true> true_type;
typedef integral_constant<bool, false> false_type;
template <bool _Val>
using _BoolConstant [[__gnu__::__nodebug__]] = integral_constant<bool, _Val>;
template <bool __b>
using bool_constant = integral_constant<bool, __b>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_class : integral_constant<bool, __is_class(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_class_v = __is_class(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_enum : integral_constant<bool, __is_enum(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_enum_v = __is_enum(_Tp);
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_scoped_enum : bool_constant<__is_scoped_enum(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_scoped_enum_v = __is_scoped_enum(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_union : integral_constant<bool, __is_union(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_union_v = __is_union(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
concept __class_or_enum = is_class_v<_Tp> || is_union_v<_Tp> || is_enum_v<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using size_t = decltype(sizeof(int));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] remove_cv ;
template <class _Tp>
using __remove_cv_t [[__gnu__::__nodebug__]] = __remove_cv(_Tp);
template <class _Tp>
using remove_cv_t = __remove_cv_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp> struct __libcpp_is_floating_point : false_type {};
template <> struct __libcpp_is_floating_point<float> : true_type {};
template <> struct __libcpp_is_floating_point<double> : true_type {};
template <> struct __libcpp_is_floating_point<long double> : true_type {};
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_floating_point : __libcpp_is_floating_point<__remove_cv_t<_Tp> > {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_floating_point_v = is_floating_point<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_integral : _BoolConstant<__is_integral(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_integral_v = __is_integral(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_arithmetic
    : integral_constant<bool, is_integral<_Tp>::value || is_floating_point<_Tp>::value> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_arithmetic_v = is_arithmetic<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_signed : _BoolConstant<__is_signed(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_signed_v = __is_signed(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
concept integral = is_integral_v<_Tp>;
template <class _Tp>
concept signed_integral = integral<_Tp> && is_signed_v<_Tp>;
template <class _Tp>
concept unsigned_integral = integral<_Tp> && !signed_integral<_Tp>;
template <class _Tp>
concept floating_point = is_floating_point_v<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _T1, class _T2>
struct [[_Clang::__no_specializations__]] is_convertible : integral_constant<bool, __is_convertible(_T1, _T2)> {};
template <class _From, class _To>
[[_Clang::__no_specializations__]] inline constexpr bool is_convertible_v = __is_convertible(_From, _To);
template <class _Tp, class _Up>
struct [[_Clang::__no_specializations__]] is_nothrow_convertible : bool_constant<__is_nothrow_convertible(_Tp, _Up)> {};
template <class _Tp, class _Up>
[[_Clang::__no_specializations__]] inline constexpr bool is_nothrow_convertible_v = __is_nothrow_convertible(_Tp, _Up);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _Tp>
_Tp&& __declval(int);
;
#pragma GCC diagnostic pop
template <class _Tp>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) decltype(std::__declval<_Tp>(0)) declval() noexcept ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _From, class _To>
concept convertible_to = is_convertible_v<_From, _To> && requires { static_cast<_To>(std::declval<_From>()); };
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
struct [[_Clang::__no_specializations__]] is_same : _BoolConstant<__is_same(_Tp, _Up)> {};
template <class _Tp, class _Up>
[[_Clang::__no_specializations__]] inline constexpr bool is_same_v = __is_same(_Tp, _Up);
template <class _Tp, class _Up>
using _IsSame [[__gnu__::__nodebug__]] = _BoolConstant<__is_same(_Tp, _Up)>;
template <class _Tp, class _Up>
using _IsNotSame [[__gnu__::__nodebug__]] = _BoolConstant<!__is_same(_Tp, _Up)>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
concept __same_as_impl = _IsSame<_Tp, _Up>::value;
template <class _Tp, class _Up>
concept same_as = __same_as_impl<_Tp, _Up> && __same_as_impl<_Up, _Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class...>
using void_t = void;
template <class...>
using __void_t [[__gnu__::__nodebug__]] = void;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class = void>
inline const bool __is_referenceable_v = false;
template <class _Tp>
inline const bool __is_referenceable_v<_Tp, __void_t<_Tp&> > = true;
template <class _Tp>
concept __referenceable = __is_referenceable_v<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_void : _BoolConstant<__is_same(__remove_cv(_Tp), void)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_void_v = __is_same(__remove_cv(_Tp), void);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] remove_reference ;;
template <class _Tp>
using __libcpp_remove_reference_t [[__gnu__::__nodebug__]] = __remove_reference_t(_Tp);
template <class _Tp>
using remove_reference_t = __libcpp_remove_reference_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] add_pointer ;;
template <class _Tp>
using __add_pointer_t [[__gnu__::__nodebug__]] = __add_pointer(_Tp);
template <class _Tp>
using add_pointer_t = __add_pointer_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <bool>
struct _IfImpl;
template <>
struct _IfImpl<true> {
  template <class _IfRes, class _ElseRes>
  using _Select [[__gnu__::__nodebug__]] = _IfRes;
};
template <>
struct _IfImpl<false> ;
template <bool _Cond, class _IfRes, class _ElseRes>
using _If [[__gnu__::__nodebug__]] = typename _IfImpl<_Cond>::template _Select<_IfRes, _ElseRes>;
template <bool _Bp, class _If, class _Then>
struct [[_Clang::__no_specializations__]] conditional {
  using type [[__gnu__::__nodebug__]] = _If;
};
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-specialization"
template <class _If, class _Then>
struct conditional<false, _If, _Then> {
  using type [[__gnu__::__nodebug__]] = _Then;
};
#pragma clang diagnostic pop
template <bool _Bp, class _IfRes, class _ElseRes>
using conditional_t [[__gnu__::__nodebug__]] = typename conditional<_Bp, _IfRes, _ElseRes>::type;
template <bool _Bp, class _If, class _Then>
using __conditional_t [[__gnu__::__nodebug__]] = typename conditional<_Bp, _If, _Then>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] decay {
  using type [[__gnu__::__nodebug__]] = __decay(_Tp);
};
template <class _Tp>
using __decay_t [[__gnu__::__nodebug__]] = __decay(_Tp);
template <class _Tp>
using decay_t = __decay_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
using __remove_cvref_t [[__gnu__::__nodebug__]] = __remove_cvref(_Tp);
template <class _Tp>
struct [[_Clang::__no_specializations__]] remove_cvref ;;
template <class _Tp>
using remove_cvref_t = __remove_cvref_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __type_identity {
  typedef _Tp type;
};
template <class _Tp>
using __type_identity_t [[__gnu__::__nodebug__]] = typename __type_identity<_Tp>::type;
template <class _Tp>
struct [[_Clang::__no_specializations__]] type_identity ;;
template <class _Tp>
using type_identity_t = typename type_identity<_Tp>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __empty ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class... _Args>
struct common_type;
template <class... _Args>
using __common_type_t [[__gnu__::__nodebug__]] = typename common_type<_Args...>::type;
template <class... _Args>
struct common_type : __builtin_common_type<__common_type_t, __type_identity, __empty, _Args...> {};
template <class... _Tp>
using common_type_t = typename common_type<_Tp...>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _From>
struct __copy_cv ;;
template <class _From>
struct __copy_cv<const _From> ;;
template <class _From>
struct __copy_cv<volatile _From> ;;
template <class _From>
struct __copy_cv<const volatile _From> ;;
template <class _From, class _To>
using __copy_cv_t [[__gnu__::__nodebug__]] = typename __copy_cv<_From>::template __apply<_To>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] add_lvalue_reference ;;
template <class _Tp>
using __add_lvalue_reference_t [[__gnu__::__nodebug__]] = __add_lvalue_reference(_Tp);
template <class _Tp>
using add_lvalue_reference_t = __add_lvalue_reference_t<_Tp>;
template <class _Tp>
struct [[_Clang::__no_specializations__]] add_rvalue_reference ;;
template <class _Tp>
using __add_rvalue_reference_t [[__gnu__::__nodebug__]] = __add_rvalue_reference(_Tp);
template <class _Tp>
using add_rvalue_reference_t = __add_rvalue_reference_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _From>
struct __copy_cvref ;
template <class _From>
struct __copy_cvref<_From&> {
  template <class _To>
  using __apply [[__gnu__::__nodebug__]] = __add_lvalue_reference_t<__copy_cv_t<_From, _To> >;
};
template <class _From>
struct __copy_cvref<_From&&> {
  template <class _To>
  using __apply [[__gnu__::__nodebug__]] = __add_rvalue_reference_t<__copy_cv_t<_From, _To> >;
};
template <class _From, class _To>
using __copy_cvref_t [[__gnu__::__nodebug__]] = typename __copy_cvref<_From>::template __apply<_To>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_reference : _BoolConstant<__is_reference(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_reference_v = __is_reference(_Tp);
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_lvalue_reference : _BoolConstant<__is_lvalue_reference(_Tp)> {};
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_rvalue_reference : _BoolConstant<__is_rvalue_reference(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_lvalue_reference_v = __is_lvalue_reference(_Tp);
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_rvalue_reference_v = __is_rvalue_reference(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Xp, class _Yp>
using __cond_res [[__gnu__::__nodebug__]] = decltype(false ? std::declval<_Xp >()() : std::declval<_Yp (&)()>);
template <class _Tp>
struct __xref ;;
template <class _Ap, class _Bp, class _Xp = remove_reference_t<_Ap>, class _Yp = remove_reference_t<_Bp>>
struct __common_ref;
template <class _Xp, class _Yp>
using __common_ref_t [[__gnu__::__nodebug__]] = typename __common_ref<_Xp, _Yp>::__type;
template <class _Xp, class _Yp>
using __cv_cond_res [[__gnu__::__nodebug__]] = __cond_res<__copy_cv_t<_Xp, _Yp>&, __copy_cv_t<_Yp, _Xp>&>;
template <class _Ap, class _Bp, class _Xp, class _Yp>
  requires
    requires { typename __cv_cond_res<_Xp, _Yp>; } &&
    is_reference_v<__cv_cond_res<_Xp, _Yp>>
struct __common_ref<_Ap&, _Bp&, _Xp, _Yp> ;
template <class _Xp, class _Yp>
using __common_ref_C [[__gnu__::__nodebug__]] = remove_reference_t<__common_ref_t<_Xp&, _Yp&>>&&;
template <class _Ap, class _Bp, class _Xp, class _Yp>
struct __common_ref<_Ap&&, _Bp&&, _Xp, _Yp> ;
template <class _Tp, class _Up>
using __common_ref_D [[__gnu__::__nodebug__]] = __common_ref_t<const _Tp&, _Up&>;
template <class _Ap, class _Bp, class _Xp, class _Yp>
  requires
    requires { typename __common_ref_D<_Xp, _Yp>; } &&
    is_convertible_v<_Ap&&, __common_ref_D<_Xp, _Yp>>
struct __common_ref<_Ap&&, _Bp&, _Xp, _Yp> {
  using __type [[__gnu__::__nodebug__]] = __common_ref_D<_Xp, _Yp>;
};
template <class _Ap, class _Bp, class _Xp, class _Yp>
struct __common_ref<_Ap&, _Bp&&, _Xp, _Yp> : __common_ref<_Bp&&, _Ap&> {};
template <class _Ap, class _Bp, class _Xp, class _Yp>
struct __common_ref ;;
template <class...>
struct [[_Clang::__no_specializations__]] common_reference;
template <class... _Types>
using common_reference_t = typename common_reference<_Types...>::type;
template <class, class, template <class> class, template <class> class>
struct basic_common_reference ;;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-specialization"
template <>
struct common_reference<> ;;
template <class _Tp>
struct common_reference<_Tp> ;;
template <class _Tp, class _Up>
struct __common_reference_sub_bullet3;
template <class _Tp, class _Up>
struct __common_reference_sub_bullet2 : __common_reference_sub_bullet3<_Tp, _Up> {};
template <class _Tp, class _Up>
struct __common_reference_sub_bullet1 : __common_reference_sub_bullet2<_Tp, _Up> {};
template <class _Tp, class _Up>
struct common_reference<_Tp, _Up> : __common_reference_sub_bullet1<_Tp, _Up> {};
template <class _Tp, class _Up>
  requires is_reference_v<_Tp> && is_reference_v<_Up> && requires { typename __common_ref_t<_Tp, _Up>; } &&
           is_convertible_v<add_pointer_t<_Tp>, add_pointer_t<__common_ref_t<_Tp, _Up>>> &&
           is_convertible_v<add_pointer_t<_Up>, add_pointer_t<__common_ref_t<_Tp, _Up>>>
struct __common_reference_sub_bullet1<_Tp, _Up> {
  using type [[__gnu__::__nodebug__]] = __common_ref_t<_Tp, _Up>;
};
template <class _Tp, class _Up>
using __basic_common_reference_t [[__gnu__::__nodebug__]] =
    typename basic_common_reference<remove_cvref_t<_Tp>,
                                    remove_cvref_t<_Up>,
                                    __xref<_Tp>::template __apply,
                                    __xref<_Up>::template __apply>::type;
template <class _Tp, class _Up>
  requires requires { typename __basic_common_reference_t<_Tp, _Up>; }
struct __common_reference_sub_bullet2<_Tp, _Up> {
  using type [[__gnu__::__nodebug__]] = __basic_common_reference_t<_Tp, _Up>;
};
template <class _Tp, class _Up>
  requires requires { typename __cond_res<_Tp, _Up>; }
struct __common_reference_sub_bullet3<_Tp, _Up> {
  using type [[__gnu__::__nodebug__]] = __cond_res<_Tp, _Up>;
};
template <class _Tp, class _Up>
struct __common_reference_sub_bullet3 : common_type<_Tp, _Up> {};
template <class _Tp, class _Up, class _Vp, class... _Rest>
  requires requires { typename common_reference_t<_Tp, _Up>; }
struct common_reference<_Tp, _Up, _Vp, _Rest...> : common_reference<common_reference_t<_Tp, _Up>, _Vp, _Rest...> {};
#pragma clang diagnostic pop
template <class...>
struct [[_Clang::__no_specializations__]] common_reference ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
concept common_reference_with =
    same_as<common_reference_t<_Tp, _Up>, common_reference_t<_Up, _Tp>> &&
    convertible_to<_Tp, common_reference_t<_Tp, _Up>> && convertible_to<_Up, common_reference_t<_Tp, _Up>>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
using __make_const_lvalue_ref [[__gnu__::__nodebug__]] = const __libcpp_remove_reference_t<_Tp>&;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
[[__nodiscard__]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Tp&&
forward([[_Clang::__lifetimebound__]] __libcpp_remove_reference_t<_Tp>& __t) noexcept ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Lhs, class _Rhs>
concept assignable_from =
    is_lvalue_reference_v<_Lhs> &&
    common_reference_with<__make_const_lvalue_ref<_Lhs>, __make_const_lvalue_ref<_Rhs>> &&
    requires(_Lhs __lhs, _Rhs&& __rhs) {
      { __lhs = std::forward<_Rhs>(__rhs) } -> same_as<_Lhs>;
    };
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_function : integral_constant<bool, __is_function(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_function_v = __is_function(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_destructible : _BoolConstant<__is_destructible(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_destructible_v = __is_destructible(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_nothrow_destructible : integral_constant<bool, __is_nothrow_destructible(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_nothrow_destructible_v = is_nothrow_destructible<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
concept destructible = is_nothrow_destructible_v<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class... _Args>
struct [[_Clang::__no_specializations__]] is_constructible : integral_constant<bool, __is_constructible(_Tp, _Args...)> {};
template <class _Tp, class... _Args>
[[_Clang::__no_specializations__]] inline constexpr bool is_constructible_v = __is_constructible(_Tp, _Args...);
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_copy_constructible
    : integral_constant<bool, __is_constructible(_Tp, __add_lvalue_reference_t<const _Tp>)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_copy_constructible_v = is_copy_constructible<_Tp>::value;
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_move_constructible
    : integral_constant<bool, __is_constructible(_Tp, __add_rvalue_reference_t<_Tp>)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_move_constructible_v = is_move_constructible<_Tp>::value;
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_default_constructible : integral_constant<bool, __is_constructible(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_default_constructible_v = __is_constructible(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class... _Args>
concept constructible_from = destructible<_Tp> && is_constructible_v<_Tp, _Args...>;
template <class _Tp>
concept __default_initializable = requires { ::new _Tp; };
template <class _Tp>
concept default_initializable = constructible_from<_Tp> && requires { _Tp{}; } && __default_initializable<_Tp>;
template <class _Tp>
concept move_constructible = constructible_from<_Tp, _Tp> && convertible_to<_Tp, _Tp>;
template <class _Tp>
concept copy_constructible =
    move_constructible<_Tp> &&
    constructible_from<_Tp, _Tp&> && convertible_to<_Tp&, _Tp> &&
    constructible_from<_Tp, const _Tp&> && convertible_to<const _Tp&, _Tp> &&
    constructible_from<_Tp, const _Tp> && convertible_to<const _Tp, _Tp>;
template <class _Tp, unsigned _Ip = 0>
[[_Clang::__no_specializations__]] inline constexpr size_t extent_v = __array_extent(_Tp, _Ip);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Arg>
struct [[_Clang::__no_specializations__]] is_nothrow_assignable : integral_constant<bool, __is_nothrow_assignable(_Tp, _Arg)> {
};
template <class _Tp, class _Arg>
[[_Clang::__no_specializations__]] inline constexpr bool is_nothrow_assignable_v = __is_nothrow_assignable(_Tp, _Arg);
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_nothrow_copy_assignable
    : integral_constant<bool,
                        __is_nothrow_assignable(__add_lvalue_reference_t<_Tp>, __add_lvalue_reference_t<const _Tp>)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_nothrow_copy_assignable_v = is_nothrow_copy_assignable<_Tp>::value;
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_nothrow_move_assignable
    : integral_constant<bool, __is_nothrow_assignable(__add_lvalue_reference_t<_Tp>, __add_rvalue_reference_t<_Tp>)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_nothrow_move_assignable_v = is_nothrow_move_assignable<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template < class _Tp, class... _Args>
struct [[_Clang::__no_specializations__]] is_nothrow_constructible
    : integral_constant<bool, __is_nothrow_constructible(_Tp, _Args...)> {};
template <class _Tp, class... _Args>
[[_Clang::__no_specializations__]] inline constexpr bool is_nothrow_constructible_v =
    is_nothrow_constructible<_Tp, _Args...>::value;
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_nothrow_copy_constructible
    : integral_constant<bool, __is_nothrow_constructible(_Tp, __add_lvalue_reference_t<const _Tp>)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_nothrow_copy_constructible_v =
    is_nothrow_copy_constructible<_Tp>::value;
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_nothrow_move_constructible
    : integral_constant<bool, __is_nothrow_constructible(_Tp, __add_rvalue_reference_t<_Tp>)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_nothrow_move_constructible_v =
    is_nothrow_move_constructible<_Tp>::value;
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_nothrow_default_constructible
    : integral_constant<bool, __is_nothrow_constructible(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_nothrow_default_constructible_v = __is_nothrow_constructible(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
[[__nodiscard__]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr __libcpp_remove_reference_t<_Tp>&&
move([[_Clang::__lifetimebound__]] _Tp&& __t) noexcept ;
template <class _Tp>
using __move_if_noexcept_result_t [[__gnu__::__nodebug__]] =
    __conditional_t<!is_nothrow_move_constructible<_Tp>::value && is_copy_constructible<_Tp>::value, const _Tp&, _Tp&&>;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
namespace __swap {
template <class _Tp>
void swap(_Tp&, _Tp&) = delete;
template <class _Tp, class _Up>
concept __unqualified_swappable_with =
    (__class_or_enum<remove_cvref_t<_Tp>> || __class_or_enum<remove_cvref_t<_Up>>) &&
    requires(_Tp&& __t, _Up&& __u) {
        swap(std::forward<_Tp>(__t), std::forward<_Up>(__u));
    };
struct __fn;
template <class _Tp, class _Up, size_t _Size>
concept __swappable_arrays =
    !__unqualified_swappable_with<_Tp (&)[_Size], _Up (&)[_Size]> &&
    extent_v<_Tp> == extent_v<_Up> &&
    requires(_Tp (&__t)[_Size], _Up (&__u)[_Size], const __fn& __swap) {
        __swap;
    };
template <class _Tp>
concept __exchangeable =
    !__unqualified_swappable_with<_Tp&, _Tp&> && move_constructible<_Tp> && assignable_from<_Tp&, _Tp>;
struct __fn {
   ;
   ;
  template <__exchangeable _Tp>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void operator()(_Tp& __x, _Tp& __y) const
      noexcept ;
};
}
inline namespace __cpo {
inline constexpr auto swap = __swap::__fn{};
}
}
template <class _Tp>
concept swappable = requires(_Tp& __a, _Tp& __b) { ranges::swap(__a, __b); };
template <class _Tp, class _Up>
concept swappable_with = common_reference_with<_Tp, _Up> && requires(_Tp&& __t, _Up&& __u) {
  ranges::swap;
  ranges::swap;
  ranges::swap;
  ranges::swap;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_object : _BoolConstant<__is_object(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_object_v = __is_object(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
concept movable = is_object_v<_Tp> && move_constructible<_Tp> && assignable_from<_Tp&, _Tp> && swappable<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
concept copyable =
    copy_constructible<_Tp> &&
    movable<_Tp> &&
    assignable_from<_Tp&, _Tp&> &&
    assignable_from<_Tp&, const _Tp&> &&
    assignable_from<_Tp&, const _Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Bp, class _Dp>
struct [[_Clang::__no_specializations__]] is_base_of : integral_constant<bool, __is_base_of(_Bp, _Dp)> {};
template <class _Bp, class _Dp>
[[_Clang::__no_specializations__]] inline constexpr bool is_base_of_v = __is_base_of(_Bp, _Dp);
template <class _Base, class _Derived>
struct [[_Clang::__no_specializations__]] is_virtual_base_of : bool_constant<__builtin_is_virtual_base_of(_Base, _Derived)> {};
template <class _Base, class _Derived>
[[_Clang::__no_specializations__]] inline constexpr bool is_virtual_base_of_v = __builtin_is_virtual_base_of(_Base, _Derived);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Dp, class _Bp>
concept derived_from = is_base_of_v<_Bp, _Dp> && is_convertible_v<const volatile _Dp*, const volatile _Bp*>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
concept __boolean_testable_impl = convertible_to<_Tp, bool>;
template <class _Tp>
concept __boolean_testable = __boolean_testable_impl<_Tp> && requires(_Tp&& __t) {
  { !std::forward<_Tp> } -> __boolean_testable_impl;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
concept __weakly_equality_comparable_with =
    requires(__make_const_lvalue_ref<_Tp> __t, __make_const_lvalue_ref<_Up> __u) {
      { __t == __u } -> __boolean_testable;
      { __t != __u } -> __boolean_testable;
      { __u == __t } -> __boolean_testable;
      { __u != __t } -> __boolean_testable;
    };
template <class _Tp>
concept equality_comparable = __weakly_equality_comparable_with<_Tp, _Tp>;
template <class _Tp, class _Up>
concept equality_comparable_with =
    equality_comparable<_Tp> && equality_comparable<_Up> &&
    common_reference_with<__make_const_lvalue_ref<_Tp>, __make_const_lvalue_ref<_Up>> &&
    equality_comparable<
        common_reference_t<
            __make_const_lvalue_ref<_Tp>,
            __make_const_lvalue_ref<_Up>>> &&
    __weakly_equality_comparable_with<_Tp, _Up>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <bool, class _Tp = void>
struct [[_Clang::__no_specializations__]] enable_if;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-specialization"
template <class _Tp>
struct enable_if<true, _Tp> {
  typedef _Tp type;
};
#pragma clang diagnostic pop
template <bool _Bp, class _Tp = void>
using __enable_if_t [[__gnu__::__nodebug__]] = typename enable_if<_Bp, _Tp>::type;
template <bool _Bp, class _Tp = void>
using enable_if_t = typename enable_if<_Bp, _Tp>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up, class = void>
inline const bool __is_core_convertible_v = false;
template <class _Tp, class _Up>
inline const bool
    __is_core_convertible_v<_Tp, _Up, decltype(static_cast<void (*)(_Up)>(0)(static_cast<_Tp (*)()>(0)()))> = true;
template <class _Tp, class _Up>
using __is_core_convertible [[__gnu__::__nodebug__]] = integral_constant<bool, __is_core_convertible_v<_Tp, _Up> >;
template <class _Tp, class _Up>
concept __core_convertible_to = __is_core_convertible_v<_Tp, _Up>;
template <class _Tp, class _Up, bool = __is_core_convertible_v<_Tp, _Up> >
inline const bool __is_nothrow_core_convertible_v = false;
template <class _Tp, class _Up>
inline const bool __is_nothrow_core_convertible_v<_Tp, _Up, true> =
    noexcept(static_cast<void (*)(_Up) noexcept>(static_cast<_Tp (*)() noexcept>(0)));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_member_function_pointer : _BoolConstant<__is_member_function_pointer(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_member_pointer_v = __is_member_pointer(_Tp);
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_member_object_pointer_v = __is_member_object_pointer(_Tp);
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_member_function_pointer_v = __is_member_function_pointer(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp = void>
struct less;
template <class>
struct hash;
template <class>
class reference_wrapper;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __is_reference_wrapper_impl : false_type {};
template <class _Tp>
struct __is_reference_wrapper_impl<reference_wrapper<_Tp> > : true_type {};
template <class _Tp>
struct __is_reference_wrapper : __is_reference_wrapper_impl<__remove_cv_t<_Tp> > {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __nat ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class, class... _Args>
struct __invoke_result_impl ;
template <class... _Args>
struct __invoke_result_impl<__void_t<decltype(__builtin_invoke(std::declval<_Args>()...))>, _Args...> {
  using type [[__gnu__::__nodebug__]] = decltype(__builtin_invoke(std::declval<_Args>()...));
};
template <class... _Args>
using __invoke_result [[__gnu__::__nodebug__]] = __invoke_result_impl<void, _Args...>;
template <class... _Args>
using __invoke_result_t [[__gnu__::__nodebug__]] = typename __invoke_result<_Args...>::type;
template <class... _Args>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr __invoke_result_t<_Args...> __invoke(_Args&&... __args)
    noexcept ;
template <class _Void, class... _Args>
inline const bool __is_invocable_impl = false;
template <class... _Args>
inline const bool __is_invocable_impl<__void_t<__invoke_result_t<_Args...> >, _Args...> = true;
template <class... _Args>
inline const bool __is_invocable_v = __is_invocable_impl<void, _Args...>;
template <class... _Args>
struct __is_invocable : integral_constant<bool, __is_invocable_v<_Args...> > {};
template <class _Ret, bool, class... _Args>
inline const bool __is_invocable_r_impl = false;
template <class _Ret, class... _Args>
inline const bool __is_invocable_r_impl<_Ret, true, _Args...> =
    __is_core_convertible<__invoke_result_t<_Args...>, _Ret>::value || is_void<_Ret>::value;
template <class _Ret, class... _Args>
inline const bool __is_invocable_r_v = __is_invocable_r_impl<_Ret, __is_invocable_v<_Args...>, _Args...>;
template <bool __is_invocable, class... _Args>
inline const bool __is_nothrow_invocable_impl = false;
template <class... _Args>
inline const bool __is_nothrow_invocable_impl<true, _Args...> = noexcept(__builtin_invoke(std::declval<_Args>...));
template <class... _Args>
inline const bool __is_nothrow_invocable_v = __is_nothrow_invocable_impl<__is_invocable_v<_Args...>, _Args...>;
template <bool __is_invocable, class _Ret, class... _Args>
inline const bool __is_nothrow_invocable_r_impl = false;
template <class _Ret, class... _Args>
inline const bool __is_nothrow_invocable_r_impl<true, _Ret, _Args...> =
    __is_nothrow_core_convertible_v<__invoke_result_t<_Args...>, _Ret> || is_void<_Ret>::value;
template <class _Ret, class... _Args>
inline const bool __is_nothrow_invocable_r_v =
    __is_nothrow_invocable_r_impl<__is_nothrow_invocable_v<_Args...>, _Ret, _Args...>;
template <class _Ret, bool = is_void<_Ret>::value>
struct __invoke_void_return_wrapper ;
template <class _Ret>
struct __invoke_void_return_wrapper<_Ret, true> ;
 ;
template <class _Fn, class... _Args>
struct [[_Clang::__no_specializations__]] is_invocable : bool_constant<__is_invocable_v<_Fn, _Args...> > {};
template <class _Ret, class _Fn, class... _Args>
struct [[_Clang::__no_specializations__]] is_nothrow_invocable_r
    : bool_constant<__is_nothrow_invocable_r_v<_Ret, _Fn, _Args...>> {};
template <class _Fn, class... _Args>
[[_Clang::__no_specializations__]] inline constexpr bool is_nothrow_invocable_v = __is_nothrow_invocable_v<_Fn, _Args...>;
template <class _Ret, class _Fn, class... _Args>
[[_Clang::__no_specializations__]] inline constexpr bool is_nothrow_invocable_r_v =
    __is_nothrow_invocable_r_v<_Ret, _Fn, _Args...>;
template <class _Fn, class... _Args>
struct [[_Clang::__no_specializations__]] invoke_result : __invoke_result<_Fn, _Args...> {};
template <class _Fn, class... _Args>
using invoke_result_t = __invoke_result_t<_Fn, _Args...>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Fn, class... _Args>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr invoke_result_t<_Fn, _Args...>
invoke(_Fn&& __f, _Args&&... __args) noexcept ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Fn, class... _Args>
concept invocable = requires(_Fn&& __fn, _Args&&... __args) {
  std::invoke;
};
template <class _Fn, class... _Args>
concept regular_invocable = invocable<_Fn, _Args...>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Fn, class... _Args>
concept predicate = regular_invocable<_Fn, _Args...> && __boolean_testable<invoke_result_t<_Fn, _Args...>>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
concept semiregular = copyable<_Tp> && default_initializable<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
concept regular = semiregular<_Tp> && equality_comparable<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Rp, class _Tp, class _Up>
concept relation =
    predicate<_Rp, _Tp, _Tp> && predicate<_Rp, _Up, _Up> && predicate<_Rp, _Tp, _Up> && predicate<_Rp, _Up, _Tp>;
template <class _Rp, class _Tp, class _Up>
concept equivalence_relation = relation<_Rp, _Tp, _Up>;
template <class _Rp, class _Tp, class _Up>
concept strict_weak_order = relation<_Rp, _Tp, _Up>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
concept __partially_ordered_with = requires(__make_const_lvalue_ref<_Tp> __t, __make_const_lvalue_ref<_Up> __u) {
  { __t < __u } -> __boolean_testable;
  { __t > __u } -> __boolean_testable;
  { __u <= __t } -> __boolean_testable;
  { __u >= __t } -> __boolean_testable;
};
template <class _Tp>
concept totally_ordered = equality_comparable<_Tp> && __partially_ordered_with<_Tp, _Tp>;
template <class _Tp, class _Up>
concept totally_ordered_with =
    totally_ordered<_Tp> && totally_ordered<_Up> &&
    equality_comparable_with<_Tp, _Up> &&
    totally_ordered<
        common_reference_t<
            __make_const_lvalue_ref<_Tp>,
            __make_const_lvalue_ref<_Up>>> &&
    __partially_ordered_with<_Tp, _Up>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using ptrdiff_t = decltype(static_cast<int*>(nullptr) - static_cast<int*>(nullptr));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <template <class...> class _Templ, class... _Args, class = _Templ<_Args...> >
true_type __sfinae_test_impl(int);
;
template <template <class...> class _Templ, class... _Args>
using _IsValidExpansion [[__gnu__::__nodebug__]] = decltype(std::__sfinae_test_impl<_Templ, _Args...>(0));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
using __test_for_primary_template [[__gnu__::__nodebug__]] =
    __enable_if_t<_IsSame<_Tp, typename _Tp::__primary_template>::value>;
template <class _Tp>
using __is_primary_template [[__gnu__::__nodebug__]] = _IsValidExpansion<__test_for_primary_template, _Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class... _Types>
struct __type_list ;
template <class>
struct __type_list_head;
template <class _Head, class... _Tail>
struct __type_list_head<__type_list<_Head, _Tail...> > ;;
template <class _TypeList, size_t _Size, bool = _Size <= sizeof(typename __type_list_head<_TypeList>::type)>
struct __find_first;
template <class _Head, class... _Tail, size_t _Size>
struct __find_first<__type_list<_Head, _Tail...>, _Size, true> ;;
template <class _Head, class... _Tail, size_t _Size>
struct __find_first<__type_list<_Head, _Tail...>, _Size, false> {
  using type [[__gnu__::__nodebug__]] = typename __find_first<__type_list<_Tail...>, _Size>::type;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
using __make_signed_t [[__gnu__::__nodebug__]] = __make_signed(_Tp);
template <class _Tp>
struct [[_Clang::__no_specializations__]] make_signed ;
template <class _Tp>
using make_signed_t = __make_signed_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class>
struct incrementable_traits ;
template <class _Tp>
  requires is_object_v<_Tp>
struct incrementable_traits<_Tp*> ;
template <class _Ip>
struct incrementable_traits<const _Ip> : incrementable_traits<_Ip> {};
template <class _Tp>
concept __has_member_difference_type = requires { typename _Tp::difference_type; };
template <__has_member_difference_type _Tp>
struct incrementable_traits<_Tp> {
  using difference_type = typename _Tp::difference_type;
};
template <class _Tp>
concept __has_integral_minus = requires(const _Tp& __x, const _Tp& __y) {
  { __x - __y } -> integral;
};
template <__has_integral_minus _Tp>
  requires(!__has_member_difference_type<_Tp>)
struct incrementable_traits<_Tp> {
  using difference_type = make_signed_t<decltype(std::declval<_Tp> - std::declval<_Tp>)>;
};
template <class>
struct iterator_traits;
template <class _Ip>
using iter_difference_t =
    typename conditional_t<__is_primary_template<iterator_traits<remove_cvref_t<_Ip> > >::value,
                           incrementable_traits<remove_cvref_t<_Ip> >,
                           iterator_traits<remove_cvref_t<_Ip> > >::difference_type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <size_t, class>
struct tuple_element;
template <class...>
class tuple;
template <class>
struct tuple_size;
;
;
;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class, class>
struct pair;
template <class _Type>
inline const bool __is_pair_v = false;
template <class _Type1, class _Type2>
inline const bool __is_pair_v<pair<_Type1, _Type2> > = true;
;
;
;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_array : _BoolConstant<__is_array(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_array_v = __is_array(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] remove_extent ;;
template <class _Tp>
using __remove_extent_t [[__gnu__::__nodebug__]] = __remove_extent(_Tp);
template <class _Tp>
using remove_extent_t = __remove_extent_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class>
struct __cond_value_type ;;
template <class _Tp>
  requires is_object_v<_Tp>
struct __cond_value_type<_Tp> ;;
template <class _Tp>
concept __has_member_value_type = requires { typename _Tp::value_type; };
template <class _Tp>
concept __has_member_element_type = requires { typename _Tp::element_type; };
template <class>
struct indirectly_readable_traits ;
template <class _Ip>
  requires is_array_v<_Ip>
struct indirectly_readable_traits<_Ip> ;;
template <class _Ip>
struct indirectly_readable_traits<const _Ip> : indirectly_readable_traits<_Ip> {};
template <__has_member_element_type _Tp>
struct indirectly_readable_traits<_Tp> : __cond_value_type<typename _Tp::element_type> {};
template <__has_member_value_type _Tp>
  requires __has_member_element_type<_Tp>
struct indirectly_readable_traits<_Tp> ;
template <__has_member_value_type _Tp>
  requires __has_member_element_type<_Tp> &&
           same_as<remove_cv_t<typename _Tp::element_type>, remove_cv_t<typename _Tp::value_type>>
struct indirectly_readable_traits<_Tp> : __cond_value_type<typename _Tp::value_type> {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <size_t...>
struct __tuple_indices;
template <class _IdxType, _IdxType... _Values>
struct __integer_sequence ;
template <size_t _Ep, size_t _Sp>
using __make_indices_imp [[__gnu__::__nodebug__]] =
    typename __make_integer_seq<__integer_sequence, size_t, _Ep - _Sp>::template __to_tuple_indices<_Sp>;
template <class _Tp, _Tp... _Ip>
struct integer_sequence ;;
template <size_t... _Ip>
using index_sequence = integer_sequence<size_t, _Ip...>;
template <class _Tp, _Tp _Ep>
using make_integer_sequence [[__gnu__::__nodebug__]] = __make_integer_seq<integer_sequence, _Tp, _Ep>;
template <size_t _Np>
using make_index_sequence = make_integer_sequence<size_t, _Np>;
template <class... _Tp>
using index_sequence_for = make_index_sequence<sizeof...(_Tp)>;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <size_t...>
struct __tuple_indices ;
template <size_t _Ep, size_t _Sp = 0>
struct __make_tuple_indices ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class... _Tp>
struct __tuple_types ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <size_t _Ip, class _Tp>
struct tuple_element;
template <size_t _Ip, class _Tp>
struct tuple_element<_Ip, const volatile _Tp> {
  using type [[__gnu__::__nodebug__]] = const volatile typename tuple_element<_Ip, _Tp>::type;
};
template <size_t _Ip, class... _Types>
struct tuple_element<_Ip, __tuple_types<_Types...> > {
  static_assert(_Ip < sizeof...(_Types), "tuple_element index out of range");
  using type [[__gnu__::__nodebug__]] = __type_pack_element<_Ip, _Types...>;
};
template <size_t _Ip, class... _Tp>
using tuple_element_t [[__gnu__::__nodebug__]] = typename tuple_element<_Ip, _Tp...>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Default, class _Void, template <class...> class _Op, class... _Args>
struct __detector {
  using type [[__gnu__::__nodebug__]] = _Default;
};
template <class _Default, template <class...> class _Op, class... _Args>
struct __detector<_Default, __void_t<_Op<_Args...> >, _Op, _Args...> {
  using type [[__gnu__::__nodebug__]] = _Op<_Args...>;
};
template <class _Default, template <class...> class _Op, class... _Args>
using __detected_or_t [[__gnu__::__nodebug__]] = typename __detector<_Default, void, _Op, _Args...>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <bool>
struct _OrImpl;
template <>
struct _OrImpl<true> {
  template <class _Res, class _First, class... _Rest>
  using _Result [[__gnu__::__nodebug__]] =
      typename _OrImpl<!bool(_First::value) && sizeof...(_Rest) != 0>::template _Result<_First, _Rest...>;
};
template <>
struct _OrImpl<false> ;
template <class... _Args>
using _Or [[__gnu__::__nodebug__]] = typename _OrImpl<sizeof...(_Args) != 0>::template _Result<false_type, _Args...>;
template <class... _Args>
struct [[_Clang::__no_specializations__]] disjunction : _Or<_Args...> {};
template <class... _Args>
[[_Clang::__no_specializations__]] inline constexpr bool disjunction_v = _Or<_Args...>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] remove_const ;;
template <class _Tp>
using __remove_const_t [[__gnu__::__nodebug__]] = __remove_const(_Tp);
template <class _Tp>
using remove_const_t = __remove_const_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
concept __dereferenceable = requires(_Tp& __t) {
  { *__t } -> __referenceable;
};
template <__dereferenceable _Tp>
using iter_reference_t = decltype(*std::declval<_Tp&>());
template <class _Iter>
struct iterator_traits;
struct input_iterator_tag {};
struct output_iterator_tag ;;
struct forward_iterator_tag : public input_iterator_tag {};
struct bidirectional_iterator_tag : public forward_iterator_tag {};
struct random_access_iterator_tag : public bidirectional_iterator_tag {};
struct contiguous_iterator_tag : public random_access_iterator_tag {};
namespace __iterator_traits_detail {
template <class _Ip>
concept __cpp17_iterator = requires(_Ip __i) {
  { *__i } -> __referenceable;
  { ++__i } -> same_as<_Ip&>;
  { *__i++ } -> __referenceable;
} && copyable<_Ip>;
template <class _Ip>
concept __cpp17_input_iterator = __cpp17_iterator<_Ip> && equality_comparable<_Ip> && requires(_Ip __i) {
  requires signed_integral<typename incrementable_traits<_Ip>::difference_type>;
};
template <class _Ip>
concept __cpp17_forward_iterator =
    __cpp17_input_iterator<_Ip> && constructible_from<_Ip> && is_reference_v<iter_reference_t<_Ip>> &&
    same_as<remove_cvref_t<iter_reference_t<_Ip>>, typename indirectly_readable_traits<_Ip>::value_type> &&
    requires(_Ip __i) {
      { __i++ } -> convertible_to<_Ip const&>;
      { *__i++ } -> same_as<iter_reference_t<_Ip>>;
    };
template <class _Ip>
concept __cpp17_bidirectional_iterator = __cpp17_forward_iterator<_Ip> && requires(_Ip __i) {
  { --__i } -> same_as<_Ip&>;
  { __i-- } -> convertible_to<_Ip const&>;
  { *__i-- } -> same_as<iter_reference_t<_Ip>>;
};
template <class _Ip>
concept __cpp17_random_access_iterator =
    __cpp17_bidirectional_iterator<_Ip> && totally_ordered<_Ip> &&
    requires(_Ip __i, typename incrementable_traits<_Ip>::difference_type __n) {
      { __i += __n } -> same_as<_Ip&>;
      { __i -= __n } -> same_as<_Ip&>;
      { __i + __n } -> same_as<_Ip>;
      { __n + __i } -> same_as<_Ip>;
      { __i - __n } -> same_as<_Ip>;
      { __i - __i } -> same_as<decltype(__n)>;
      { __i[__n] } -> convertible_to<iter_reference_t<_Ip>>;
    };
}
template <class _Ip>
concept __has_member_reference = requires { typename _Ip::reference; };
template <class _Ip>
concept __has_member_pointer = requires { typename _Ip::pointer; };
template <class _Ip>
concept __has_member_iterator_category = requires { typename _Ip::iterator_category; };
template <class _Ip>
concept __specifies_members = requires {
  typename _Ip::value_type;
  typename _Ip::difference_type;
  requires __has_member_reference<_Ip>;
  requires __has_member_iterator_category<_Ip>;
};
template <class _Tp>
concept __cpp17_iterator_missing_members = !__specifies_members<_Tp> && __iterator_traits_detail::__cpp17_iterator<_Tp>;
template <class _Tp>
concept __cpp17_input_iterator_missing_members =
    __cpp17_iterator_missing_members<_Tp> && __iterator_traits_detail::__cpp17_input_iterator<_Tp>;
template <class>
struct __iterator_traits_member_pointer_or_arrow_or_void ;
template <__has_member_pointer _Ip>
struct __iterator_traits_member_pointer_or_arrow_or_void<_Ip> ;
template <class _Ip>
  requires requires(_Ip& __i) { __i.operator->; } && (!__has_member_pointer<_Ip>)
struct __iterator_traits_member_pointer_or_arrow_or_void<_Ip> ;;
template <class _Ip>
struct __iterator_traits_member_reference ;
template <__has_member_reference _Ip>
struct __iterator_traits_member_reference<_Ip> ;
template <class _Ip>
struct __deduce_iterator_category ;
template <__iterator_traits_detail::__cpp17_forward_iterator _Ip>
struct __deduce_iterator_category<_Ip> ;
template <class _Ip>
struct __iterator_traits_iterator_category : __deduce_iterator_category<_Ip> {};
template <__has_member_iterator_category _Ip>
struct __iterator_traits_iterator_category<_Ip> ;;
template <class>
struct __iterator_traits_difference_type ;
template <class _Ip>
  requires requires { typename incrementable_traits<_Ip>::difference_type; }
struct __iterator_traits_difference_type<_Ip> {
  using type [[__gnu__::__nodebug__]] = typename incrementable_traits<_Ip>::difference_type;
};
template <class>
struct __iterator_traits ;
template <class _Tp>
using __pointer_member [[__gnu__::__nodebug__]] = typename _Tp::pointer;
template <__specifies_members _Ip>
struct __iterator_traits<_Ip> {
  using iterator_category = typename _Ip::iterator_category;
  using value_type = typename _Ip::value_type;
  using difference_type = typename _Ip::difference_type;
  using pointer = __detected_or_t<void, __pointer_member, _Ip>;
  using reference = typename _Ip::reference;
};
template <__cpp17_input_iterator_missing_members _Ip>
struct __iterator_traits<_Ip> {
  using iterator_category = typename __iterator_traits_iterator_category<_Ip>::type;
  using value_type = typename indirectly_readable_traits<_Ip>::value_type;
  using difference_type = typename incrementable_traits<_Ip>::difference_type;
  using pointer = typename __iterator_traits_member_pointer_or_arrow_or_void<_Ip>::type;
  using reference = typename __iterator_traits_member_reference<_Ip>::type;
};
template <__cpp17_iterator_missing_members _Ip>
struct __iterator_traits<_Ip> ;
template <class _Ip>
struct iterator_traits : __iterator_traits<_Ip> {
  using __primary_template [[__gnu__::__nodebug__]] = iterator_traits;
};
template <class _Tp>
  requires is_object_v<_Tp>
struct iterator_traits<_Tp*> ;
template <class _Tp>
using __iterator_category [[__gnu__::__nodebug__]] = typename _Tp::iterator_category;
template <class _Tp>
using __iterator_concept [[__gnu__::__nodebug__]] = typename _Tp::iterator_concept;
template <class _Tp, class _Up>
using __has_iterator_category_convertible_to [[__gnu__::__nodebug__]] =
    is_convertible<__detected_or_t<__nat, __iterator_category, iterator_traits<_Tp> >, _Up>;
template <class _Tp, class _Up>
using __has_iterator_concept_convertible_to [[__gnu__::__nodebug__]] =
    is_convertible<__detected_or_t<__nat, __iterator_concept, _Tp>, _Up>;
template <class _Tp>
using __has_input_iterator_category [[__gnu__::__nodebug__]] = __has_iterator_category_convertible_to<_Tp, input_iterator_tag>;
template <class _Tp>
using __has_forward_iterator_category [[__gnu__::__nodebug__]] =
    __has_iterator_category_convertible_to<_Tp, forward_iterator_tag>;
template <class _Tp>
using __has_bidirectional_iterator_category [[__gnu__::__nodebug__]] =
    __has_iterator_category_convertible_to<_Tp, bidirectional_iterator_tag>;
template <class _Tp>
using __has_random_access_iterator_category [[__gnu__::__nodebug__]] =
    __has_iterator_category_convertible_to<_Tp, random_access_iterator_tag>;
template <class _Tp>
struct __libcpp_is_contiguous_iterator
    : _Or< __has_iterator_category_convertible_to<_Tp, contiguous_iterator_tag>,
           __has_iterator_concept_convertible_to<_Tp, contiguous_iterator_tag> > {};
template <class _Up>
struct __libcpp_is_contiguous_iterator<_Up*> : true_type {};
template <class _Iter>
class __wrap_iter;
template <class _Tp>
using __has_exactly_input_iterator_category [[__gnu__::__nodebug__]] =
    integral_constant<bool,
                      __has_iterator_category_convertible_to<_Tp, input_iterator_tag>::value &&
                          !__has_iterator_category_convertible_to<_Tp, forward_iterator_tag>::value>;
template <class _Tp>
using __has_exactly_forward_iterator_category [[__gnu__::__nodebug__]] =
    integral_constant<bool,
                      __has_iterator_category_convertible_to<_Tp, forward_iterator_tag>::value &&
                          !__has_iterator_category_convertible_to<_Tp, bidirectional_iterator_tag>::value>;
template <class _Tp>
using __has_exactly_bidirectional_iterator_category [[__gnu__::__nodebug__]] =
    integral_constant<bool,
                      __has_iterator_category_convertible_to<_Tp, bidirectional_iterator_tag>::value &&
                          !__has_iterator_category_convertible_to<_Tp, random_access_iterator_tag>::value>;
template <class _InputIterator>
using __iter_value_type [[__gnu__::__nodebug__]] = typename iterator_traits<_InputIterator>::value_type;
template <class _InputIterator>
using __iter_key_type [[__gnu__::__nodebug__]] = remove_const_t<tuple_element_t<0, __iter_value_type<_InputIterator>>>;
template <class _InputIterator>
using __iter_mapped_type [[__gnu__::__nodebug__]] = tuple_element_t<1, __iter_value_type<_InputIterator>>;
template <class _InputIterator>
using __iter_to_alloc_type [[__gnu__::__nodebug__]] =
    pair<const tuple_element_t<0, __iter_value_type<_InputIterator>>,
         tuple_element_t<1, __iter_value_type<_InputIterator>>>;
template <class _Iter>
using __iter_diff_t [[__gnu__::__nodebug__]] = typename iterator_traits<_Iter>::difference_type;
template <class _Iter>
using __iter_reference [[__gnu__::__nodebug__]] = typename iterator_traits<_Iter>::reference;
template <class _Ip>
using iter_value_t =
    typename conditional_t<__is_primary_template<iterator_traits<remove_cvref_t<_Ip> > >::value,
                           indirectly_readable_traits<remove_cvref_t<_Ip> >,
                           iterator_traits<remove_cvref_t<_Ip> > >::value_type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
namespace __iter_move {
template <class _Tp>
concept __unqualified_iter_move = __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp&& __t) {
  iter_move(std::forward<_Tp>);
};
template <class _Tp>
concept __move_deref = !__unqualified_iter_move<_Tp> && requires(_Tp&& __t) {
  *__t;
  requires is_lvalue_reference_v<decltype(*__t)>;
};
template <class _Tp>
concept __just_deref = !__unqualified_iter_move<_Tp> && !__move_deref<_Tp> && requires(_Tp&& __t) {
  *__t;
  requires(!is_lvalue_reference_v<decltype(*__t)>);
};
struct __fn {
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto iter_move = __iter_move::__fn{};
}
}
template <__dereferenceable _Tp>
  requires requires(_Tp& __t) {
    { ranges::iter_move(__t) } -> __referenceable;
  }
using iter_rvalue_reference_t = decltype(ranges::iter_move(std::declval<_Tp&>));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
 constexpr __attribute__((__no_sanitize__("cfi"))) __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) _Tp* addressof(_Tp& __x) noexcept ;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class...>
using __expand_to_true [[__gnu__::__nodebug__]] = true_type;
template <class... _Pred>
__expand_to_true<__enable_if_t<_Pred::value>...> __and_helper(int);
template <class...>
false_type __and_helper(...);
template <class... _Pred>
using _And [[__gnu__::__nodebug__]] = decltype(std::__and_helper<_Pred...>(0));
template <bool... _Preds>
struct __all_dummy;
template <bool... _Pred>
struct __all : _IsSame<__all_dummy<_Pred...>, __all_dummy<(_Pred, true)...> > {};
template <class...>
struct [[_Clang::__no_specializations__]] conjunction : true_type {};
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-specialization"
template <class _Arg>
struct conjunction<_Arg> : _Arg {};
template <class _Arg, class... _Args>
struct conjunction<_Arg, _Args...> : conditional_t<!bool(_Arg::value), _Arg, conjunction<_Args...>> {};
#pragma clang diagnostic pop
template <class... _Args>
[[_Clang::__no_specializations__]] inline constexpr bool conjunction_v = conjunction<_Args...>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Ptr>
struct __pointer_traits_element_type_impl ;;
template <template <class, class...> class _Sp, class _Tp, class... _Args>
struct __pointer_traits_element_type_impl<_Sp<_Tp, _Args...> > ;
template <class _Ptr, class = void>
struct __pointer_traits_element_type : __pointer_traits_element_type_impl<_Ptr> {};
template <class _Ptr>
struct __pointer_traits_element_type<_Ptr, __void_t<typename _Ptr::element_type> > ;
template <class _Tp, class _Up>
struct __pointer_traits_rebind_impl ;
template <template <class, class...> class _Sp, class _Tp, class... _Args, class _Up>
struct __pointer_traits_rebind_impl<_Sp<_Tp, _Args...>, _Up> ;
template <class _Tp, class _Up, class = void>
struct __pointer_traits_rebind : __pointer_traits_rebind_impl<_Tp, _Up> {};
template <class _Tp, class _Up>
struct __pointer_traits_rebind<_Tp, _Up, __void_t<typename _Tp::template rebind<_Up> > > ;
template <class _Tp>
using __difference_type_member [[__gnu__::__nodebug__]] = typename _Tp::difference_type;
template <class _Ptr, class = void>
struct __pointer_traits_impl ;
template <class _Ptr>
struct __pointer_traits_impl<_Ptr, __void_t<typename __pointer_traits_element_type<_Ptr>::type> > ;;
template <class _Ptr>
struct pointer_traits : __pointer_traits_impl<_Ptr> {};
template <class _Tp>
struct pointer_traits<_Tp*> {
  typedef _Tp* pointer;
  typedef _Tp element_type;
  typedef ptrdiff_t difference_type;
  template <class _Up>
  using rebind = _Up*;
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr static pointer
  pointer_to(__conditional_t<is_void<element_type>::value, __nat, element_type>& __r) noexcept {
    return std::addressof(__r);
  }
};
template <class _From, class _To>
using __rebind_pointer_t [[__gnu__::__nodebug__]] = typename pointer_traits<_From>::template rebind<_To>;
template <class _Pointer, class = void>
struct __to_address_helper;
template <class _Tp>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Tp* __to_address(_Tp* __p) noexcept {
  static_assert(!is_function<_Tp>::value, "_Tp is a function type");
  return __p;
}
template <class _Pointer, class = void>
struct _HasToAddress : false_type {};
template <class _Pointer>
struct _HasToAddress<_Pointer, decltype((void)pointer_traits<_Pointer>::to_address) >
    : true_type {};
template <class _Pointer, class = void>
struct _HasArrow : false_type {};
template <class _Pointer>
struct _HasArrow<_Pointer, decltype(std::declval<const _Pointer&>.operator->) > : true_type {};
template <class _Pointer>
struct _IsFancyPointer ;
 ;
template <class _Pointer, class>
struct __to_address_helper ;
template <class _Pointer>
struct __to_address_helper<_Pointer,
                           decltype(pointer_traits<_Pointer>::to_address)> ;
 ;
template <class _Pointer>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto to_address(const _Pointer& __p) noexcept
    -> decltype(std::__to_address(__p)) ;
template <class _Tp>
struct __pointer_of ;
template <class _Tp>
concept __has_pointer_member = requires { typename _Tp::pointer; };
template <class _Tp>
concept __has_element_type_member = requires { typename _Tp::element_type; };
template <class _Tp>
  requires __has_pointer_member<_Tp>
struct __pointer_of<_Tp> {
  using type [[__gnu__::__nodebug__]] = typename _Tp::pointer;
};
template <class _Tp>
  requires(!__has_pointer_member<_Tp> && __has_element_type_member<_Tp>)
struct __pointer_of<_Tp> {
  using type [[__gnu__::__nodebug__]] = typename _Tp::element_type*;
};
template <class _Tp>
  requires(!__has_pointer_member<_Tp> && !__has_element_type_member<_Tp> &&
           __has_element_type_member<pointer_traits<_Tp>>)
struct __pointer_of<_Tp> ;
template <typename _Tp>
using __pointer_of_t [[__gnu__::__nodebug__]] = typename __pointer_of<_Tp>::type;
template <typename _Tp, typename _Up>
using __pointer_of_or_t [[__gnu__::__nodebug__]] = __detected_or_t<_Up, __pointer_of_t, _Tp>;
template <class _Smart>
concept __resettable_smart_pointer = requires(_Smart __s) { __s.reset; };
template <class _Smart, class _Pointer, class... _Args>
concept __resettable_smart_pointer_with_args = requires(_Smart __s, _Pointer __p, _Args... __args) {
  __s.reset(static_cast<__pointer_of_or_t<_Smart, _Pointer>>(__p), std::forward<_Args>...);
};
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_pointer : _BoolConstant<__is_pointer(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_pointer_v = __is_pointer(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _In>
concept __indirectly_readable_impl =
    requires(const _In __i) {
      typename iter_value_t<_In>;
      typename iter_reference_t<_In>;
      typename iter_rvalue_reference_t<_In>;
      { *__i } -> same_as<iter_reference_t<_In>>;
      { ranges::iter_move } -> same_as<iter_rvalue_reference_t<_In>>;
    } && common_reference_with<iter_reference_t<_In>&&, iter_value_t<_In>&> &&
    common_reference_with<iter_reference_t<_In>&&, iter_rvalue_reference_t<_In>&&> &&
    common_reference_with<iter_rvalue_reference_t<_In>&&, const iter_value_t<_In>&>;
template <class _In>
concept indirectly_readable = __indirectly_readable_impl<remove_cvref_t<_In>>;
template <class _Tp>
using __projected_iterator_t [[__gnu__::__nodebug__]] = typename _Tp::__projected_iterator;
template <class _Tp>
using __projected_projection_t [[__gnu__::__nodebug__]] = typename _Tp::__projected_projection;
template <class _Tp>
concept __specialization_of_projected = requires {
  typename __projected_iterator_t<_Tp>;
  typename __projected_projection_t<_Tp>;
} && __is_primary_template<_Tp>::value;
template <class _Tp>
struct __indirect_value_t_impl {
  using type [[__gnu__::__nodebug__]] = iter_value_t<_Tp>&;
};
template <__specialization_of_projected _Tp>
struct __indirect_value_t_impl<_Tp> {
  using type [[__gnu__::__nodebug__]] =
      invoke_result_t<__projected_projection_t<_Tp>&,
                      typename __indirect_value_t_impl<__projected_iterator_t<_Tp>>::type>;
};
template <indirectly_readable _Tp>
using __indirect_value_t [[__gnu__::__nodebug__]] = typename __indirect_value_t_impl<_Tp>::type;
template <indirectly_readable _Tp>
using iter_common_reference_t = common_reference_t<iter_reference_t<_Tp>, __indirect_value_t<_Tp>>;
template <class _Out, class _Tp>
concept indirectly_writable = requires(_Out&& __o, _Tp&& __t) {
      std::forward<_Tp>;
};
template <class _Tp>
concept __integer_like = integral<_Tp> && !same_as<_Tp, bool>;
template <class _Tp>
concept __signed_integer_like = signed_integral<_Tp>;
template <class _Ip>
concept weakly_incrementable =
    !same_as<_Ip, bool> &&
    movable<_Ip> && requires(_Ip __i) {
      typename iter_difference_t<_Ip>;
      requires __signed_integer_like<iter_difference_t<_Ip>>;
      { ++__i } -> same_as<_Ip&>;
      __i++;
    };
template <class _Ip>
concept incrementable = regular<_Ip> && weakly_incrementable<_Ip> && requires(_Ip __i) {
  { __i++ } -> same_as<_Ip>;
};
template <class _Ip>
concept input_or_output_iterator = requires(_Ip __i) {
  { *__i } -> __referenceable;
} && weakly_incrementable<_Ip>;
template <class _Sp, class _Ip>
concept sentinel_for = semiregular<_Sp> && input_or_output_iterator<_Ip> && __weakly_equality_comparable_with<_Sp, _Ip>;
template <class, class>
inline constexpr bool disable_sized_sentinel_for = false;
template <class _Sp, class _Ip>
concept sized_sentinel_for =
    sentinel_for<_Sp, _Ip> && !disable_sized_sentinel_for<remove_cv_t<_Sp>, remove_cv_t<_Ip>> &&
    requires(const _Ip& __i, const _Sp& __s) {
      { __s - __i } -> same_as<iter_difference_t<_Ip>>;
      { __i - __s } -> same_as<iter_difference_t<_Ip>>;
    };
template <class _Iter>
struct __iter_traits_cache {
  using type [[__gnu__::__nodebug__]] =
      _If<__is_primary_template<iterator_traits<_Iter> >::value, _Iter, iterator_traits<_Iter> >;
};
template <class _Iter>
using _ITER_TRAITS [[__gnu__::__nodebug__]] = typename __iter_traits_cache<_Iter>::type;
struct __iter_concept_concept_test ;
struct __iter_concept_category_test {
  template <class _Iter>
  using _Apply [[__gnu__::__nodebug__]] = typename _ITER_TRAITS<_Iter>::iterator_category;
};
struct __iter_concept_random_fallback ;
template <class _Iter, class _Tester>
struct __test_iter_concept : _IsValidExpansion<_Tester::template _Apply, _Iter>, _Tester {};
template <class _Iter>
struct __iter_concept_cache ;
template <class _Iter>
using _ITER_CONCEPT [[__gnu__::__nodebug__]] = typename __iter_concept_cache<_Iter>::type::template _Apply<_Iter>;
template <class _Ip>
concept input_iterator = input_or_output_iterator<_Ip> && indirectly_readable<_Ip> && requires {
  typename _ITER_CONCEPT<_Ip>;
} && derived_from<_ITER_CONCEPT<_Ip>, input_iterator_tag>;
template <class _Ip, class _Tp>
concept output_iterator =
    input_or_output_iterator<_Ip> && indirectly_writable<_Ip, _Tp> && requires(_Ip __it, _Tp&& __t) {
      *__it++ = std::forward<_Tp>(__t);
    };
template <class _Ip>
concept forward_iterator =
    input_iterator<_Ip> && derived_from<_ITER_CONCEPT<_Ip>, forward_iterator_tag> && incrementable<_Ip> &&
    sentinel_for<_Ip, _Ip>;
template <class _Ip>
concept bidirectional_iterator =
    forward_iterator<_Ip> && derived_from<_ITER_CONCEPT<_Ip>, bidirectional_iterator_tag> && requires(_Ip __i) {
      { --__i } -> same_as<_Ip&>;
      { __i-- } -> same_as<_Ip>;
    };
template <class _Ip>
concept random_access_iterator =
    bidirectional_iterator<_Ip> && derived_from<_ITER_CONCEPT<_Ip>, random_access_iterator_tag> &&
    totally_ordered<_Ip> && sized_sentinel_for<_Ip, _Ip> &&
    requires(_Ip __i, const _Ip __j, const iter_difference_t<_Ip> __n) {
      { __i += __n } -> same_as<_Ip&>;
      { __j + __n } -> same_as<_Ip>;
      { __n + __j } -> same_as<_Ip>;
      { __i -= __n } -> same_as<_Ip&>;
      { __j - __n } -> same_as<_Ip>;
      { __j[__n] } -> same_as<iter_reference_t<_Ip>>;
    };
template <class _Ip>
concept contiguous_iterator =
    random_access_iterator<_Ip> && derived_from<_ITER_CONCEPT<_Ip>, contiguous_iterator_tag> &&
    is_lvalue_reference_v<iter_reference_t<_Ip>> && same_as<iter_value_t<_Ip>, remove_cvref_t<iter_reference_t<_Ip>>> &&
    requires(const _Ip& __i) {
      { std::to_address } -> same_as<add_pointer_t<iter_reference_t<_Ip>>>;
    };
template <class _Ip>
concept __has_arrow = input_iterator<_Ip> && (is_pointer_v<_Ip> || requires(_Ip __i) { __i.operator->; });
template <class _Fp, class _It>
concept indirectly_unary_invocable =
    indirectly_readable<_It> && copy_constructible<_Fp> && invocable<_Fp&, __indirect_value_t<_It>> &&
    invocable<_Fp&, iter_reference_t<_It>> &&
    common_reference_with< invoke_result_t<_Fp&, __indirect_value_t<_It>>,
                           invoke_result_t<_Fp&, iter_reference_t<_It>>>;
template <class _Fp, class _It>
concept indirectly_regular_unary_invocable =
    indirectly_readable<_It> && copy_constructible<_Fp> && regular_invocable<_Fp&, __indirect_value_t<_It>> &&
    regular_invocable<_Fp&, iter_reference_t<_It>> &&
    common_reference_with< invoke_result_t<_Fp&, __indirect_value_t<_It>>,
                           invoke_result_t<_Fp&, iter_reference_t<_It>>>;
template <class _Fp, class _It>
concept indirect_unary_predicate =
    indirectly_readable<_It> && copy_constructible<_Fp> && predicate<_Fp&, __indirect_value_t<_It>> &&
    predicate<_Fp&, iter_reference_t<_It>>;
template <class _Fp, class _It1, class _It2>
concept indirect_binary_predicate =
    indirectly_readable<_It1> && indirectly_readable<_It2> && copy_constructible<_Fp> &&
    predicate<_Fp&, __indirect_value_t<_It1>, __indirect_value_t<_It2>> &&
    predicate<_Fp&, __indirect_value_t<_It1>, iter_reference_t<_It2>> &&
    predicate<_Fp&, iter_reference_t<_It1>, __indirect_value_t<_It2>> &&
    predicate<_Fp&, iter_reference_t<_It1>, iter_reference_t<_It2>>;
template <class _Fp, class _It1, class _It2 = _It1>
concept indirect_equivalence_relation =
    indirectly_readable<_It1> && indirectly_readable<_It2> && copy_constructible<_Fp> &&
    equivalence_relation<_Fp&, __indirect_value_t<_It1>, __indirect_value_t<_It2>> &&
    equivalence_relation<_Fp&, __indirect_value_t<_It1>, iter_reference_t<_It2>> &&
    equivalence_relation<_Fp&, iter_reference_t<_It1>, __indirect_value_t<_It2>> &&
    equivalence_relation<_Fp&, iter_reference_t<_It1>, iter_reference_t<_It2>>;
template <class _Fp, class _It1, class _It2 = _It1>
concept indirect_strict_weak_order =
    indirectly_readable<_It1> && indirectly_readable<_It2> && copy_constructible<_Fp> &&
    strict_weak_order<_Fp&, __indirect_value_t<_It1>, __indirect_value_t<_It2>> &&
    strict_weak_order<_Fp&, __indirect_value_t<_It1>, iter_reference_t<_It2>> &&
    strict_weak_order<_Fp&, iter_reference_t<_It1>, __indirect_value_t<_It2>> &&
    strict_weak_order<_Fp&, iter_reference_t<_It1>, iter_reference_t<_It2>>;
template <class _Fp, class... _Its>
  requires(indirectly_readable<_Its> && ...) && invocable<_Fp, iter_reference_t<_Its>...>
using indirect_result_t = invoke_result_t<_Fp, iter_reference_t<_Its>...>;
template <class _In, class _Out>
concept indirectly_movable = indirectly_readable<_In> && indirectly_writable<_Out, iter_rvalue_reference_t<_In>>;
template <class _In, class _Out>
concept indirectly_movable_storable =
    indirectly_movable<_In, _Out> && indirectly_writable<_Out, iter_value_t<_In>> && movable<iter_value_t<_In>> &&
    constructible_from<iter_value_t<_In>, iter_rvalue_reference_t<_In>> &&
    assignable_from<iter_value_t<_In>&, iter_rvalue_reference_t<_In>>;
template <class _In, class _Out>
concept indirectly_copyable = indirectly_readable<_In> && indirectly_writable<_Out, iter_reference_t<_In>>;
template <class _In, class _Out>
concept indirectly_copyable_storable =
    indirectly_copyable<_In, _Out> && indirectly_writable<_Out, iter_value_t<_In>&> &&
    indirectly_writable<_Out, const iter_value_t<_In>&> && indirectly_writable<_Out, iter_value_t<_In>&&> &&
    indirectly_writable<_Out, const iter_value_t<_In>&&> && copyable<iter_value_t<_In>> &&
    constructible_from<iter_value_t<_In>, iter_reference_t<_In>> &&
    assignable_from<iter_value_t<_In>&, iter_reference_t<_In>>;
template <class _Tp>
using __has_random_access_iterator_category_or_concept [[__gnu__::__nodebug__]]
    = integral_constant<bool, random_access_iterator<_Tp>>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class>
inline constexpr bool enable_borrowed_range = false;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Tp>
concept __can_borrow = is_lvalue_reference_v<_Tp> || enable_borrowed_range<remove_cvref_t<_Tp>>;
}
namespace ranges {
namespace __begin {
template <class _Tp>
concept __member_begin = __can_borrow<_Tp> && requires(_Tp&& __t) {
  { static_cast<::std::__decay_t<decltype((__t.begin))> >(__t.begin) } -> input_or_output_iterator;
};
template <class _Tp>
concept __unqualified_begin =
    !__member_begin<_Tp> && __can_borrow<_Tp> && __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp&& __t) {
      { static_cast<::std::__decay_t<decltype((begin(__t)))> >(begin(__t)) } -> input_or_output_iterator;
    };
struct __fn {
   ;
   ;
   ;
   ;
  ;
};
}
inline namespace __cpo {
inline constexpr auto begin = __begin::__fn{};
}
}
namespace ranges {
template <class _Tp>
using iterator_t = decltype(ranges::begin(std::declval<_Tp&>));
}
namespace ranges {
namespace __end {
template <class _Tp>
concept __member_end = __can_borrow<_Tp> && requires(_Tp&& __t) {
  typename iterator_t<_Tp>;
  { static_cast<::std::__decay_t<decltype((__t.end))> >(__t.end) } -> sentinel_for<iterator_t<_Tp>>;
};
template <class _Tp>
concept __unqualified_end =
    !__member_end<_Tp> && __can_borrow<_Tp> && __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp&& __t) {
      typename iterator_t<_Tp>;
      { static_cast<::std::__decay_t<decltype((end(__t)))> >(end(__t)) } -> sentinel_for<iterator_t<_Tp>>;
    };
struct __fn {
   ;
   ;
  ;
};
}
inline namespace __cpo {
inline constexpr auto end = __end::__fn{};
}
}
namespace ranges {
namespace __cbegin {
struct __fn {
  }
  ;
}
inline namespace __cpo {
inline constexpr auto cbegin = __cbegin::__fn{};
}
}
namespace ranges {
namespace __cend {
struct __fn {
  }
  ;
}
inline namespace __cpo {
inline constexpr auto cend = __cend::__fn{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum class _OrdResult : signed char { __less = -1, __equiv = 0, __greater = 1 };
enum class _PartialOrdResult : signed char {
  __less = static_cast<signed char>(_OrdResult::__less),
  __equiv = static_cast<signed char>(_OrdResult::__equiv),
  __greater = static_cast<signed char>(_OrdResult::__greater),
  __unordered = -127,
};
class partial_ordering;
class weak_ordering;
class strong_ordering;
struct _CmpUnspecifiedParam ;
class partial_ordering {
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit constexpr partial_ordering(_PartialOrdResult __v) noexcept : __value_(__v) {}
public:
  static const partial_ordering less;
  static const partial_ordering equivalent;
  static const partial_ordering greater;
  static const partial_ordering unordered;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator<=(partial_ordering __v, _CmpUnspecifiedParam) noexcept ;
private:
  _PartialOrdResult __value_;
};
inline constexpr partial_ordering partial_ordering::less(_PartialOrdResult::__less);
inline constexpr partial_ordering partial_ordering::equivalent(_PartialOrdResult::__equiv);
inline constexpr partial_ordering partial_ordering::greater(_PartialOrdResult::__greater);
inline constexpr partial_ordering partial_ordering::unordered(_PartialOrdResult::__unordered);
class weak_ordering {
  using _ValueT [[__gnu__::__nodebug__]] = signed char;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit constexpr weak_ordering(_OrdResult __v) noexcept : __value_(_ValueT(__v)) {}
public:
  static const weak_ordering less;
  static const weak_ordering equivalent;
  static const weak_ordering greater;
private:
  _ValueT __value_;
};
inline constexpr weak_ordering weak_ordering::less(_OrdResult::__less);
inline constexpr weak_ordering weak_ordering::equivalent(_OrdResult::__equiv);
inline constexpr weak_ordering weak_ordering::greater(_OrdResult::__greater);
class strong_ordering {
  using _ValueT [[__gnu__::__nodebug__]] = signed char;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit constexpr strong_ordering(_OrdResult __v) noexcept : __value_(_ValueT(__v)) {}
public:
  static const strong_ordering less;
  static const strong_ordering equal;
  static const strong_ordering equivalent;
  static const strong_ordering greater;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator>(_CmpUnspecifiedParam, strong_ordering __v) noexcept ;
private:
  _ValueT __value_;
};
inline constexpr strong_ordering strong_ordering::less(_OrdResult::__less);
inline constexpr strong_ordering strong_ordering::equal(_OrdResult::__equiv);
inline constexpr strong_ordering strong_ordering::equivalent(_OrdResult::__equiv);
inline constexpr strong_ordering strong_ordering::greater(_OrdResult::__greater);
template <class _Tp>
concept __comparison_category =
    is_same_v<_Tp, partial_ordering> || is_same_v<_Tp, weak_ordering> || is_same_v<_Tp, strong_ordering>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __comp_detail {
enum _ClassifyCompCategory : unsigned ;
 ;
template <size_t _Size>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _ClassifyCompCategory
__compute_comp_type(const _ClassifyCompCategory (&__types)[_Size]) ;
template <class... _Ts, bool _False = false>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto __get_comp_type() ;
}
template <class... _Ts>
struct common_comparison_category ;
template <class... _Ts>
using common_comparison_category_t = typename common_comparison_category<_Ts...>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Cat>
concept __compares_as = same_as<common_comparison_category_t<_Tp, _Cat>, _Cat>;
template <class _Tp, class _Cat = partial_ordering>
concept three_way_comparable =
    __weakly_equality_comparable_with<_Tp, _Tp> && __partially_ordered_with<_Tp, _Tp> &&
    requires(__make_const_lvalue_ref<_Tp> __a, __make_const_lvalue_ref<_Tp> __b) {
      { __a <=> __b } -> __compares_as<_Cat>;
    };
template <class _Tp, class _Up, class _Cat = partial_ordering>
concept three_way_comparable_with =
    three_way_comparable<_Tp, _Cat> && three_way_comparable<_Up, _Cat> &&
    common_reference_with<__make_const_lvalue_ref<_Tp>, __make_const_lvalue_ref<_Up>> &&
    three_way_comparable<common_reference_t<__make_const_lvalue_ref<_Tp>, __make_const_lvalue_ref<_Up>>, _Cat> &&
    __weakly_equality_comparable_with<_Tp, _Up> && __partially_ordered_with<_Tp, _Up> &&
    requires(__make_const_lvalue_ref<_Tp> __t, __make_const_lvalue_ref<_Up> __u) {
      { __t <=> __u } -> __compares_as<_Cat>;
      { __u <=> __t } -> __compares_as<_Cat>;
    };
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) inline constexpr auto __synth_three_way = []<class _Tp, class _Up>(const _Tp& __t, const _Up& __u)
  requires requires {
    { __t < __u } -> __boolean_testable;
    { __u < __t } -> __boolean_testable;
  }
{
  if constexpr (three_way_comparable_with<_Tp, _Up>) ; else ;
};
template <class _Tp, class _Up = _Tp>
using __synth_three_way_result [[__gnu__::__nodebug__]] =
    decltype(std::__synth_three_way(std::declval<_Tp&>, std::declval<_Up&>));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, size_t _Size>
struct array;
;
;
;
template <size_t _Ip, class _Tp, size_t _Size>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const _Tp&& get(const array<_Tp, _Size>&&) noexcept;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __has_allocator_type {
private:
  ;
  template <class _Up>
  static true_type __test;
public:
  static const bool value = decltype(__test<_Tp>)::value;
};
template <class _Tp, class _Alloc, bool = __has_allocator_type<_Tp>::value>
struct __uses_allocator : public integral_constant<bool, is_convertible<_Alloc, typename _Tp::allocator_type>::value> {
};
template <class _Tp, class _Alloc>
struct __uses_allocator<_Tp, _Alloc, false> : public false_type {};
template <class _Tp, class _Alloc>
struct uses_allocator : public __uses_allocator<_Tp, _Alloc> {};
template <class _Tp, class _Alloc>
inline constexpr bool uses_allocator_v = uses_allocator<_Tp, _Alloc>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct allocator_arg_t {
  explicit allocator_arg_t() = default;
};
inline constexpr allocator_arg_t allocator_arg = allocator_arg_t();
template <class _Tp, class _Alloc, class... _Args>
struct __uses_alloc_ctor_imp ;
template <class _Tp, class _Alloc, class... _Args>
struct __uses_alloc_ctor : integral_constant<int, __uses_alloc_ctor_imp<_Tp, _Alloc, _Args...>::value> {};
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __find_detail {
static constexpr size_t __not_found = static_cast<size_t>(-1);
static constexpr size_t __ambiguous = __not_found - 1;
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_t __find_idx_return(size_t __curr_i, size_t __res, bool __matches) ;
template <size_t _Nx>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_t __find_idx(size_t __i, const bool [_Nx]) ;
template <class _T1, class... _Args>
struct __find_exactly_one_checked {
  static constexpr bool __matches[sizeof...(_Args)] ;
  static constexpr size_t value = __find_detail::__find_idx(0, __matches);
  static_assert(value != __not_found, "type not found in type list");
  static_assert(value != __ambiguous, "type occurs more than once in type list");
};
template <class _T1>
struct __find_exactly_one_checked<_T1> ;
}
template <typename _T1, typename... _Args>
struct __find_exactly_one_t : public __find_detail::__find_exactly_one_checked<_T1, _Args...> {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __ignore_type {
   ;
};
inline constexpr __ignore_type ignore;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_const : _BoolConstant<__is_const(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_const_v = __is_const(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_volatile : _BoolConstant<__is_volatile(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_volatile_v = __is_volatile(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct tuple_size;
template <class _Tp, class...>
using __enable_if_tuple_size_imp [[__gnu__::__nodebug__]] = _Tp;
template <class _Tp>
struct tuple_size<__enable_if_tuple_size_imp<const volatile _Tp, decltype(tuple_size<_Tp>::value)>>
    : public integral_constant<size_t, tuple_size<_Tp>::value> {};
template <class... _Tp>
struct tuple_size<tuple<_Tp...> > : public integral_constant<size_t, sizeof...(_Tp)> {};
template <class... _Tp>
struct tuple_size<__tuple_types<_Tp...> > : public integral_constant<size_t, sizeof...(_Tp)> {};
template <class _Tp>
inline constexpr size_t tuple_size_v = tuple_size<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _TupleTypes, class _TupleIndices>
struct __make_tuple_types_flat;
template <template <class...> class _Tuple, class... _Types, size_t... _Idx>
struct __make_tuple_types_flat<_Tuple<_Types...>, __tuple_indices<_Idx...>> {
  template <class _Tp>
  using __apply_quals [[__gnu__::__nodebug__]] = __tuple_types<__copy_cvref_t<_Tp, __type_pack_element<_Idx, _Types...>>...>;
};
template <class _Vt, size_t _Np, size_t... _Idx>
struct __make_tuple_types_flat<array<_Vt, _Np>, __tuple_indices<_Idx...>> {
  template <size_t>
  using __value_type [[__gnu__::__nodebug__]] = _Vt;
  template <class _Tp>
  using __apply_quals [[__gnu__::__nodebug__]] = __tuple_types<__copy_cvref_t<_Tp, __value_type<_Idx>>...>;
};
template <class _Tp,
          size_t _Ep = tuple_size<__libcpp_remove_reference_t<_Tp> >::value,
          size_t _Sp = 0,
          bool _SameSize = (_Ep == tuple_size<__libcpp_remove_reference_t<_Tp> >::value)>
struct __make_tuple_types ;;
template <class... _Types, size_t _Ep>
struct __make_tuple_types<tuple<_Types...>, _Ep, 0, true> ;
template <class... _Types, size_t _Ep>
struct __make_tuple_types<__tuple_types<_Types...>, _Ep, 0, true> ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __tuple_like_ext : false_type {};
template <class _Tp>
struct __tuple_like_ext<const _Tp> : public __tuple_like_ext<_Tp> {};
template <class _Tp>
struct __tuple_like_ext<volatile _Tp> : public __tuple_like_ext<_Tp> {};
template <class _Tp>
struct __tuple_like_ext<const volatile _Tp> : public __tuple_like_ext<_Tp> {};
template <class _Tp, size_t _Size>
struct __tuple_like_ext<array<_Tp, _Size> > : true_type {};
template <class... _Tp>
struct __tuple_like_ext<__tuple_types<_Tp...> > : true_type {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __tuple_sfinae_base {
  ;
  ;
  template <class _FromArgs, class _ToArgs>
  using __constructible [[__gnu__::__nodebug__]] = decltype(__do_test<is_constructible>(_ToArgs{}, _FromArgs{}));
};
template <class _Tp,
          class _Up,
          bool = __tuple_like_ext<__libcpp_remove_reference_t<_Tp> >::value,
          bool = __tuple_like_ext<_Up>::value>
struct __tuple_constructible : public false_type {};
template <class _Tp, class _Up>
struct __tuple_constructible<_Tp, _Up, true, true>
    : public __tuple_sfinae_base::__constructible< typename __make_tuple_types<_Tp>::type,
                                                   typename __make_tuple_types<_Up>::type > {};
template <size_t _Ip, class... _Tp>
struct tuple_element<_Ip, tuple<_Tp...> > ;;
struct __attribute__((__visibility__("default"))) __check_tuple_constructor_fail ;
template <bool _CanCopy, bool _CanMove>
struct __sfinae_ctor_base {};
template <>
struct __sfinae_ctor_base<false, false> ;
template <>
struct __sfinae_ctor_base<true, false> {
};
template <>
struct __sfinae_ctor_base<false, true> {
};
template <bool _CanCopy, bool _CanMove>
struct __sfinae_assign_base {};
template <>
struct __sfinae_assign_base<false, false> {
};
template <>
struct __sfinae_assign_base<true, false> {
};
template <>
struct __sfinae_assign_base<false, true> {
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
struct [[_Clang::__no_specializations__]] is_assignable : _BoolConstant<__is_assignable(_Tp, _Up)> {};
template <class _Tp, class _Arg>
[[_Clang::__no_specializations__]] inline constexpr bool is_assignable_v = __is_assignable(_Tp, _Arg);
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_copy_assignable
    : integral_constant<bool, __is_assignable(__add_lvalue_reference_t<_Tp>, __add_lvalue_reference_t<const _Tp>)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_copy_assignable_v = is_copy_assignable<_Tp>::value;
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_move_assignable
    : integral_constant<bool, __is_assignable(__add_lvalue_reference_t<_Tp>, __add_rvalue_reference_t<_Tp>)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_move_assignable_v = is_move_assignable<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_empty : integral_constant<bool, __is_empty(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_empty_v = __is_empty(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __libcpp_is_final : integral_constant<bool, __is_final(_Tp)> {};
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_final : integral_constant<bool, __is_final(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_final_v = __is_final(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
void __test_implicit_default_constructible(_Tp);
template <class _Tp, class = void, class = typename is_default_constructible<_Tp>::type>
struct __is_implicitly_default_constructible : false_type {};
template <class _Tp>
struct __is_implicitly_default_constructible<_Tp,
                                             decltype(std::__test_implicit_default_constructible<_Tp const&>),
                                             true_type> : true_type {};
template <class _Tp>
struct __is_implicitly_default_constructible<_Tp,
                                             decltype(std::__test_implicit_default_constructible<_Tp const&>),
                                             false_type> : false_type {};
} }
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using ::int8_t __attribute__((__using_if_exists__));
using ::int16_t __attribute__((__using_if_exists__));
using ::int32_t __attribute__((__using_if_exists__));
using ::int64_t __attribute__((__using_if_exists__));
using ::uint8_t __attribute__((__using_if_exists__));
using ::uint16_t __attribute__((__using_if_exists__));
using ::uint32_t __attribute__((__using_if_exists__));
using ::uint64_t __attribute__((__using_if_exists__));
using ::int_least8_t __attribute__((__using_if_exists__));
using ::int_least16_t __attribute__((__using_if_exists__));
using ::int_least32_t __attribute__((__using_if_exists__));
using ::int_least64_t __attribute__((__using_if_exists__));
using ::uint_least8_t __attribute__((__using_if_exists__));
using ::uint_least16_t __attribute__((__using_if_exists__));
using ::uint_least32_t __attribute__((__using_if_exists__));
using ::uint_least64_t __attribute__((__using_if_exists__));
using ::int_fast8_t __attribute__((__using_if_exists__));
using ::int_fast16_t __attribute__((__using_if_exists__));
using ::int_fast32_t __attribute__((__using_if_exists__));
using ::int_fast64_t __attribute__((__using_if_exists__));
using ::intptr_t __attribute__((__using_if_exists__));
using ::uintptr_t __attribute__((__using_if_exists__));
using ::intmax_t __attribute__((__using_if_exists__));
using ::uintmax_t __attribute__((__using_if_exists__));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_trivially_copyable : integral_constant<bool, __is_trivially_copyable(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_trivially_copyable_v = __is_trivially_copyable(_Tp);
template <class _Tp>
inline const bool __is_cheap_to_copy = __is_trivially_copyable(_Tp) && sizeof(_Tp) <= sizeof(std::intmax_t);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class = void>
struct __is_replaceable : is_trivially_copyable<_Tp> {};
template <class _Tp>
struct __is_replaceable<_Tp, __enable_if_t<is_same<_Tp, typename _Tp::__replaceable>::value> > : true_type {};
template <class _Tp>
inline const bool __is_replaceable_v = __is_replaceable<_Tp>::value;
template <class _AllocatorTraits>
struct __container_allocator_is_replaceable
    : integral_constant<bool,
                        __is_replaceable_v<typename _AllocatorTraits::allocator_type> &&
                            (_AllocatorTraits::is_always_equal::value ||
                             (_AllocatorTraits::propagate_on_container_move_assignment::value &&
                              _AllocatorTraits::propagate_on_container_copy_assignment::value))> {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up, class = void>
inline const bool __is_swappable_with_v = false;
template <class _Tp>
inline const bool __is_swappable_v = __is_swappable_with_v<_Tp&, _Tp&>;
template <class _Tp, class _Up, bool = __is_swappable_with_v<_Tp, _Up> >
inline const bool __is_nothrow_swappable_with_v = false;
template <class _Tp>
inline const bool __is_nothrow_swappable_v = __is_nothrow_swappable_with_v<_Tp&, _Tp&>;
template <class _Tp>
using __swap_result_t [[__gnu__::__nodebug__]] =
    __enable_if_t<is_move_constructible<_Tp>::value && is_move_assignable<_Tp>::value>;
;
;
template <class _Tp, class _Up>
inline const bool __is_swappable_with_v<_Tp,
                                        _Up,
                                        __void_t<decltype(swap(std::declval<_Tp>, std::declval<_Up>)),
                                                 decltype(swap(std::declval<_Up>, std::declval<_Tp>))> > = true;
template <class _Tp, class _Up>
inline const bool __is_nothrow_swappable_with_v<_Tp, _Up, true> =
    noexcept(swap(std::declval<_Tp>, std::declval<_Up>)) &&
    noexcept(swap(std::declval<_Up>, std::declval<_Tp>));
template <class _Tp, class _Up>
[[_Clang::__no_specializations__]] inline constexpr bool is_swappable_with_v = __is_swappable_with_v<_Tp, _Up>;
template <class _Tp, class _Up>
struct [[_Clang::__no_specializations__]] is_swappable_with : bool_constant<is_swappable_with_v<_Tp, _Up>> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_swappable_v =
    is_swappable_with_v<__add_lvalue_reference_t<_Tp>, __add_lvalue_reference_t<_Tp>>;
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_swappable : bool_constant<is_swappable_v<_Tp>> {};
template <class _Tp, class _Up>
[[_Clang::__no_specializations__]] inline constexpr bool is_nothrow_swappable_with_v = __is_nothrow_swappable_with_v<_Tp, _Up>;
template <class _Tp, class _Up>
struct [[_Clang::__no_specializations__]] is_nothrow_swappable_with : bool_constant<is_nothrow_swappable_with_v<_Tp, _Up>> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_nothrow_swappable_v =
    is_nothrow_swappable_with_v<__add_lvalue_reference_t<_Tp>, __add_lvalue_reference_t<_Tp>>;
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_nothrow_swappable : bool_constant<is_nothrow_swappable_v<_Tp>> {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class = void>
struct __libcpp_is_trivially_relocatable : is_trivially_copyable<_Tp> {};
template <class _Tp>
struct __libcpp_is_trivially_relocatable<_Tp,
                                         __enable_if_t<is_same<_Tp, typename _Tp::__trivially_relocatable>::value> >
    : true_type {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <template <class...> class _Func, class... _Args>
struct _Lazy : _Func<_Args...> {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <bool _Const, class _Tp>
using __maybe_const [[__gnu__::__nodebug__]] = __conditional_t<_Const, const _Tp, _Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Pred>
struct _Not : _BoolConstant<!_Pred::value> {};
template <class _Tp>
struct [[_Clang::__no_specializations__]] negation : _Not<_Tp> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool negation_v = !_Tp::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
struct [[_Clang::__no_specializations__]] reference_constructs_from_temporary
    : public bool_constant<__reference_constructs_from_temporary(_Tp, _Up)> {};
template <class _Tp, class _Up>
[[_Clang::__no_specializations__]] inline constexpr bool reference_constructs_from_temporary_v =
    __reference_constructs_from_temporary(_Tp, _Up);
template <class _Tp, class _Up>
inline const bool __reference_constructs_from_temporary_v = __reference_constructs_from_temporary(_Tp, _Up);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __unwrap_reference ;
template <class _Tp>
using __unwrap_ref_decay_t [[__gnu__::__nodebug__]] = typename __unwrap_reference<__decay_t<_Tp> >::type;
template <class _Tp>
struct [[_Clang::__no_specializations__]] unwrap_reference : __unwrap_reference<_Tp> {};
template <class _Tp>
using unwrap_ref_decay_t = __unwrap_ref_decay_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct piecewise_construct_t {
  explicit piecewise_construct_t() = default;
};
inline constexpr piecewise_construct_t piecewise_construct = piecewise_construct_t();
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
using __swap_result_t [[__gnu__::__nodebug__]] =
    __enable_if_t<is_move_constructible<_Tp>::value && is_move_assignable<_Tp>::value>;
 ;
 ;
long double __promote_impl(long double);
template <class... _Args>
using __promote_t [[__gnu__::__nodebug__]] =
    decltype(0, (std::__promote_impl(_Args()) + ...));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
 ;
 ;
[[__nodiscard__]]
[[__nodiscard__]]
[[__nodiscard__]]
 ;
[[__nodiscard__]]
[[__nodiscard__]]
[[__nodiscard__]]
 ;
[[__nodiscard__]]
[[__nodiscard__]]
[[__nodiscard__]]
 ;
[[__nodiscard__]]
[[__nodiscard__]]
[[__nodiscard__]]
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <size_t _Ip>
struct __priority_tag : __priority_tag<_Ip - 1> {};
template <>
struct __priority_tag<0> ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum float_round_style {
  round_indeterminate = -1,
  round_toward_zero = 0,
  round_to_nearest = 1,
  round_toward_infinity = 2,
  round_toward_neg_infinity = 3
};
enum __attribute__((__deprecated__)) float_denorm_style {
  denorm_indeterminate = -1,
  denorm_absent = 0,
  denorm_present = 1
};
template <class _Tp, bool = is_arithmetic<_Tp>::value>
class __libcpp_numeric_limits ;
template <class _Tp>
class __libcpp_numeric_limits<_Tp, true> {
protected:
  typedef _Tp type;
  static constexpr const bool is_specialized = true;
  static constexpr const bool is_signed = type(-1) < type(0);
  static constexpr const int digits = static_cast<int>(sizeof(type) * 8 - is_signed);
  static constexpr const int digits10 = digits * 3 / 10;
  static constexpr const int max_digits10 = 0;
  static constexpr const type __min = is_signed ? _Tp(_Tp(1) << digits) : 0;
  static constexpr const type __max = is_signed ? type(type(~0) ^ __min) : type(~0);
  [[__nodiscard__]]
  [[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static constexpr type max() noexcept { return __max; }
  [[__nodiscard__]]
  static constexpr const bool is_integer = true;
  static constexpr const bool is_exact = true;
  static constexpr const int radix = 2;
  [[__nodiscard__]]
  [[__nodiscard__]]
  static constexpr const int min_exponent = 0;
  static constexpr const int min_exponent10 = 0;
  static constexpr const int max_exponent = 0;
  static constexpr const int max_exponent10 = 0;
  static constexpr const bool has_infinity = false;
  static constexpr const bool has_quiet_NaN = false;
  static constexpr const bool has_signaling_NaN = false;
  static __attribute__((__deprecated__)) constexpr const float_denorm_style has_denorm = denorm_absent;
  static __attribute__((__deprecated__)) constexpr const bool has_denorm_loss = false;
  static constexpr const bool is_iec559 = false;
  static constexpr const bool is_bounded = true;
  static constexpr const bool is_modulo = !std::is_signed<_Tp>::value;
  static constexpr const bool traps = true;
  static constexpr const bool tinyness_before = false;
  static constexpr const float_round_style round_style = round_toward_zero;
};
template <>
class __libcpp_numeric_limits<bool, true> {
protected:
  typedef bool type;
  static constexpr const bool is_specialized = true;
  static constexpr const bool is_signed = false;
  static constexpr const int digits = 1;
  static constexpr const int digits10 = 0;
  static constexpr const int max_digits10 = 0;
  [[__nodiscard__]]
  [[__nodiscard__]]
  [[__nodiscard__]]
  static constexpr const bool is_integer = true;
  static constexpr const bool is_exact = true;
  static constexpr const int radix = 2;
  [[__nodiscard__]]
  [[__nodiscard__]]
  static constexpr const int min_exponent = 0;
  static constexpr const int min_exponent10 = 0;
  static constexpr const int max_exponent = 0;
  static constexpr const int max_exponent10 = 0;
  static constexpr const bool has_infinity = false;
  static constexpr const bool has_quiet_NaN = false;
  static constexpr const bool has_signaling_NaN = false;
  static __attribute__((__deprecated__)) constexpr const float_denorm_style has_denorm = denorm_absent;
  static __attribute__((__deprecated__)) constexpr const bool has_denorm_loss = false;
  [[__nodiscard__]]
  [[__nodiscard__]]
  [[__nodiscard__]]
  static constexpr const bool traps = false;
  static constexpr const bool tinyness_before = false;
  static constexpr const float_round_style round_style = round_toward_zero;
};
template <>
class __libcpp_numeric_limits<float, true> ;
template <>
class __libcpp_numeric_limits<double, true> {
protected:
  typedef double type;
  static constexpr const bool is_specialized = true;
  static constexpr const bool is_signed = true;
  static constexpr const int digits = 53;
  static constexpr const int digits10 = 15;
  static constexpr const int max_digits10 = 2 + (digits * 30103l) / 100000l;
  [[__nodiscard__]]
  [[__nodiscard__]]
  [[__nodiscard__]]
  static constexpr const bool is_integer = false;
  static constexpr const bool is_exact = false;
  static constexpr const int radix = 2;
  [[__nodiscard__]]
  [[__nodiscard__]]
  static constexpr const int min_exponent = (-1021);
  static constexpr const int min_exponent10 = (-307);
  static constexpr const int max_exponent = 1024;
  static constexpr const int max_exponent10 = 308;
  static constexpr const bool has_infinity = true;
  static constexpr const bool has_quiet_NaN = true;
  static constexpr const bool has_signaling_NaN = true;
  static __attribute__((__deprecated__)) constexpr const float_denorm_style has_denorm = denorm_present;
  static __attribute__((__deprecated__)) constexpr const bool has_denorm_loss = false;
  static constexpr const bool is_iec559 = true;
  static constexpr const bool is_bounded = true;
  static constexpr const bool is_modulo = false;
  static constexpr const bool traps = false;
  static constexpr const bool tinyness_before = false;
  static constexpr const float_round_style round_style = round_to_nearest;
};
template <>
class __libcpp_numeric_limits<long double, true> {
protected:
  typedef long double type;
  static constexpr const bool is_specialized = true;
  static constexpr const bool is_signed = true;
  static constexpr const int digits = 64;
  static constexpr const int digits10 = 18;
  static constexpr const int max_digits10 = 2 + (digits * 30103l) / 100000l;
  [[__nodiscard__]]
  [[__nodiscard__]]
  [[__nodiscard__]]
  static constexpr const bool is_integer = false;
  static constexpr const bool is_exact = false;
  static constexpr const int radix = 2;
  [[__nodiscard__]]
  [[__nodiscard__]]
  static constexpr const int min_exponent = (-16381);
  static constexpr const int min_exponent10 = (-4931);
  static constexpr const int max_exponent = 16384;
  static constexpr const int max_exponent10 = 4932;
  static constexpr const bool has_infinity = true;
  static constexpr const bool has_quiet_NaN = true;
  static constexpr const bool has_signaling_NaN = true;
  static __attribute__((__deprecated__)) constexpr const float_denorm_style has_denorm = denorm_present;
  static __attribute__((__deprecated__)) constexpr const bool has_denorm_loss = false;
  [[__nodiscard__]]
  [[__nodiscard__]]
  [[__nodiscard__]]
  [[__nodiscard__]]
  static constexpr const bool is_iec559 = true;
  static constexpr const bool is_bounded = true;
  static constexpr const bool is_modulo = false;
  static constexpr const bool traps = false;
  static constexpr const bool tinyness_before = false;
  static constexpr const float_round_style round_style = round_to_nearest;
};
template <class _Tp>
class numeric_limits : private __libcpp_numeric_limits<_Tp> {
  typedef __libcpp_numeric_limits<_Tp> __base;
  typedef typename __base::type type;
public:
  static inline constexpr const bool is_specialized = __base::is_specialized;
  [[__nodiscard__]]
  [[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static constexpr type max() noexcept { return __base::max(); }
  [[__nodiscard__]]
  static inline constexpr const int digits = __base::digits;
  static inline constexpr const int digits10 = __base::digits10;
  static inline constexpr const int max_digits10 = __base::max_digits10;
  static inline constexpr const bool is_signed = __base::is_signed;
  static inline constexpr const bool is_integer = __base::is_integer;
  static inline constexpr const bool is_exact = __base::is_exact;
  static inline constexpr const int radix = __base::radix;
  [[__nodiscard__]]
  [[__nodiscard__]]
  static inline constexpr const int min_exponent = __base::min_exponent;
  static inline constexpr const int min_exponent10 = __base::min_exponent10;
  static inline constexpr const float_round_style round_style = __base::round_style;
};
template <class _Tp>
class numeric_limits<const _Tp> : public numeric_limits<_Tp> {};
template <class _Tp>
class numeric_limits<volatile _Tp> : public numeric_limits<_Tp> {};
template <class _Tp>
class numeric_limits<const volatile _Tp> : public numeric_limits<_Tp> {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __strong_order {
struct __fn {
   ;
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto strong_order = __strong_order::__fn{};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __weak_order {
struct __fn {
   ;
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto weak_order = __weak_order::__fn{};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __partial_order {
struct __fn {
   ;
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto partial_order = __partial_order::__fn{};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __compare_partial_order_fallback {
struct __fn {
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto compare_partial_order_fallback = __compare_partial_order_fallback::__fn{};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __compare_strong_order_fallback {
struct __fn {
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto compare_strong_order_fallback = __compare_strong_order_fallback::__fn{};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class, class, class>
struct __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) __compare_three_way_result ;;
template <class _Tp, class _Up>
struct __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) __compare_three_way_result<
    _Tp,
    _Up,
    decltype(std::declval<__make_const_lvalue_ref<_Tp>> <=> std::declval<__make_const_lvalue_ref<_Up>>, void())> ;;
template <class _Tp, class _Up = _Tp>
struct [[_Clang::__no_specializations__]] compare_three_way_result : __compare_three_way_result<_Tp, _Up, void> {};
template <class _Tp, class _Up = _Tp>
using compare_three_way_result_t = typename compare_three_way_result<_Tp, _Up>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __compare_weak_order_fallback {
struct __fn {
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto compare_weak_order_fallback = __compare_weak_order_fallback::__fn{};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <size_t _Ip, class _Hp, bool = is_empty<_Hp>::value && !__libcpp_is_final<_Hp>::value >
class __tuple_leaf;
template <size_t _Ip, class _Hp, bool>
class __tuple_leaf ;
template <size_t _Ip, class _Hp>
class __tuple_leaf<_Ip, _Hp, true> : private __remove_cv_t<_Hp> {
public:
};
 ;
template <class _Tp>
struct __all_default_constructible;
template <class... _Tp>
struct __all_default_constructible<__tuple_types<_Tp...>> : __all<is_default_constructible<_Tp>::value...> {};
template <class _Indx, class... _Tp>
struct __tuple_impl;
 ;
 ;
template <class... _Tp>
class [[_Clang::__no_specializations__]] tuple ;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-specialization"
template <>
class tuple<> ;
#pragma clang diagnostic pop
template <class... _TTypes, class... _UTypes, template <class> class _TQual, template <class> class _UQual>
  requires requires { typename tuple<common_reference_t<_TQual<_TTypes>, _UQual<_UTypes>>...>; }
struct basic_common_reference<tuple<_TTypes...>, tuple<_UTypes...>, _TQual, _UQual> ;
template <class... _TTypes, class... _UTypes>
  requires requires { typename tuple<common_type_t<_TTypes, _UTypes>...>; }
struct common_type<tuple<_TTypes...>, tuple<_UTypes...>> ;;
;
;
;
 ;
 ;
template <class _Rp, class _Indices, class _Tuple0, class... _Tuples>
struct __tuple_cat_return_ref_imp;
template <class... _Types, size_t... _I0, class _Tuple0>
struct __tuple_cat_return_ref_imp<tuple<_Types...>, __tuple_indices<_I0...>, _Tuple0> {
  using _T0 [[__gnu__::__nodebug__]] = __libcpp_remove_reference_t<_Tuple0>;
  typedef tuple<_Types..., __copy_cvref_t<_Tuple0, typename tuple_element<_I0, _T0>::type>&&...> type;
};
template <class... _Types, size_t... _I0, class _Tuple0, class _Tuple1, class... _Tuples>
struct __tuple_cat_return_ref_imp<tuple<_Types...>, __tuple_indices<_I0...>, _Tuple0, _Tuple1, _Tuples...>
    : public __tuple_cat_return_ref_imp<
          tuple<_Types...,
                __copy_cvref_t<_Tuple0, typename tuple_element<_I0, __libcpp_remove_reference_t<_Tuple0>>::type>&&...>,
          typename __make_tuple_indices<tuple_size<__libcpp_remove_reference_t<_Tuple1> >::value>::type,
          _Tuple1,
          tuple<>,
          typename __make_tuple_indices< tuple_size<__libcpp_remove_reference_t<_Tuple0> >::value >::type,
          _Tuple0,
          _Tuples...> {};
template <class _Types, class _I0, class _J0>
struct __tuple_cat;
template <class... _Types, size_t... _I0, size_t... _J0>
struct __tuple_cat<tuple<_Types...>, __tuple_indices<_I0...>, __tuple_indices<_J0...> > ;
 ;
 ;
template <class... _Tp, class _Alloc>
struct uses_allocator<tuple<_Tp...>, _Alloc> : true_type {};
template <class _Fn, class _Tuple, size_t... _Id>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr decltype(auto)
__apply_tuple_impl(_Fn&& __f, _Tuple&& __t, __tuple_indices<_Id...>)
    noexcept ;
template <class _Fn, class _Tuple>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr decltype(auto) apply(_Fn&& __f, _Tuple&& __t)
    noexcept ;
template <class _Tp, class _Tuple, size_t... _Idx>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Tp __make_from_tuple_impl(_Tuple&& __t, __tuple_indices<_Idx...>)
  noexcept
  requires is_constructible_v<_Tp, decltype(std::get<_Idx>)...> ;
template <class _Tp, class _Tuple,
          class _Seq = typename __make_tuple_indices<tuple_size_v<remove_reference_t<_Tuple>>>::type, class = void>
inline constexpr bool __can_make_from_tuple = false;
template <class _Tp, class _Tuple, size_t... _Idx>
inline constexpr bool __can_make_from_tuple<_Tp, _Tuple, __tuple_indices<_Idx...>,
    enable_if_t<is_constructible_v<_Tp, decltype(std::get<_Idx>)...>>> = true;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Op, class _Indices, class... _BoundArgs>
struct __perfect_forward_impl;
template <class _Op, size_t... _Idx, class... _BoundArgs>
struct __perfect_forward_impl<_Op, index_sequence<_Idx...>, _BoundArgs...> ;
template <class _Op, class... _Args>
using __perfect_forward [[__gnu__::__nodebug__]] = __perfect_forward_impl<_Op, index_sequence_for<_Args...>, _Args...>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __compose_op ;;
template <class _Fn1, class _Fn2>
struct __compose_t : __perfect_forward<__compose_op, _Fn1, _Fn2> {
  using __perfect_forward<__compose_op, _Fn1, _Fn2>::__perfect_forward;
};
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] remove_pointer ;
template <class _Tp>
using __remove_pointer_t [[__gnu__::__nodebug__]] = __remove_pointer(_Tp);
template <class _Tp>
using remove_pointer_t = __remove_pointer_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
namespace __data {
template <class _Tp>
concept __ptr_to_object = is_pointer_v<_Tp> && is_object_v<remove_pointer_t<_Tp>>;
template <class _Tp>
concept __member_data = __can_borrow<_Tp> && requires(_Tp&& __t) {
  { static_cast<::std::__decay_t<decltype((__t.data))> >(__t.data) } -> __ptr_to_object;
};
template <class _Tp>
concept __ranges_begin_invocable = !__member_data<_Tp> && __can_borrow<_Tp> && requires(_Tp&& __t) {
  { ranges::begin(__t) } -> contiguous_iterator;
};
struct __fn {
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto data = __data::__fn{};
}
}
namespace ranges {
namespace __cdata {
struct __fn {
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto cdata = __cdata::__fn{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct view_base ;;
template <class _Derived>
  requires is_class_v<_Derived> && same_as<_Derived, remove_cv_t<_Derived>>
class view_interface;
template <class _Op, class _Yp>
  requires(!same_as<_Op, view_interface<_Yp>>)
void __is_derived_from_view_interface(view_interface<_Yp>*);
template <class _Tp>
inline constexpr bool enable_view = derived_from<_Tp, view_base> || requires {
  ranges::__is_derived_from_view_interface<remove_cv_t<_Tp>>((remove_cv_t<_Tp>*)nullptr);
};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_unsigned : _BoolConstant<__is_unsigned(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_unsigned_v = __is_unsigned(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
using __make_unsigned_t [[__gnu__::__nodebug__]] = __make_unsigned(_Tp);
template <class _Tp>
struct [[_Clang::__no_specializations__]] make_unsigned {
  using type [[__gnu__::__nodebug__]] = __make_unsigned_t<_Tp>;
};
template <class _Tp>
using make_unsigned_t = __make_unsigned_t<_Tp>;
 ;
template <class _Tp, class _Up>
using __copy_unsigned_t [[__gnu__::__nodebug__]] = __conditional_t<is_unsigned<_Tp>::value, __make_unsigned_t<_Up>, _Up>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class>
inline constexpr bool disable_sized_range = false;
}
namespace ranges {
namespace __size {
template <class _Tp>
concept __size_enabled = !disable_sized_range<remove_cvref_t<_Tp>>;
template <class _Tp>
concept __member_size = __size_enabled<_Tp> && requires(_Tp&& __t) {
  { static_cast<::std::__decay_t<decltype((__t.size))> >(__t.size) } -> __integer_like;
};
template <class _Tp>
concept __unqualified_size =
    __size_enabled<_Tp> && !__member_size<_Tp> && __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp&& __t) {
      { static_cast<::std::__decay_t<decltype((size(__t)))> >(size(__t)) } -> __integer_like;
    };
template <class _Tp>
concept __difference =
    !__member_size<_Tp> && !__unqualified_size<_Tp> && __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp&& __t) {
      { ranges::begin(__t) } -> forward_iterator;
      { ranges::end } -> sized_sentinel_for<decltype(ranges::begin(std::declval<_Tp>))>;
    };
struct __fn {
   ;
   ;
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto size = __size::__fn{};
}
}
namespace ranges {
namespace __ssize {
struct __fn {
   ;
};
}
inline namespace __cpo {
inline constexpr auto ssize = __ssize::__fn{};
}
}
} }
namespace std
{
template <class _Ep>
class [[_Clang::__no_specializations__]] initializer_list {
  const _Ep* __begin_;
  size_t __size_;
public:
  typedef _Ep value_type;
  typedef const _Ep& reference;
};
 ;
 ;
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Tp>
concept range = requires(_Tp& __t) {
  ranges::begin;
  ranges::end(__t);
};
template <class _Tp>
concept input_range = range<_Tp> && input_iterator<iterator_t<_Tp>>;
template <class _Range>
concept borrowed_range =
    range<_Range> && (is_lvalue_reference_v<_Range> || enable_borrowed_range<remove_cvref_t<_Range>>);
template <range _Rp>
using sentinel_t = decltype(ranges::end);
template <range _Rp>
using range_difference_t = iter_difference_t<iterator_t<_Rp>>;
template <range _Rp>
using range_value_t = iter_value_t<iterator_t<_Rp>>;
template <range _Rp>
using range_reference_t = iter_reference_t<iterator_t<_Rp>>;
template <range _Rp>
using range_rvalue_reference_t = iter_rvalue_reference_t<iterator_t<_Rp>>;
template <range _Rp>
using range_common_reference_t = iter_common_reference_t<iterator_t<_Rp>>;
template <class _Tp>
concept sized_range = range<_Tp> && requires(_Tp& __t) { ranges::size; };
template <sized_range _Rp>
using range_size_t = decltype(ranges::size(std::declval<_Rp&>));
template <class _Tp>
concept view = range<_Tp> && movable<_Tp> && enable_view<_Tp>;
template <class _Range>
concept __simple_view =
    view<_Range> && range<const _Range> && same_as<iterator_t<_Range>, iterator_t<const _Range>> &&
    same_as<sentinel_t<_Range>, sentinel_t<const _Range>>;
template <class _Rp, class _Tp>
concept output_range = range<_Rp> && output_iterator<iterator_t<_Rp>, _Tp>;
template <class _Tp>
concept forward_range = input_range<_Tp> && forward_iterator<iterator_t<_Tp>>;
template <class _Tp>
concept bidirectional_range = forward_range<_Tp> && bidirectional_iterator<iterator_t<_Tp>>;
template <class _Tp>
concept random_access_range = bidirectional_range<_Tp> && random_access_iterator<iterator_t<_Tp>>;
template <class _Tp>
concept contiguous_range = random_access_range<_Tp> && contiguous_iterator<iterator_t<_Tp>> && requires(_Tp& __t) {
  { ranges::data } -> same_as<add_pointer_t<range_reference_t<_Tp>>>;
};
template <class _Tp>
concept common_range = range<_Tp> && same_as<iterator_t<_Tp>, sentinel_t<_Tp>>;
template <class _Tp>
inline constexpr bool __is_std_initializer_list = false;
template <class _Ep>
inline constexpr bool __is_std_initializer_list<initializer_list<_Ep>> = true;
template <class _Tp>
concept viewable_range =
    range<_Tp> &&
    ((view<remove_cvref_t<_Tp>> && constructible_from<remove_cvref_t<_Tp>, _Tp>) ||
     (!view<remove_cvref_t<_Tp>> &&
      (is_lvalue_reference_v<_Tp> ||
       (movable<remove_reference_t<_Tp>> && !__is_std_initializer_list<remove_cvref_t<_Tp>>))));
template <class... _Rs>
using __concat_reference_t [[__gnu__::__nodebug__]] = common_reference_t<range_reference_t<_Rs>...>;
template <class... _Rs>
using __concat_value_t [[__gnu__::__nodebug__]] = common_type_t<range_value_t<_Rs>...>;
template <class... _Rs>
using __concat_rvalue_reference_t [[__gnu__::__nodebug__]] = common_reference_t<range_rvalue_reference_t<_Rs>...>;
template <class _Ref, class _RRef, class _It>
concept __concat_indirectly_readable_impl = requires(const _It __it) {
  { *__it } -> convertible_to<_Ref>;
  { ranges::iter_move } -> convertible_to<_RRef>;
};
template <class... _Rs>
concept __concat_indirectly_readable =
    common_reference_with<__concat_reference_t<_Rs...>&&, __concat_value_t<_Rs...>&> &&
    common_reference_with<__concat_reference_t<_Rs...>&&, __concat_rvalue_reference_t<_Rs...>&&> &&
    common_reference_with<__concat_rvalue_reference_t<_Rs...>&&, const __concat_value_t<_Rs...>&> &&
    (__concat_indirectly_readable_impl<__concat_reference_t<_Rs...>,
                                       __concat_rvalue_reference_t<_Rs...>,
                                       iterator_t<_Rs>> &&
     ...);
template <class... _Rs>
concept __concatable = requires {
  typename __concat_reference_t<_Rs...>;
  typename __concat_value_t<_Rs...>;
  typename __concat_rvalue_reference_t<_Rs...>;
} && __concat_indirectly_readable<_Rs...>;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
namespace __empty {
template <class _Tp>
concept __member_empty = requires(_Tp&& __t) { bool(__t.empty); };
template <class _Tp>
concept __can_invoke_size = !__member_empty<_Tp> && requires(_Tp&& __t) { ranges::size; };
template <class _Tp>
concept __can_compare_begin_end = !__member_empty<_Tp> && !__can_invoke_size<_Tp> && requires(_Tp&& __t) {
  bool(ranges::begin == ranges::end(__t));
  { ranges::begin(__t) } -> forward_iterator;
};
struct __fn {
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto empty = __empty::__fn{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
[[__noreturn__]] __attribute__((__visibility__("default"))) __attribute__((__format__(__printf__, 1, 2))) void __libcpp_verbose_abort(const char* __format, ...) noexcept;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, bool>
struct __underlying_type_impl;
template <class _Tp>
struct __underlying_type_impl<_Tp, false> ;
template <class _Tp>
struct [[_Clang::__no_specializations__]] underlying_type : __underlying_type_impl<_Tp, is_enum<_Tp>::value> {};
template <class _Tp>
using __underlying_type_t [[__gnu__::__nodebug__]] = __underlying_type(_Tp);
template <class _Tp>
using underlying_type_t = __underlying_type_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
template <class _Tp, bool = is_enum<_Tp>::value>
struct __sfinae_underlying_type {
  using type = __underlying_type_t<_Tp>;
  typedef decltype(((type)1) + 0) __promoted_type;
};
template <class _Tp>
struct __sfinae_underlying_type<_Tp, false> ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
[[__noreturn__]]
[[noreturn]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void unreachable() ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
namespace ranges {
struct __advance {
private:
   ;
   ;
public:
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto advance = __advance{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
namespace ranges {
struct __prev {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto prev = __prev{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Derived>
  requires is_class_v<_Derived> && same_as<_Derived, remove_cv_t<_Derived>>
class view_interface ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <range _Rp>
  requires movable<_Rp> && (!__is_std_initializer_list<remove_cvref_t<_Rp>>)
class owning_view : public view_interface<owning_view<_Rp>> {
  _Rp __r_ = _Rp();
};
;
template <class _Tp>
inline constexpr bool enable_borrowed_range<owning_view<_Tp>> = enable_borrowed_range<_Tp>;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Tp>
  requires is_class_v<_Tp> && same_as<_Tp, remove_cv_t<_Tp>>
struct __range_adaptor_closure {};
template <class _Fn>
struct __pipeable : _Fn, __range_adaptor_closure<__pipeable<_Fn>> {
};
;
template <class _Tp>
_Tp __derived_from_range_adaptor_closure(__range_adaptor_closure<_Tp>*);
template <class _Tp>
concept _RangeAdaptorClosure = !ranges::range<remove_cvref_t<_Tp>> && requires {
  { ranges::__derived_from_range_adaptor_closure } -> same_as<remove_cvref_t<_Tp>>;
};
 ;
 ;
template <class _Tp>
  requires is_class_v<_Tp> && same_as<_Tp, remove_cv_t<_Tp>>
class [[_Clang::__no_specializations__]] range_adaptor_closure : public __range_adaptor_closure<_Tp> {};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
concept __different_from = !same_as<remove_cvref_t<_Tp>, remove_cvref_t<_Up>>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <range _Range>
  requires is_object_v<_Range>
class ref_view : public view_interface<ref_view<_Range>> {
  _Range* __range_;
public:
    ;
};
;
template <class _Tp>
inline constexpr bool enable_borrowed_range<ref_view<_Tp>> = true;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges::views {
namespace __all {
struct __fn : __range_adaptor_closure<__fn> {
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto all = __all::__fn{};
}
template <ranges::viewable_range _Range>
using all_t = decltype(views::all(std::declval<_Range>));
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
namespace __iter_swap {
;
template <class _T1, class _T2>
concept __unqualified_iter_swap =
    (__class_or_enum<remove_cvref_t<_T1>> || __class_or_enum<remove_cvref_t<_T2>>) && requires(_T1&& __x, _T2&& __y) {
      iter_swap(std::forward<_T1>, std::forward<_T2>);
    };
template <class _T1, class _T2>
concept __readable_swappable =
    indirectly_readable<_T1> && indirectly_readable<_T2> &&
    swappable_with<iter_reference_t<_T1>, iter_reference_t<_T2>>;
struct __fn {
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto iter_swap = __iter_swap::__fn{};
}
}
template <class _I1, class _I2 = _I1>
concept indirectly_swappable =
    indirectly_readable<_I1> && indirectly_readable<_I2> && requires(const _I1 __i1, const _I2 __i2) {
      ranges::iter_swap;
      ranges::iter_swap;
      ranges::iter_swap;
      ranges::iter_swap;
    };
} }
 namespace __attribute__((__type_visibility__("default"))) std {
class __attribute__((__visibility__("default"))) exception {
public:
  virtual ~exception() noexcept;
  virtual const char* what() const noexcept;
};
class __attribute__((__visibility__("default"))) bad_exception : public exception {
public:
};
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using nullptr_t = decltype(nullptr);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Arg, class _Result>
struct __unary_function_keep_layout_base {
};
template <class _Arg, class _Result>
using __unary_function [[__gnu__::__nodebug__]] = __unary_function_keep_layout_base<_Arg, _Result>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline const bool __is_unqualified_v = __is_same(_Tp, __remove_cvref(_Tp));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
class complex;
;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline constexpr bool __tuple_like_no_subrange_impl = false;
template <class _Tp, size_t _Size>
inline constexpr bool __tuple_like_no_subrange_impl<array<_Tp, _Size>> = true;
template <class _Tp>
inline constexpr bool __tuple_like_no_subrange_impl<complex<_Tp>> = true;
template <class _Tp>
concept __tuple_like_no_subrange = __tuple_like_no_subrange_impl<remove_cvref_t<_Tp>>;
template <class _Tp>
concept __pair_like_no_subrange = __tuple_like_no_subrange<_Tp> && tuple_size<remove_cvref_t<_Tp>>::value == 2;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _T1, class _T2>
struct __check_pair_construction {
   ;
   ;
  template <class _U1, class _U2>
  static __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool __is_pair_constructible() {
    return is_constructible<_T1, _U1>::value && is_constructible<_T2, _U2>::value;
  }
  template <class _U1, class _U2>
  static __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool __is_implicit() {
    return is_convertible<_U1, _T1>::value && is_convertible<_U2, _T2>::value;
  }
};
template <class, class>
struct __non_trivially_copyable_base ;
template <class _T1, class _T2>
struct pair
{
  using first_type = _T1;
  using second_type = _T2;
  _T1 first;
  _T2 second;
  using __trivially_relocatable [[__gnu__::__nodebug__]] =
      __conditional_t<__libcpp_is_trivially_relocatable<_T1>::value && __libcpp_is_trivially_relocatable<_T2>::value,
                      pair,
                      void>;
  using __replaceable [[__gnu__::__nodebug__]] = __conditional_t<__is_replaceable_v<_T1> && __is_replaceable_v<_T2>, pair, void>;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) pair(pair const&) = default;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) pair(pair&&) = default;
    ;
  template <class _CheckArgsDep = __check_pair_construction<_T1, _T2>,
            __enable_if_t<_CheckArgsDep::template __is_pair_constructible<_T1 const&, _T2 const&>(), int> = 0>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108")))
  constexpr explicit(!_CheckArgsDep::template __is_implicit<_T1 const&, _T2 const&>())
      pair(_T1 const& __t1, _T2 const& __t2) noexcept(is_nothrow_copy_constructible<first_type>::value &&
                                                      is_nothrow_copy_constructible<second_type>::value)  ;
    ;
    ;
    ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr pair& operator=(
      __conditional_t<is_move_assignable<first_type>::value && is_move_assignable<second_type>::value, pair, __nat>&&
          __p) noexcept(is_nothrow_move_assignable<first_type>::value &&
                        is_nothrow_move_assignable<second_type>::value) ;
};
;
;
 ;
template <class _T1, class _T2, class _U1, class _U2, template <class> class _TQual, template <class> class _UQual>
  requires requires {
    typename pair<common_reference_t<_TQual<_T1>, _UQual<_U1>>, common_reference_t<_TQual<_T2>, _UQual<_U2>>>;
  }
struct basic_common_reference<pair<_T1, _T2>, pair<_U1, _U2>, _TQual, _UQual> ;
template <class _T1, class _T2, class _U1, class _U2>
  requires requires { typename pair<common_type_t<_T1, _U1>, common_type_t<_T2, _U2>>; }
struct common_type<pair<_T1, _T2>, pair<_U1, _U2>> ;
 ;
 ;
 ;
template <class _T1, class _T2>
struct tuple_size<pair<_T1, _T2> > : public integral_constant<size_t, 2> {};
template <class _T1, class _T2>
struct tuple_element<1, pair<_T1, _T2> > {
  using type [[__gnu__::__nodebug__]] = _T2;
};
template <size_t _Ip>
struct __get_pair;
template <>
struct __get_pair<0> ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) inline constexpr bool __libcpp_is_constant_evaluated() noexcept {
  return __builtin_is_constant_evaluated();
}
} }
extern "C" {
 ;
;
;
;
extern "C++"

;
;
                                           ;
                                           ;
;
;
;
;
;
;
;
 ;
struct __locale_struct
;
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
;
                                           ;
;
;
extern "C++"
extern "C++"

;
;
;
;
extern "C++"

extern "C++"
;
;
                                         ;
;
;
;
;
;
 ;
;
;
;
typedef long unsigned int size_t;
extern "C"
                                                  ;
;
;
;
;
;
;
;
;
 ;
 ;
;
;
                                          ;
;
;
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
template <class _Size, size_t = sizeof(_Size) * 8>
struct __murmur2_or_cityhash;
template <class _Size>
struct __murmur2_or_cityhash<_Size, 32> ;
template <class _Size>
struct __murmur2_or_cityhash<_Size, 64> {
private:
  static const _Size __k0 = 0xc3a5c85c97cb3127ULL;
  static const _Size __k1 = 0xb492b66fbe98f273ULL;
  static const _Size __k2 = 0x9ae16a3b2f90404fULL;
  static const _Size __k3 = 0xc949d7c7509e6557ULL;
};
[[__gnu__::__pure__]] __attribute__((__visibility__("default"))) size_t __hash_memory([[_Clang::__noescape__]] const void*, size_t) noexcept;
template <class _Tp, size_t = sizeof(_Tp) / sizeof(size_t)>
struct __scalar_hash;
template <class _Tp>
struct __scalar_hash<_Tp, 0> : public __unary_function<_Tp, size_t> {
};
template <class _Tp>
struct __scalar_hash<_Tp, 1> : public __unary_function<_Tp, size_t> {
};
template <class _Tp>
struct __scalar_hash<_Tp, 2> : public __unary_function<_Tp, size_t> {
  size_t first;
  size_t second;
};
template <class _Tp>
struct hash<_Tp*> : public __unary_function<_Tp*, size_t> {
};
template <class _Tp, class = void>
struct __hash_impl ;;
template <class _Tp>
struct __hash_impl<_Tp, __enable_if_t<is_enum<_Tp>::value && __is_unqualified_v<_Tp> > >
    : __unary_function<_Tp, size_t> {
};
template <class _Tp>
struct __hash_impl<
    _Tp,
    __enable_if_t<is_integral<_Tp>::value && __is_unqualified_v<_Tp> && (sizeof(_Tp) <= sizeof(size_t))> >
    : __unary_function<_Tp, size_t> {
};
template <class _Tp>
struct __hash_impl<_Tp,
                   __enable_if_t<is_integral<_Tp>::value && __is_unqualified_v<_Tp> && (sizeof(_Tp) > sizeof(size_t))> >
    : __scalar_hash<_Tp> {};
template <class _Tp>
struct __hash_impl<_Tp, __enable_if_t<is_floating_point<_Tp>::value && __is_unqualified_v<_Tp> > >
    : __scalar_hash<_Tp> {
};
template <>
struct __hash_impl<long double> : __scalar_hash<long double> {
};
template <class _Tp>
struct hash : public __hash_impl<_Tp> {};
template <>
struct hash<nullptr_t> : public __unary_function<nullptr_t, size_t> {
};
template <class _Key, class _Hash>
using __check_hash_requirements [[__gnu__::__nodebug__]] =
    integral_constant<bool,
                      is_copy_constructible<_Hash>::value && is_move_constructible<_Hash>::value &&
                          __is_invocable_r_v<size_t, _Hash, _Key const&> >;
template <class _Key, class _Hash = hash<_Key> >
using __has_enabled_hash [[__gnu__::__nodebug__]] =
    integral_constant<bool, __check_hash_requirements<_Key, _Hash>::value && is_default_constructible<_Hash>::value >;
template <class _Type, class>
using __enable_hash_helper_imp [[__gnu__::__nodebug__]] = _Type;
template <class _Type, class... _Keys>
using __enable_hash_helper [[__gnu__::__nodebug__]] =
    __enable_hash_helper_imp<_Type, __enable_if_t<__all<__has_enabled_hash<_Keys>::value...>::value> >;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Arg1, class _Arg2, class _Result>
struct __binary_function_keep_layout_base {
};
template <class _Arg1, class _Arg2, class _Result>
using __binary_function [[__gnu__::__nodebug__]] = __binary_function_keep_layout_base<_Arg1, _Arg2, _Result>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __equal_tag ;;
struct __plus_tag ;;
struct __less_tag ;;
struct __greater_tag ;;
struct __totally_ordered_less_tag ;;
template <class _CanonicalTag, class _Operation, class... _Args>
inline const bool __desugars_to_v = false;
template <class _CanonicalTag, class _Operation, class... _Args>
inline const bool __desugars_to_v<_CanonicalTag, _Operation const, _Args...> =
    __desugars_to_v<_CanonicalTag, _Operation, _Args...>;
template <class _CanonicalTag, class _Operation, class... _Args>
inline const bool __desugars_to_v<_CanonicalTag, _Operation&, _Args...> =
    __desugars_to_v<_CanonicalTag, _Operation, _Args...>;
template <class _CanonicalTag, class _Operation, class... _Args>
inline const bool __desugars_to_v<_CanonicalTag, _Operation&&, _Args...> =
    __desugars_to_v<_CanonicalTag, _Operation, _Args...>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp = void>
struct plus : __binary_function<_Tp, _Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template <class _Tp>
inline const bool __desugars_to_v<__plus_tag, plus<_Tp>, _Tp, _Tp> = true;
template <class _Tp, class _Up>
inline const bool __desugars_to_v<__plus_tag, plus<void>, _Tp, _Up> = true;
template <>
struct plus<void> ;
template <class _Tp = void>
struct minus : __binary_function<_Tp, _Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template <>
struct minus<void> {
   ;
  typedef void is_transparent;
};
template <class _Tp = void>
struct multiplies : __binary_function<_Tp, _Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template <>
struct multiplies<void> ;
template <class _Tp = void>
struct divides : __binary_function<_Tp, _Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template <>
struct divides<void> {
   ;
  typedef void is_transparent;
};
template <class _Tp = void>
struct modulus : __binary_function<_Tp, _Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template <>
struct modulus<void> ;
template <class _Tp = void>
struct negate : __unary_function<_Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template <>
struct negate<void> {
   ;
  typedef void is_transparent;
};
template <class _Tp = void>
struct bit_and : __binary_function<_Tp, _Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template <>
struct bit_and<void> ;
template <class _Tp = void>
struct bit_not : __unary_function<_Tp, _Tp> {
};
;
template <>
struct bit_not<void> ;
template <class _Tp = void>
struct bit_or : __binary_function<_Tp, _Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template <>
struct bit_or<void> ;
template <class _Tp = void>
struct bit_xor : __binary_function<_Tp, _Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template <>
struct bit_xor<void> ;
template <class _Tp = void>
struct equal_to : __binary_function<_Tp, _Tp, bool> {
  typedef bool __result_type;
};
;
template <>
struct equal_to<void> ;
template <class _Tp>
inline const bool __desugars_to_v<__equal_tag, equal_to<_Tp>, _Tp, _Tp> = true;
template <class _Tp, class _Up>
inline const bool __desugars_to_v<__equal_tag, equal_to<void>, _Tp, _Up> = true;
template <class _Tp = void>
struct not_equal_to : __binary_function<_Tp, _Tp, bool> {
  typedef bool __result_type;
};
;
template <>
struct not_equal_to<void> ;
template <class _Tp>
struct less : __binary_function<_Tp, _Tp, bool> {
  typedef bool __result_type;
};
;
template <class _Tp>
inline const bool __desugars_to_v<__less_tag, less<_Tp>, _Tp, _Tp> = true;
template <class _Tp>
inline const bool __desugars_to_v<__totally_ordered_less_tag, less<_Tp>, _Tp, _Tp> = is_integral<_Tp>::value;
template <>
struct less<void> ;
template <class _Tp, class _Up>
inline const bool __desugars_to_v<__less_tag, less<>, _Tp, _Up> = true;
template <class _Tp>
inline const bool __desugars_to_v<__totally_ordered_less_tag, less<>, _Tp, _Tp> = is_integral<_Tp>::value;
template <class _Tp = void>
struct less_equal : __binary_function<_Tp, _Tp, bool> {
  typedef bool __result_type;
};
;
template <>
struct less_equal<void> ;
template <class _Tp = void>
struct greater_equal : __binary_function<_Tp, _Tp, bool> {
  typedef bool __result_type;
};
;
template <>
struct greater_equal<void> {
   ;
  typedef void is_transparent;
};
template <class _Tp = void>
struct greater : __binary_function<_Tp, _Tp, bool> {
  typedef bool __result_type;
};
;
template <class _Tp>
inline const bool __desugars_to_v<__greater_tag, greater<_Tp>, _Tp, _Tp> = true;
template <>
struct greater<void> {
   ;
  typedef void is_transparent;
};
template <class _Tp, class _Up>
inline const bool __desugars_to_v<__greater_tag, greater<>, _Tp, _Up> = true;
template <class _Tp = void>
struct logical_and : __binary_function<_Tp, _Tp, bool> {
  typedef bool __result_type;
};
;
template <>
struct logical_and<void> {
   ;
  typedef void is_transparent;
};
template <class _Tp = void>
struct logical_not : __unary_function<_Tp, bool> {
  typedef bool __result_type;
};
;
template <>
struct logical_not<void> {
   ;
  typedef void is_transparent;
};
template <class _Tp = void>
struct logical_or : __binary_function<_Tp, _Tp, bool> {
  typedef bool __result_type;
};
;
template <>
struct logical_or<void> {
   ;
  typedef void is_transparent;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class... _Types>
class variant;
template <class _Tp>
struct variant_size;
template <class _Tp>
inline constexpr size_t variant_size_v = variant_size<_Tp>::value;
template <size_t _Ip, class _Tp>
struct variant_alternative;
template <size_t _Ip, class _Tp>
using variant_alternative_t = typename variant_alternative<_Ip, _Tp>::type;
;
;
;
;
;
} }
[[__nodiscard__]]
[[__nodiscard__]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void*
operator new[](std::size_t, void* __p) noexcept ;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] add_const {
  using type [[__gnu__::__nodebug__]] = const _Tp;
};
template <class _Tp>
using add_const_t = typename add_const<_Tp>::type;
template <class _Tp>
struct [[_Clang::__no_specializations__]] add_cv {
  using type [[__gnu__::__nodebug__]] = const volatile _Tp;
};
template <class _Tp>
using add_cv_t = typename add_cv<_Tp>::type;
template <class _Tp>
struct [[_Clang::__no_specializations__]] add_volatile {
  using type [[__gnu__::__nodebug__]] = volatile _Tp;
};
template <class _Tp>
using add_volatile_t = typename add_volatile<_Tp>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, bool>
struct __dependent_type : public _Tp {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Arg>
struct [[_Clang::__no_specializations__]] is_trivially_assignable
    : integral_constant<bool, __is_trivially_assignable(_Tp, _Arg)> {};
template <class _Tp, class _Arg>
[[_Clang::__no_specializations__]] inline constexpr bool is_trivially_assignable_v = __is_trivially_assignable(_Tp, _Arg);
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_trivially_copy_assignable
    : integral_constant<
          bool,
          __is_trivially_assignable(__add_lvalue_reference_t<_Tp>, __add_lvalue_reference_t<const _Tp>)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_trivially_copy_assignable_v =
    is_trivially_copy_assignable<_Tp>::value;
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_trivially_move_assignable
    : integral_constant<bool, __is_trivially_assignable(__add_lvalue_reference_t<_Tp>, __add_rvalue_reference_t<_Tp>)> {
};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_trivially_move_assignable_v =
    is_trivially_move_assignable<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class... _Args>
struct [[_Clang::__no_specializations__]] is_trivially_constructible
    : integral_constant<bool, __is_trivially_constructible(_Tp, _Args...)> {};
template <class _Tp, class... _Args>
[[_Clang::__no_specializations__]] inline constexpr bool is_trivially_constructible_v =
    __is_trivially_constructible(_Tp, _Args...);
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_trivially_copy_constructible
    : integral_constant<bool, __is_trivially_constructible(_Tp, __add_lvalue_reference_t<const _Tp>)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_trivially_copy_constructible_v =
    is_trivially_copy_constructible<_Tp>::value;
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_trivially_move_constructible
    : integral_constant<bool, __is_trivially_constructible(_Tp, __add_rvalue_reference_t<_Tp>)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_trivially_move_constructible_v =
    is_trivially_move_constructible<_Tp>::value;
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_trivially_default_constructible
    : integral_constant<bool, __is_trivially_constructible(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_trivially_default_constructible_v =
    __is_trivially_constructible(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_trivially_destructible
    : integral_constant<bool, __is_trivially_destructible(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_trivially_destructible_v = is_trivially_destructible<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Ap, class _Bp>
using _CopyConst [[__gnu__::__nodebug__]] = _If<is_const_v<_Ap>, const _Bp, _Bp>;
template <class _Ap, class _Bp>
using _OverrideRef [[__gnu__::__nodebug__]] = _If<is_rvalue_reference_v<_Ap>, remove_reference_t<_Bp>&&, _Bp&>;
template <class _Ap, class _Bp>
using _ForwardLike [[__gnu__::__nodebug__]] = _OverrideRef<_Ap&&, _CopyConst<remove_reference_t<_Ap>, remove_reference_t<_Bp>>>;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __attribute__((__visibility__("default"))) in_place_t {
  explicit in_place_t() = default;
};
inline constexpr in_place_t in_place;
template <class _Tp>
struct in_place_type_t {
};
template <class _Tp>
inline constexpr in_place_type_t<_Tp> in_place_type;
template <size_t _Idx>
struct in_place_index_t {
};
template <size_t _Idx>
inline constexpr in_place_index_t<_Idx> in_place_index;
template <class _Tp>
struct __is_inplace_type_imp : false_type {};
template <class _Tp>
struct __is_inplace_type_imp<in_place_type_t<_Tp>> : true_type {};
template <class _Tp>
using __is_inplace_type [[__gnu__::__nodebug__]] = __is_inplace_type_imp<__remove_cvref_t<_Tp>>;
template <class _Tp>
struct __is_inplace_index_imp : false_type {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct monostate ;;
template <>
struct hash<monostate> {
};
} }
 namespace __attribute__((__type_visibility__("default"))) std {
class __attribute__((__visibility__("default"))) bad_variant_access : public exception {
public:
};
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, size_t _Size>
struct __farray ;;
[[noreturn]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __throw_bad_variant_access() ;
template <class _Tp>
struct variant_size<const _Tp> : variant_size<_Tp> {};
template <class _Tp>
struct variant_size<volatile _Tp> : variant_size<_Tp> {};
template <class _Tp>
struct variant_size<const volatile _Tp> : variant_size<_Tp> {};
template <class... _Types>
struct variant_size<variant<_Types...>> : integral_constant<size_t, sizeof...(_Types)> {};
template <size_t _Ip, class _Tp>
struct variant_alternative<_Ip, const _Tp> : add_const<variant_alternative_t<_Ip, _Tp>> {};
template <size_t _Ip, class _Tp>
struct variant_alternative<_Ip, volatile _Tp> : add_volatile<variant_alternative_t<_Ip, _Tp>> {};
template <size_t _Ip, class _Tp>
struct variant_alternative<_Ip, const volatile _Tp> : add_cv<variant_alternative_t<_Ip, _Tp>> {};
template <size_t _Ip, class... _Types>
struct variant_alternative<_Ip, variant<_Types...>> ;
template <size_t _NumAlternatives>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto __choose_index_type() ;
template <size_t _NumAlts>
using __variant_index_t [[__gnu__::__nodebug__]] = decltype(std::__choose_index_type<_NumAlts>);
template <class _IndexType>
constexpr _IndexType __variant_npos = static_cast<_IndexType>(-1);
template <class... _Types>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr variant<_Types...>& __as_variant(variant<_Types...>& __vs) noexcept ;
template <class... _Types>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const variant<_Types...>& __as_variant(const variant<_Types...>& __vs) noexcept ;
template <class... _Types>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr variant<_Types...>&& __as_variant(variant<_Types...>&& __vs) noexcept ;
template <class... _Types>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const variant<_Types...>&& __as_variant(const variant<_Types...>&& __vs) noexcept ;
namespace __find_detail {
template <class _Tp, class... _Types>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_t __find_index() ;
template <size_t _Index>
struct __find_unambiguous_index_sfinae_impl : integral_constant<size_t, _Index> {};
template <>
struct __find_unambiguous_index_sfinae_impl<__not_found> ;;
template <>
struct __find_unambiguous_index_sfinae_impl<__ambiguous> ;
template <class _Tp, class... _Types>
struct __find_unambiguous_index_sfinae
    : __find_unambiguous_index_sfinae_impl<__find_detail::__find_index<_Tp, _Types...>> {};
}
namespace __variant_detail {
struct __valueless_t ;
enum class _Trait { _TriviallyAvailable, _Available, _Unavailable };
template <typename _Tp, template <typename> class _IsTriviallyAvailable, template <typename> class _IsAvailable>
constexpr _Trait __trait =
    _IsTriviallyAvailable<_Tp>::value ? _Trait::_TriviallyAvailable
    : _IsAvailable<_Tp>::value
        ? _Trait::_Available
        : _Trait::_Unavailable;
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Trait __common_trait(initializer_list<_Trait> __traits) ;
template <typename... _Types>
struct __traits ;
namespace __access {
struct __union ;;
struct __base ;
struct __variant ;
}
namespace __visitation {
struct __base ;;
struct __variant ;
}
template <size_t _Index, class _Tp>
struct __alt ;
template <_Trait _DestructibleTrait, size_t _Index, class... _Types>
union __union;
template <_Trait _DestructibleTrait, size_t _Index>
union __union<_DestructibleTrait, _Index> ;
template <size_t _Index, class _Tp, class... _Types> union __union<_Trait::_TriviallyAvailable, _Index, _Tp, _Types...> ;;
template <size_t _Index, class _Tp, class... _Types> union __union<_Trait::_Available, _Index, _Tp, _Types...> { public:    ;   ;      static_assert(true, ""); private: char __dummy; __alt<_Index, _Tp> __head; __union<_Trait::_Available, _Index + 1, _Types...> __tail; friend struct __access::__union; };
template <size_t _Index, class _Tp, class... _Types> union __union<_Trait::_Unavailable, _Index, _Tp, _Types...> { public:    ;   ;      private: char __dummy; __alt<_Index, _Tp> __head; __union<_Trait::_Unavailable, _Index + 1, _Types...> __tail; friend struct __access::__union; };
template <_Trait _DestructibleTrait, class... _Types>
class __base ;
template <class _Traits, _Trait = _Traits::__destructible_trait>
class __dtor;
template <class... _Types> class __dtor<__traits<_Types...>, _Trait::_TriviallyAvailable> : public __base<_Trait::_TriviallyAvailable, _Types...> { using __base_type [[__gnu__::__nodebug__]] = __base<_Trait::_TriviallyAvailable, _Types...>; using __index_t [[__gnu__::__nodebug__]] = typename __base_type::__index_t; public: using __base_type::__base_type; using __base_type::operator=;      protected:  static_assert(true, ""); };
template <class... _Types> class __dtor<__traits<_Types...>, _Trait::_Available> : public __base<_Trait::_Available, _Types...> { using __base_type [[__gnu__::__nodebug__]] = __base<_Trait::_Available, _Types...>; using __index_t [[__gnu__::__nodebug__]] = typename __base_type::__index_t; public: using __base_type::__base_type; using __base_type::operator=;      static_assert(true, ""); protected:  static_assert(true, ""); };
template <class... _Types> class __dtor<__traits<_Types...>, _Trait::_Unavailable> : public __base<_Trait::_Unavailable, _Types...> { using __base_type [[__gnu__::__nodebug__]] = __base<_Trait::_Unavailable, _Types...>; using __index_t [[__gnu__::__nodebug__]] = typename __base_type::__index_t; public: using __base_type::__base_type; using __base_type::operator=;      protected:  };
template <class _Traits>
class __ctor : public __dtor<_Traits> {
  using __base_type [[__gnu__::__nodebug__]] = __dtor<_Traits>;
   ;
};
template <class _Traits, _Trait = _Traits::__move_constructible_trait>
class __move_constructor;
template <class... _Types> class __move_constructor<__traits<_Types...>, _Trait::_TriviallyAvailable> : public __ctor<__traits<_Types...>> { using __base_type [[__gnu__::__nodebug__]] = __ctor<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class... _Types> class __move_constructor<__traits<_Types...>, _Trait::_Available> : public __ctor<__traits<_Types...>> { using __base_type [[__gnu__::__nodebug__]] = __ctor<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      static_assert(true, ""); };
template <class... _Types> class __move_constructor<__traits<_Types...>, _Trait::_Unavailable> : public __ctor<__traits<_Types...>> { using __base_type [[__gnu__::__nodebug__]] = __ctor<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class _Traits, _Trait = _Traits::__copy_constructible_trait>
class __copy_constructor;
template <class... _Types> class __copy_constructor<__traits<_Types...>, _Trait::_TriviallyAvailable> : public __move_constructor<__traits<_Types...>> { using __base_type [[__gnu__::__nodebug__]] = __move_constructor<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class... _Types> class __copy_constructor<__traits<_Types...>, _Trait::_Available> : public __move_constructor<__traits<_Types...>> { using __base_type [[__gnu__::__nodebug__]] = __move_constructor<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      static_assert(true, ""); };
template <class... _Types> class __copy_constructor<__traits<_Types...>, _Trait::_Unavailable> : public __move_constructor<__traits<_Types...>> { using __base_type [[__gnu__::__nodebug__]] = __move_constructor<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class _Traits>
class __assignment : public __copy_constructor<_Traits> {
  using __base_type [[__gnu__::__nodebug__]] = __copy_constructor<_Traits>;
public:
  using __base_type::__base_type;
  using __base_type::operator=;
   ;
protected:
   ;
   ;
};
template <class _Traits, _Trait = _Traits::__move_assignable_trait>
class __move_assignment;
template <class... _Types> class __move_assignment<__traits<_Types...>, _Trait::_TriviallyAvailable> : public __assignment<__traits<_Types...>> { using __base_type [[__gnu__::__nodebug__]] = __assignment<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class... _Types> class __move_assignment<__traits<_Types...>, _Trait::_Available> : public __assignment<__traits<_Types...>> { using __base_type [[__gnu__::__nodebug__]] = __assignment<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      static_assert(true, ""); };
template <class... _Types> class __move_assignment<__traits<_Types...>, _Trait::_Unavailable> : public __assignment<__traits<_Types...>> { using __base_type [[__gnu__::__nodebug__]] = __assignment<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class _Traits, _Trait = _Traits::__copy_assignable_trait>
class __copy_assignment;
template <class... _Types> class __copy_assignment<__traits<_Types...>, _Trait::_TriviallyAvailable> : public __move_assignment<__traits<_Types...>> { using __base_type [[__gnu__::__nodebug__]] = __move_assignment<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class... _Types> class __copy_assignment<__traits<_Types...>, _Trait::_Available> : public __move_assignment<__traits<_Types...>> { using __base_type [[__gnu__::__nodebug__]] = __move_assignment<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      static_assert(true, ""); };
template <class... _Types> class __copy_assignment<__traits<_Types...>, _Trait::_Unavailable> : public __move_assignment<__traits<_Types...>> { using __base_type [[__gnu__::__nodebug__]] = __move_assignment<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class... _Types>
class __impl : public __copy_assignment<__traits<_Types...>> {
  using __base_type [[__gnu__::__nodebug__]] = __copy_assignment<__traits<_Types...>>;
public:
  using __base_type::__base_type;
   ;
private:
};
struct __no_narrowing_check ;;
struct __narrowing_check ;
template <class _Dest, class _Source>
using __check_for_narrowing [[__gnu__::__nodebug__]] =
    typename _If< is_arithmetic<_Dest>::value, __narrowing_check, __no_narrowing_check >::template _Apply<_Dest,
                                                                                                          _Source>;
template <class _Tp, size_t _Idx>
struct __overload ;
template <class... _Bases>
struct __all_overloads : _Bases... {
  using _Bases::operator()...;
};
template <class _IdxSeq>
struct __make_overloads_imp;
template <size_t... _Idx>
struct __make_overloads_imp<__tuple_indices<_Idx...> > ;
template <class... _Types>
using _MakeOverloads [[__gnu__::__nodebug__]] =
    typename __make_overloads_imp< __make_indices_imp<sizeof...(_Types), 0> >::template _Apply<_Types...>;
template <class _Tp, class... _Types>
using __best_match_t [[__gnu__::__nodebug__]] = typename invoke_result_t<_MakeOverloads<_Types...>, _Tp, _Tp>::type;
}
template <class _Visitor, class... _Vs, typename = void_t<decltype(std::__as_variant(std::declval<_Vs>))...>>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr decltype(auto) visit(_Visitor&& __visitor, _Vs&&... __vs);
;
template <class... _Types>
class [[_Clang::__no_specializations__]] variant
    : private __sfinae_ctor_base< __all<is_copy_constructible_v<_Types>...>::value,
                                  __all<is_move_constructible_v<_Types>...>::value>,
      private __sfinae_assign_base<
          __all<(is_copy_constructible_v<_Types> && is_copy_assignable_v<_Types>)...>::value,
          __all<(is_move_constructible_v<_Types> && is_move_assignable_v<_Types>)...>::value> {
  static_assert(0 < sizeof...(_Types), "variant must consist of at least one alternative.");
public:
  using __trivially_relocatable [[__gnu__::__nodebug__]] =
      conditional_t<_And<__libcpp_is_trivially_relocatable<_Types>...>::value, variant, void>;
  using __replaceable [[__gnu__::__nodebug__]] = conditional_t<_And<__is_replaceable<_Types>...>::value, variant, void>;
   ;
   ;
   ;
   ;
  struct __variant_visit_barrier_tag ;
   ;
   ;
private:
  __variant_detail::__impl<_Types...> __impl_;
  friend struct __variant_detail::__access::__variant;
  friend struct __variant_detail::__visitation::__variant;
};
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
template <class _Operator>
struct __convert_to_bool ;
 ;
 ;
template <class... _Types>
  requires(requires(const _Types& __t) {
    { __t != __t } -> __core_convertible_to<bool>;
  } && ...)
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool operator!=(const variant<_Types...>& __lhs, const variant<_Types...>& __rhs) ;
 ;
 ;
 ;
 ;
 ;
template < class _Visitor, class... _Vs, typename>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr decltype(auto) visit(_Visitor&& __visitor, _Vs&&... __vs) ;
 ;
 ;
template <class... _Types>
struct hash< __enable_hash_helper<variant<_Types...>, remove_const_t<_Types>...>> ;
template <size_t _Ip, class _Vp>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto&& __unchecked_get(_Vp&& __v) noexcept ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iter>
concept __can_use_postfix_proxy =
    constructible_from<iter_value_t<_Iter>, iter_reference_t<_Iter>> && move_constructible<iter_value_t<_Iter>>;
template <input_or_output_iterator _Iter, sentinel_for<_Iter> _Sent>
  requires(!same_as<_Iter, _Sent> && copyable<_Iter>)
class common_iterator ;;
template <class _Iter, class _Sent>
struct incrementable_traits<common_iterator<_Iter, _Sent>> {
  using difference_type = iter_difference_t<_Iter>;
};
template <class _Iter>
concept __denotes_forward_iter = requires {
  typename iterator_traits<_Iter>::iterator_category;
} && derived_from<typename iterator_traits<_Iter>::iterator_category, forward_iterator_tag>;
template <class _Iter, class _Sent>
concept __common_iter_has_ptr_op = requires(const common_iterator<_Iter, _Sent>& __a) { __a.operator->; };
template <class, class>
struct __arrow_type_or_void ;
template <class _Iter, class _Sent>
  requires __common_iter_has_ptr_op<_Iter, _Sent>
struct __arrow_type_or_void<_Iter, _Sent> ;;
template <input_iterator _Iter, class _Sent>
struct iterator_traits<common_iterator<_Iter, _Sent>> ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <view _View>
  requires(!common_range<_View> && copyable<iterator_t<_View>>)
class common_view : public view_interface<common_view<_View>> {
  _View __base_ = _View();
public:
};
;
template <class _View>
inline constexpr bool enable_borrowed_range<common_view<_View>> = enable_borrowed_range<_View>;
namespace views {
namespace __common {
struct __fn : __range_adaptor_closure<__fn> {
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto common = __common::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
concept common_with =
    same_as<common_type_t<_Tp, _Up>, common_type_t<_Up, _Tp>> &&
    requires {
        static_cast<common_type_t<_Tp, _Up>>(std::declval<_Tp>);
        static_cast<common_type_t<_Tp, _Up>>(std::declval<_Up>);
    } &&
    common_reference_with<
        add_lvalue_reference_t<const _Tp>,
        add_lvalue_reference_t<const _Up>> &&
    common_reference_with<
        add_lvalue_reference_t<common_type_t<_Tp, _Up>>,
        common_reference_t<
            add_lvalue_reference_t<const _Tp>,
            add_lvalue_reference_t<const _Up>>>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct default_sentinel_t {};
inline constexpr default_sentinel_t default_sentinel{};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class>
struct __counted_iterator_concept ;
template <class _Iter>
  requires requires { typename _Iter::iterator_concept; }
struct __counted_iterator_concept<_Iter> ;;
template <class>
struct __counted_iterator_category {};
template <class _Iter>
  requires requires { typename _Iter::iterator_category; }
struct __counted_iterator_category<_Iter> {
  using iterator_category = typename _Iter::iterator_category;
};
template <class>
struct __counted_iterator_value_type {};
template <indirectly_readable _Iter>
struct __counted_iterator_value_type<_Iter> {
  using value_type = iter_value_t<_Iter>;
};
template <input_or_output_iterator _Iter>
class counted_iterator
    : public __counted_iterator_concept<_Iter>,
      public __counted_iterator_category<_Iter>,
      public __counted_iterator_value_type<_Iter> {
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr counted_iterator& operator-=(iter_difference_t<_Iter> __n)
    requires random_access_iterator<_Iter>
  ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr decltype(auto) operator[](iter_difference_t<_Iter> __n) const
    requires random_access_iterator<_Iter>
  ;
  template <common_with<_Iter> _I2>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool
  operator==(const counted_iterator& __lhs, const counted_iterator<_I2>& __rhs) {
    return __lhs.__count_ == __rhs.__count_;
  }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator==(const counted_iterator& __lhs, default_sentinel_t) ;
  template <common_with<_Iter> _I2>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr strong_ordering
  operator<=>(const counted_iterator& __lhs, const counted_iterator<_I2>& __rhs) {
    return __rhs.__count_ <=> __lhs.__count_;
  }
private:
  [[__no_unique_address__]] _Iter __current_ = _Iter();
  iter_difference_t<_Iter> __count_ = 0;
  template <input_or_output_iterator _OtherIter>
  friend class counted_iterator;
};
;
template <input_iterator _Iter>
  requires same_as<_ITER_TRAITS<_Iter>, iterator_traits<_Iter>>
struct iterator_traits<counted_iterator<_Iter>> : iterator_traits<_Iter> {
  using pointer = conditional_t<contiguous_iterator<_Iter>, add_pointer_t<iter_reference_t<_Iter>>, void>;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
enum class subrange_kind : bool { unsized, sized };
template <input_or_output_iterator _Iter, sentinel_for<_Iter> _Sent, subrange_kind _Kind>
  requires(_Kind == subrange_kind::sized || !sized_sentinel_for<_Sent, _Iter>)
class subrange;
;
;
struct dangling ;;
template <range _Rp>
using borrowed_iterator_t = _If<borrowed_range<_Rp>, iterator_t<_Rp>, dangling>;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _From, class _To>
concept __uses_nonqualification_pointer_conversion =
    is_pointer_v<_From> && is_pointer_v<_To> &&
    !convertible_to<remove_pointer_t<_From> [], remove_pointer_t<_To> []>;
template <class _From, class _To>
concept __convertible_to_non_slicing =
    convertible_to<_From, _To> && !__uses_nonqualification_pointer_conversion<decay_t<_From>, decay_t<_To>>;
template <class _Pair, class _Iter, class _Sent>
concept __pair_like_convertible_from =
    !range<_Pair> && __pair_like_no_subrange<_Pair> && constructible_from<_Pair, _Iter, _Sent> &&
    __convertible_to_non_slicing<_Iter, tuple_element_t<0, _Pair>> && convertible_to<_Sent, tuple_element_t<1, _Pair>>;
template <input_or_output_iterator _Iter,
          sentinel_for<_Iter> _Sent = _Iter,
          subrange_kind _Kind = sized_sentinel_for<_Sent, _Iter> ? subrange_kind::sized : subrange_kind::unsized>
  requires(_Kind == subrange_kind::sized || !sized_sentinel_for<_Sent, _Iter>)
class subrange : public view_interface<subrange<_Iter, _Sent, _Kind>> {
public:
  static constexpr bool _StoreSize = (_Kind == subrange_kind::sized && !sized_sentinel_for<_Sent, _Iter>);
private:
  static constexpr bool _MustProvideSizeAtConstruction = !_StoreSize;
  struct _Empty ;
  using _Size [[__gnu__::__nodebug__]] = conditional_t<_StoreSize, make_unsigned_t<iter_difference_t<_Iter>>, _Empty>;
  [[__no_unique_address__]] _Iter __begin_ = _Iter();
  [[__no_unique_address__]] _Sent __end_ = _Sent();
  [[__no_unique_address__]] _Size __size_ = 0;
public:
    ;
    ;
    ;
    ;
    ;
   ;
  [[nodiscard]]
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr subrange& advance(iter_difference_t<_Iter> __n) ;
};
;
};
template <class _Ip, class _Sp, ranges::subrange_kind _Kp>
struct tuple_element<0, const ranges::subrange<_Ip, _Sp, _Kp>> ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std {
enum class byte : unsigned char;
}
 namespace __attribute__((__type_visibility__("default"))) std {
enum class byte : unsigned char ;
 ;
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
inline constexpr size_t dynamic_extent = numeric_limits<size_t>::max();
template <typename _Tp, size_t _Extent = dynamic_extent>
class span;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iterator>
struct __bounded_iter ;
 ;
template <class _Iterator>
struct pointer_traits<__bounded_iter<_Iterator> > {
  using pointer = __bounded_iter<_Iterator>;
  using element_type = typename pointer_traits<_Iterator>::element_type;
  using difference_type = typename pointer_traits<_Iterator>::difference_type;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iter, bool = __libcpp_is_contiguous_iterator<_Iter>::value>
struct __unwrap_iter_impl ;
template <class _Iter>
struct __unwrap_iter_impl<_Iter, true> {
  using _ToAddressT [[__gnu__::__nodebug__]] = decltype(std::__to_address(std::declval<_Iter>));
};
 ;
 ;
template <class _Category, class _Tp, class _Distance = ptrdiff_t, class _Pointer = _Tp*, class _Reference = _Tp&>
struct __attribute__((__deprecated__)) iterator {
  typedef _Tp value_type;
  typedef _Distance difference_type;
  typedef _Pointer pointer;
  typedef _Reference reference;
  typedef _Category iterator_category;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
namespace ranges {
struct __next {
   ;
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto next = __next{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iterator>
struct __segmented_iterator_traits;
template <class _Tp, size_t = 0>
struct __has_specialization : false_type {};
template <class _Tp>
struct __has_specialization<_Tp, sizeof(_Tp) * 0> : true_type {};
template <class _Iterator>
using __is_segmented_iterator [[__gnu__::__nodebug__]] = __has_specialization<__segmented_iterator_traits<_Iterator> >;
template <class _SegmentedIterator>
struct __has_random_access_local_iterator
    : __has_random_access_iterator_category<
          typename __segmented_iterator_traits< _SegmentedIterator >::__local_iterator > {};
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _Iter>
class reverse_iterator
    : public iterator<typename iterator_traits<_Iter>::iterator_category,
                      typename iterator_traits<_Iter>::value_type,
                      typename iterator_traits<_Iter>::difference_type,
                      typename iterator_traits<_Iter>::pointer,
                      typename iterator_traits<_Iter>::reference>
{
#pragma GCC diagnostic pop
private:
  _Iter __t_;
  static_assert(__has_bidirectional_iterator_category<_Iter>::value || bidirectional_iterator<_Iter>,
                "reverse_iterator<It> requires It to be a bidirectional iterator.");
protected:
  _Iter current;
public:
  using iterator_type = _Iter;
  using iterator_category =
      _If<__has_random_access_iterator_category<_Iter>::value,
          random_access_iterator_tag,
          typename iterator_traits<_Iter>::iterator_category>;
  using pointer = typename iterator_traits<_Iter>::pointer;
  using iterator_concept = _If<random_access_iterator<_Iter>, random_access_iterator_tag, bidirectional_iterator_tag>;
  using value_type = iter_value_t<_Iter>;
  using difference_type = iter_difference_t<_Iter>;
  using reference = iter_reference_t<_Iter>;
    ;
   ;
};
;
;
;
;
;
;
 ;
 ;
template <class _Iter>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr reverse_iterator<_Iter>
operator+(typename reverse_iterator<_Iter>::difference_type __n, const reverse_iterator<_Iter>& __x) ;
 ;
template <class _Iter, bool __b>
struct __unwrap_iter_impl<reverse_iterator<reverse_iterator<_Iter> >, __b> ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iter>
class __wrap_iter {
public:
  typedef _Iter iterator_type;
  typedef typename iterator_traits<iterator_type>::value_type value_type;
  typedef typename iterator_traits<iterator_type>::difference_type difference_type;
  typedef typename iterator_traits<iterator_type>::pointer pointer;
  typedef typename iterator_traits<iterator_type>::reference reference;
  typedef typename iterator_traits<iterator_type>::iterator_category iterator_category;
  typedef contiguous_iterator_tag iterator_concept;
private:
  template <class _Up>
  friend class __wrap_iter;
  template <class _CharT, class _Traits, class _Alloc>
  friend class basic_string;
  template <class _CharT, class _Traits>
  friend class basic_string_view;
  template <class _Tp, class _Alloc>
  friend class vector;
  template <class _Tp, size_t>
  friend class span;
  template <class _Tp, size_t _Size>
  friend struct array;
};
 ;
 ;
 ;
 ;
 ;
;
 ;
template <class _It>
struct pointer_traits<__wrap_iter<_It> > ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
class allocator;
template <class _Tp>
class shared_ptr;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace pmr {
template <class _ValueType>
class polymorphic_allocator;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT>
struct char_traits;
template <>
struct char_traits<char>;
template <>
struct char_traits<char8_t>;
template <>
struct char_traits<char16_t>;
template <>
struct char_traits<char32_t>;
template <>
struct char_traits<wchar_t>;
template <class _CharT, class _Traits = char_traits<_CharT>, class _Allocator = allocator<_CharT> >
class basic_string;
using string = basic_string<char>;
using wstring = basic_string<wchar_t>;
using u8string = basic_string<char8_t>;
using u16string = basic_string<char16_t>;
using u32string = basic_string<char32_t>;
namespace pmr {
template <class _CharT, class _Traits = char_traits<_CharT>>
using basic_string = std::basic_string<_CharT, _Traits, polymorphic_allocator<_CharT>>;
using string = basic_string<char>;
using wstring = basic_string<wchar_t>;
using u8string = basic_string<char8_t>;
using u16string = basic_string<char16_t>;
using u32string = basic_string<char32_t>;
}
template <class _CharT, class _Traits, class _Allocator>
class [[_Clang::__preferred_name__(string)]]
      [[_Clang::__preferred_name__(wstring)]]
      [[_Clang::__preferred_name__(u8string)]]
      [[_Clang::__preferred_name__(u16string)]]
      [[_Clang::__preferred_name__(u32string)]]
      [[_Clang::__preferred_name__(pmr::string)]]
      [[_Clang::__preferred_name__(pmr::wstring)]]
      [[_Clang::__preferred_name__(pmr::u8string)]]
      [[_Clang::__preferred_name__(pmr::u16string)]]
      [[_Clang::__preferred_name__(pmr::u32string)]]
      basic_string;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__("hidden"))) __libcpp_refstring {
  const char* __imp_;
public:
};
} }
namespace std
{
class __attribute__((__visibility__("default"))) logic_error : public exception {
};
class __attribute__((__visibility__("default"))) runtime_error : public exception {
private:
  std::__libcpp_refstring __imp_;
public:
};
class __attribute__((__visibility__("default"))) domain_error : public logic_error {
public:
};
class __attribute__((__visibility__("default"))) invalid_argument : public logic_error {
public:
};
class __attribute__((__visibility__("default"))) length_error : public logic_error {
public:
};
class __attribute__((__visibility__("default"))) out_of_range : public logic_error {
public:
};
class __attribute__((__visibility__("default"))) range_error : public runtime_error {
public:
};
class __attribute__((__visibility__("default"))) overflow_error : public runtime_error {
public:
};
class __attribute__((__visibility__("default"))) underflow_error : public runtime_error {
public:
};
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
[[__noreturn__]]
[[__noreturn__]]
[[__noreturn__]]
[[__noreturn__]]
[[__noreturn__]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __throw_underflow_error(const char* __msg) ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
;
;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges::views {
namespace __counted {
struct __fn {
  ;
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto counted = __counted::__fn{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __equal_to ;
template <class _Tp, class _Up>
inline const bool __desugars_to_v<__equal_tag, __equal_to, _Tp, _Up> = true;
template <class _T1 = void, class _T2 = _T1>
struct __less ;
template <>
struct __less<void, void> ;
template <class _Tp>
inline const bool __desugars_to_v<__less_tag, __less<>, _Tp, _Tp> = true;
template <class _Tp>
inline const bool __desugars_to_v<__totally_ordered_less_tag, __less<>, _Tp, _Tp> = is_integral<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Compare>
struct __debug_less ;
template <class _Comp>
using __comp_ref_type [[__gnu__::__nodebug__]] = _Comp&;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __is_identity : false_type {};
struct __identity ;
template <>
struct __is_identity<__identity> : true_type {};
template <>
struct __is_identity<reference_wrapper<__identity> > : true_type {};
template <>
struct __is_identity<reference_wrapper<const __identity> > : true_type {};
struct identity ;;
template <>
struct __is_identity<identity> : true_type {};
template <>
struct __is_identity<reference_wrapper<identity> > : true_type {};
template <>
struct __is_identity<reference_wrapper<const identity> > : true_type {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Func, class... _Args, class = decltype(std::declval<_Func>)>
true_type __is_callable_helper(int);
;
template <class _Func, class... _Args>
struct __is_callable : decltype(std::__is_callable_helper<_Func, _Args...>) {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
template <class _Tp>
[[__nodiscard__]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Tp min ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <size_t _NBound, class = make_index_sequence<_NBound>>
struct __bind_back_op;
template <size_t _NBound, size_t... _Ip>
struct __bind_back_op<_NBound, index_sequence<_Ip...>> ;
template <class _Fn, class _BoundArgs>
struct __bind_back_t : __perfect_forward<__bind_back_op<tuple_size_v<_BoundArgs>>, _Fn, _BoundArgs> {
  using __perfect_forward<__bind_back_op<tuple_size_v<_BoundArgs>>, _Fn, _BoundArgs>::__perfect_forward;
};
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_string_view;
typedef basic_string_view<char> string_view;
typedef basic_string_view<char8_t> u8string_view;
typedef basic_string_view<char16_t> u16string_view;
typedef basic_string_view<char32_t> u32string_view;
typedef basic_string_view<wchar_t> wstring_view;
template <class _CharT, class _Traits>
class [[_Clang::__preferred_name__(string_view)]]
      [[_Clang::__preferred_name__(wstring_view)]]
      [[_Clang::__preferred_name__(u8string_view)]]
      [[_Clang::__preferred_name__(u16string_view)]]
      [[_Clang::__preferred_name__(u32string_view)]]
      basic_string_view;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
namespace ranges {
struct __distance {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto distance = __distance{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Tp>
  requires is_object_v<_Tp>
class empty_view : public view_interface<empty_view<_Tp>> {
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static constexpr size_t size() noexcept ;
};
template <class _Tp>
inline constexpr bool enable_borrowed_range<empty_view<_Tp>> = true;
namespace views {
template <class _Tp>
inline constexpr empty_view<_Tp> empty;
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct unreachable_sentinel_t {
   ;
};
inline constexpr unreachable_sentinel_t unreachable_sentinel{};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline const bool __is_null_pointer_v = __is_same(__remove_cv(_Tp), nullptr_t);
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_null_pointer : integral_constant<bool, __is_null_pointer_v<_Tp>> {};
template <class _Tp>
struct [[_Clang::__no_specializations__]] is_scalar : _BoolConstant<__is_scalar(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__]] inline constexpr bool is_scalar_v = __is_scalar(_Tp);
} }
namespace std
{
class __attribute__((__visibility__("default"))) bad_optional_access : public exception {
public:
  const char* what() const noexcept override;
};
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
[[noreturn]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __throw_bad_optional_access() ;
struct nullopt_t {
  struct __secret_tag {
    explicit __secret_tag() = default;
  };
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr explicit nullopt_t(__secret_tag, __secret_tag) noexcept {}
};
inline constexpr nullopt_t nullopt{nullopt_t::__secret_tag{}, nullopt_t::__secret_tag{}};
struct __optional_construct_from_invoke_tag ;
template <class _Tp, bool = is_trivially_destructible<_Tp>::value>
struct __optional_destruct_base;
template <class _Tp>
struct __optional_destruct_base<_Tp, false> {
  typedef _Tp value_type;
  static_assert(is_object_v<value_type>, "instantiation of optional with a non-object type is undefined behavior");
  union {
    char __null_state_;
    remove_cv_t<value_type> __val_;
  };
  bool __engaged_;
  template <class... _Args>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr explicit __optional_destruct_base(in_place_t, _Args&&... __args)  ;
  template <class _Fp, class... _Args>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr explicit __optional_destruct_base(
      __optional_construct_from_invoke_tag, _Fp&& __f, _Args&&... __args)  ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void reset() noexcept ;
};
template <class _Tp>
struct __optional_destruct_base<_Tp, true> {
  typedef _Tp value_type;
  static_assert(is_object_v<value_type>, "instantiation of optional with a non-object type is undefined behavior");
  union {
    char __null_state_;
    remove_cv_t<value_type> __val_;
  };
  bool __engaged_;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr __optional_destruct_base()  ;
  template <class... _Args>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr explicit __optional_destruct_base(in_place_t, _Args&&... __args)  ;
    ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void reset() noexcept ;
};
template <class _Tp, bool = is_reference<_Tp>::value>
struct __optional_storage_base : __optional_destruct_base<_Tp> {
  using __base [[__gnu__::__nodebug__]] = __optional_destruct_base<_Tp>;
  using value_type = _Tp;
  using __base::__base;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool has_value() const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr value_type& __get() & noexcept ;
   ;
   ;
   ;
};
template <class _Tp>
struct __optional_storage_base<_Tp, true> ;
template <class _Tp, bool = is_trivially_copy_constructible<_Tp>::value>
struct __optional_copy_base : __optional_storage_base<_Tp> {
  using __optional_storage_base<_Tp>::__optional_storage_base;
};
template <class _Tp, bool = is_trivially_move_constructible<_Tp>::value>
struct __optional_move_base : __optional_copy_base<_Tp> {
  using __optional_copy_base<_Tp>::__optional_copy_base;
};
template <class _Tp>
struct __optional_move_base<_Tp, false> : __optional_copy_base<_Tp> {
  using value_type = _Tp;
  using __optional_copy_base<_Tp>::__optional_copy_base;
};
template <class _Tp,
          bool = is_trivially_destructible<_Tp>::value && is_trivially_copy_constructible<_Tp>::value &&
                 is_trivially_copy_assignable<_Tp>::value>
struct __optional_copy_assign_base : __optional_move_base<_Tp> {
  using __optional_move_base<_Tp>::__optional_move_base;
};
template <class _Tp>
struct __optional_copy_assign_base<_Tp, false> : __optional_move_base<_Tp> {
  using __optional_move_base<_Tp>::__optional_move_base;
};
template <class _Tp,
          bool = is_trivially_destructible<_Tp>::value && is_trivially_move_constructible<_Tp>::value &&
                 is_trivially_move_assignable<_Tp>::value>
struct __optional_move_assign_base : __optional_copy_assign_base<_Tp> {
  using __optional_copy_assign_base<_Tp>::__optional_copy_assign_base;
};
template <class _Tp>
struct __optional_move_assign_base<_Tp, false> : __optional_copy_assign_base<_Tp> {
  using value_type = _Tp;
  using __optional_copy_assign_base<_Tp>::__optional_copy_assign_base;
};
template <class _Tp>
using __optional_sfinae_ctor_base_t [[__gnu__::__nodebug__]] =
    __sfinae_ctor_base< is_copy_constructible<_Tp>::value, is_move_constructible<_Tp>::value >;
template <class _Tp>
using __optional_sfinae_assign_base_t [[__gnu__::__nodebug__]] =
    __sfinae_assign_base< (is_copy_constructible<_Tp>::value && is_copy_assignable<_Tp>::value),
                          (is_move_constructible<_Tp>::value && is_move_assignable<_Tp>::value) >;
template <class _Tp>
class optional;
template <class _Tp>
concept __is_derived_from_optional = requires(const _Tp& __t) { []<class _Up> {}; };
template <class _Tp>
struct __is_std_optional : false_type {};
template <class _Tp>
struct __is_std_optional<optional<_Tp>> : true_type {};
template <class _Tp>
class optional
    : private __optional_move_assign_base<_Tp>,
      private __optional_sfinae_ctor_base_t<_Tp>,
      private __optional_sfinae_assign_base_t<_Tp> {
  using __base [[__gnu__::__nodebug__]] = __optional_move_assign_base<_Tp>;
public:
  using value_type = _Tp;
  using __trivially_relocatable [[__gnu__::__nodebug__]] =
      conditional_t<__libcpp_is_trivially_relocatable<_Tp>::value, optional, void>;
  static_assert(!is_same_v<__remove_cvref_t<value_type>, nullopt_t>,
                "instantiation of optional with nullopt_t is ill-formed");
  static_assert(!is_reference_v<value_type>, "instantiation of optional with a reference type is ill-formed");
  static_assert(is_destructible_v<value_type>, "instantiation of optional with a non-destructible type is ill-formed");
  static_assert(!is_array_v<value_type>, "instantiation of optional with an array type is ill-formed");
  struct _CheckOptionalArgsConstructor {
    template <class _Up>
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static constexpr bool __enable_implicit() {
      return is_constructible_v<_Tp, _Up&&> && is_convertible_v<_Up&&, _Tp>;
    }
  };
  template <class _Up>
  using _CheckOptionalArgsCtor [[__gnu__::__nodebug__]] =
      _If< _IsNotSame<__remove_cvref_t<_Up>, in_place_t>::value && _IsNotSame<__remove_cvref_t<_Up>, optional>::value &&
               (!is_same_v<remove_cv_t<_Tp>, bool> || !__is_std_optional<__remove_cvref_t<_Up>>::value),
           _CheckOptionalArgsConstructor,
           __check_tuple_constructor_fail >;
  template <class _QualUp>
  struct _CheckOptionalLikeConstructor ;
  template <class _Up, class _QualUp>
  using _CheckOptionalLikeCtor [[__gnu__::__nodebug__]] =
      _If< _And< _IsNotSame<_Up, _Tp>, is_constructible<_Tp, _QualUp> >::value,
           _CheckOptionalLikeConstructor<_QualUp>,
           __check_tuple_constructor_fail >;
  template <class _Up, class _QualUp>
  using _CheckOptionalLikeAssign [[__gnu__::__nodebug__]] =
      _If< _And< _IsNotSame<_Up, _Tp>, is_constructible<_Tp, _QualUp>, is_assignable<_Tp&, _QualUp> >::value,
           _CheckOptionalLikeConstructor<_QualUp>,
           __check_tuple_constructor_fail >;
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr optional() noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr optional(nullopt_t) noexcept ;
  template <class _Up = value_type,
            enable_if_t<_CheckOptionalArgsCtor<_Up>::template __enable_implicit<_Up>(), int> = 0>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr optional(_Up&& __v)  ;
   ;
   ;
   ;
   ;
  using __base::__get;
  using __base::has_value;
   ;
   ;
   ;
  using __base::reset;
};
;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
concept __movable_box_object =
    move_constructible<_Tp>
    && is_object_v<_Tp>;
namespace ranges {
template <__movable_box_object _Tp>
class __movable_box ;
template <class _Tp>
concept __doesnt_need_empty_state =
    (copy_constructible<_Tp>
         ? copyable<_Tp> || (is_nothrow_move_constructible_v<_Tp> && is_nothrow_copy_constructible_v<_Tp>)
         : movable<_Tp> || is_nothrow_move_constructible_v<_Tp>);
template <class _Tp>
concept __can_use_no_unique_address = (copy_constructible<_Tp> ? copyable<_Tp> : movable<_Tp>);
template <class _Tp>
struct __movable_box_holder ;
template <class _Tp>
  requires __can_use_no_unique_address<_Tp>
struct __movable_box_holder<_Tp> ;;
template <__movable_box_object _Tp>
  requires __doesnt_need_empty_state<_Tp>
class __movable_box<_Tp> {
  [[__no_unique_address__]] __movable_box_holder<_Tp> __holder_;
public:
    ;
};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Int>
struct __get_wider_signed ;
template <class _Start>
using _IotaDiffT [[__gnu__::__nodebug__]] =
    typename _If< (!integral<_Start> || sizeof(iter_difference_t<_Start>) > sizeof(_Start)),
                  type_identity<iter_difference_t<_Start>>,
                  __get_wider_signed<_Start> >::type;
template <class _Iter>
concept __decrementable = incrementable<_Iter> && requires(_Iter __i) {
  { --__i } -> same_as<_Iter&>;
  { __i-- } -> same_as<_Iter>;
};
template <class _Iter>
concept __advanceable =
    __decrementable<_Iter> && totally_ordered<_Iter> &&
    requires(_Iter __i, const _Iter __j, const _IotaDiffT<_Iter> __n) {
      { __i += __n } -> same_as<_Iter&>;
      { __i -= __n } -> same_as<_Iter&>;
    };
template <class>
struct __iota_iterator_category ;
template <incrementable _Tp>
struct __iota_iterator_category<_Tp> ;
template <weakly_incrementable _Start, semiregular _BoundSentinel = unreachable_sentinel_t>
  requires __weakly_equality_comparable_with<_Start, _BoundSentinel> && copyable<_Start>
class iota_view : public view_interface<iota_view<_Start, _BoundSentinel>> {
  struct __iterator : public __iota_iterator_category<_Start> {
    friend class iota_view;
    using iterator_concept =
        _If<__advanceable<_Start>,
            random_access_iterator_tag,
            _If<__decrementable<_Start>,
                bidirectional_iterator_tag,
                _If<incrementable<_Start>,
                    forward_iterator_tag,
                             input_iterator_tag>>>;
    using value_type = _Start;
    using difference_type = _IotaDiffT<_Start>;
    _Start __value_ = _Start();
  };
  struct __sentinel ;;
  _Start __value_ = _Start();
  _BoundSentinel __bound_sentinel_ = _BoundSentinel();
public:
};
;
template <class _Start, class _BoundSentinel>
inline constexpr bool enable_borrowed_range<iota_view<_Start, _BoundSentinel>> = true;
namespace views {
namespace __iota {
struct __fn {
  }
  ;
}
inline namespace __cpo {
inline constexpr auto iota = __iota::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Tp>
  requires is_object_v<_Tp>
class __non_propagating_cache {
  struct __from_tag ;
  struct __forward_tag ;
  struct __wrapper ;
  optional<__wrapper> __value_ = nullopt;
public:
   ;
   ;
};
struct __empty_cache ;;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Tp>
concept __integer_like_with_usable_difference_type =
    __signed_integer_like<_Tp> || (__integer_like<_Tp> && weakly_incrementable<_Tp>);
template <class _Tp>
struct __repeat_view_iterator_difference ;;
template <__signed_integer_like _Tp>
struct __repeat_view_iterator_difference<_Tp> ;;
template <class _Tp>
using __repeat_view_iterator_difference_t [[__gnu__::__nodebug__]] = typename __repeat_view_iterator_difference<_Tp>::type;
namespace views::__drop {
struct __fn;
}
namespace views::__take {
struct __fn;
}
template <move_constructible _Tp, semiregular _Bound = unreachable_sentinel_t>
  requires(is_object_v<_Tp> && same_as<_Tp, remove_cv_t<_Tp>> &&
           (__integer_like_with_usable_difference_type<_Bound> || same_as<_Bound, unreachable_sentinel_t>))
class __attribute__((__abi_tag__("llvm18_nua"))) repeat_view : public view_interface<repeat_view<_Tp, _Bound>> {
  friend struct views::__take::__fn;
  friend struct views::__drop::__fn;
  class __iterator;
public:
    ;
private:
  [[__no_unique_address__]] __movable_box<_Tp> __value_;
  [[__no_unique_address__]] _Bound __bound_ = _Bound();
};
;
template <move_constructible _Tp, semiregular _Bound>
  requires(is_object_v<_Tp> && same_as<_Tp, remove_cv_t<_Tp>> &&
           (__integer_like_with_usable_difference_type<_Bound> || same_as<_Bound, unreachable_sentinel_t>))
class repeat_view<_Tp, _Bound>::__iterator {
  friend class repeat_view;
  using _IndexT [[__gnu__::__nodebug__]] = conditional_t<same_as<_Bound, unreachable_sentinel_t>, ptrdiff_t, _Bound>;
public:
  using iterator_concept = random_access_iterator_tag;
  const _Tp* __value_ = nullptr;
  _IndexT __current_ = _IndexT();
};
namespace views {
namespace __repeat {
struct __fn {
   }
  ;
}
inline namespace __cpo {
inline constexpr auto repeat = __repeat::__fn{};
}
}
template <class _Tp>
inline constexpr bool __is_repeat_specialization = false;
template <class _Tp, class _Bound>
inline constexpr bool __is_repeat_specialization<repeat_view<_Tp, _Bound>> = true;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <view _View>
class drop_view : public view_interface<drop_view<_View>> {
  static constexpr bool _UseCache = forward_range<_View> && !(random_access_range<_View> && sized_range<_View>);
  using _Cache [[__gnu__::__nodebug__]] = _If<_UseCache, __non_propagating_cache<iterator_t<_View>>, __empty_cache>;
  [[__no_unique_address__]] _Cache __cached_begin_ = _Cache();
  range_difference_t<_View> __count_ = 0;
  _View __base_ = _View();
public:
   ;
};
;
template <class _Tp>
inline constexpr bool enable_borrowed_range<drop_view<_Tp>> = enable_borrowed_range<_Tp>;
namespace views {
namespace __drop {
template <class _Tp>
inline constexpr bool __is_empty_view = false;
template <class _Tp>
inline constexpr bool __is_empty_view<empty_view<_Tp>> = true;
template <class _Tp>
inline constexpr bool __is_passthrough_specialization = false;
template <class _Tp, size_t _Extent>
inline constexpr bool __is_passthrough_specialization<span<_Tp, _Extent>> = true;
template <class _CharT, class _Traits>
inline constexpr bool __is_passthrough_specialization<basic_string_view<_CharT, _Traits>> = true;
template <class _Np, class _Bound>
inline constexpr bool __is_passthrough_specialization<iota_view<_Np, _Bound>> = true;
template <class _Iter, class _Sent, subrange_kind _Kind>
inline constexpr bool __is_passthrough_specialization<subrange<_Iter, _Sent, _Kind>> =
    !subrange<_Iter, _Sent, _Kind>::_StoreSize;
template <class _Tp>
inline constexpr bool __is_subrange_specialization_with_store_size = false;
template <class _Iter, class _Sent, subrange_kind _Kind>
inline constexpr bool __is_subrange_specialization_with_store_size<subrange<_Iter, _Sent, _Kind>> =
    subrange<_Iter, _Sent, _Kind>::_StoreSize;
template <class _Tp>
struct __passthrough_type;
template <class _Tp, size_t _Extent>
struct __passthrough_type<span<_Tp, _Extent>> {
  using type [[__gnu__::__nodebug__]] = span<_Tp>;
};
template <class _CharT, class _Traits>
struct __passthrough_type<basic_string_view<_CharT, _Traits>> {
  using type [[__gnu__::__nodebug__]] = basic_string_view<_CharT, _Traits>;
};
template <class _Np, class _Bound>
struct __passthrough_type<iota_view<_Np, _Bound>> {
  using type [[__gnu__::__nodebug__]] = iota_view<_Np, _Bound>;
};
template <class _Iter, class _Sent, subrange_kind _Kind>
struct __passthrough_type<subrange<_Iter, _Sent, _Kind>> {
  using type [[__gnu__::__nodebug__]] = subrange<_Iter, _Sent, _Kind>;
};
template <class _Tp>
using __passthrough_type_t [[__gnu__::__nodebug__]] = typename __passthrough_type<_Tp>::type;
struct __fn {
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto drop = __drop::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct equal_to ;
struct not_equal_to ;
struct less ;;
struct less_equal ;;
struct greater ;;
struct greater_equal {
   ;
  using is_transparent = void;
};
}
template <class _Tp, class _Up>
inline const bool __desugars_to_v<__less_tag, ranges::less, _Tp, _Up> = true;
template <class _Tp, class _Up>
inline const bool __desugars_to_v<__greater_tag, ranges::greater, _Tp, _Up> = true;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _It, class _Proj>
struct __projected_impl ;
template <weakly_incrementable _It, class _Proj>
struct __projected_impl<_It, _Proj> ;;
template <indirectly_readable _It, indirectly_regular_unary_invocable<_It> _Proj>
using projected = typename __projected_impl<_It, _Proj>::__type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
 ;
struct __find_if {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto find_if = __find_if{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __find_if_not {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto find_if_not = __find_if_not{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __has_result_type {
private:
  ;
  ;
public:
  static const bool value = decltype(__test<_Tp>(0))::value;
};
template <class _Tp>
struct __derives_from_unary_function {
private:
  struct __two ;;
  ;
public:
  static const bool value = !is_same<decltype(__test((_Tp*)0)), __two>::value;
  typedef decltype(__test((_Tp*)0)) type;
};
template <class _Tp>
struct __derives_from_binary_function ;
template <class _Tp, bool = __derives_from_unary_function<_Tp>::value>
struct __maybe_derive_from_unary_function
    : public __derives_from_unary_function<_Tp>::type {};
template <class _Tp>
struct __maybe_derive_from_unary_function<_Tp, false> ;;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _Tp, bool = __derives_from_binary_function<_Tp>::value>
struct __maybe_derive_from_binary_function
    : public __derives_from_binary_function<_Tp>::type {};
template <class _Tp>
struct __maybe_derive_from_binary_function<_Tp, false> ;
template <class _Tp, bool = __has_result_type<_Tp>::value>
struct __weak_result_type_imp
    : public __maybe_derive_from_unary_function<_Tp>,
      public __maybe_derive_from_binary_function<_Tp> {
};
template <class _Tp>
struct __weak_result_type_imp<_Tp, false>
    : public __maybe_derive_from_unary_function<_Tp>, public __maybe_derive_from_binary_function<_Tp> {};
template <class _Tp>
struct __weak_result_type : public __weak_result_type_imp<_Tp> {};
#pragma GCC diagnostic pop
template <class _Rp>
struct __weak_result_type<_Rp()> {
};
template <class _Rp>
struct __weak_result_type<_Rp (&)> {
};
template <class _Rp>
struct __weak_result_type<_Rp (*)()> {
};
template <class _Rp, class _A1>
struct __weak_result_type<_Rp(_A1)> : public __unary_function<_A1, _Rp> {};
template <class _Rp, class _A1>
struct __weak_result_type<_Rp (&)(_A1)> : public __unary_function<_A1, _Rp> {};
template <class _Rp, class _A1>
struct __weak_result_type<_Rp (*)(_A1)> : public __unary_function<_A1, _Rp> {};
template <class _Rp, class _Cp>
struct __weak_result_type<_Rp (_Cp::*)> : public __unary_function<_Cp*, _Rp> {};
template <class _Rp, class _Cp>
struct __weak_result_type<_Rp (_Cp::*)() const> : public __unary_function<const _Cp*, _Rp> {};
template <class _Rp, class _A1, class _A2>
struct __weak_result_type<_Rp (&)(_A1, _A2)> : public __binary_function<_A1, _A2, _Rp> {};
template <class _Rp, class _Cp, class _A1>
struct __weak_result_type<_Rp (_Cp::*)(_A1)> : public __binary_function<_Cp*, _A1, _Rp> {};
template <class _Rp, class _Cp, class _A1>
struct __weak_result_type<_Rp (_Cp::*)(_A1) const> : public __binary_function<const _Cp*, _A1, _Rp> {};
template <class _Rp, class _Cp, class _A1>
struct __weak_result_type<_Rp (_Cp::*)(_A1) volatile> : public __binary_function<volatile _Cp*, _A1, _Rp> {};
template <class _Rp, class _Cp, class _A1>
struct __weak_result_type<_Rp (_Cp::*)(_A1) const volatile> : public __binary_function<const volatile _Cp*, _A1, _Rp> {
};
template <class _Rp, class _A1, class _A2, class _A3, class... _A4>
struct __weak_result_type<_Rp(_A1, _A2, _A3, _A4...)> {
};
template <class _Rp, class _A1, class _A2, class _A3, class... _A4>
struct __weak_result_type<_Rp (&)(_A1, _A2, _A3, _A4...)> {
};
template <class _Rp, class _A1, class _A2, class _A3, class... _A4>
struct __weak_result_type<_Rp (*)(_A1, _A2, _A3, _A4...)> {
};
template <class _Rp, class _Cp, class _A1, class _A2, class... _A3>
struct __weak_result_type<_Rp (_Cp::*)(_A1, _A2, _A3...)> {
};
template <class _Rp, class _Cp, class _A1, class _A2, class... _A3>
struct __weak_result_type<_Rp (_Cp::*)(_A1, _A2, _A3...) const> {
};
template <class _Rp, class _Cp, class _A1, class _A2, class... _A3>
struct __weak_result_type<_Rp (_Cp::*)(_A1, _A2, _A3...) volatile> {
};
template <class _Rp, class _Cp, class _A1, class _A2, class... _A3>
struct __weak_result_type<_Rp (_Cp::*)(_A1, _A2, _A3...) const volatile> {
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, template <class...> class _Template>
inline constexpr bool __is_specialization_v = false;
template <class _Tp>
class reference_wrapper : public __weak_result_type<_Tp> {
public:
  typedef _Tp type;
private:
  type* __f_;
public:
   ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr type& get() const noexcept ;
  template <class... _ArgTypes>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr __invoke_result_t<type&, _ArgTypes...>
  operator()(_ArgTypes&&... __args) const
      noexcept(is_nothrow_invocable_v<_Tp&, _ArgTypes...>)
  ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator==(reference_wrapper __x, const _Tp& __y)
    requires requires {
      { __x.get() == __y } -> __core_convertible_to<bool>;
    }
  {
    return __x.get() == __y;
  }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr auto operator<=>(reference_wrapper __x, reference_wrapper<const _Tp> __y)
    requires(!is_const_v<_Tp>) && requires { std::__synth_three_way; }
  {
    return std::__synth_three_way;
  }
};
;
template <class _Tp>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr reference_wrapper<_Tp> ref(_Tp& __t) noexcept ;
 ;
 ;
 ;
;
;
template <class _CanonicalTag, class _Operation, class... _Args>
inline const bool __desugars_to_v<_CanonicalTag, reference_wrapper<_Operation>, _Args...> =
    __desugars_to_v<_CanonicalTag, _Operation, _Args...>;
template <class _Tp>
inline constexpr bool __is_ref_wrapper = __is_specialization_v<_Tp, reference_wrapper>;
template <class _Rp, class _Tp, class _RpQual, class _TpQual>
concept __ref_wrap_common_reference_exists_with = __is_ref_wrapper<_Rp> && requires {
  typename common_reference_t<typename _Rp::type&, _TpQual>;
} && convertible_to<_RpQual, common_reference_t<typename _Rp::type&, _TpQual>>;
template <class _Rp, class _Tp, template <class> class _RpQual, template <class> class _TpQual>
  requires(__ref_wrap_common_reference_exists_with<_Rp, _Tp, _RpQual<_Rp>, _TpQual<_Tp>> &&
           !__ref_wrap_common_reference_exists_with<_Tp, _Rp, _TpQual<_Tp>, _RpQual<_Rp>>)
struct basic_common_reference<_Rp, _Tp, _RpQual, _TpQual> ;
template <class _Tp, class _Rp, template <class> class _TpQual, template <class> class _RpQual>
  requires(__ref_wrap_common_reference_exists_with<_Rp, _Tp, _RpQual<_Rp>, _TpQual<_Tp>> &&
           !__ref_wrap_common_reference_exists_with<_Tp, _Rp, _TpQual<_Tp>, _RpQual<_Rp>>)
struct basic_common_reference<_Tp, _Rp, _TpQual, _RpQual> {
  using type [[__gnu__::__nodebug__]] = common_reference_t<typename _Rp::type&, _TpQual<_Tp>>;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <view _View, class _Pred>
  requires input_range<_View> && is_object_v<_Pred> && indirect_unary_predicate<const _Pred, iterator_t<_View>>
class __attribute__((__abi_tag__("llvm18_nua"))) drop_while_view : public view_interface<drop_while_view<_View, _Pred>> {
public:
private:
  [[__no_unique_address__]] _View __base_ = _View();
  [[__no_unique_address__]] __movable_box<_Pred> __pred_;
  static constexpr bool _UseCache = forward_range<_View>;
  using _Cache [[__gnu__::__nodebug__]] = _If<_UseCache, __non_propagating_cache<iterator_t<_View>>, __empty_cache>;
  [[__no_unique_address__]] _Cache __cached_begin_ = _Cache();
};
template <class _View, class _Pred>
inline constexpr bool enable_borrowed_range<drop_while_view<_View, _Pred>> = enable_borrowed_range<_View>;
;
namespace views {
namespace __drop_while {
struct __fn {
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto drop_while = __drop_while::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline constexpr bool __is_ranges_subrange_v = false;
template <class _Iter, class _Sent, ranges::subrange_kind _Kind>
inline constexpr bool __is_ranges_subrange_v<ranges::subrange<_Iter, _Sent, _Kind>> = true;
template <class _Tp>
concept __tuple_like = __tuple_like_no_subrange<_Tp> || __is_ranges_subrange_v<remove_cvref_t<_Tp>>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Tp, size_t _Np>
concept __has_tuple_element = __tuple_like<_Tp> && _Np < tuple_size<_Tp>::value;
template <class _Tp, size_t _Np>
concept __returnable_element = is_reference_v<_Tp> || move_constructible<tuple_element_t<_Np, _Tp>>;
template <input_range _View, size_t _Np>
  requires view<_View> && __has_tuple_element<range_value_t<_View>, _Np> &&
           __has_tuple_element<remove_reference_t<range_reference_t<_View>>, _Np> &&
           __returnable_element<range_reference_t<_View>, _Np>
class elements_view : public view_interface<elements_view<_View, _Np>> {
private:
  template <bool>
  class __iterator;
  template <bool>
  class __sentinel;
public:
private:
  [[__no_unique_address__]] _View __base_ = _View();
};
template <class, size_t>
struct __elements_view_iterator_category_base ;;
template <forward_range _Base, size_t _Np>
struct __elements_view_iterator_category_base<_Base, _Np> ;;
template <input_range _View, size_t _Np>
  requires view<_View> && __has_tuple_element<range_value_t<_View>, _Np> &&
           __has_tuple_element<remove_reference_t<range_reference_t<_View>>, _Np> &&
           __returnable_element<range_reference_t<_View>, _Np>
template <bool _Const>
class elements_view<_View, _Np>::__iterator
    : public __elements_view_iterator_category_base<__maybe_const<_Const, _View>, _Np> {
  template <bool>
  friend class __iterator;
  template <bool>
  friend class __sentinel;
  using _Base [[__gnu__::__nodebug__]] = __maybe_const<_Const, _View>;
  iterator_t<_Base> __current_ = iterator_t<_Base>();
  static consteval auto __get_iterator_concept() ;
public:
  using iterator_concept = decltype(__iterator::__get_iterator_concept);
  using value_type = remove_cvref_t<tuple_element_t<_Np, range_value_t<_Base>>>;
  using difference_type = range_difference_t<_Base>;
};
template <input_range _View, size_t _Np>
  requires view<_View> && __has_tuple_element<range_value_t<_View>, _Np> &&
           __has_tuple_element<remove_reference_t<range_reference_t<_View>>, _Np> &&
           __returnable_element<range_reference_t<_View>, _Np>
template <bool _Const>
class elements_view<_View, _Np>::__sentinel {
private:
  using _Base [[__gnu__::__nodebug__]] = __maybe_const<_Const, _View>;
  [[__no_unique_address__]] sentinel_t<_Base> __end_ = sentinel_t<_Base>();
  template <bool>
  friend class __sentinel;
   ;
public:
  }
  ;
template <class _Tp, size_t _Np>
inline constexpr bool enable_borrowed_range<elements_view<_Tp, _Np>> = enable_borrowed_range<_Tp>;
template <class _Tp>
using keys_view = elements_view<_Tp, 0>;
template <class _Tp>
using values_view = elements_view<_Tp, 1>;
namespace views {
namespace __elements {
template <size_t _Np>
struct __fn : __range_adaptor_closure<__fn<_Np>> {
   ;
};
}
inline namespace __cpo {
template <size_t _Np>
inline constexpr auto elements = __elements::__fn<_Np>{};
inline constexpr auto keys = elements<0>;
inline constexpr auto values = elements<1>;
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <input_range _View, indirect_unary_predicate<iterator_t<_View>> _Pred>
  requires view<_View> && is_object_v<_Pred>
class __attribute__((__abi_tag__("llvm18_nua"))) filter_view : public view_interface<filter_view<_View, _Pred>> {
  [[__no_unique_address__]] _View __base_ = _View();
  [[__no_unique_address__]] __movable_box<_Pred> __pred_;
  static constexpr bool _UseCache = forward_range<_View>;
  using _Cache [[__gnu__::__nodebug__]] = _If<_UseCache, __non_propagating_cache<iterator_t<_View>>, __empty_cache>;
  [[__no_unique_address__]] _Cache __cached_begin_ = _Cache();
  class __iterator;
  class __sentinel;
public:
  ;
};
;
template <class _View>
struct __filter_iterator_category ;;
template <forward_range _View>
struct __filter_iterator_category<_View> ;
template <input_range _View, indirect_unary_predicate<iterator_t<_View>> _Pred>
  requires view<_View> && is_object_v<_Pred>
class filter_view<_View, _Pred>::__iterator : public __filter_iterator_category<_View> {
public:
  [[__no_unique_address__]] iterator_t<_View> __current_ = iterator_t<_View>();
  [[__no_unique_address__]] filter_view* __parent_ = nullptr;
  using iterator_concept =
      _If<bidirectional_range<_View>,
          bidirectional_iterator_tag,
          _If<forward_range<_View>,
              forward_iterator_tag,
                         input_iterator_tag >>;
  using value_type = range_value_t<_View>;
  using difference_type = range_difference_t<_View>;
};
template <input_range _View, indirect_unary_predicate<iterator_t<_View>> _Pred>
  requires view<_View> && is_object_v<_Pred>
class filter_view<_View, _Pred>::__sentinel {
public:
  sentinel_t<_View> __end_ = sentinel_t<_View>();
};
namespace views {
namespace __filter {
struct __fn {
  }
  ;
}
inline namespace __cpo {
inline constexpr auto filter = __filter::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <forward_iterator _Iterator, class _Data>
class __iterator_with_data ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class>
struct __join_view_iterator_category ;;
template <class _View>
  requires is_reference_v<range_reference_t<_View>> && forward_range<_View> && forward_range<range_reference_t<_View>>
struct __join_view_iterator_category<_View> ;;
template <input_range _View>
  requires view<_View> && input_range<range_reference_t<_View>>
class join_view : public view_interface<join_view<_View>> {
private:
  using _InnerRange [[__gnu__::__nodebug__]] = range_reference_t<_View>;
  template <bool>
  struct __iterator;
  template <bool>
  struct __sentinel;
  template <class>
  friend struct std::__segmented_iterator_traits;
  [[__no_unique_address__]] _View __base_ = _View();
  static constexpr bool _UseOuterCache = !forward_range<_View>;
  ;
};
template <input_range _View>
  requires view<_View> && input_range<range_reference_t<_View>>
template <bool _Const>
struct join_view<_View>::__sentinel {
private:
  template <bool>
  friend struct __sentinel;
  using _Parent [[__gnu__::__nodebug__]] = __maybe_const<_Const, join_view>;
  using _Base [[__gnu__::__nodebug__]] = __maybe_const<_Const, _View>;
  sentinel_t<_Base> __end_ = sentinel_t<_Base>();
public:
  template <bool _OtherConst>
    requires sentinel_for<sentinel_t<_Base>, iterator_t<__maybe_const<_OtherConst, _View>>>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator==(const __iterator<_OtherConst>& __x, const __sentinel& __y) {
    return __x.__get_outer == __y.__end_;
  }
};
template <input_range _View>
  requires view<_View> && input_range<range_reference_t<_View>>
template <bool _Const>
struct join_view<_View>::__iterator final : public __join_view_iterator_category<__maybe_const<_Const, _View>> {
  friend join_view;
  template <class>
  friend struct std::__segmented_iterator_traits;
  static constexpr bool __is_join_view_iterator = true;
private:
  using _Parent [[__gnu__::__nodebug__]] = __maybe_const<_Const, join_view<_View>>;
  using _Base [[__gnu__::__nodebug__]] = __maybe_const<_Const, _View>;
  using _Outer [[__gnu__::__nodebug__]] = iterator_t<_Base>;
  using _Inner [[__gnu__::__nodebug__]] = iterator_t<range_reference_t<_Base>>;
  using _InnerRange [[__gnu__::__nodebug__]] = range_reference_t<_View>;
  static_assert(!_Const || forward_range<_Base>, "Const can only be true when Base models forward_range.");
  static constexpr bool __ref_is_glvalue = is_reference_v<range_reference_t<_Base>>;
  static constexpr bool _OuterPresent = forward_range<_Base>;
  using _OuterType [[__gnu__::__nodebug__]] = _If<_OuterPresent, _Outer, std::__empty>;
  [[__no_unique_address__]] _OuterType __outer_ = _OuterType();
  optional<_Inner> __inner_;
  _Parent* __parent_ = nullptr;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Outer& __get_outer() ;
public:
};
;
namespace views {
namespace __join_view {
struct __fn : __range_adaptor_closure<__fn> {
   ;
};
}
inline namespace __cpo {
inline constexpr auto join = __join_view::__fn{};
}
}
}
template <class _JoinViewIterator>
  requires(_JoinViewIterator::__is_join_view_iterator && ranges::common_range<typename _JoinViewIterator::_Parent> &&
           __has_random_access_iterator_category<typename _JoinViewIterator::_Outer>::value &&
           __has_random_access_iterator_category<typename _JoinViewIterator::_Inner>::value)
struct __segmented_iterator_traits<_JoinViewIterator> {
  using __segment_iterator [[__gnu__::__nodebug__]] =
      __iterator_with_data<typename _JoinViewIterator::_Outer, typename _JoinViewIterator::_Parent*>;
  using __local_iterator [[__gnu__::__nodebug__]] = typename _JoinViewIterator::_Inner;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline const bool __is_signed_integer_v = false;
template <>
inline const bool __is_signed_integer_v<signed char> = true;
template <>
inline const bool __is_signed_integer_v<signed short> = true;
template <>
inline const bool __is_signed_integer_v<signed int> = true;
template <>
inline const bool __is_signed_integer_v<signed long> = true;
template <>
inline const bool __is_signed_integer_v<signed long long> = true;
template <>
inline const bool __is_signed_integer_v<__int128_t> = true;
template <class _Tp>
inline const bool __is_unsigned_integer_v = false;
template <>
inline const bool __is_unsigned_integer_v<unsigned char> = true;
template <>
inline const bool __is_unsigned_integer_v<unsigned short> = true;
template <>
inline const bool __is_unsigned_integer_v<unsigned int> = true;
template <>
inline const bool __is_unsigned_integer_v<unsigned long> = true;
template <>
inline const bool __is_unsigned_integer_v<unsigned long long> = true;
template <>
inline const bool __is_unsigned_integer_v<__uint128_t> = true;
template <class _Tp>
concept __signed_integer = __is_signed_integer_v<_Tp>;
template <class _Tp>
concept __unsigned_integer = __is_unsigned_integer_v<_Tp>;
template <class _Tp>
concept __signed_or_unsigned_integer = __signed_integer<_Tp> || __unsigned_integer<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Cp, bool _IsConst, typename _Cp::__storage_type = 0>
class __bit_iterator;
template <class _Cp>
struct __bit_array;
template <class, class = void>
struct __size_difference_type_traits;
;
;
;
template <class _StorageType>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _StorageType __middle_mask(unsigned __clz, unsigned __ctz);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct _FirstPaddingByte {
  [[__no_unique_address__]] _Tp __v_;
  char __first_padding_byte_;
};
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
template <class _Tp>
inline const size_t __datasizeof_v = __builtin_offsetof(_FirstPaddingByte<_Tp>, __first_padding_byte_);
#pragma clang diagnostic pop
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _From, class _To>
struct __is_always_bitcastable {
  using _UnqualFrom [[__gnu__::__nodebug__]] = __remove_cv_t<_From>;
  using _UnqualTo [[__gnu__::__nodebug__]] = __remove_cv_t<_To>;
  static const bool value =
      (is_same<_UnqualFrom, _UnqualTo>::value && is_trivially_copyable<_UnqualFrom>::value) ||
      (
        sizeof(_From) == sizeof(_To) &&
        is_integral<_From>::value &&
        is_integral<_To>::value &&
        !is_same<_UnqualTo, bool>::value
      );
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up, class = void>
struct __is_equality_comparable : false_type {};
template <class _Tp, class _Up>
struct __is_equality_comparable<_Tp, _Up, __void_t<decltype(std::declval<_Tp> == std::declval<_Up>)> > : true_type {
};
template <class _Tp, class _Up, class = void>
struct __libcpp_is_trivially_equality_comparable_impl : false_type {};
template <class _Tp>
struct __libcpp_is_trivially_equality_comparable_impl<_Tp, _Tp>
    : integral_constant<bool, __is_trivially_equality_comparable(_Tp) && __is_equality_comparable<_Tp, _Tp>::value> {
};
template <class _Tp, class _Up>
struct __libcpp_is_trivially_equality_comparable_impl<
    _Tp,
    _Up,
    __enable_if_t<is_integral<_Tp>::value && is_integral<_Up>::value && !is_same<_Tp, _Up>::value &&
                  is_signed<_Tp>::value == is_signed<_Up>::value && sizeof(_Tp) == sizeof(_Up)> > : true_type {};
template <class _Tp>
struct __libcpp_is_trivially_equality_comparable_impl<_Tp*, _Tp*> : true_type {};
template <class _Tp, class _Up>
struct __libcpp_is_trivially_equality_comparable_impl<_Tp*, _Up*>
    : integral_constant<
          bool,
          __is_equality_comparable<_Tp*, _Up*>::value &&
              (is_same<__remove_cv_t<_Tp>, __remove_cv_t<_Up> >::value || is_void<_Tp>::value || is_void<_Up>::value)> {
};
template <class _Tp, class _Up>
using __libcpp_is_trivially_equality_comparable [[__gnu__::__nodebug__]] =
    __libcpp_is_trivially_equality_comparable_impl<__remove_cv_t<_Tp>, __remove_cv_t<_Up> >;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline const bool __is_std_byte_v = false;
template <>
inline const bool __is_std_byte_v<byte> = true;
template <class _Tp, class _Up>
inline const bool __is_trivially_lexicographically_comparable_v =
    is_same<__remove_cv_t<_Tp>, __remove_cv_t<_Up> >::value &&
    sizeof(_Tp) == 1 &&
    (is_unsigned<_Tp>::value || __is_std_byte_v<_Tp>);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum class __element_count : size_t ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up, class = void>
struct __is_less_than_comparable : false_type {};
template <class _Tp, class _Up>
struct __is_less_than_comparable<_Tp, _Up, __void_t<decltype(std::declval<_Tp> < std::declval<_Up>)> > : true_type {
};
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline const bool __is_char_type = false;
template <>
inline const bool __is_char_type<char> = true;
template <>
inline const bool __is_char_type<char8_t> = true;
template <class _Tp>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_t __constexpr_strlen(const _Tp* __str) noexcept {
  static_assert(__is_char_type<_Tp>, "__constexpr_strlen only works with char and char8_t");
  if (__libcpp_is_constant_evaluated) {
    if constexpr (is_same_v<_Tp, char>)
      return __builtin_strlen(__str);
    size_t __i = 0;
    for (; __str[__i] != '\0'; ++__i)
      ;
    return __i;
  }
  return __builtin_strlen(reinterpret_cast<const char*>(__str));
}
template <class _Tp, class _Up>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr int
__constexpr_memcmp(const _Tp* __lhs, const _Up* __rhs, __element_count __n) ;
template <class _Tp, class _Up>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool
__constexpr_memcmp_equal(const _Tp* __lhs, const _Up* __rhs, __element_count __n) ;
template <class _Tp, class _Up>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Tp* __constexpr_memchr(_Tp* __str, _Up __value, size_t __count) ;
 ;
 ;
template <class _Tp, class _Up, __enable_if_t<!is_assignable<_Tp&, _Up const&>::value &&
                                              !is_assignable<_Tp&, _Up&&>::value &&
                                               is_constructible<_Tp, _Up const&>::value, int> = 0>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Tp& __assign_trivially_copyable(_Tp& __dest, _Up const& __src) ;
 ;
template <class _Tp, class _Up>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Tp*
__constexpr_memmove(_Tp* __dest, _Up* __src, __element_count __n) {
  static_assert(__is_always_bitcastable<_Up, _Tp>::value);
  size_t __count = static_cast<size_t>(__n);
  if (__libcpp_is_constant_evaluated) {
    if constexpr (is_same<__remove_cv_t<_Tp>, __remove_cv_t<_Up> >::value) ; else
    ;
  } else if (__count > 0) {
    ::__builtin_memmove(__dest, __src, (__count - 1) * sizeof + __datasizeof_v<_Tp>);
  }
  return __dest;
}
} }
extern "C" {
enum
{
  _ISupper = ((0) < ((1 << (0)) << 8)),
  _ISlower = ((1) < ((1 << (1)) << 8)),
  _ISalpha = ((2) < ((1 << (2)) << 8)),
  _ISdigit = ((3) < ((1 << (3)) << 8)),
  _ISxdigit = ((4) < ((1 << (4)) << 8)),
  _ISspace = ((5) < ((1 << (5)) << 8)),
  _ISprint = ((6) < ((1 << (6)) << 8)),
  _ISgraph = ((7) < ((1 << (7)) << 8)),
  _ISblank = ((8) < ((1 << (8)) << 8)),
  _IScntrl = ((9) < ((1 << (9)) << 8)),
  _ISpunct = ((10) < ((1 << (10)) << 8)),
  _ISalnum = ((11) < ((1 << (11)) << 8))
};
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
typedef unsigned int wint_t;
typedef unsigned long int wctype_t;
enum
{
  __ISwupper = 0,
  __ISwlower = 1,
  __ISwalpha = 2,
  __ISwdigit = 3,
  __ISwxdigit = 4,
  __ISwspace = 5,
  __ISwprint = 6,
  __ISwgraph = 7,
  __ISwblank = 8,
  __ISwcntrl = 9,
  __ISwpunct = 10,
  __ISwalnum = 11,
  _ISwupper = ((__ISwupper) < 8 ?   : ((__ISwupper) < 16 ?   : ((__ISwupper) < 24 ?   :  ((1UL << (__ISwupper)) >> 24)))),
  _ISwlower = ((__ISwlower) < 8 ?   : ((__ISwlower) < 16 ?   : ((__ISwlower) < 24 ?   :  ((1UL << (__ISwlower)) >> 24)))),
  _ISwalpha = ((__ISwalpha) < 8 ?   : ((__ISwalpha) < 16 ?   : ((__ISwalpha) < 24 ?   :  ((1UL << (__ISwalpha)) >> 24)))),
  _ISwdigit = ((__ISwdigit) < 8 ?   : ((__ISwdigit) < 16 ?   : ((__ISwdigit) < 24 ?   :  ((1UL << (__ISwdigit)) >> 24)))),
  _ISwxdigit = ((__ISwxdigit) < 8 ?   : ((__ISwxdigit) < 16 ?   : ((__ISwxdigit) < 24 ?   :  ((1UL << (__ISwxdigit)) >> 24)))),
  _ISwspace = ((__ISwspace) < 8 ?   : ((__ISwspace) < 16 ?   : ((__ISwspace) < 24 ?   :  ((1UL << (__ISwspace)) >> 24)))),
  _ISwprint = ((__ISwprint) < 8 ?   : ((__ISwprint) < 16 ?   : ((__ISwprint) < 24 ?   :  ((1UL << (__ISwprint)) >> 24)))),
  _ISwgraph = ((__ISwgraph) < 8 ?   : ((__ISwgraph) < 16 ?   : ((__ISwgraph) < 24 ?   :  ((1UL << (__ISwgraph)) >> 24)))),
  _ISwblank = ((__ISwblank) < 8 ?   : ((__ISwblank) < 16 ?   : ((__ISwblank) < 24 ?   :  ((1UL << (__ISwblank)) >> 24)))),
  _ISwcntrl = ((__ISwcntrl) < 8 ?   : ((__ISwcntrl) < 16 ?   : ((__ISwcntrl) < 24 ?   :  ((1UL << (__ISwcntrl)) >> 24)))),
  _ISwpunct = ((__ISwpunct) < 8 ?   : ((__ISwpunct) < 16 ?   : ((__ISwpunct) < 24 ?   :  ((1UL << (__ISwpunct)) >> 24)))),
  _ISwalnum = ((__ISwalnum) < 8 ?   : ((__ISwalnum) < 16 ?   : ((__ISwalnum) < 24 ?   :  ((1UL << (__ISwalnum)) >> 24))))
};
extern "C" 
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using ::wint_t __attribute__((__using_if_exists__));
using ::wctrans_t __attribute__((__using_if_exists__));
using ::wctype_t __attribute__((__using_if_exists__));
} }
typedef _Complex float __cfloat128 __attribute__ ((__mode__ (__TC__)));
typedef __float128 _Float128;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
typedef long unsigned int size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef __mbstate_t mbstate_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
extern "C" {
struct tm;
;
;
 ;
 ;
;
;
;
;
;
;
;
;
;
;
;
;
 ;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
  __attribute__ ((__malloc__)) ;
;
                                                           ;
                                                           ;
 ;
                                                           ;
;
;
;
}
typedef long int ptrdiff_t;
typedef long unsigned int size_t;
typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__));
} max_align_t;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using ::mbstate_t __attribute__((__using_if_exists__));
using ::tm __attribute__((__using_if_exists__));
using ::wint_t __attribute__((__using_if_exists__));
using ::FILE __attribute__((__using_if_exists__));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
 ;
template <class>
struct __find_segment;
 ;
template <class _Tp>
struct __find_segment ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iter, class _Sent>
struct __unwrap_range_impl ;
template <class _Iter>
struct __unwrap_range_impl<_Iter, _Iter> {
};
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __find {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto find = __find{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter1, class _InIter2>
struct in_in_result ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline constexpr bool __can_map_to_integer_v =
    sizeof(_Tp) == alignof(_Tp) && (sizeof(_Tp) == 1 || sizeof(_Tp) == 2 || sizeof(_Tp) == 4 || sizeof(_Tp) == 8);
template <size_t _TypeSize>
struct __get_as_integer_type_impl;
template <>
struct __get_as_integer_type_impl<1> ;
template <>
struct __get_as_integer_type_impl<2> ;
template <>
struct __get_as_integer_type_impl<4> {
  using type [[__gnu__::__nodebug__]] = uint32_t;
};
template <>
struct __get_as_integer_type_impl<8> {
  using type [[__gnu__::__nodebug__]] = uint64_t;
};
template <class _Tp>
using __get_as_integer_type_t [[__gnu__::__nodebug__]] = typename __get_as_integer_type_impl<sizeof(_Tp)>::type;
template <class _Tp>
inline constexpr size_t __native_vector_size = 32 / sizeof(_Tp);
template <class _ArithmeticT, size_t _Np>
using __simd_vector __attribute__((__ext_vector_type__(_Np))) [[__gnu__::__nodebug__]] = _ArithmeticT;
template <class _VecT>
inline constexpr size_t __simd_vector_size_v = []<bool _False = false> -> size_t {
  static_assert(_False, "Not a vector!");
};
template <class _Tp, size_t _Np>
inline constexpr size_t __simd_vector_size_v<__simd_vector<_Tp, _Np>> = _Np;
 ;
 ;
template <class _BaseIter, class _Alias>
struct __aliasing_iterator_wrapper ;
template <class _BaseT, class _Alias>
using __aliasing_iterator [[__gnu__::__nodebug__]] = typename __aliasing_iterator_wrapper<_BaseT, _Alias>::__iterator;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
template <class _I1, class _I2, class _Rp, class _P1 = identity, class _P2 = identity>
concept indirectly_comparable = indirect_binary_predicate<_Rp, projected<_I1, _P1>, projected<_I2, _P2>>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _I1, class _I2>
using mismatch_result = in_in_result<_I1, _I2>;
struct __mismatch {
   ;
   ;
   ;
};
inline namespace __cpo {
constexpr inline auto mismatch = __mismatch{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <move_constructible _Tp>
  requires is_object_v<_Tp>
class __attribute__((__abi_tag__("llvm18_nua"))) single_view : public view_interface<single_view<_Tp>> {
  [[__no_unique_address__]] __movable_box<_Tp> __value_;
public:
    ;
};
;
namespace views {
namespace __single_view {
struct __fn : __range_adaptor_closure<__fn> {
   ;
};
}
inline namespace __cpo {
inline constexpr auto single = __single_view::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <auto>
struct __require_constant;
template <class _Range>
concept __tiny_range = sized_range<_Range> && requires {
  typename __require_constant<remove_reference_t<_Range>::size>;
} && (remove_reference_t<_Range>::size <= 1);
template <input_range _View, forward_range _Pattern>
  requires view<_View> && view<_Pattern> &&
           indirectly_comparable<iterator_t<_View>, iterator_t<_Pattern>, ranges::equal_to> &&
           (forward_range<_View> || __tiny_range<_Pattern>)
class lazy_split_view : public view_interface<lazy_split_view<_View, _Pattern>> {
  [[__no_unique_address__]] _View __base_ = _View();
  [[__no_unique_address__]] _Pattern __pattern_ = _Pattern();
  using _MaybeCurrent [[__gnu__::__nodebug__]] =
      _If<!forward_range<_View>, __non_propagating_cache<iterator_t<_View>>, __empty_cache>;
  [[__no_unique_address__]] _MaybeCurrent __current_ = _MaybeCurrent();
  template <bool>
  struct __outer_iterator;
  template <bool>
  struct __inner_iterator;
public:
    ;
private:
  template <class>
  struct __outer_iterator_category ;
  template <forward_range _Tp>
  struct __outer_iterator_category<_Tp> ;
  template <bool _Const>
  struct __outer_iterator : __outer_iterator_category<__maybe_const<_Const, _View>> {
  private:
    template <bool>
    friend struct __inner_iterator;
    friend __outer_iterator<true>;
    using _Parent [[__gnu__::__nodebug__]] = __maybe_const<_Const, lazy_split_view>;
    using _Base [[__gnu__::__nodebug__]] = __maybe_const<_Const, _View>;
    _Parent* __parent_ = nullptr;
    using _MaybeCurrent [[__gnu__::__nodebug__]] = _If<forward_range<_View>, iterator_t<_Base>, __empty_cache>;
    [[__no_unique_address__]] _MaybeCurrent __current_ = _MaybeCurrent();
    bool __trailing_empty_ = false;
    [[nodiscard]]
    [[nodiscard]]
    [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto& __parent_base() const noexcept ;
  public:
    using iterator_concept = conditional_t<forward_range<_Base>, forward_iterator_tag, input_iterator_tag>;
    using difference_type = range_difference_t<_Base>;
    struct value_type : view_interface<value_type> {
    private:
      __outer_iterator __i_ = __outer_iterator();
    public:
    };
  };
  template <class>
  struct __inner_iterator_category ;
  template <forward_range _Tp>
  struct __inner_iterator_category<_Tp> ;;
  template <bool _Const>
  struct __inner_iterator : __inner_iterator_category<__maybe_const<_Const, _View>> {
  private:
    using _Base [[__gnu__::__nodebug__]] = __maybe_const<_Const, _View>;
    static constexpr bool _OuterConst = _Const;
    __outer_iterator<_Const> __i_ = __outer_iterator<_OuterConst>();
    bool __incremented_ = false;
    [[nodiscard]]
    [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const auto& __outer_current() const noexcept ;
  public:
    using iterator_concept = typename __outer_iterator<_Const>::iterator_concept;
    using value_type = range_value_t<_Base>;
    using difference_type = range_difference_t<_Base>;
  };
};
;
;
namespace views {
namespace __lazy_split_view {
struct __fn {
  template <class _Range, class _Pattern>
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto operator()(_Range&& __range, _Pattern&& __pattern) const
      noexcept(noexcept(lazy_split_view(std::forward<_Range>, std::forward<_Pattern>)))
          -> decltype(lazy_split_view(std::forward<_Range>, std::forward<_Pattern>)) ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto lazy_split = __lazy_split_view::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
namespace __rbegin {
template <class _Tp>
concept __member_rbegin = __can_borrow<_Tp> && requires(_Tp&& __t) {
  { static_cast<::std::__decay_t<decltype((__t.rbegin))> >(__t.rbegin) } -> input_or_output_iterator;
};
template <class _Tp>
concept __unqualified_rbegin =
    !__member_rbegin<_Tp> && __can_borrow<_Tp> && __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp&& __t) {
      { static_cast<::std::__decay_t<decltype((rbegin(__t)))> >(rbegin(__t)) } -> input_or_output_iterator;
    };
template <class _Tp>
concept __can_reverse =
    __can_borrow<_Tp> && !__member_rbegin<_Tp> && !__unqualified_rbegin<_Tp> && requires(_Tp&& __t) {
      { ranges::begin } -> same_as<decltype(ranges::end(__t))>;
      { ranges::begin(__t) } -> bidirectional_iterator;
    };
struct __fn {
   ;
   ;
   ;
  ;
};
}
inline namespace __cpo {
inline constexpr auto rbegin = __rbegin::__fn{};
}
}
namespace ranges {
namespace __crbegin {
struct __fn {
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto crbegin = __crbegin::__fn{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
namespace __rend {
template <class _Tp>
concept __member_rend = __can_borrow<_Tp> && requires(_Tp&& __t) {
  ranges::rbegin;
  { static_cast<::std::__decay_t<decltype((__t.rend))> >(__t.rend) } -> sentinel_for<decltype(ranges::rbegin)>;
};
template <class _Tp>
concept __unqualified_rend =
    !__member_rend<_Tp> && __can_borrow<_Tp> && __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp&& __t) {
      ranges::rbegin;
      { static_cast<::std::__decay_t<decltype((rend(__t)))> >(rend(__t)) } -> sentinel_for<decltype(ranges::rbegin(__t))>;
    };
template <class _Tp>
concept __can_reverse = __can_borrow<_Tp> && !__member_rend<_Tp> && !__unqualified_rend<_Tp> && requires(_Tp&& __t) {
  { ranges::begin } -> same_as<decltype(ranges::end(__t))>;
  { ranges::begin(__t) } -> bidirectional_iterator;
};
class __fn {
public:
   ;
   ;
   ;
  ;
};
}
inline namespace __cpo {
inline constexpr auto rend = __rend::__fn{};
}
}
namespace ranges {
namespace __crend {
struct __fn {
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto crend = __crend::__fn{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <view _View>
  requires bidirectional_range<_View>
class reverse_view : public view_interface<reverse_view<_View>> {
  static constexpr bool _UseCache = !random_access_range<_View> && !common_range<_View>;
  using _Cache [[__gnu__::__nodebug__]] =
      _If<_UseCache, __non_propagating_cache<reverse_iterator<iterator_t<_View>>>, __empty_cache>;
  [[__no_unique_address__]] _Cache __cached_begin_ = _Cache();
  [[__no_unique_address__]] _View __base_ = _View();
public:
};
;
template <class _Tp>
inline constexpr bool enable_borrowed_range<reverse_view<_Tp>> = enable_borrowed_range<_Tp>;
namespace views {
namespace __reverse {
template <class _Tp>
inline constexpr bool __is_reverse_view = false;
template <class _Tp>
inline constexpr bool __is_reverse_view<reverse_view<_Tp>> = true;
template <class _Tp>
inline constexpr bool __is_sized_reverse_subrange = false;
template <class _Iter>
inline constexpr bool __is_unsized_reverse_subrange = false;
template <class _Iter, subrange_kind _Kind>
inline constexpr bool __is_unsized_reverse_subrange<subrange<reverse_iterator<_Iter>, reverse_iterator<_Iter>, _Kind>> =
    _Kind == subrange_kind::unsized;
template <class _Tp>
struct __unwrapped_reverse_subrange ;
template <class _Iter, subrange_kind _Kind>
struct __unwrapped_reverse_subrange<subrange<reverse_iterator<_Iter>, reverse_iterator<_Iter>, _Kind>> ;
struct __fn : __range_adaptor_closure<__fn> {
   ;
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto reverse = __reverse::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _ForwardIterator1, class _ForwardIterator2>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    noexcept ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _IterMaybeQualified>
consteval auto __get_iterator_concept() ;
template <class _Iter>
using __iterator_concept [[__gnu__::__nodebug__]] = decltype(ranges::__get_iterator_concept<_Iter>);
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _AlgPolicy>
struct _IterOps;
struct _RangeAlgPolicy ;
template <>
struct _IterOps<_RangeAlgPolicy> ;
struct _ClassicAlgPolicy ;;
template <>
struct _IterOps<_ClassicAlgPolicy> {
  template <class _Iter>
  using __value_type [[__gnu__::__nodebug__]] = typename iterator_traits<_Iter>::value_type;
  template <class _Iter, class _Distance>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr static void advance(_Iter& __iter, _Distance __count) ;
   ;
  template <class _Iter>
  using __deref_t [[__gnu__::__nodebug__]] = decltype(*std::declval<_Iter&>);
  template <class _Iter>
  using __move_t [[__gnu__::__nodebug__]] = decltype(std::move(*std::declval<_Iter&>));
   ;
  template <class _Iter, __enable_if_t<is_reference<__deref_t<_Iter> >::value, int> = 0>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr static
      __move_t<_Iter>
      __iter_move(_Iter&& __i) ;
  template <class _Iter, __enable_if_t<!is_reference<__deref_t<_Iter> >::value, int> = 0>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr static
      __deref_t<_Iter>
      __iter_move(_Iter&& __i) ;
   ;
   ;
};
template <class _AlgPolicy, class _Iter>
using __policy_iter_diff_t [[__gnu__::__nodebug__]] = typename _IterOps<_AlgPolicy>::template __difference_type<_Iter>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __search {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto search = __search{};
}
template <forward_range _View, forward_range _Pattern>
  requires view<_View> && view<_Pattern> &&
           indirectly_comparable<iterator_t<_View>, iterator_t<_Pattern>, ranges::equal_to>
class split_view : public view_interface<split_view<_View, _Pattern>> {
private:
  [[__no_unique_address__]] _View __base_ = _View();
  [[__no_unique_address__]] _Pattern __pattern_ = _Pattern();
  using _Cache [[__gnu__::__nodebug__]] = __non_propagating_cache<subrange<iterator_t<_View>>>;
  friend struct __sentinel;
  struct __iterator;
  struct __sentinel;
public:
    ;
};
;
;
template <forward_range _View, forward_range _Pattern>
  requires view<_View> && view<_Pattern> &&
           indirectly_comparable<iterator_t<_View>, iterator_t<_Pattern>, ranges::equal_to>
struct split_view<_View, _Pattern>::__sentinel {
private:
  [[__no_unique_address__]] sentinel_t<_View> __end_ = sentinel_t<_View>();
public:
};
namespace views {
namespace __split_view {
struct __fn {
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto split = __split_view::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __min {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto min = __min{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <view _View>
class take_view : public view_interface<take_view<_View>> {
  [[__no_unique_address__]] _View __base_ = _View();
  range_difference_t<_View> __count_ = 0;
  template <bool>
  class __sentinel;
public:
};
template <view _View>
template <bool _Const>
class take_view<_View>::__sentinel {
  using _Base [[__gnu__::__nodebug__]] = __maybe_const<_Const, _View>;
  template <bool _OtherConst>
  using _Iter [[__gnu__::__nodebug__]] = counted_iterator<iterator_t<__maybe_const<_OtherConst, _View>>>;
  [[__no_unique_address__]] sentinel_t<_Base> __end_ = sentinel_t<_Base>();
  template <bool>
  friend class take_view<_View>::__sentinel;
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator==(const _Iter<_Const>& __lhs, const __sentinel& __rhs) ;
  template <bool _OtherConst = !_Const>
    requires sentinel_for<sentinel_t<_Base>, iterator_t<__maybe_const<_OtherConst, _View>>>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator==(const _Iter<_OtherConst>& __lhs, const __sentinel& __rhs) {
    return __lhs.count == 0 || __lhs.base == __rhs.__end_;
  }
};
;
template <class _Tp>
inline constexpr bool enable_borrowed_range<take_view<_Tp>> = enable_borrowed_range<_Tp>;
namespace views {
namespace __take {
template <class _Tp>
inline constexpr bool __is_empty_view = false;
template <class _Tp>
inline constexpr bool __is_empty_view<empty_view<_Tp>> = true;
template <class _Tp>
inline constexpr bool __is_passthrough_specialization = false;
template <class _Tp, size_t _Extent>
inline constexpr bool __is_passthrough_specialization<span<_Tp, _Extent>> = true;
template <class _CharT, class _Traits>
inline constexpr bool __is_passthrough_specialization<basic_string_view<_CharT, _Traits>> = true;
template <class _Iter, class _Sent, subrange_kind _Kind>
inline constexpr bool __is_passthrough_specialization<subrange<_Iter, _Sent, _Kind>> = true;
template <class _Tp>
inline constexpr bool __is_iota_specialization = false;
template <class _Np, class _Bound>
inline constexpr bool __is_iota_specialization<iota_view<_Np, _Bound>> = true;
template <class _Tp>
struct __passthrough_type;
template <class _Tp, size_t _Extent>
struct __passthrough_type<span<_Tp, _Extent>> ;;
template <class _Iter, class _Sent, subrange_kind _Kind>
  requires requires { typename subrange<_Iter>; }
struct __passthrough_type<subrange<_Iter, _Sent, _Kind>> ;;
template <class _Tp>
using __passthrough_type_t [[__gnu__::__nodebug__]] = typename __passthrough_type<_Tp>::type;
struct __fn {
   ;
   ;
   ;
   ;
   ;
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto take = __take::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <view _View, class _Pred>
  requires input_range<_View> && is_object_v<_Pred> && indirect_unary_predicate<const _Pred, iterator_t<_View>>
class __attribute__((__abi_tag__("llvm18_nua"))) take_while_view : public view_interface<take_while_view<_View, _Pred>> {
  template <bool>
  class __sentinel;
  [[__no_unique_address__]] _View __base_ = _View();
  [[__no_unique_address__]] __movable_box<_Pred> __pred_;
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _View base() const&
    requires copy_constructible<_View>
  ;
};
;
template <view _View, class _Pred>
  requires input_range<_View> && is_object_v<_Pred> && indirect_unary_predicate<const _Pred, iterator_t<_View>>
template <bool _Const>
class take_while_view<_View, _Pred>::__sentinel {
  using _Base [[__gnu__::__nodebug__]] = __maybe_const<_Const, _View>;
  sentinel_t<_Base> __end_ = sentinel_t<_Base>();
  const _Pred* __pred_ = nullptr;
  friend class __sentinel<!_Const>;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator==(const iterator_t<_Base>& __x, const __sentinel& __y) ;
  template <bool _OtherConst = !_Const>
    requires sentinel_for<sentinel_t<_Base>, iterator_t<__maybe_const<_OtherConst, _View>>>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool
  operator==(const iterator_t<__maybe_const<_OtherConst, _View>>& __x, const __sentinel& __y) {
    return __x == __y.__end_ || !std::invoke(*__y.__pred_, *__x);
  }
};
namespace views {
namespace __take_while {
struct __fn {
  }
  ;
}
inline namespace __cpo {
inline constexpr auto take_while = __take_while::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Fn, class _View>
concept __regular_invocable_with_range_ref = regular_invocable<_Fn, range_reference_t<_View>>;
template <class _View, class _Fn>
concept __transform_view_constraints =
    view<_View> && is_object_v<_Fn> && regular_invocable<_Fn&, range_reference_t<_View>> &&
    __is_referenceable_v<invoke_result_t<_Fn&, range_reference_t<_View>>>;
template <input_range _View, move_constructible _Fn>
  requires __transform_view_constraints<_View, _Fn>
class __attribute__((__abi_tag__("llvm18_nua"))) transform_view : public view_interface<transform_view<_View, _Fn>> {
  template <bool>
  class __iterator;
  template <bool>
  class __sentinel;
  [[__no_unique_address__]] __movable_box<_Fn> __func_;
  [[__no_unique_address__]] _View __base_ = _View();
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto size() const
    requires sized_range<const _View>
  ;
};
template <class _Range, class _Fn>
transform_view(_Range&&, _Fn) -> transform_view<views::all_t<_Range>, _Fn>;
template <class _View>
struct __transform_view_iterator_concept ;;
template <random_access_range _View>
struct __transform_view_iterator_concept<_View> {
  using type [[__gnu__::__nodebug__]] = forward_iterator_tag;
};
template <class, class>
struct __transform_view_iterator_category_base ;
template <forward_range _View, class _Fn>
struct __transform_view_iterator_category_base<_View, _Fn> {
  using _Cat [[__gnu__::__nodebug__]] = typename iterator_traits<iterator_t<_View>>::iterator_category;
  using iterator_category =
      conditional_t< is_reference_v<invoke_result_t<_Fn&, range_reference_t<_View>>>,
                     conditional_t< derived_from<_Cat, contiguous_iterator_tag>, random_access_iterator_tag, _Cat >,
                     input_iterator_tag >;
};
template <input_range _View, move_constructible _Fn>
  requires __transform_view_constraints<_View, _Fn>
template <bool _Const>
class transform_view<_View, _Fn>::__iterator
    : public __transform_view_iterator_category_base<_View, __maybe_const<_Const, _Fn>> {
  using _Parent [[__gnu__::__nodebug__]] = __maybe_const<_Const, transform_view>;
  using _Base [[__gnu__::__nodebug__]] = __maybe_const<_Const, _View>;
  _Parent* __parent_ = nullptr;
  template <bool>
  friend class transform_view<_View, _Fn>::__iterator;
  template <bool>
  friend class transform_view<_View, _Fn>::__sentinel;
public:
  iterator_t<_Base> __current_ = iterator_t<_Base>();
  using iterator_concept = typename __transform_view_iterator_concept<_View>::type;
  using value_type = remove_cvref_t<invoke_result_t<__maybe_const<_Const, _Fn>&, range_reference_t<_Base>>>;
  using difference_type = range_difference_t<_Base>;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) __iterator()
    requires default_initializable<iterator_t<_Base>>
  = default;
};
template <input_range _View, move_constructible _Fn>
  requires __transform_view_constraints<_View, _Fn>
template <bool _Const>
class transform_view<_View, _Fn>::__sentinel {
  using _Parent [[__gnu__::__nodebug__]] = __maybe_const<_Const, transform_view>;
  using _Base [[__gnu__::__nodebug__]] = __maybe_const<_Const, _View>;
  sentinel_t<_Base> __end_ = sentinel_t<_Base>();
  template <bool>
  friend class transform_view<_View, _Fn>::__iterator;
  template <bool>
  friend class transform_view<_View, _Fn>::__sentinel;
public:
  }
  ;
namespace views {
namespace __transform {
struct __fn {
   ;
};
}
inline namespace __cpo {
inline constexpr auto transform = __transform::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
namespace views {}
}
namespace views = ranges::views;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_istream;
template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_iostream;
using istream = basic_istream<char>;
using iostream = basic_iostream<char>;
using wistream = basic_istream<wchar_t>;
using wiostream = basic_iostream<wchar_t>;
template <class _CharT, class _Traits>
class [[_Clang::__preferred_name__(istream)]] [[_Clang::__preferred_name__(wistream)]] basic_istream;
template <class _CharT, class _Traits>
class [[_Clang::__preferred_name__(iostream)]] [[_Clang::__preferred_name__(wiostream)]] basic_iostream;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Val, class _CharT, class _Traits>
concept __stream_extractable = requires(basic_istream<_CharT, _Traits>& __is, _Val& __t) { __is >> __t; };
template <movable _Val, class _CharT, class _Traits = char_traits<_CharT>>
  requires default_initializable<_Val> && __stream_extractable<_Val, _CharT, _Traits>
class basic_istream_view : public view_interface<basic_istream_view<_Val, _CharT, _Traits>> {
  class __iterator;
public:
private:
  basic_istream<_CharT, _Traits>* __stream_;
  [[__no_unique_address__]] _Val __value_ = _Val();
};
template <movable _Val, class _CharT, class _Traits>
  requires default_initializable<_Val> && __stream_extractable<_Val, _CharT, _Traits>
class basic_istream_view<_Val, _CharT, _Traits>::__iterator {
public:
  using iterator_concept = input_iterator_tag;
  using difference_type = ptrdiff_t;
  using value_type = _Val;
private:
  basic_istream_view<_Val, _CharT, _Traits>* __parent_;
};
namespace views {
namespace __istream {
template <class _Tp>
struct __fn ;
}
inline namespace __cpo {
template <class _Tp>
inline constexpr auto istream = __istream::__fn<_Tp>{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <semiregular _Sent>
class move_sentinel ;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iter, class = void>
struct __move_iter_category_base ;
template <class _Iter>
  requires requires { typename iterator_traits<_Iter>::iterator_category; }
struct __move_iter_category_base<_Iter> ;
template <class _Iter, class _Sent>
concept __move_iter_comparable = requires {
  { std::declval<const _Iter&> == std::declval<_Sent> } -> convertible_to<bool>;
};
template <class _Iter>
class move_iterator
    : public __move_iter_category_base<_Iter>
{
private:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static constexpr auto __get_iter_concept() ;
public:
  using iterator_type = _Iter;
  using iterator_concept = decltype(__get_iter_concept);
  using value_type = iter_value_t<_Iter>;
  using difference_type = iter_difference_t<_Iter>;
  using pointer = _Iter;
  using reference = iter_rvalue_reference_t<_Iter>;
    ;
   ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const _Iter& base() const& noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Iter base() && ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr move_iterator operator+(difference_type __n) const ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr move_iterator operator-(difference_type __n) const ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr move_iterator& operator-=(difference_type __n) ;
  template <sentinel_for<_Iter> _Sent>
  friend __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool operator==(const move_iterator& __x, const move_sentinel<_Sent>& __y)
    requires __move_iter_comparable<_Iter, _Sent>
  {
    return __x.base() == __y.base;
  }
  template <sized_sentinel_for<_Iter> _Sent>
  friend __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr iter_difference_t<_Iter>
  operator-(const move_sentinel<_Sent>& __x, const move_iterator& __y) {
    return __x.base - __y.base();
  }
  template <sized_sentinel_for<_Iter> _Sent>
  friend __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr iter_difference_t<_Iter>
  operator-(const move_iterator& __x, const move_sentinel<_Sent>& __y) {
    return __x.base() - __y.base;
  }
private:
  template <class _It2>
  friend class move_iterator;
  _Iter __current_;
};
;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
;
template <class _Iter1, class _Iter2>
  requires(!sized_sentinel_for<_Iter1, _Iter2>)
inline constexpr bool disable_sized_sentinel_for<move_iterator<_Iter1>, move_iterator<_Iter2>> = true;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <view _View>
  requires input_range<_View>
class as_rvalue_view : public view_interface<as_rvalue_view<_View>> {
  [[__no_unique_address__]] _View __base_ = _View();
public:
};
;
template <class _View>
inline constexpr bool enable_borrowed_range<as_rvalue_view<_View>> = enable_borrowed_range<_View>;
namespace views {
namespace __as_rvalue {
struct __fn : __range_adaptor_closure<__fn> {
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto as_rvalue = __as_rvalue::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __adjacent_find {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto adjacent_find = __adjacent_find{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <forward_range _View, indirect_binary_predicate<iterator_t<_View>, iterator_t<_View>> _Pred>
  requires view<_View> && is_object_v<_Pred>
class __attribute__((__abi_tag__("llvm18_nua"))) chunk_by_view : public view_interface<chunk_by_view<_View, _Pred>> {
  [[__no_unique_address__]] _View __base_ = _View();
  [[__no_unique_address__]] __movable_box<_Pred> __pred_;
  using _Cache [[__gnu__::__nodebug__]] = __non_propagating_cache<iterator_t<_View>>;
  _Cache __cached_begin_;
  class __iterator;
public:
};
;
template <forward_range _View, indirect_binary_predicate<iterator_t<_View>, iterator_t<_View>> _Pred>
  requires view<_View> && is_object_v<_Pred>
class chunk_by_view<_View, _Pred>::__iterator {
  friend chunk_by_view;
  chunk_by_view* __parent_ = nullptr;
  [[__no_unique_address__]] iterator_t<_View> __current_ = iterator_t<_View>();
  [[__no_unique_address__]] iterator_t<_View> __next_ = iterator_t<_View>();
public:
  using value_type = subrange<iterator_t<_View>>;
  using difference_type = range_difference_t<_View>;
};
namespace views {
namespace __chunk_by {
struct __fn {
   ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto chunk_by = __chunk_by::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct from_range_t {
  explicit from_range_t() = default;
};
inline constexpr from_range_t from_range;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Range>
concept __bidirectional_common = bidirectional_range<_Range> && common_range<_Range>;
template <input_range _View, forward_range _Pattern>
  requires view<_View> && input_range<range_reference_t<_View>> && view<_Pattern> &&
           __concatable<range_reference_t<_View>, _Pattern>
class join_with_view : public view_interface<join_with_view<_View, _Pattern>> {
  using _InnerRng [[__gnu__::__nodebug__]] = range_reference_t<_View>;
  [[__no_unique_address__]] _View __base_ = _View();
  static constexpr bool _UseOuterItCache = !forward_range<_View>;
  using _OuterItCache [[__gnu__::__nodebug__]] =
      _If<_UseOuterItCache, __non_propagating_cache<iterator_t<_View>>, __empty_cache>;
  [[__no_unique_address__]] _OuterItCache __outer_it_;
  static constexpr bool _UseInnerCache = !is_reference_v<_InnerRng>;
  using _InnerCache [[__gnu__::__nodebug__]] =
      _If<_UseInnerCache, __non_propagating_cache<remove_cvref_t<_InnerRng>>, __empty_cache>;
  [[__no_unique_address__]] _InnerCache __inner_;
  [[__no_unique_address__]] _Pattern __pattern_ = _Pattern();
  template <bool _Const>
  struct __iterator;
  template <bool _Const>
  struct __sentinel;
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr explicit join_with_view(_View __base, _Pattern __pattern)  ;
    ;
  [[nodiscard]]
  [[nodiscard]]
  [[nodiscard]]
  [[nodiscard]]
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto end() ;
  ;
};
;
;
template <class _Base, class _PatternBase, class _InnerBase = range_reference_t<_Base>>
struct __join_with_view_iterator_category ;
template <input_range _View, forward_range _Pattern>
  requires view<_View> && input_range<range_reference_t<_View>> && view<_Pattern> &&
           __concatable<range_reference_t<_View>, _Pattern>
template <bool _Const>
struct join_with_view<_View, _Pattern>::__iterator
    : public __join_with_view_iterator_category<__maybe_const<_Const, _View>, __maybe_const<_Const, _Pattern>> {
private:
  friend join_with_view;
  using _Parent [[__gnu__::__nodebug__]] = __maybe_const<_Const, join_with_view>;
  using _Base [[__gnu__::__nodebug__]] = __maybe_const<_Const, _View>;
  using _InnerBase [[__gnu__::__nodebug__]] = range_reference_t<_Base>;
  using _PatternBase [[__gnu__::__nodebug__]] = __maybe_const<_Const, _Pattern>;
  using _OuterIter [[__gnu__::__nodebug__]] = iterator_t<_Base>;
  using _InnerIter [[__gnu__::__nodebug__]] = iterator_t<_InnerBase>;
  using _PatternIter [[__gnu__::__nodebug__]] = iterator_t<_PatternBase>;
  static_assert(!_Const || forward_range<_Base>, "Const can only be true when Base models forward_range.");
  static constexpr bool __ref_is_glvalue = is_reference_v<_InnerBase>;
  _Parent* __parent_ = nullptr;
  static constexpr bool _OuterIterPresent = forward_range<_Base>;
  using _OuterIterType [[__gnu__::__nodebug__]] = _If<_OuterIterPresent, _OuterIter, std::__empty>;
  [[nodiscard]]
  [[nodiscard]]
  [[nodiscard]]
  [[nodiscard]]
  [[nodiscard]] static consteval auto __get_iterator_concept() noexcept ;
public:
  using iterator_concept = decltype(__get_iterator_concept);
  using value_type = common_type_t<iter_value_t<_InnerIter>, iter_value_t<_PatternIter>>;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr decltype(auto) iter_move(const __iterator& __x) {
    using __rvalue_reference =
        common_reference_t<iter_rvalue_reference_t<_InnerIter>, iter_rvalue_reference_t<_PatternIter>>;
    return std::visit<__rvalue_reference>;
  }
};
template <input_range _View, forward_range _Pattern>
  requires view<_View> && input_range<range_reference_t<_View>> && view<_Pattern> &&
           __concatable<range_reference_t<_View>, _Pattern>
template <bool _Const>
struct join_with_view<_View, _Pattern>::__sentinel {
private:
  friend join_with_view;
  using _Parent [[__gnu__::__nodebug__]] = __maybe_const<_Const, join_with_view>;
  using _Base [[__gnu__::__nodebug__]] = __maybe_const<_Const, _View>;
  [[__no_unique_address__]] sentinel_t<_Base> __end_ = sentinel_t<_Base>();
  template <bool _OtherConst>
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static constexpr auto& __get_outer_of(const __iterator<_OtherConst>& __x) ;
public:
  template <bool _OtherConst>
    requires sentinel_for<sentinel_t<_Base>, iterator_t<__maybe_const<_OtherConst, _View>>>
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool
  operator==(const __iterator<_OtherConst>& __x, const __sentinel& __y) {
    return __get_outer_of(__x) == __y.__end_;
  }
};
namespace views {
namespace __join_with_view {
struct __fn {
  template <class _Range, class _Pattern>
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto operator()(_Range&& __range, _Pattern&& __pattern) const
      noexcept
          -> decltype( join_with_view(std::forward<_Range>, std::forward<_Pattern>)) ;
   ;
};
}
inline namespace __cpo {
inline constexpr auto join_with = __join_with_view::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Container>
constexpr bool __reservable_container =
    sized_range<_Container> && requires(_Container& __c, range_size_t<_Container> __n) {
      __c.reserve(__n);
      { __c.capacity } -> same_as<decltype(__n)>;
      { __c.max_size } -> same_as<decltype(__n)>;
    };
template <class _Container, class _Ref>
constexpr bool __container_appendable = requires(_Container& __c, _Ref&& __ref) {
  requires(
      requires { __c.emplace_back; } ||
      requires { __c.push_back; } ||
      requires { __c.emplace; } ||
      requires { __c.insert; });
};
template <class _Container, class _Range>
concept __try_non_recursive_conversion =
    !input_range<_Container> || convertible_to<range_reference_t<_Range>, range_value_t<_Container>>;
template <class _Container, class _Range, class... _Args>
concept __constructible_from_iter_pair =
    common_range<_Range> && requires { typename iterator_traits<iterator_t<_Range>>::iterator_category; } &&
    derived_from<typename iterator_traits<iterator_t<_Range>>::iterator_category, input_iterator_tag> &&
    constructible_from<_Container, iterator_t<_Range>, sentinel_t<_Range>, _Args...>;
template <class>
concept __always_false = false;
 ;
template <class _Range>
struct __minimal_input_iterator {
  using iterator_category = input_iterator_tag;
  using value_type = range_value_t<_Range>;
  using difference_type = ptrdiff_t;
  using pointer = add_pointer_t<range_reference_t<_Range>>;
  using reference = range_reference_t<_Range>;
};
template <template <class...> class _Container, input_range _Range, class... _Args>
struct _Deducer ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iterator>
struct __product_iterator_traits;
template <class _Tp, size_t = 0>
struct __is_product_iterator : false_type {};
template <class _Tp>
struct __is_product_iterator<_Tp, sizeof(__product_iterator_traits<_Tp>) * 0> : true_type {};
template <class _Tp, size_t _Size, class = void>
struct __is_product_iterator_of_size : false_type {};
template <class _Tp, size_t _Size>
struct __is_product_iterator_of_size<_Tp, _Size, __enable_if_t<__product_iterator_traits<_Tp>::__size == _Size> >
    : true_type {};
template <class _Iterator, size_t _Nth>
using __product_iterator_element_t [[__gnu__::__nodebug__]] =
    decltype(__product_iterator_traits<_Iterator>::template __get_iterator_element<_Nth>);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class... _Ranges>
concept __zip_is_common =
    (sizeof...(_Ranges) == 1 && (common_range<_Ranges> && ...)) ||
    (!(bidirectional_range<_Ranges> && ...) && (common_range<_Ranges> && ...)) ||
    ((random_access_range<_Ranges> && ...) && (sized_range<_Ranges> && ...));
 ;
 ;
template <class _Fun, class _Tuple1, class _Tuple2, size_t... _Indices>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr tuple<
    invoke_result_t<_Fun&,
                    typename tuple_element<_Indices, remove_cvref_t<_Tuple1>>::type,
                    typename tuple_element<_Indices, remove_cvref_t<_Tuple2>>::type>...>
__tuple_zip_transform(_Fun&& __f, _Tuple1&& __tuple1, _Tuple2&& __tuple2, index_sequence<_Indices...>) ;
 ;
 ;
 ;
template <class _Tuple1, class _Tuple2>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool __tuple_any_equals(const _Tuple1& __tuple1, const _Tuple2& __tuple2) ;
template <class _Tp>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Tp __abs(_Tp __t) ;
template <input_range... _Views>
  requires(view<_Views> && ...) && (sizeof...(_Views) > 0)
class zip_view : public view_interface<zip_view<_Views...>> {
  [[__no_unique_address__]] tuple<_Views...> __views_;
  template <bool>
  class __iterator;
  template <bool>
  class __sentinel;
public:
};
;
template <bool _Const, class... _Views>
concept __zip_all_random_access = (random_access_range<__maybe_const<_Const, _Views>> && ...);
template <bool _Const, class... _Views>
concept __zip_all_bidirectional = (bidirectional_range<__maybe_const<_Const, _Views>> && ...);
template <bool _Const, class... _Views>
concept __zip_all_forward = (forward_range<__maybe_const<_Const, _Views>> && ...);
template <bool _Const, class... _Views>
consteval auto __get_zip_view_iterator_tag() ;
template <bool _Const, class... _Views>
struct __zip_view_iterator_category_base ;
template <bool _Const, class... _Views>
  requires __zip_all_forward<_Const, _Views...>
struct __zip_view_iterator_category_base<_Const, _Views...> ;
template <input_range... _Views>
  requires(view<_Views> && ...) && (sizeof...(_Views) > 0)
template <bool _Const>
class zip_view<_Views...>::__iterator : public __zip_view_iterator_category_base<_Const, _Views...> {
  tuple<iterator_t<__maybe_const<_Const, _Views>>...> __current_;
  using iterator_concept = decltype(ranges::__get_zip_view_iterator_tag<_Const, _Views...>);
  using value_type = tuple<range_value_t<__maybe_const<_Const, _Views>>...>;
  using difference_type = common_type_t<range_difference_t<__maybe_const<_Const, _Views>>...>;
};
template <input_range... _Views>
  requires(view<_Views> && ...) && (sizeof...(_Views) > 0)
template <bool _Const>
class zip_view<_Views...>::__sentinel {
  tuple<sentinel_t<__maybe_const<_Const, _Views>>...> __end_;
  friend class zip_view<_Views...>;
  template <bool _OtherConst>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static constexpr decltype(auto)
  __iter_current(zip_view<_Views...>::__iterator<_OtherConst> const& __it) ;
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr __sentinel(__sentinel<!_Const> __i)
    requires _Const && (convertible_to<sentinel_t<_Views>, sentinel_t<__maybe_const<_Const, _Views>>> && ...)  ;
  template <bool _OtherConst>
    requires(sentinel_for<sentinel_t<__maybe_const<_Const, _Views>>, iterator_t<__maybe_const<_OtherConst, _Views>>> &&
             ...)
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator==(const __iterator<_OtherConst>& __x, const __sentinel& __y) {
    return ranges::__tuple_any_equals(__iter_current(__x), __y.__end_);
  }
  template <bool _OtherConst>
    requires(
        sized_sentinel_for<sentinel_t<__maybe_const<_Const, _Views>>, iterator_t<__maybe_const<_OtherConst, _Views>>> &&
        ...)
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr common_type_t<range_difference_t<__maybe_const<_OtherConst, _Views>>...>
  operator-(const __iterator<_OtherConst>& __x, const __sentinel& __y) {
    const auto __diffs = ranges::__tuple_zip_transform(minus<>(), __iter_current(__x), __y.__end_);
    return std::apply(
        [](auto... __ds) {
          using _Diff = common_type_t<range_difference_t<__maybe_const<_OtherConst, _Views>>...>;
          return ranges::min({_Diff(__ds)...}, [](auto __a, auto __b) {
            return ranges::__abs(__a) < ranges::__abs;
          });
        },
        __diffs);
  }
  template <bool _OtherConst>
    requires(
        sized_sentinel_for<sentinel_t<__maybe_const<_Const, _Views>>, iterator_t<__maybe_const<_OtherConst, _Views>>> &&
        ...)
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr common_type_t<range_difference_t<__maybe_const<_OtherConst, _Views>>...>
  operator-(const __sentinel& __y, const __iterator<_OtherConst>& __x) {
    return -(__x - __y);
  }
};
template <class... _Views>
inline constexpr bool enable_borrowed_range<zip_view<_Views...>> = (enable_borrowed_range<_Views> && ...);
namespace views {
namespace __zip {
struct __fn {
   ;
};
}
inline namespace __cpo {
inline constexpr auto zip = __zip::__fn{};
}
}
}
template <class _Iterator>
  requires _Iterator::__is_zip_view_iterator
struct __product_iterator_traits<_Iterator> ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _Container>
class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
{
#pragma GCC diagnostic pop
protected:
  _Container* container;
public:
  typedef output_iterator_tag iterator_category;
  typedef void value_type;
  typedef ptrdiff_t difference_type;
  typedef void pointer;
  typedef void reference;
  typedef _Container container_type;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr back_insert_iterator&
  operator=(const typename _Container::value_type& __value) ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr back_insert_iterator& operator*() ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr back_insert_iterator& operator++() ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr back_insert_iterator operator++(int) ;
};
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _Container>
class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
{
#pragma GCC diagnostic pop
protected:
  _Container* container;
public:
  typedef output_iterator_tag iterator_category;
  typedef void value_type;
  typedef ptrdiff_t difference_type;
  typedef void pointer;
  typedef void reference;
  typedef _Container container_type;
};
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Container>
using __insert_iterator_iter_t [[__gnu__::__nodebug__]] = ranges::iterator_t<_Container>;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _Container>
class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
{
#pragma GCC diagnostic pop
protected:
};
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _Tp, class _CharT = char, class _Traits = char_traits<_CharT>, class _Distance = ptrdiff_t>
class istream_iterator
    : public iterator<input_iterator_tag, _Tp, _Distance, const _Tp*, const _Tp&>
{
#pragma GCC diagnostic pop
public:
  typedef input_iterator_tag iterator_category;
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef basic_istream<_CharT, _Traits> istream_type;
private:
  istream_type* __in_stream_;
  _Tp __value_;
public:
  ;
};
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_streambuf;
using streambuf = basic_streambuf<char>;
using wstreambuf = basic_streambuf<wchar_t>;
template <class _CharT, class _Traits>
class [[_Clang::__preferred_name__(streambuf)]] [[_Clang::__preferred_name__(wstreambuf)]] basic_streambuf;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using ::mbstate_t __attribute__((__using_if_exists__));
} }
extern "C" {
typedef long unsigned int size_t;
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
;
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);
typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);
typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);
typedef int cookie_close_function_t (void *__cookie);
typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
typedef __off_t off_t;
typedef __off64_t off64_t;
typedef __ssize_t ssize_t;
typedef __fpos_t fpos_t;
typedef __fpos64_t fpos64_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
;
;
;
;
;
 ;
 ;
 ;
 ;
 ;
;
;
 ;
;
;
 ;
;
;
 ;
;
;
 ;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
 ;
                                     ;
                                     ;
struct obstack;
;
;
;
;
;
;
;
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using ::FILE __attribute__((__using_if_exists__));
using ::fpos_t __attribute__((__using_if_exists__));
using ::setbuf __attribute__((__using_if_exists__));
using ::setvbuf __attribute__((__using_if_exists__));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_filebuf;
template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_ifstream;
template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_ofstream;
template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_fstream;
using filebuf = basic_filebuf<char>;
using ifstream = basic_ifstream<char>;
using ofstream = basic_ofstream<char>;
using fstream = basic_fstream<char>;
using wfilebuf = basic_filebuf<wchar_t>;
using wifstream = basic_ifstream<wchar_t>;
using wofstream = basic_ofstream<wchar_t>;
using wfstream = basic_fstream<wchar_t>;
template <class _CharT, class _Traits>
class [[_Clang::__preferred_name__(filebuf)]] [[_Clang::__preferred_name__(wfilebuf)]] basic_filebuf;
template <class _CharT, class _Traits>
class [[_Clang::__preferred_name__(ifstream)]] [[_Clang::__preferred_name__(wifstream)]] basic_ifstream;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__("default"))) ios_base;
template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_ios;
using ios = basic_ios<char>;
using wios = basic_ios<wchar_t>;
template <class _CharT, class _Traits>
class [[_Clang::__preferred_name__(ios)]] [[_Clang::__preferred_name__(wios)]] basic_ios;
using streamoff = long long;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_ostream;
using ostream = basic_ostream<char>;
using wostream = basic_ostream<wchar_t>;
template <class _CharT, class _Traits>
class [[_Clang::__preferred_name__(ostream)]] [[_Clang::__preferred_name__(wostream)]] basic_ostream;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits = char_traits<_CharT>, class _Allocator = allocator<_CharT> >
class basic_stringbuf;
template <class _CharT, class _Traits = char_traits<_CharT>, class _Allocator = allocator<_CharT> >
class basic_istringstream;
template <class _CharT, class _Traits = char_traits<_CharT>, class _Allocator = allocator<_CharT> >
class basic_ostringstream;
template <class _CharT, class _Traits = char_traits<_CharT>, class _Allocator = allocator<_CharT> >
class basic_stringstream;
using stringbuf = basic_stringbuf<char>;
using istringstream = basic_istringstream<char>;
using ostringstream = basic_ostringstream<char>;
using stringstream = basic_stringstream<char>;
using wstringbuf = basic_stringbuf<wchar_t>;
using wistringstream = basic_istringstream<wchar_t>;
using wostringstream = basic_ostringstream<wchar_t>;
using wstringstream = basic_stringstream<wchar_t>;
template <class _CharT, class _Traits, class _Allocator>
class [[_Clang::__preferred_name__(stringbuf)]] [[_Clang::__preferred_name__(wstringbuf)]] basic_stringbuf;
template <class _CharT, class _Traits, class _Allocator>
class [[_Clang::__preferred_name__(istringstream)]]
    [[_Clang::__preferred_name__(wistringstream)]] basic_istringstream;
template <class _CharT, class _Traits, class _Allocator>
class [[_Clang::__preferred_name__(ostringstream)]]
    [[_Clang::__preferred_name__(wostringstream)]] basic_ostringstream;
template <class _CharT, class _Traits, class _Allocator>
class [[_Clang::__preferred_name__(stringstream)]]
    [[_Clang::__preferred_name__(wstringstream)]] basic_stringstream;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits = char_traits<_CharT> >
class istreambuf_iterator;
template <class _CharT, class _Traits = char_traits<_CharT> >
class ostreambuf_iterator;
template <class _State>
class fpos;
typedef fpos<mbstate_t> streampos;
typedef fpos<mbstate_t> wstreampos;
typedef fpos<mbstate_t> u8streampos;
typedef fpos<mbstate_t> u16streampos;
typedef fpos<mbstate_t> u32streampos;
template <class _CharT, class _Traits>
class __save_flags {
  typedef basic_ios<_CharT, _Traits> __stream_type;
  typedef typename __stream_type::fmtflags fmtflags;
  __stream_type& __stream_;
  fmtflags __fmtflags_;
  _CharT __fill_;
public:
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT>
struct char_traits;
template <>
struct char_traits<char> {
  using char_type = char;
  using int_type = int;
  using off_type = streamoff;
  using pos_type = streampos;
  using state_type = mbstate_t;
  using comparison_category = strong_ordering;
  static inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void
  assign(char_type& __c1, const char_type& __c2) noexcept {
    __c1 = __c2;
  }
  static inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) size_t constexpr length(const char_type* __s) noexcept {
    return std::__constexpr_strlen(__s);
  }
  static inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr char_type*
  copy(char_type* __s1, const char_type* __s2, size_t __n) noexcept ;
};
template <class _CharT, class _IntT, _IntT _EOFVal>
struct __char_traits_base {
  using char_type = _CharT;
  using int_type = _IntT;
  using off_type = streamoff;
  using state_type = mbstate_t;
  using comparison_category = strong_ordering;
  using pos_type = fpos<mbstate_t>;
};
template <>
struct char_traits<wchar_t> : __char_traits_base<wchar_t, wint_t, static_cast<wint_t>((0xffffffffu))> {
};
template <>
struct char_traits<char8_t> : __char_traits_base<char8_t, unsigned int, static_cast<unsigned int>((-1))> {
  static __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr int
  compare(const char_type* __s1, const char_type* __s2, size_t __n) noexcept {
    return std::__constexpr_memcmp(__s1, __s2, __element_count(__n));
  }
  static __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_t length(const char_type* __str) noexcept {
    return std::__constexpr_strlen(__str);
  }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static constexpr const char_type*
  find(const char_type* __s, size_t __n, const char_type& __a) noexcept {
    return std::__constexpr_memchr(__s, __a, __n);
  }
};
template <>
struct char_traits<char16_t> : __char_traits_base<char16_t, uint_least16_t, static_cast<uint_least16_t>(0xFFFF)> {
  ;
  ;
};
template <>
struct char_traits<char32_t> : __char_traits_base<char32_t, uint_least32_t, static_cast<uint_least32_t>(0xFFFFFFFF)> {
  ;
  ;
};
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _CharT, class _Traits>
class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type, _CharT*, _CharT>
{
#pragma GCC diagnostic pop
  typedef _CharT* pointer;
  typedef _CharT reference;
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename _Traits::int_type int_type;
  typedef basic_streambuf<_CharT, _Traits> streambuf_type;
  typedef basic_istream<_CharT, _Traits> istream_type;
private:
  mutable streambuf_type* __sbuf_;
  class __proxy {
    char_type __keep_;
    streambuf_type* __sbuf_;
    friend class istreambuf_iterator;
  public:
  };
public:
};
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _Tp, class _CharT = char, class _Traits = char_traits<_CharT> >
class ostream_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
{
#pragma GCC diagnostic pop
public:
  typedef output_iterator_tag iterator_category;
  typedef void value_type;
  typedef ptrdiff_t difference_type;
  typedef void pointer;
  typedef void reference;
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef basic_ostream<_CharT, _Traits> ostream_type;
private:
  ostream_type* __out_stream_;
  const char_type* __delim_;
public:
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _CharT, class _Traits>
class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
{
#pragma GCC diagnostic pop
public:
  typedef output_iterator_tag iterator_category;
  typedef void value_type;
  typedef ptrdiff_t difference_type;
  typedef void pointer;
  typedef void reference;
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef basic_streambuf<_CharT, _Traits> streambuf_type;
  typedef basic_ostream<_CharT, _Traits> ostream_type;
private:
  streambuf_type* __sbuf_;
public:
  ;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Input1,
          class _Input2,
          class _Output,
          class _Comp = ranges::less,
          class _Proj1 = identity,
          class _Proj2 = identity>
concept mergeable =
    input_iterator<_Input1> && input_iterator<_Input2> && weakly_incrementable<_Output> &&
    indirectly_copyable<_Input1, _Output> && indirectly_copyable<_Input2, _Output> &&
    indirect_strict_weak_order<_Comp, projected<_Input1, _Proj1>, projected<_Input2, _Proj2>>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iterator>
concept permutable =
    forward_iterator<_Iterator> && indirectly_movable_storable<_Iterator, _Iterator> &&
    indirectly_swappable<_Iterator, _Iterator>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iter, class _Comp = ranges::less, class _Proj = identity>
concept sortable = permutable<_Iter> && indirect_strict_weak_order<_Comp, projected<_Iter, _Proj>>;
} }
extern "C" ;
extern "C" ;
extern "C" {
typedef __builtin_va_list va_list;
extern "C" ;
extern "C" {
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __ino64_t ino64_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __pid_t pid_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __clock_t clock_t;
typedef __clockid_t clockid_t;
typedef __time_t time_t;
typedef __timer_t timer_t;
typedef __useconds_t useconds_t;
typedef __suseconds_t suseconds_t;
typedef long unsigned int size_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;
typedef int register_t __attribute__ ((__mode__ (__word__)));
;
;
;
;
;
;
typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef __fsfilcnt64_t fsfilcnt64_t;
typedef union
{
  __extension__ unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
typedef struct __pthread_internal_slist
 __pthread_slist_t;
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;
  unsigned int __nusers;
  int __kind;
  short __spins;
  short __elision;
  __pthread_list_t __list;
};
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned long int __pad2;
  unsigned int __flags;
};
struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_size[2] ;
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
  unsigned int __unused_initialized_1;
  unsigned int __unused_initialized_2;
};
typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;
typedef struct
{
  int __data ;
} __once_flag;
typedef unsigned long int pthread_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
;;
typedef union pthread_attr_t pthread_attr_t;
typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;
typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;
typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;
typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
}
extern "C" {
struct udev;
;
;
;
;
;
;
;
;
struct udev_list_entry;
;
;
;
;
struct udev_device;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
}
typedef long unsigned int size_t;
extern "C" 
extern "C++" 
struct libinput;
struct libinput_event_touch;
struct libinput_event_gesture;
struct libinput_event_tablet_tool;
struct libinput_event_tablet_pad;
enum libinput_log_priority {
 LIBINPUT_LOG_PRIORITY_DEBUG = 10,
 LIBINPUT_LOG_PRIORITY_INFO = 20,
 LIBINPUT_LOG_PRIORITY_ERROR = 30,
};
enum libinput_device_capability {
 LIBINPUT_DEVICE_CAP_KEYBOARD = 0,
 LIBINPUT_DEVICE_CAP_POINTER = 1,
 LIBINPUT_DEVICE_CAP_TOUCH = 2,
 LIBINPUT_DEVICE_CAP_TABLET_TOOL = 3,
 LIBINPUT_DEVICE_CAP_TABLET_PAD = 4,
 LIBINPUT_DEVICE_CAP_GESTURE = 5,
 LIBINPUT_DEVICE_CAP_SWITCH = 6,
};
enum libinput_key_state {
 LIBINPUT_KEY_STATE_RELEASED = 0,
 LIBINPUT_KEY_STATE_PRESSED = 1
};
enum libinput_led {
 LIBINPUT_LED_NUM_LOCK = (1 << 0),
 LIBINPUT_LED_CAPS_LOCK = (1 << 1),
 LIBINPUT_LED_SCROLL_LOCK = (1 << 2),
 LIBINPUT_LED_COMPOSE = (1 << 3),
 LIBINPUT_LED_KANA = (1 << 4)
};
enum libinput_button_state {
 LIBINPUT_BUTTON_STATE_RELEASED = 0,
 LIBINPUT_BUTTON_STATE_PRESSED = 1
};
enum libinput_pointer_axis {
 LIBINPUT_POINTER_AXIS_SCROLL_VERTICAL = 0,
 LIBINPUT_POINTER_AXIS_SCROLL_HORIZONTAL = 1,
};
enum libinput_pointer_axis_source {
 LIBINPUT_POINTER_AXIS_SOURCE_WHEEL = 1,
 LIBINPUT_POINTER_AXIS_SOURCE_FINGER,
 LIBINPUT_TABLET_PAD_STRIP_SOURCE_UNKNOWN = 1,
 LIBINPUT_TABLET_PAD_STRIP_SOURCE_FINGER,
};
enum libinput_tablet_tool_type {
 LIBINPUT_TABLET_TOOL_TYPE_PEN = 1,
 LIBINPUT_TABLET_TOOL_TYPE_ERASER,
 LIBINPUT_TABLET_TOOL_TYPE_BRUSH,
 LIBINPUT_TABLET_TOOL_TYPE_PENCIL,
 LIBINPUT_TABLET_TOOL_TYPE_AIRBRUSH,
 LIBINPUT_TABLET_TOOL_TYPE_MOUSE,
 LIBINPUT_TABLET_TOOL_TYPE_LENS,
 LIBINPUT_TABLET_TOOL_TYPE_TOTEM,
};
enum libinput_tablet_tool_proximity_state {
 LIBINPUT_TABLET_TOOL_PROXIMITY_STATE_OUT = 0,
 LIBINPUT_TABLET_TOOL_PROXIMITY_STATE_IN = 1,
};
enum libinput_tablet_tool_tip_state {
 LIBINPUT_EVENT_POINTER_MOTION_ABSOLUTE,
 LIBINPUT_EVENT_POINTER_BUTTON,
 LIBINPUT_EVENT_POINTER_AXIS,
 LIBINPUT_EVENT_POINTER_SCROLL_WHEEL,
 LIBINPUT_EVENT_POINTER_SCROLL_FINGER,
 LIBINPUT_EVENT_POINTER_SCROLL_CONTINUOUS,
 LIBINPUT_EVENT_TOUCH_DOWN = 500,
 LIBINPUT_EVENT_TOUCH_UP,
 LIBINPUT_EVENT_TOUCH_MOTION,
 LIBINPUT_EVENT_TOUCH_CANCEL,
 LIBINPUT_EVENT_TOUCH_FRAME,
 LIBINPUT_EVENT_TABLET_TOOL_AXIS = 600,
 LIBINPUT_EVENT_TABLET_TOOL_PROXIMITY,
 LIBINPUT_EVENT_TABLET_TOOL_TIP,
 LIBINPUT_EVENT_GESTURE_SWIPE_END,
 LIBINPUT_EVENT_GESTURE_PINCH_BEGIN,
 LIBINPUT_EVENT_GESTURE_PINCH_UPDATE,
 LIBINPUT_EVENT_GESTURE_PINCH_END,
 LIBINPUT_EVENT_GESTURE_HOLD_BEGIN,
 LIBINPUT_EVENT_GESTURE_HOLD_END,
 LIBINPUT_EVENT_SWITCH_TOGGLE = 900,
};
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t __glibc_reserved1[7];
};
struct _fpreg
;
struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short __glibc_reserved1[3];
};
struct _xmmreg
{
  __uint32_t element[4];
};
struct _fpstate
{
  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};
struct sigcontext
;
struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t __glibc_reserved1[2];
  __uint64_t __glibc_reserved2[5];
};
struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};
struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
;
typedef long unsigned int size_t;
typedef long unsigned int size_t;
typedef struct
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
__extension__ typedef long long int greg_t;
typedef greg_t gregset_t[23];
enum
{
  REG_R8 = 0,
  REG_R9,
  REG_R10,
  REG_R11,
  REG_R12,
  REG_R13,
  REG_R14,
  REG_R15,
  REG_RIP,
  REG_EFL,
  REG_CSGSFS,
  REG_ERR,
  REG_TRAPNO,
  REG_OLDMASK,
  REG_CR2
};
struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int __glibc_reserved1[3];
};
struct _libc_xmmreg
{
  __uint32_t element[4];
};
struct _libc_fpstate
{
  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};
typedef struct _libc_fpstate *fpregset_t;
typedef struct
  {
    gregset_t gregs;
    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;
typedef struct ucontext_t
  ; ucontext_t;
;
extern "C" {
typedef long unsigned int size_t;
typedef __socklen_t socklen_t;
;
;
;
;
 ;
;
;
;
;
                                                  ;
                                         ;
                                                  ;
                                         ;
                                                  ;
                                         ;
 ;
 ;
;
;
;
;
;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
;
                                       ;
extern char **environ;
;
;
;
;
 ;
;
enum
  {
    _PC_LINK_MAX,
    _PC_MAX_CANON,
    _PC_MAX_INPUT,
    _PC_NAME_MAX,
    _PC_PATH_MAX,
    _PC_PIPE_BUF,
    _PC_CHOWN_RESTRICTED,
    _PC_NO_TRUNC,
    _PC_VDISABLE,
    _PC_SYNC_IO,
    _PC_ASYNC_IO,
    _PC_PRIO_IO,
    _PC_SOCK_MAXBUF,
    _PC_FILESIZEBITS,
    _PC_REC_INCR_XFER_SIZE,
    _PC_REC_MAX_XFER_SIZE,
    _PC_REC_MIN_XFER_SIZE,
    _PC_REC_XFER_ALIGN,
    _PC_ALLOC_SIZE_MIN,
    _PC_SYMLINK_MAX,
    _PC_2_SYMLINKS
  };
enum
  {
    _SC_ARG_MAX,
    _SC_CHILD_MAX,
    _SC_CLK_TCK,
    _SC_TIMER_MAX,
    _SC_BC_BASE_MAX,
    _SC_BC_DIM_MAX,
    _SC_BC_SCALE_MAX,
    _SC_BC_STRING_MAX,
    _SC_COLL_WEIGHTS_MAX,
    _SC_EQUIV_CLASS_MAX,
    _SC_EXPR_NEST_MAX,
    _SC_LINE_MAX,
    _SC_RE_DUP_MAX,
    _SC_CHARCLASS_NAME_MAX,
    _SC_2_VERSION,
    _SC_2_C_BIND,
    _SC_2_C_DEV,
    _SC_2_FORT_DEV,
    _SC_2_FORT_RUN,
    _SC_2_SW_DEV,
    _SC_2_LOCALEDEF,
    _SC_PII,
    _SC_PII_XTI,
    _SC_PII_SOCKET,
    _SC_PII_INTERNET,
    _SC_PII_OSI,
    _SC_POLL,
    _SC_SELECT,
    _SC_UIO_MAXIOV,
    _SC_IOV_MAX = _SC_UIO_MAXIOV,
    _SC_PII_INTERNET_STREAM,
    _SC_PII_INTERNET_DGRAM,
    _SC_PII_OSI_COTS,
    _SC_PII_OSI_CLTS,
    _SC_PII_OSI_M,
    _SC_T_IOV_MAX,
    _SC_THREADS,
    _SC_THREAD_SAFE_FUNCTIONS,
    _SC_GETGR_R_SIZE_MAX,
    _SC_GETPW_R_SIZE_MAX,
    _SC_LOGIN_NAME_MAX,
    _SC_TTY_NAME_MAX,
    _SC_THREAD_DESTRUCTOR_ITERATIONS,
    _SC_THREAD_KEYS_MAX,
    _SC_THREAD_STACK_MIN,
    _SC_THREAD_THREADS_MAX,
    _SC_THREAD_ATTR_STACKADDR,
    _SC_THREAD_ATTR_STACKSIZE,
    _SC_THREAD_PRIORITY_SCHEDULING,
    _SC_THREAD_PRIO_INHERIT,
    _SC_THREAD_PRIO_PROTECT,
    _SC_THREAD_PROCESS_SHARED,
    _SC_NPROCESSORS_CONF,
    _SC_NPROCESSORS_ONLN,
    _SC_PHYS_PAGES,
    _SC_AVPHYS_PAGES,
    _SC_ATEXIT_MAX,
    _SC_PASS_MAX,
    _SC_XOPEN_VERSION,
    _SC_XOPEN_XCU_VERSION,
    _SC_XOPEN_UNIX,
    _SC_XOPEN_CRYPT,
    _SC_XOPEN_ENH_I18N,
    _SC_XOPEN_SHM,
    _SC_2_CHAR_TERM,
    _SC_2_C_VERSION,
    _SC_2_UPE,
    _SC_XOPEN_XPG2,
    _SC_XOPEN_XPG3,
    _SC_XOPEN_XPG4,
    _SC_CHAR_BIT,
    _SC_CHAR_MAX,
    _SC_CHAR_MIN,
    _SC_INT_MAX,
    _SC_INT_MIN,
    _SC_LONG_BIT,
    _SC_WORD_BIT,
    _SC_MB_LEN_MAX,
    _SC_NZERO,
    _SC_SSIZE_MAX,
    _SC_SCHAR_MAX,
    _SC_SCHAR_MIN,
    _SC_SHRT_MAX,
    _SC_SHRT_MIN,
    _SC_UCHAR_MAX,
    _SC_UINT_MAX,
    _SC_ULONG_MAX,
    _SC_USHRT_MAX,
    _SC_NL_ARGMAX,
    _SC_NL_LANGMAX,
    _SC_NL_MSGMAX,
    _SC_NL_NMAX,
    _SC_NL_SETMAX,
    _SC_NL_TEXTMAX,
    _SC_XBS5_ILP32_OFF32,
    _SC_XBS5_ILP32_OFFBIG,
    _SC_XBS5_LP64_OFF64,
    _SC_XBS5_LPBIG_OFFBIG,
    _SC_XOPEN_LEGACY,
    _SC_XOPEN_REALTIME,
    _SC_XOPEN_REALTIME_THREADS,
    _SC_ADVISORY_INFO,
    _SC_BARRIERS,
    _SC_BASE,
    _SC_C_LANG_SUPPORT,
    _SC_C_LANG_SUPPORT_R,
    _SC_CLOCK_SELECTION,
    _SC_CPUTIME,
    _SC_THREAD_CPUTIME,
    _SC_DEVICE_IO,
    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,
    _CS_V6_ENV,
    _CS_V7_ENV
  };
;
;
;
                                                  ;
;
;
;
;
;
;
;
;
;
;
;
;
;
                                                  ;
;
 ;
 ;
 ;
 ;
 ;
 ;
;
;
 ;
 ;
;
;
;
;
                                                   ;
;
;
 ;
 ;
 ;
                                                   ;
 ;
                                                   ;
;
;
;
;
;
;
 ;
 ;
;
;
;
;
;
;
;
 ;
 ;
 ;
 ;
 ;
;
;
 ;
 ;
;
;
;
                                          ;
                                          ;
;
;
}
enum
{
  SS_ONSTACK = 1,
  SS_DISABLE
};
;
struct sigstack
  ;;
;
;
;
;
;
;
;
;
;
;
;
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using ::sig_atomic_t __attribute__((__using_if_exists__));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using ::div_t __attribute__((__using_if_exists__));
using ::ldiv_t __attribute__((__using_if_exists__));
using ::lldiv_t __attribute__((__using_if_exists__));
} }
extern "C" 
typedef long unsigned int size_t;
struct timex
;;
extern "C" ;
struct tm
;;
struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
struct sigevent;
extern "C" {
;
;
extern long int __timezone;
extern char *tzname[2];
;
extern int daylight;
extern long int timezone;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
extern int getdate_err;
;
;
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using ::clock_t __attribute__((__using_if_exists__));
using ::time_t __attribute__((__using_if_exists__));
using ::tm __attribute__((__using_if_exists__));
using ::timespec __attribute__((__using_if_exists__));
} }
extern "C" 
extern "C++" {
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
[[__nodiscard__]]
[[__nodiscard__]]
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
[[__nodiscard__]]
 ;
[[__nodiscard__]]
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
[[__nodiscard__]]
 ;
[[__nodiscard__]]
 ;
[[__nodiscard__]]
 ;
[[__nodiscard__]]
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
[[__nodiscard__]]
 ;
[[__nodiscard__]]
 ;
 ;
 ;
 ;
 ;
[[__nodiscard__]]
 ;
[[__nodiscard__]]
 ;
[[__nodiscard__]]
 ;
[[__nodiscard__]]
 ;
[[__nodiscard__]]
 ;
[[__nodiscard__]]
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __math {
 ;
 ;
 ;
 ;
}
} }
}
typedef long int ptrdiff_t;
typedef long unsigned int size_t;
extern "C" 
extern "C" {
struct wl_object;
struct wl_message ;
struct wl_interface ;;
struct wl_list {
 struct wl_list *prev;
 struct wl_list *next;
};
;
;
;
;
;
;
struct wl_array {
 size_t size;
 size_t alloc;
 void *data;
};
;
;
;
;
typedef int32_t wl_fixed_t;
;
;
;
;
union wl_argument ;
typedef int (*wl_dispatcher_func_t);
typedef void (*wl_log_func_t)(const char *fmt, va_list args) __attribute__((__format__(__printf__, 1, 0)));
enum wl_iterator_result {
 WL_ITERATOR_STOP,
 WL_ITERATOR_CONTINUE
};
}
extern "C" {
enum {
 WL_EVENT_READABLE = 0x01,
 WL_EVENT_WRITABLE = 0x02,
 WL_EVENT_HANGUP = 0x04,
 WL_EVENT_ERROR = 0x08
};
typedef int (*wl_event_loop_fd_func_t)(int fd, uint32_t mask, void *data);
typedef int (*wl_event_loop_timer_func_t)(void *data);
typedef int (*wl_event_loop_signal_func_t)(int signal_number, void *data);
typedef void (*wl_event_loop_idle_func_t)(void *data);
;
;
;
;
;
struct wl_event_source *
wl_event_loop_add_signal(struct wl_event_loop *loop,
    int signal_number,
    wl_event_loop_signal_func_t func,
    void *data);
;
;
;
;
;
;
;
struct wl_listener;
typedef void (*wl_notify_func_t)(struct wl_listener *listener, void *data);
;
;
;
;
;
;
;
;
;
;
;
;
;
struct wl_client;
typedef void (*wl_global_bind_func_t)(struct wl_client *client, void *data,
          uint32_t version, uint32_t id);
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
typedef enum wl_iterator_result (*wl_client_for_each_resource_iterator_func_t)(
      struct wl_resource *resource,
      void *user_data);
;
typedef void (*wl_user_data_destroy_func_t)(void *data);
;
;
;
struct wl_listener {
 struct wl_list link;
 wl_notify_func_t notify;
};
struct wl_signal {
 struct wl_list listener_list;
};
;
;
;
;
;
typedef void (*wl_resource_destroy_func_t)(struct wl_resource *resource);
;
;
;
;
;
;
enum wl_protocol_logger_type {
 WL_PROTOCOL_LOGGER_REQUEST,
 WL_PROTOCOL_LOGGER_EVENT,
};
struct wl_protocol_logger_message ;
typedef void (*wl_protocol_logger_func_t)(void *user_data,
       enum wl_protocol_logger_type direction,
       const struct wl_protocol_logger_message *message);
typedef int32_t khronos_int32_t;
typedef uint32_t khronos_uint32_t;
typedef int64_t khronos_int64_t;
typedef uint64_t khronos_uint64_t;
typedef signed char khronos_int8_t;
typedef unsigned char khronos_uint8_t;
typedef signed short int khronos_int16_t;
typedef unsigned short int khronos_uint16_t;
typedef signed long int khronos_intptr_t;
typedef unsigned long int khronos_uintptr_t;
typedef signed long int khronos_ssize_t;
typedef unsigned long int khronos_usize_t;
typedef float khronos_float_t;
typedef khronos_uint64_t khronos_utime_nanoseconds_t;
typedef khronos_int64_t khronos_stime_nanoseconds_t;
typedef enum {
    KHRONOS_FALSE = 0,
    KHRONOS_TRUE = 1,
    KHRONOS_BOOLEAN_ENUM_FORCE_SIZE = 0x7FFFFFFF
} khronos_boolean_enum_t;
typedef khronos_int8_t GLbyte;
typedef khronos_float_t GLclampf;
typedef khronos_int32_t GLfixed;
typedef khronos_int16_t GLshort;
typedef khronos_uint64_t GLuint64;
typedef unsigned int GLenum;
typedef unsigned int GLuint;
typedef char GLchar;
typedef khronos_float_t GLfloat;
typedef khronos_ssize_t GLsizeiptr;
typedef khronos_intptr_t GLintptr;
typedef unsigned int GLbitfield;
typedef int GLint;
typedef unsigned char GLboolean;
typedef int GLsizei;
typedef khronos_uint8_t GLubyte;
typedef void (* PFNGLACTIVETEXTUREPROC) (GLenum texture);
typedef void (* PFNGLSTENCILFUNCSEPARATEPROC) (GLenum face, GLenum func, GLint ref, GLuint mask);
typedef void (* PFNGLSTENCILMASKPROC) (GLuint mask);
typedef void (* PFNGLSTENCILMASKSEPARATEPROC) (GLenum face, GLuint mask);
typedef void (* PFNGLSTENCILOPPROC) (GLenum fail, GLenum zfail, GLenum zpass);
typedef void (* PFNGLSTENCILOPSEPARATEPROC) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (* PFNGLTEXIMAGE2DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (* PFNGLTEXPARAMETERFPROC) (GLenum target, GLenum pname, GLfloat param);
typedef void (* PFNGLTEXPARAMETERFVPROC) (GLenum target, GLenum pname, const GLfloat *params);
typedef void (* PFNGLTEXPARAMETERIPROC) (GLenum target, GLenum pname, GLint param);
typedef void (* PFNGLTEXPARAMETERIVPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void (* PFNGLTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (* PFNGLUNIFORM1FPROC) (GLint location, GLfloat v0);
typedef void (* PFNGLPROGRAMBINARYPROC) (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
typedef void (* PFNGLPROGRAMPARAMETERIPROC) (GLuint program, GLenum pname, GLint value);
typedef void (* PFNGLINVALIDATEFRAMEBUFFERPROC) (GLenum target, GLsizei numAttachments, const GLenum *attachments);
typedef void (* PFNGLINVALIDATESUBFRAMEBUFFERPROC) (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (* PFNGLTEXSTORAGE2DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (* PFNGLTEXSTORAGE3DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (* PFNGLGETINTERNALFORMATIVPROC) (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params);
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
typedef void (* PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (* PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
typedef void (* PFNGLFRAMEBUFFERTEXTUREPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (* PFNGLPRIMITIVEBOUNDINGBOXPROC) (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
typedef void (* PFNGLGETNUNIFORMUIVPROC) (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
typedef void (* PFNGLMINSAMPLESHADINGPROC) (GLfloat value);
typedef void (* PFNGLPATCHPARAMETERIPROC) (GLenum pname, GLint value);
typedef void (* PFNGLTEXPARAMETERIIVPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void (* PFNGLTEXPARAMETERIUIVPROC) (GLenum target, GLenum pname, const GLuint *params);
typedef void (* PFNGLGETTEXPARAMETERIIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (* PFNGLGETTEXPARAMETERIUIVPROC) (GLenum target, GLenum pname, GLuint *params);
typedef void (* PFNGLSAMPLERPARAMETERIIVPROC) (GLuint sampler, GLenum pname, const GLint *param);
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
}
typedef long int ptrdiff_t;
typedef long unsigned int size_t;
extern "C" ;
extern "C" {
struct wl_client;
struct wl_resource;
struct wl_buffer;
struct wl_callback;
struct wl_compositor;
struct wl_data_device;
struct wl_data_device_manager;
struct wl_data_offer;
struct wl_data_source;
struct wl_display;
struct wl_fixes;
struct wl_keyboard;
struct wl_output;
struct wl_pointer;
struct wl_region;
struct wl_registry;
struct wl_seat;
extern const struct wl_interface wl_keyboard_interface;
extern const struct wl_interface wl_touch_interface;
extern const struct wl_interface wl_output_interface;
extern const struct wl_interface wl_region_interface;
extern const struct wl_interface wl_subcompositor_interface;
extern const struct wl_interface wl_subsurface_interface;
extern const struct wl_interface wl_fixes_interface;
enum wl_display_error {
};
 ;
struct wl_display_interface ;
;
;
;
struct wl_compositor_interface ;;
struct wl_shm_pool_interface ;;
enum wl_shm_error {
 WL_SHM_ERROR_INVALID_FORMAT = 0,
 WL_SHM_FORMAT_R16 = 0x20363152,
 WL_SHM_FORMAT_RG88 = 0x38384752,
 WL_SHM_FORMAT_GR88 = 0x38385247,
 WL_SHM_FORMAT_RG1616 = 0x32334752,
 WL_SHM_FORMAT_GR1616 = 0x32335247,
 WL_SHM_FORMAT_XRGB16161616F = 0x48345258,
 WL_SHM_FORMAT_XBGR16161616F = 0x48344258,
 WL_SHM_FORMAT_ARGB16161616F = 0x48345241,
 WL_SHM_FORMAT_ABGR16161616F = 0x48344241,
 WL_SHM_FORMAT_XYUV8888 = 0x56555958,
 WL_SHM_FORMAT_VUY888 = 0x34325556,
 WL_SHM_FORMAT_VUY101010 = 0x30335556,
 WL_SHM_FORMAT_Y210 = 0x30313259,
 WL_SHM_FORMAT_Y212 = 0x32313259,
 WL_SHM_FORMAT_Y216 = 0x36313259,
 WL_SHM_FORMAT_Y410 = 0x30313459,
 WL_SHM_FORMAT_Y412 = 0x32313459,
 WL_SHM_FORMAT_Y416 = 0x36313459,
 WL_SHM_FORMAT_XVYU2101010 = 0x30335658,
 WL_SHM_FORMAT_XVYU12_16161616 = 0x36335658,
 WL_SHM_FORMAT_XVYU16161616 = 0x38345658,
 WL_SHM_FORMAT_Y0L0 = 0x304c3059,
 WL_SHM_FORMAT_X0L0 = 0x304c3058,
 WL_SHM_FORMAT_Y0L2 = 0x324c3059,
 WL_SHM_FORMAT_X0L2 = 0x324c3058,
 WL_SHM_FORMAT_YUV420_8BIT = 0x38305559,
 WL_SHM_FORMAT_YUV420_10BIT = 0x30315559,
 WL_SHM_FORMAT_XRGB8888_A8 = 0x38415258,
 WL_SHM_FORMAT_XBGR8888_A8 = 0x38414258,
 WL_SHM_FORMAT_RGBX8888_A8 = 0x38415852,
 WL_SHM_FORMAT_BGRX8888_A8 = 0x38415842,
 WL_SHM_FORMAT_RGB888_A8 = 0x38413852,
 WL_SHM_FORMAT_BGR888_A8 = 0x38413842,
 WL_SHM_FORMAT_RGB565_A8 = 0x38413552,
 WL_SHM_FORMAT_BGR565_A8 = 0x38413542,
 WL_SHM_FORMAT_NV24 = 0x3432564e,
 WL_SHM_FORMAT_NV42 = 0x3234564e,
 WL_SHM_FORMAT_P210 = 0x30313250,
 WL_SHM_FORMAT_P010 = 0x30313050,
 WL_SHM_FORMAT_P012 = 0x32313050,
 WL_SHM_FORMAT_P016 = 0x36313050,
 WL_SHM_FORMAT_AXBXGXRX106106106106 = 0x30314241,
 WL_SHM_FORMAT_NV15 = 0x3531564e,
 WL_SHM_FORMAT_Q410 = 0x30313451,
 WL_SHM_FORMAT_Q401 = 0x31303451,
 WL_SHM_FORMAT_XRGB16161616 = 0x38345258,
 WL_SHM_FORMAT_XBGR16161616 = 0x38344258,
 WL_SHM_FORMAT_ARGB16161616 = 0x38345241,
 WL_SHM_FORMAT_ABGR16161616 = 0x38344241,
 WL_SHM_FORMAT_C1 = 0x20203143,
 WL_SHM_FORMAT_C2 = 0x20203243,
 WL_SHM_FORMAT_C4 = 0x20203443,
 WL_SHM_FORMAT_D1 = 0x20203144,
 WL_SHM_FORMAT_D2 = 0x20203244,
 WL_SHM_FORMAT_D4 = 0x20203444,
 WL_SHM_FORMAT_D8 = 0x20203844,
 WL_SHM_FORMAT_R1 = 0x20203152,
 WL_SHM_FORMAT_R2 = 0x20203252,
 WL_SHM_FORMAT_R4 = 0x20203452,
 WL_SHM_FORMAT_R10 = 0x20303152,
 WL_SHM_FORMAT_R12 = 0x20323152,
 WL_SHM_FORMAT_AVUY8888 = 0x59555641,
 WL_SHM_FORMAT_XVUY8888 = 0x59555658,
 WL_SHM_FORMAT_P030 = 0x30333050,
};
 ;
struct wl_shm_interface ;;
;
struct wl_buffer_interface ;;
;
enum wl_data_offer_error {
 WL_DATA_OFFER_ERROR_INVALID_FINISH = 0,
 WL_DATA_OFFER_ERROR_INVALID_ACTION_MASK = 1,
 WL_DATA_OFFER_ERROR_INVALID_ACTION = 2,
 WL_DATA_OFFER_ERROR_INVALID_OFFER = 3,
};
 ;
struct wl_data_offer_interface ;
;
;
;
enum wl_data_source_error {
 WL_DATA_SOURCE_ERROR_INVALID_ACTION_MASK = 0,
 WL_DATA_SOURCE_ERROR_INVALID_SOURCE = 1,
};
 ;
struct wl_data_source_interface ;
;
;
;
;
;
;
enum wl_data_device_error {
 WL_DATA_DEVICE_ERROR_ROLE = 0,
 WL_DATA_DEVICE_ERROR_USED_SOURCE = 1,
};
 ;
struct wl_data_device_interface ;;
;
;
;
;
;
;
enum wl_data_device_manager_dnd_action {
 WL_DATA_DEVICE_MANAGER_DND_ACTION_NONE = 0,
 WL_DATA_DEVICE_MANAGER_DND_ACTION_COPY = 1,
 WL_DATA_DEVICE_MANAGER_DND_ACTION_MOVE = 2,
 WL_DATA_DEVICE_MANAGER_DND_ACTION_ASK = 4,
};
 ;
struct wl_data_device_manager_interface ;
enum wl_shell_error {
 WL_SHELL_ERROR_ROLE = 0,
};
 ;
struct wl_shell_interface ;;
enum wl_shell_surface_resize {
 WL_SHELL_SURFACE_RESIZE_NONE = 0,
 WL_SHELL_SURFACE_RESIZE_TOP = 1,
 WL_SHELL_SURFACE_RESIZE_BOTTOM = 2,
 WL_SHELL_SURFACE_RESIZE_LEFT = 4,
 WL_SHELL_SURFACE_RESIZE_TOP_LEFT = 5,
 WL_SHELL_SURFACE_RESIZE_BOTTOM_LEFT = 6,
 WL_SHELL_SURFACE_RESIZE_RIGHT = 8,
 WL_SHELL_SURFACE_RESIZE_TOP_RIGHT = 9,
 WL_SHELL_SURFACE_RESIZE_BOTTOM_RIGHT = 10,
};
 ;
enum wl_shell_surface_fullscreen_method {
 WL_SHELL_SURFACE_FULLSCREEN_METHOD_DEFAULT = 0,
 WL_SHELL_SURFACE_FULLSCREEN_METHOD_SCALE = 1,
 WL_SHELL_SURFACE_FULLSCREEN_METHOD_DRIVER = 2,
 WL_SHELL_SURFACE_FULLSCREEN_METHOD_FILL = 3,
};
 ;
struct wl_shell_surface_interface {
 void (*pong)(struct wl_client *client,
       struct wl_resource *resource,
       uint32_t serial);
 void (*move)(struct wl_client *client,
       struct wl_resource *resource,
       struct wl_resource *seat,
       uint32_t serial);
 void (*resize)(struct wl_client *client,
         struct wl_resource *resource,
         struct wl_resource *seat,
         uint32_t serial,
         uint32_t edges);
 void (*set_toplevel)(struct wl_client *client,
        struct wl_resource *resource);
 void (*set_transient)(struct wl_client *client,
         struct wl_resource *resource,
         struct wl_resource *parent,
         int32_t x,
         int32_t y,
         uint32_t flags);
 void (*set_fullscreen)(struct wl_client *client,
          struct wl_resource *resource,
          uint32_t method,
          uint32_t framerate,
          struct wl_resource *output);
 void (*set_popup)(struct wl_client *client,
     struct wl_resource *resource,
     struct wl_resource *seat,
     uint32_t serial,
     struct wl_resource *parent,
     int32_t x,
     int32_t y,
     uint32_t flags);
 void (*set_maximized)(struct wl_client *client,
         struct wl_resource *resource,
         struct wl_resource *output);
 void (*set_title)(struct wl_client *client,
     struct wl_resource *resource,
     const char *title);
 void (*set_class)(struct wl_client *client,
     struct wl_resource *resource,
     const char *class_);
};
;
;
;
enum wl_surface_error {
 WL_SURFACE_ERROR_DEFUNCT_ROLE_OBJECT = 4,
};
 ;
struct wl_surface_interface ;
;
;
;
;
enum wl_seat_capability {
 WL_SEAT_CAPABILITY_POINTER = 1,
 WL_SEAT_CAPABILITY_KEYBOARD = 2,
 WL_SEAT_CAPABILITY_TOUCH = 4,
};
 ;
enum wl_seat_error {
 WL_SEAT_ERROR_MISSING_CAPABILITY = 0,
};
 ;
struct wl_seat_interface ;;
;
;
enum wl_pointer_error {
 WL_POINTER_ERROR_ROLE = 0,
};
 ;
enum wl_pointer_button_state {
 WL_POINTER_BUTTON_STATE_RELEASED = 0,
 WL_POINTER_BUTTON_STATE_PRESSED = 1,
};
 ;
enum wl_pointer_axis {
 WL_POINTER_AXIS_VERTICAL_SCROLL = 0,
 WL_POINTER_AXIS_HORIZONTAL_SCROLL = 1,
};
 ;
enum wl_pointer_axis_source {
 WL_POINTER_AXIS_SOURCE_WHEEL = 0,
 WL_POINTER_AXIS_SOURCE_FINGER = 1,
 WL_POINTER_AXIS_SOURCE_CONTINUOUS = 2,
 WL_POINTER_AXIS_SOURCE_WHEEL_TILT = 3,
};
 ;
enum wl_pointer_axis_relative_direction {
 WL_POINTER_AXIS_RELATIVE_DIRECTION_IDENTICAL = 0,
 WL_POINTER_AXIS_RELATIVE_DIRECTION_INVERTED = 1,
};
 ;
struct wl_pointer_interface ;;
;
;
;
;
;
;
;
;
;
;
;
enum wl_keyboard_keymap_format {
 WL_KEYBOARD_KEYMAP_FORMAT_NO_KEYMAP = 0,
 WL_KEYBOARD_KEYMAP_FORMAT_XKB_V1 = 1,
};
 ;
enum wl_keyboard_key_state {
 WL_KEYBOARD_KEY_STATE_RELEASED = 0,
 WL_KEYBOARD_KEY_STATE_PRESSED = 1,
 WL_KEYBOARD_KEY_STATE_REPEATED = 2,
};
 ;
;
;
;
;
;
;
struct wl_touch_interface ;
;
;
;
;
;
;
;
enum wl_output_subpixel {
 WL_OUTPUT_SUBPIXEL_UNKNOWN = 0,
 WL_OUTPUT_SUBPIXEL_NONE = 1,
 WL_OUTPUT_SUBPIXEL_HORIZONTAL_RGB = 2,
 WL_OUTPUT_SUBPIXEL_HORIZONTAL_BGR = 3,
 WL_OUTPUT_SUBPIXEL_VERTICAL_RGB = 4,
 WL_OUTPUT_SUBPIXEL_VERTICAL_BGR = 5,
};
 ;
enum wl_output_transform {
 WL_OUTPUT_TRANSFORM_NORMAL = 0,
 WL_OUTPUT_TRANSFORM_90 = 1,
 WL_OUTPUT_TRANSFORM_180 = 2,
 WL_OUTPUT_TRANSFORM_270 = 3,
 WL_OUTPUT_TRANSFORM_FLIPPED = 4,
 WL_OUTPUT_TRANSFORM_FLIPPED_90 = 5,
 WL_OUTPUT_TRANSFORM_FLIPPED_180 = 6,
 WL_OUTPUT_TRANSFORM_FLIPPED_270 = 7,
};
 ;
enum wl_output_mode {
 WL_OUTPUT_MODE_CURRENT = 0x1,
 WL_OUTPUT_MODE_PREFERRED = 0x2,
};
 ;
struct wl_output_interface ;;
;
;
;
;
;
;
struct wl_region_interface ;;
enum wl_subcompositor_error {
 WL_SUBCOMPOSITOR_ERROR_BAD_SURFACE = 0,
 WL_SUBCOMPOSITOR_ERROR_BAD_PARENT = 1,
};
 ;
struct wl_subcompositor_interface ;;
enum wl_subsurface_error {
 WL_SUBSURFACE_ERROR_BAD_SURFACE = 0,
};
 ;
struct wl_subsurface_interface ;
struct wl_fixes_interface ;
}
extern "C" {
typedef int pixman_bool_t;
typedef int64_t pixman_fixed_32_32_t;
typedef pixman_fixed_32_32_t pixman_fixed_48_16_t;
typedef uint32_t pixman_fixed_1_31_t;
typedef uint32_t pixman_fixed_1_16_t;
typedef int32_t pixman_fixed_16_16_t;
typedef pixman_fixed_16_16_t pixman_fixed_t;
typedef struct pixman_color pixman_color_t;
typedef struct pixman_point_fixed pixman_point_fixed_t;
typedef struct pixman_line_fixed pixman_line_fixed_t;
typedef struct pixman_vector pixman_vector_t;
typedef struct pixman_transform pixman_transform_t;
struct pixman_color
;;
struct pixman_point_fixed
{
    pixman_fixed_t x;
    pixman_fixed_t y;
};
struct pixman_line_fixed
;
struct pixman_transform
;;
struct pixman_box16;
typedef union pixman_image pixman_image_t;
;
;
;
;
;
;
;
;
;
;
;
;
typedef struct pixman_f_transform pixman_f_transform_t;
typedef struct pixman_f_vector pixman_f_vector_t;
struct pixman_f_vector
;;
struct pixman_f_transform
;;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
typedef enum
{
    PIXMAN_REPEAT_NONE,
    PIXMAN_REPEAT_NORMAL,
    PIXMAN_REPEAT_PAD,
    PIXMAN_REPEAT_REFLECT
} pixman_repeat_t;
typedef enum
{
    PIXMAN_DITHER_NONE,
    PIXMAN_DITHER_FAST,
    PIXMAN_DITHER_GOOD,
    PIXMAN_DITHER_BEST,
    PIXMAN_DITHER_ORDERED_BAYER_8,
    PIXMAN_DITHER_ORDERED_BLUE_NOISE_64,
} pixman_dither_t;
typedef enum
{
    PIXMAN_FILTER_FAST,
    PIXMAN_FILTER_GOOD,
    PIXMAN_FILTER_BEST,
    PIXMAN_FILTER_NEAREST,
    PIXMAN_FILTER_BILINEAR,
    PIXMAN_FILTER_CONVOLUTION,
    PIXMAN_FILTER_SEPARABLE_CONVOLUTION
} pixman_filter_t;
typedef enum
{
    PIXMAN_OP_CLEAR = 0x00,
    PIXMAN_OP_SRC = 0x01,
    PIXMAN_OP_DST = 0x02,
    PIXMAN_OP_OVER = 0x03,
    PIXMAN_OP_OVER_REVERSE = 0x04,
    PIXMAN_OP_IN = 0x05,
    PIXMAN_OP_IN_REVERSE = 0x06,
    PIXMAN_OP_OUT = 0x07,
    PIXMAN_OP_OUT_REVERSE = 0x08,
    PIXMAN_OP_ATOP = 0x09,
    PIXMAN_OP_ATOP_REVERSE = 0x0a,
    PIXMAN_OP_XOR = 0x0b,
    PIXMAN_OP_ADD = 0x0c,
    PIXMAN_OP_SATURATE = 0x0d,
    PIXMAN_OP_DISJOINT_CLEAR = 0x10,
    PIXMAN_OP_DISJOINT_SRC = 0x11,
    PIXMAN_OP_DISJOINT_DST = 0x12,
    PIXMAN_OP_DISJOINT_OUT = 0x17,
    PIXMAN_OP_DISJOINT_OUT_REVERSE = 0x18,
    PIXMAN_OP_DISJOINT_ATOP = 0x19,
    PIXMAN_OP_DISJOINT_ATOP_REVERSE = 0x1a,
    PIXMAN_OP_DISJOINT_XOR = 0x1b,
    PIXMAN_OP_CONJOINT_CLEAR = 0x20,
    PIXMAN_OP_CONJOINT_SRC = 0x21,
    PIXMAN_OP_CONJOINT_DST = 0x22,
    PIXMAN_OP_CONJOINT_OVER = 0x23,
    PIXMAN_OP_CONJOINT_OVER_REVERSE = 0x24,
    PIXMAN_OP_CONJOINT_IN = 0x25,
    PIXMAN_OP_CONJOINT_IN_REVERSE = 0x26,
    PIXMAN_OP_CONJOINT_OUT = 0x27,
    PIXMAN_OP_CONJOINT_OUT_REVERSE = 0x28,
    PIXMAN_OP_CONJOINT_ATOP = 0x29,
    PIXMAN_OP_CONJOINT_ATOP_REVERSE = 0x2a,
    PIXMAN_OP_CONJOINT_XOR = 0x2b,
    PIXMAN_OP_MULTIPLY = 0x30,
    PIXMAN_OP_SCREEN = 0x31,
    PIXMAN_OP_OVERLAY = 0x32,
    PIXMAN_OP_DARKEN = 0x33,
    PIXMAN_OP_LIGHTEN = 0x34,
    PIXMAN_OP_COLOR_DODGE = 0x35,
    PIXMAN_OP_COLOR_BURN = 0x36,
    PIXMAN_OP_HARD_LIGHT = 0x37,
    PIXMAN_OP_SOFT_LIGHT = 0x38,
    PIXMAN_OP_DIFFERENCE = 0x39,
    PIXMAN_OP_EXCLUSION = 0x3a,
    PIXMAN_OP_HSL_HUE = 0x3b,
    PIXMAN_OP_HSL_SATURATION = 0x3c,
    PIXMAN_OP_HSL_COLOR = 0x3d,
    PIXMAN_OP_HSL_LUMINOSITY = 0x3e
} pixman_op_t;
typedef struct pixman_region16_data pixman_region16_data_t;
typedef struct pixman_box16 pixman_box16_t;
typedef struct pixman_rectangle16 pixman_rectangle16_t;
typedef struct pixman_region16 pixman_region16_t;
struct pixman_region16_data ;;
struct pixman_rectangle16
;;
struct pixman_box16
;;
struct pixman_region16
;
typedef enum
{
    PIXMAN_REGION_OUT,
    PIXMAN_REGION_IN,
    PIXMAN_REGION_PART
} pixman_region_overlap_t;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
typedef struct pixman_region32_data pixman_region32_data_t;
typedef struct pixman_box32 pixman_box32_t;
typedef struct pixman_rectangle32 pixman_rectangle32_t;
typedef struct pixman_region32 pixman_region32_t;
struct pixman_region32_data ;
struct pixman_rectangle32
;
struct pixman_box32
{
    int32_t x1, y1, x2, y2;
};
struct pixman_region32
{
    pixman_box32_t extents;
    pixman_region32_data_t *data;
};
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
typedef struct pixman_region64f_data pixman_region64f_data_t;
typedef struct pixman_box64f pixman_box64f_t;
typedef struct pixman_rectangle64f pixman_rectangle64f_t;
typedef struct pixman_region64f pixman_region64f_t;
struct pixman_region64f_data ;
struct pixman_box64f
{
    double x1, y1, x2, y2;
};
struct pixman_region64f
;;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
typedef struct pixman_indexed pixman_indexed_t;
typedef struct pixman_gradient_stop pixman_gradient_stop_t;
typedef struct pixman_trap pixman_trap_t;
typedef struct pixman_span_fix pixman_span_fix_t;
typedef struct pixman_triangle pixman_triangle_t;
struct pixman_edge
;
struct pixman_trapezoid
;
struct pixman_triangle
;;
struct pixman_span_fix
{
    pixman_fixed_t l, r, y;
};
struct pixman_trap
;;
;
;
;
;
;
;
;
;
;
;
;
;
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
template <class _Comp>
struct __debug_three_way_comp ;;
template <class _Comp>
using __three_way_comp_ref_type [[__gnu__::__nodebug__]] = _Comp&;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Alloc = allocator<_Tp> >
class vector;
template <class _Allocator>
class vector<bool, _Allocator>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _From, class _To>
struct __can_lower_copy_assignment_to_memmove ;;
template <class _From, class _To>
struct __can_lower_move_assignment_to_memmove ;;
 ;
 ;
template <class _InIter, class _OutIter>
struct __can_rewrap
    : integral_constant<bool, is_copy_constructible<_InIter>::value && is_copy_constructible<_OutIter>::value> {};
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
;
;
 ;
 ;
struct __copy_impl ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
;
template <class _AlgPolicy>
struct __move_impl ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
;
 ;
 ;
template <class _AlgPolicy>
struct __copy_backward_impl ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
;
template <class _AlgPolicy>
struct __move_backward_impl ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter1, class _OutIter1>
struct in_out_result ;
template <class _InIter, class _OutIter>
using copy_result = in_out_result<_InIter, _OutIter>;
struct __copy {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto copy = __copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Ip, class _Op>
using copy_n_result = in_out_result<_Ip, _Op>;
struct __copy_n {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto copy_n = __copy_n{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __format {
template <class _Container>
inline constexpr bool __enable_insertable = false;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _Tp>
using __pointer_member [[__gnu__::__nodebug__]] = typename _Tp::pointer;
template <class _Tp, class _Alloc>
using __pointer [[__gnu__::__nodebug__]] = __detected_or_t<_Tp*, __pointer_member, __libcpp_remove_reference_t<_Alloc> >;
template <class _Alloc, template <class> class _Alias, class _Ptr, class _Tp, class = void>
struct __rebind_or_alias_pointer {
  using type [[__gnu__::__nodebug__]] = typename pointer_traits<_Ptr>::template rebind<_Tp>;
};
template <class _Ptr, class _Alloc, class _Tp, template <class> class _Alias>
struct __rebind_or_alias_pointer<_Alloc, _Alias, _Ptr, _Tp, __void_t<_Alias<_Alloc> > > ;;
template <class _Alloc>
using __const_pointer_member [[__gnu__::__nodebug__]] = typename _Alloc::const_pointer;
template <class _Tp, class _Ptr, class _Alloc>
using __const_pointer_t [[__gnu__::__nodebug__]] =
    typename __rebind_or_alias_pointer<_Alloc, __const_pointer_member, _Ptr, const _Tp>::type;
#pragma GCC diagnostic pop
template <class _Alloc>
using __void_pointer_member [[__gnu__::__nodebug__]] = typename _Alloc::void_pointer;
template <class _Ptr, class _Alloc>
using __void_pointer_t [[__gnu__::__nodebug__]] =
    typename __rebind_or_alias_pointer<_Alloc, __void_pointer_member, _Ptr, void>::type;
template <class _Alloc>
using __const_void_pointer_member [[__gnu__::__nodebug__]] = typename _Alloc::const_void_pointer;
template <class _Ptr, class _Alloc>
using __const_void_pointer_t [[__gnu__::__nodebug__]] =
    typename __rebind_or_alias_pointer<_Alloc, __const_void_pointer_member, _Ptr, const void>::type;
template <class _Tp>
using __size_type_member [[__gnu__::__nodebug__]] = typename _Tp::size_type;
template <class _Alloc, class _DiffType>
using __size_type [[__gnu__::__nodebug__]] = __detected_or_t<__make_unsigned_t<_DiffType>, __size_type_member, _Alloc>;
template <class _Alloc, class _Ptr, class = void>
struct __alloc_traits_difference_type {
  using type [[__gnu__::__nodebug__]] = typename pointer_traits<_Ptr>::difference_type;
};
template <class _Alloc, class _Ptr>
struct __alloc_traits_difference_type<_Alloc, _Ptr, __void_t<typename _Alloc::difference_type> > {
  using type [[__gnu__::__nodebug__]] = typename _Alloc::difference_type;
};
template <class _Tp>
using __propagate_on_container_copy_assignment_member [[__gnu__::__nodebug__]] =
    typename _Tp::propagate_on_container_copy_assignment;
template <class _Alloc>
using __propagate_on_container_copy_assignment [[__gnu__::__nodebug__]] =
    __detected_or_t<false_type, __propagate_on_container_copy_assignment_member, _Alloc>;
template <class _Tp>
using __propagate_on_container_move_assignment_member [[__gnu__::__nodebug__]] =
    typename _Tp::propagate_on_container_move_assignment;
template <class _Alloc>
using __propagate_on_container_move_assignment [[__gnu__::__nodebug__]] =
    __detected_or_t<false_type, __propagate_on_container_move_assignment_member, _Alloc>;
template <class _Tp>
using __propagate_on_container_swap_member [[__gnu__::__nodebug__]] = typename _Tp::propagate_on_container_swap;
template <class _Alloc>
using __propagate_on_container_swap [[__gnu__::__nodebug__]] =
    __detected_or_t<false_type, __propagate_on_container_swap_member, _Alloc>;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _Tp>
using __is_always_equal_member [[__gnu__::__nodebug__]] = typename _Tp::is_always_equal;
template <class _Alloc>
using __is_always_equal [[__gnu__::__nodebug__]] =
    __detected_or_t<typename is_empty<_Alloc>::type, __is_always_equal_member, _Alloc>;
template <class _Tp, class _Up, class = void>
inline const bool __has_rebind_other_v = false;
template <class _Tp, class _Up>
inline const bool __has_rebind_other_v<_Tp, _Up, __void_t<typename _Tp::template rebind<_Up>::other> > = true;
template <class _Tp, class _Up, bool = __has_rebind_other_v<_Tp, _Up> >
struct __allocator_traits_rebind {
  static_assert(__has_rebind_other_v<_Tp, _Up>, "This allocator has to implement rebind");
  using type [[__gnu__::__nodebug__]] = typename _Tp::template rebind<_Up>::other;
};
template <template <class, class...> class _Alloc, class _Tp, class... _Args, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _Args...>, _Up, true> {
  using type [[__gnu__::__nodebug__]] = typename _Alloc<_Tp, _Args...>::template rebind<_Up>::other;
};
template <template <class, class...> class _Alloc, class _Tp, class... _Args, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _Args...>, _Up, false> {
  using type [[__gnu__::__nodebug__]] = _Alloc<_Up, _Args...>;
};
#pragma GCC diagnostic pop
template <class _Alloc, class _Tp>
using __allocator_traits_rebind_t [[__gnu__::__nodebug__]] = typename __allocator_traits_rebind<_Alloc, _Tp>::type;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _Alloc, class _SizeType, class _ConstVoidPtr, class = void>
inline const bool __has_allocate_hint_v = false;
template <class _Alloc, class _SizeType, class _ConstVoidPtr>
inline const bool __has_allocate_hint_v<
    _Alloc,
    _SizeType,
    _ConstVoidPtr,
    decltype((void)std::declval<_Alloc>().allocate(std::declval<_SizeType>(), std::declval<_ConstVoidPtr>()))> = true;
template <class, class _Alloc, class... _Args>
inline const bool __has_construct_impl = false;
template <class _Alloc, class... _Args>
inline const bool __has_construct_v = __has_construct_impl<void, _Alloc, _Args...>;
template <class _Alloc, class _Pointer, class = void>
inline const bool __has_destroy_v = false;
template <class _Alloc, class _Pointer>
inline const bool
    __has_destroy_v<_Alloc, _Pointer, decltype((void)std::declval<_Alloc>().destroy(std::declval<_Pointer>()))> = true;
template <class _Alloc, class = void>
inline const bool __has_max_size_v = false;
template <class _Alloc>
inline const bool __has_max_size_v<_Alloc, decltype((void)std::declval<_Alloc&>().max_size())> = true;
template <class _Alloc, class = void>
inline const bool __has_select_on_container_copy_construction_v = false;
template <class _Alloc>
inline const bool __has_select_on_container_copy_construction_v<
    _Alloc,
    decltype((void)std::declval<_Alloc>().select_on_container_copy_construction())> = true;
#pragma GCC diagnostic pop
template <class _Pointer, class _SizeType = size_t>
struct allocation_result ;;
;
template <class _Alloc>
struct allocator_traits {
  using allocator_type = _Alloc;
  using value_type = typename allocator_type::value_type;
  using pointer = __pointer<value_type, allocator_type>;
  using const_pointer = __const_pointer_t<value_type, pointer, allocator_type>;
  using void_pointer = __void_pointer_t<pointer, allocator_type>;
  using const_void_pointer = __const_void_pointer_t<pointer, allocator_type>;
  using difference_type = typename __alloc_traits_difference_type<allocator_type, pointer>::type;
  using size_type = __size_type<allocator_type, difference_type>;
  using propagate_on_container_copy_assignment = __propagate_on_container_copy_assignment<allocator_type>;
  using propagate_on_container_move_assignment = __propagate_on_container_move_assignment<allocator_type>;
  using propagate_on_container_swap = __propagate_on_container_swap<allocator_type>;
  using is_always_equal = __is_always_equal<allocator_type>;
  template <class _Tp>
  using rebind_alloc = __allocator_traits_rebind_t<allocator_type, _Tp>;
  template <class _Tp>
  using rebind_traits = allocator_traits<rebind_alloc<_Tp> >;
  [[__nodiscard__]]
   ;
   ;
  template <class _Ap = _Alloc>
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static constexpr allocation_result<pointer, size_type>
  allocate_at_least(_Ap& __alloc, size_type __n) ;
   ;
  template <class _Ap = _Alloc, __enable_if_t<!__has_max_size_v<const _Ap>, int> = 0>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr static size_type max_size(const allocator_type&) noexcept {
    return numeric_limits<size_type>::max() / sizeof(value_type);
  }
   ;
   ;
};
template <class _Traits, class _Tp>
using __rebind_alloc [[__gnu__::__nodebug__]] = typename _Traits::template rebind_alloc<_Tp>;
template <class _Alloc>
struct __check_valid_allocator : true_type {
  using _Traits [[__gnu__::__nodebug__]] = std::allocator_traits<_Alloc>;
  static_assert(is_same<_Alloc, __rebind_alloc<_Traits, typename _Traits::value_type> >::value,
                "[allocator.requirements] states that rebinding an allocator to the same type should result in the "
                "original allocator");
};
template <class _Tp>
inline const bool __is_std_allocator_v = false;
template <class _Tp>
inline const bool __is_std_allocator_v<allocator<_Tp> > = true;
template <class _Alloc>
inline const bool __is_cpp17_move_insertable_v =
    is_move_constructible<typename _Alloc::value_type>::value ||
    (!__is_std_allocator_v<_Alloc> &&
     __has_construct_v<_Alloc, typename _Alloc::value_type*, typename _Alloc::value_type&&>);
template <class _Alloc>
inline const bool __is_cpp17_copy_insertable_v =
    __is_cpp17_move_insertable_v<_Alloc> &&
    (is_copy_constructible<typename _Alloc::value_type>::value ||
     (!__is_std_allocator_v<_Alloc> &&
      __has_construct_v<_Alloc, typename _Alloc::value_type*, const typename _Alloc::value_type&>));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Alloc>
[[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto __allocate_at_least(_Alloc& __alloc, size_t __n) {
  return std::allocator_traits<_Alloc>::allocate_at_least(__alloc, __n);
}
} }
typedef long int ptrdiff_t;
typedef long unsigned int size_t;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using ::max_align_t __attribute__((__using_if_exists__));
} }
 namespace __attribute__((__type_visibility__("default"))) std {
enum class align_val_t : size_t ;
}
 namespace __attribute__((__type_visibility__("default"))) std {
class __attribute__((__visibility__("default"))) bad_alloc : public exception {
public:
};
class __attribute__((__visibility__("default"))) bad_array_new_length : public bad_alloc {
public:
  const char* what() const noexcept override;
};
[[__noreturn__]]
[[__noreturn__]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __throw_bad_array_new_length() ;
}
 namespace __attribute__((__type_visibility__("default"))) std {
struct __attribute__((__visibility__("default"))) nothrow_t ;
extern __attribute__((__visibility__("default"))) const nothrow_t nothrow;
}
[[__nodiscard__]] __attribute__((__visibility__("default"))) void* operator new(std::size_t __sz) ;
[[__nodiscard__]]
__attribute__((__visibility__("default"))) void operator delete(void* __p) noexcept;
[[__nodiscard__]] __attribute__((__visibility__("default"))) void* operator new[](std::size_t __sz) ;
[[__nodiscard__]]
__attribute__((__visibility__("default"))) void operator delete[](void* __p) noexcept;
[[__nodiscard__]] __attribute__((__visibility__("default"))) void* operator new(std::size_t __sz, std::align_val_t) ;
[[__nodiscard__]]
__attribute__((__visibility__("default"))) void operator delete(void* __p, std::align_val_t, const std::nothrow_t&) noexcept;
__attribute__((__visibility__("default"))) void operator delete(void* __p, std::size_t __sz, std::align_val_t) noexcept;
[[__nodiscard__]] __attribute__((__visibility__("default"))) void*
operator new[](std::size_t __sz, std::align_val_t) ;
[[__nodiscard__]]
__attribute__((__visibility__("default"))) void operator delete[](void* __p, std::size_t __sz, std::align_val_t) noexcept;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
class allocator;
template <bool _Cond, class _Unique>
struct __non_trivial_if ;;
template <class _Unique>
struct __non_trivial_if<true, _Unique> {
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr __non_trivial_if() noexcept {}
};
template <class _Tp>
class allocator : private __non_trivial_if<!is_void<_Tp>::value, allocator<_Tp> > {
  static_assert(!is_const<_Tp>::value, "std::allocator does not support const types");
  static_assert(!is_volatile<_Tp>::value, "std::allocator does not support volatile types");
public:
  typedef size_t size_type;
  typedef ptrdiff_t difference_type;
  typedef _Tp value_type;
  typedef true_type propagate_on_container_move_assignment;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr allocator() noexcept = default;
  template <class _Up>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr allocator(const allocator<_Up>&) noexcept ;
  [[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Tp* allocate(size_t __n) ;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr allocation_result<_Tp*> allocate_at_least(size_t __n) ;
};
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline const size_t __compressed_pair_alignment = alignof(_Tp);
template <class _Tp>
inline const size_t __compressed_pair_alignment<_Tp&> = alignof(void*);
template <class _ToPad>
inline const bool __is_reference_or_unpadded_object =
    (is_empty<_ToPad>::value && !__libcpp_is_final<_ToPad>::value) || sizeof(_ToPad) == __datasizeof_v<_ToPad>;
template <class _Tp>
inline const bool __is_reference_or_unpadded_object<_Tp&> = true;
template <class _Tp>
inline const bool __is_reference_or_unpadded_object<_Tp&&> = true;
template <class _ToPad, bool _Empty = __is_reference_or_unpadded_object<_ToPad> >
class __compressed_pair_padding ;
template <class _ToPad>
class __compressed_pair_padding<_ToPad, true> {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <typename _Alloc, typename _Traits = allocator_traits<_Alloc> >
struct __noexcept_move_assign_container
    : public integral_constant<bool,
                               _Traits::propagate_on_container_move_assignment::value
                                   || _Traits::is_always_equal::value
                               > {
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __align_type {
  static const size_t value = __alignof(_Tp);
  typedef _Tp type;
};
struct __struct_double {
  long double __lx;
};
struct __struct_double4 {
  double __lx[4];
};
using __all_types [[__gnu__::__nodebug__]] =
    __type_list<__align_type<unsigned char>,
                __align_type<unsigned short>,
                __align_type<unsigned int>,
                __align_type<unsigned long>,
                __align_type<unsigned long long>,
                __align_type<double>,
                __align_type<long double>,
                __align_type<__struct_double>,
                __align_type<__struct_double4>,
                __align_type<int*> >;
template <class _TL, size_t _Len>
struct __find_max_align;
template <class _Head, size_t _Len>
struct __find_max_align<__type_list<_Head>, _Len> : public integral_constant<size_t, _Head::value> {};
template <size_t _Len, size_t _A1, size_t _A2>
struct __select_align {
private:
  static const size_t __min = _A2 < _A2;
  static const size_t __max = _A1 < _A2 ? _A2 : _A1;
public:
  static const size_t value = _Len < __max ? __min : __max;
};
template <class _Head, class... _Tail, size_t _Len>
struct __find_max_align<__type_list<_Head, _Tail...>, _Len>
    : public integral_constant<
          size_t,
          __select_align<_Len, _Head::value, __find_max_align<__type_list<_Tail...>, _Len>::value>::value> {};
template <size_t _Len, size_t _Align = __find_max_align<__all_types, _Len>::value>
struct __attribute__((__deprecated__)) [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] aligned_storage {
  union alignas(_Align) type {
    unsigned char __data[(_Len + _Align - 1) / _Align * _Align];
  };
};
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <size_t _Len, size_t _Align = __find_max_align<__all_types, _Len>::value>
using aligned_storage_t __attribute__((__deprecated__)) = typename aligned_storage<_Len, _Align>::type;
#pragma GCC diagnostic pop
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Alloc>
struct __temp_value ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class>
inline const bool __is_unbounded_array_v = false;
template <class _Tp>
inline const bool __is_unbounded_array_v<_Tp[]> = true;
template <class _Tp>
struct [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] is_unbounded_array : bool_constant<__is_unbounded_array_v<_Tp>> {};
template <class _Tp>
[[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] inline constexpr bool is_unbounded_array_v = __is_unbounded_array_v<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Rollback>
struct __exception_guard_exceptions ;
;
template <class _Rollback>
struct __exception_guard_noexceptions ;
template <class... _Tag> [[maybe_unused]] __exception_guard_noexceptions(typename _Tag::__allow_ctad...)->__exception_guard_noexceptions<_Tag...>;
template <class _Rollback>
using __exception_guard [[__gnu__::__nodebug__]] = __exception_guard_exceptions<_Rollback>;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _ValueType, class _InputIterator, class _Sentinel1, class _ForwardIterator, class _EndPredicate>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) pair<_InputIterator, _ForwardIterator> __uninitialized_copy(
    _InputIterator __ifirst, _Sentinel1 __ilast, _ForwardIterator __ofirst, _EndPredicate __stop_copying) ;
 ;
 ;
template <class _Alloc, class _Iter>
class _AllocatorDestroyRangeReverse ;;
template <class _Alloc, class _Type>
inline const bool __allocator_has_trivial_copy_construct_v = !__has_construct_v<_Alloc, _Type*, const _Type&>;
template <class _Type>
inline const bool __allocator_has_trivial_copy_construct_v<allocator<_Type>, _Type> = true;
 ;
 ;
template <class _Alloc, class _Type>
inline const bool __allocator_has_trivial_move_construct_v = !__has_construct_v<_Alloc, _Type*, _Type&&>;
template <class _Type>
inline const bool __allocator_has_trivial_move_construct_v<allocator<_Type>, _Type> = true;
template <class _Alloc, class _Tp>
inline const bool __allocator_has_trivial_destroy_v = !__has_destroy_v<_Alloc, _Tp*>;
template <class _Tp, class _Up>
inline const bool __allocator_has_trivial_destroy_v<allocator<_Tp>, _Up> = true;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Range, class _Tp>
concept _ContainerCompatibleRange =
    ranges::input_range<_Range> && convertible_to<ranges::range_reference_t<_Range>, _Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Allocator = allocator<_Tp> >
struct __split_buffer ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <typename _Alloc, typename = void, typename = void>
struct __is_allocator : false_type {};
template <typename _Alloc>
struct __is_allocator<_Alloc,
                      __void_t<typename _Alloc::value_type>,
                      __void_t<decltype(std::declval<_Alloc&>().allocate(size_t(0)))> > : true_type {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Container>
struct __container_traits ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Allocator>
struct __container_traits<vector<_Tp, _Allocator> > ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Allocator >
class vector {
public:
  using __self [[__gnu__::__nodebug__]] = vector;
  using value_type = _Tp;
  using allocator_type = _Allocator;
  using __alloc_traits [[__gnu__::__nodebug__]] = allocator_traits<allocator_type>;
  using reference = value_type&;
  using const_reference = const value_type&;
  using size_type = typename __alloc_traits::size_type;
  using difference_type = typename __alloc_traits::difference_type;
  using pointer = typename __alloc_traits::pointer;
  using const_pointer = typename __alloc_traits::const_pointer;
  using iterator = __wrap_iter<pointer>;
  using const_iterator = __wrap_iter<const_pointer>;
  using reverse_iterator = std::reverse_iterator<iterator>;
  using const_reverse_iterator = std::reverse_iterator<const_iterator>;
  using __trivially_relocatable [[__gnu__::__nodebug__]] = __conditional_t<
      __libcpp_is_trivially_relocatable<pointer>::value && __libcpp_is_trivially_relocatable<allocator_type>::value,
      vector,
      void>;
  using __replaceable [[__gnu__::__nodebug__]] =
      __conditional_t<__is_replaceable_v<pointer> && __container_allocator_is_replaceable<__alloc_traits>::value,
                      vector,
                      void>;
  static_assert(__check_valid_allocator<allocator_type>::value, "");
  static_assert(is_same<typename allocator_type::value_type, value_type>::value,
                "Allocator::value_type must be same type as value_type");
    ;
    ;
private:
  class __destroy_vector ;
public:
  constexpr __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) ~vector() ;
   ;
   ;
};
;
;
;
} }
extern "C" ;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Cp>
class __bit_const_reference;
template <class _Tp>
struct __has_storage_type ;
template <class, class>
struct __size_difference_type_traits ;
template <class _Cp>
struct __size_difference_type_traits<_Cp, __void_t<typename _Cp::difference_type, typename _Cp::size_type> > ;;
 ;
 ;
template <class _StorageType>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _StorageType __middle_mask(unsigned __clz, unsigned __ctz) ;
 ;
template <class _Cp, bool = __has_storage_type<_Cp>::value>
class __bit_reference ;
template <class _Cp>
class __bit_reference<_Cp, false> ;
 ;
 ;
 ;
 ;
template <class _Cp>
class __bit_const_reference ;
template <class _Cp>
struct __bit_array {
  using difference_type [[__gnu__::__nodebug__]] = typename __size_difference_type_traits<_Cp>::difference_type;
  using __storage_type [[__gnu__::__nodebug__]] = typename _Cp::__storage_type;
  using __storage_pointer [[__gnu__::__nodebug__]] = typename _Cp::__storage_pointer;
  using iterator [[__gnu__::__nodebug__]] = typename _Cp::iterator;
  static const unsigned __bits_per_word = _Cp::__bits_per_word;
  static const unsigned _Np = 4;
  difference_type __size_;
  __storage_type __word_[_Np];
};
template <class _Cp, bool _IsConst, typename _Cp::__storage_type>
class __bit_iterator ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Allocator>
struct hash<vector<bool, _Allocator> >;
template <class _Allocator>
struct __has_storage_type<vector<bool, _Allocator> > ;;
template <class _Allocator>
class vector<bool, _Allocator> ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace pmr {
class __attribute__((__visibility__("default"))) memory_resource {
  static const size_t __max_align = alignof(max_align_t);
public:
  [[nodiscard]] [[using __gnu__: __returns_nonnull__, __alloc_size__(2), __alloc_align__(3)]]
  [[__gnu__::__nonnull__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void
  deallocate(void* __p, size_t __bytes, size_t __align = __max_align) ;
private:
  virtual void* do_allocate(size_t, size_t) = 0;
  virtual void do_deallocate(void*, size_t, size_t) = 0;
  virtual bool do_is_equal(memory_resource const&) const noexcept = 0;
};
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) bool
operator==(const memory_resource& __lhs, const memory_resource& __rhs) noexcept ;
[[__gnu__::__returns_nonnull__]]
[[__gnu__::__returns_nonnull__]]
[[using __gnu__: __returns_nonnull__, __const__]]
[[using __gnu__: __returns_nonnull__, __const__]] __attribute__((__visibility__("default"))) memory_resource*
null_memory_resource() noexcept;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace pmr {
template <class _ValueType
          = byte
          >
class polymorphic_allocator ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace pmr {
template <class _ValueT>
using vector = std::vector<_ValueT, polymorphic_allocator<_ValueT>>;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Context>
class basic_format_arg;
template <class _OutIt, class _CharT>
  requires output_iterator<_OutIt, const _CharT&>
class basic_format_context;
template <class _Tp, class _CharT = char>
struct formatter;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __disabled_formatter {
};
template <class _Tp, class _CharT>
struct formatter : __disabled_formatter {};
template <class _Tp>
constexpr bool enable_nonlocking_formatter_optimization = false;
#pragma clang diagnostic pop
[[noreturn]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __throw_format_error(const char* __s) ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] is_standard_layout : integral_constant<bool, __is_standard_layout(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] inline constexpr bool is_standard_layout_v = __is_standard_layout(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
template <class _CharT, class _Traits>
class basic_string_view {
public:
  using traits_type = _Traits;
  using value_type = _CharT;
  using pointer = _CharT*;
  using const_pointer = const _CharT*;
  using reference = _CharT&;
  using const_reference = const _CharT&;
  using const_iterator = const_pointer;
  using iterator = const_iterator;
  using const_reverse_iterator = std::reverse_iterator<const_iterator>;
  using reverse_iterator = const_reverse_iterator;
  using size_type = size_t;
  using difference_type = ptrdiff_t;
  static constexpr const size_type npos = -1;
  static_assert(!is_array<value_type>::value, "Character type of basic_string_view must not be an array");
  static_assert(is_standard_layout<value_type>::value, "Character type of basic_string_view must be standard-layout");
  static_assert(is_trivially_default_constructible<value_type>::value,
                "Character type of basic_string_view must be trivially default constructible");
  static_assert(is_trivially_copyable<value_type>::value,
                "Character type of basic_string_view must be trivially copyable");
  static_assert(is_same<_CharT, typename traits_type::char_type>::value,
                "traits_type::char_type must be the same type as CharT");
    ;
  struct __assume_valid ;
  const value_type* __data_;
  size_type __size_;
  template <class, class, class>
  friend class basic_string;
};
;
template <class _CharT, class _Traits>
inline constexpr bool ranges::enable_view<basic_string_view<_CharT, _Traits>> = true;
template <class _CharT, class _Traits>
inline constexpr bool ranges::enable_borrowed_range<basic_string_view<_CharT, _Traits> > = true;
;
template <ranges::contiguous_range _Range>
basic_string_view(_Range) -> basic_string_view<ranges::range_value_t<_Range>>;
template <class _CharT, class _Traits, int = 1>
constexpr __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) bool
operator==(basic_string_view<_CharT, _Traits> __lhs,
           __type_identity_t<basic_string_view<_CharT, _Traits> > __rhs) noexcept ;
 ;
;
template <class _CharT>
struct __string_view_hash : public __unary_function<basic_string_view<_CharT, char_traits<_CharT> >, size_t> {
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) size_t operator()(const basic_string_view<_CharT, char_traits<_CharT> > __val) const noexcept ;
};
template <>
struct hash<basic_string_view<char, char_traits<char> > > : __string_view_hash<char> {};
template <>
struct hash<basic_string_view<char8_t, char_traits<char8_t> > > : __string_view_hash<char8_t> {};
template <>
struct hash<basic_string_view<char16_t, char_traits<char16_t> > > : __string_view_hash<char16_t> {};
template <>
struct hash<basic_string_view<char32_t, char_traits<char32_t> > > : __string_view_hash<char32_t> {};
template <>
struct hash<basic_string_view<wchar_t, char_traits<wchar_t> > > : __string_view_hash<wchar_t> {};
inline namespace literals {
inline namespace string_view_literals {
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT>
class basic_format_parse_context ;
;
using format_parse_context = basic_format_parse_context<char>;
using wformat_parse_context = basic_format_parse_context<wchar_t>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT>
concept __fmt_char_type =
    same_as<_CharT, char>
    || same_as<_CharT, wchar_t>
    ;
template <class _CharT>
using __fmt_iter_for [[__gnu__::__nodebug__]] = _CharT*;
template <class _Tp, class _Context, class _Formatter = typename _Context::template formatter_type<remove_const_t<_Tp>>>
concept __formattable_with =
    semiregular<_Formatter> &&
    requires(_Formatter& __f,
             const _Formatter& __cf,
             _Tp&& __t,
             _Context __fc,
             basic_format_parse_context<typename _Context::char_type> __pc) {
      { __f.parse(__pc) } -> same_as<typename decltype(__pc)::iterator>;
      { __cf.format(__t, __fc) } -> same_as<typename _Context::iterator>;
    };
template <class _Tp, class _CharT>
concept __formattable =
    __formattable_with<remove_reference_t<_Tp>, basic_format_context<__fmt_iter_for<_CharT>, _CharT>>;
template <class _Tp, class _CharT>
concept formattable = __formattable<_Tp, _CharT>;
template <class _Tp>
concept __fmt_pair_like =
    __is_specialization_v<_Tp, pair> || (__is_specialization_v<_Tp, tuple> && tuple_size_v<_Tp> == 2);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __itoa {
inline constexpr const char __base_2_lut[64] = {
    '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', '1', '0', '0', '0', '1', '1', '0', '1', '0', '0', '0', '1',
    '0', '1', '0', '1', '1', '0', '0', '1', '1', '1', '1', '0', '0', '0', '1', '0', '0', '1', '1', '0', '1', '0',
    '1', '0', '1', '1', '1', '1', '0', '0', '1', '1', '0', '1', '1', '1', '1', '0', '1', '1', '1', '1'};
inline constexpr const char __base_8_lut[128] = {
    '0', '0', '0', '1', '0', '2', '0', '3', '0', '4', '0', '5', '0', '6', '0', '7', '1', '0', '1', '1', '1', '2',
    '1', '3', '1', '4', '1', '5', '1', '6', '1', '7', '2', '0', '2', '1', '2', '2', '2', '3', '2', '4', '2', '5',
    '2', '6', '2', '7', '3', '0', '3', '1', '3', '2', '3', '3', '3', '4', '3', '5', '3', '6', '3', '7', '4', '0',
    '4', '1', '4', '2', '4', '3', '4', '4', '4', '5', '4', '6', '4', '7', '5', '0', '5', '1', '5', '2', '5', '3',
    '5', '4', '5', '5', '5', '6', '5', '7', '6', '0', '6', '1', '6', '2', '6', '3', '6', '4', '6', '5', '6', '6',
    '6', '7', '7', '0', '7', '1', '7', '2', '7', '3', '7', '4', '7', '5', '7', '6', '7', '7'};
inline constexpr const char __base_16_lut[512] = {
    '0', '0', '0', '1', '0', '2', '0', '3', '0', '4', '0', '5', '0', '6', '0', '7', '0', '8', '0', '9', '0', 'a', '0',
    'b', '0', 'c', '0', 'd', '0', 'e', '0', 'f', '1', '0', '1', '1', '1', '2', '1', '3', '1', '4', '1', '5', '1', '6',
    '1', '7', '1', '8', '1', '9', '1', 'a', '1', 'b', '1', 'c', '1', 'd', '1', 'e', '1', 'f', '2', '0', '2', '1', '2',
    'a', 'd', 'b', 'd', 'c', 'd', 'd', 'd', 'e', 'd', 'f', 'e', '0', 'e', '1', 'e', '2', 'e', '3', 'e', '4', 'e', '5',
    'e', '6', 'e', '7', 'e', '8', 'e', '9', 'e', 'a', 'e', 'b', 'e', 'c', 'e', 'd', 'e', 'e', 'e', 'f', 'f', '0', 'f',
    '1', 'f', '2', 'f', '3', 'f', '4', 'f', '5', 'f', '6', 'f', '7', 'f', '8', 'f', '9', 'f', 'a', 'f', 'b', 'f', 'c',
    'f', 'd', 'f', 'e', 'f', 'f'};
inline constexpr const uint32_t __pow10_32[10] = {
    0U,
    10U,
    100U,
    10000000U,
    100000000U,
    1000000000U};
inline constexpr const uint64_t __pow10_64[20] = {
    10000000000000000UL,
    100000000000000000UL,
    1000000000000000000UL,
    10000000000000000000UL};
inline constexpr const int __pow10_128_offset = 0;
inline constexpr const __uint128_t __pow10_128[40] = {
    0UL,
    10UL,
    __uint128_t(10000000000000000000UL) * 10000000000000000000UL,
    (__uint128_t(10000000000000000000UL) * 10000000000000000000UL) * 10};
inline constexpr const char __digits_base_10[200] = {
    '0', '0', '0', '1', '0', '2', '0', '3', '0', '4', '0', '5', '0', '6', '0', '7', '0', '8', '0', '9',
    '9', '0', '9', '1', '9', '2', '9', '3', '9', '4', '9', '5', '9', '6', '9', '7', '9', '8', '9', '9'};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __itoa {
 ;
}
} }
extern "C"
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum class errc;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __attribute__((__visibility__("default"))) to_chars_result ;
struct __to_chars_result ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __itoa {
template <typename _Tp, typename = void>
struct __attribute__((__visibility__("hidden"))) __traits_base;
template <typename _Tp>
struct __attribute__((__visibility__("hidden"))) __traits_base<_Tp, __enable_if_t<sizeof(_Tp) <= sizeof(uint32_t)> > ;
template <typename _Tp>
struct __attribute__((__visibility__("hidden"))) __traits_base<_Tp, __enable_if_t<sizeof(_Tp) == sizeof(uint64_t)> > ;
template <typename _Tp>
struct __attribute__((__visibility__("hidden"))) __traits_base<_Tp, __enable_if_t<sizeof(_Tp) == sizeof(__uint128_t)> > ;
 ;
 ;
 ;
 ;
template <typename _Tp>
struct __attribute__((__visibility__("hidden"))) __traits : __traits_base<_Tp> {
  static constexpr const int digits = numeric_limits<_Tp>::digits10 + 1;
  using __traits_base<_Tp>::__pow;
  using typename __traits_base<_Tp>::type;
   ;
};
}
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
  requires(is_signed_v<_Tp> || is_unsigned_v<_Tp> || is_same_v<_Tp, char>)
using __make_32_64_or_128_bit_t [[__gnu__::__nodebug__]] =
    __copy_unsigned_t<_Tp,
        __conditional_t<sizeof(_Tp) <= sizeof(int32_t), int32_t,
        __conditional_t<sizeof(_Tp) <= sizeof(int64_t), int64_t,
        __conditional_t<sizeof(_Tp) <= sizeof(__int128_t), __int128_t,
                                                           void>
    > > >;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
;
 ;
 ;
;
 ;
namespace __itoa {
template <unsigned _Base>
struct __attribute__((__visibility__("hidden"))) __integral;
template <>
struct __attribute__((__visibility__("hidden"))) __integral<2> ;
template <>
struct __attribute__((__visibility__("hidden"))) __integral<8> ;
template <>
struct __attribute__((__visibility__("hidden"))) __integral<16> ;
}
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __fill_n {
   ;
};
inline namespace __cpo {
inline constexpr auto fill_n = __fill_n{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter1, class _InIter2, class _OutIter1>
struct in_in_out_result ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __transform {
private:
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto transform = __transform{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _OutIt>
struct format_to_n_result ;;
template <class... _Tag> [[maybe_unused]] format_to_n_result(typename _Tag::__allow_ctad...)->format_to_n_result<_Tag...>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __format {
class __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) __max_output_size {
public:
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit __max_output_size(size_t __max_size)  ;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) size_t __write_request(size_t __code_units) ;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) size_t __code_units_written() const noexcept ;
private:
  size_t __max_size_;
  size_t __code_units_written_;
};
template <__fmt_char_type _CharT>
class __output_buffer {
public:
  using value_type [[__gnu__::__nodebug__]] = _CharT;
  using __prepare_write_type [[__gnu__::__nodebug__]] = void (*)(__output_buffer<_CharT>&, size_t);
  [[nodiscard]]
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit __output_buffer(_CharT* __ptr, size_t __capacity, __prepare_write_type __function)  ;
  [[nodiscard]]
   ;
   ;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) size_t __capacity() const ;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) size_t __size() const ;
private:
  _CharT* __ptr_;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) size_t __available() const ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __prepare_write(size_t __code_units) ;
};
template <class _OutIt, class _CharT>
concept __enable_direct_output =
    __fmt_char_type<_CharT> &&
    (same_as<_OutIt, _CharT*>
     || same_as<_OutIt, __wrap_iter<_CharT*>>);
template <class _Container>
concept __insertable =
    __enable_insertable<_Container> && __fmt_char_type<typename _Container::value_type> &&
    requires(_Container& __t,
             add_pointer_t<typename _Container::value_type> __first,
             add_pointer_t<typename _Container::value_type> __last) { __t.insert(__t.end(), __first, __last); };
template <class _It>
struct __back_insert_iterator_container ;
template <__insertable _Container>
struct __back_insert_iterator_container<back_insert_iterator<_Container>> ;;
template <__fmt_char_type _CharT>
class __allocating_buffer : public __output_buffer<_CharT> {
public:
  [[nodiscard]]
  [[nodiscard]]
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) basic_string_view<_CharT> __view() ;
private:
  using _Alloc [[__gnu__::__nodebug__]] = allocator<_CharT>;
  static constexpr size_t __buffer_size_ = 256;
};
template <class _OutIt, __fmt_char_type _CharT>
class __direct_iterator_buffer : public __output_buffer<_CharT> {
public:
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit __direct_iterator_buffer(_OutIt __out_it)  ;
  [[nodiscard]]
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit __direct_iterator_buffer(_OutIt __out_it, __max_output_size* __max_output_size)  ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static void
  __prepare_write([[maybe_unused]] __output_buffer<_CharT>& __buffer, [[maybe_unused]] size_t __size_hint) ;
};
template <class _OutIt, __fmt_char_type _CharT>
class __container_inserter_buffer : public __output_buffer<_CharT> {
public:
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit __container_inserter_buffer(_OutIt __out_it)  ;
  [[nodiscard]]
  static constexpr size_t __buffer_size = 256;
  _CharT __small_buffer_[__buffer_size];
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __prepare_write() ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static void
  __prepare_write(__output_buffer<_CharT>& __buffer, [[maybe_unused]] size_t __size_hint) ;
};
template <class _OutIt, __fmt_char_type _CharT>
class __iterator_buffer : public __allocating_buffer<_CharT> {
private:
  _OutIt __out_it_;
};
template <class _OutIt, __fmt_char_type _CharT>
class __buffer_selector ;
template <class _OutIt, __fmt_char_type _CharT>
class __format_to_n_buffer : private __buffer_selector<_OutIt, _CharT>::type {
public:
  using _Base [[__gnu__::__nodebug__]] = __buffer_selector<_OutIt, _CharT>::type;
  [[nodiscard]]
  [[nodiscard]]
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) format_to_n_result<_OutIt> __result() && ;
private:
  __max_output_size __max_output_size_;
};
template <__fmt_char_type _CharT>
class __formatted_size_buffer : private __output_buffer<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __output_buffer<_CharT>;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) __formatted_size_buffer()  ;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) auto __make_output_iterator() ;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) size_t __result() && ;
private:
  __max_output_size __max_output_size_;;
};
template <__fmt_char_type _CharT>
class __retarget_buffer ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __format {
enum class __arg_t : uint8_t ;
inline constexpr unsigned __packed_arg_t_bits = 5;
inline constexpr uint8_t __packed_arg_t_mask = 0x1f;
inline constexpr unsigned __packed_types_storage_bits = 64;
inline constexpr unsigned __packed_types_max = __packed_types_storage_bits / __packed_arg_t_bits;
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool __use_packed_format_arg_store(size_t __size) ;
}
 ;
 ;
template <class _Context>
class __basic_format_arg_value ;
template <class _Context>
class [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] basic_format_arg {
public:
  class handle;
};
template <class _Context>
class basic_format_arg<_Context>::handle {
public:
private:
  typename __basic_format_arg_value<_Context>::__handle& __handle_;
};
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __format {
template <contiguous_iterator _Iterator>
struct __parse_number_result ;
;
;
inline constexpr uint32_t __number_max = (2147483647);
namespace __detail {
 ;
 ;
 ;
}
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
template <typename _Tp, __enable_if_t<!is_integral<_Tp>::value, int> = 0>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Tp __half_positive(_Tp __value) ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _AlgPolicy, class _Iter, class _Type, class _Proj, class _Comp>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Iter __lower_bound_bisecting(
    _Proj& __proj) ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __upper_bound {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto upper_bound = __upper_bound{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __extended_grapheme_custer_property_boundary {
enum class __property : uint8_t ;;
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) inline constexpr uint32_t __entries[1501] = {
    0x00000091,
    0x001806f2,
    0x00241862,
    0x002c8ac2,
    0x002df802,
    0x002e0812,
    0x002e2012,
    0x707f80f1};
[[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr __property __get_property(const char32_t __code_point) noexcept ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __indic_conjunct_break {
enum class __property : uint8_t ;
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) inline constexpr uint32_t __entries[403] = {
    0x001801bd,
    0x0f4a2019,
    0x0f9fd811,
    0x7001017d,
    0x700803bd};
[[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr __property __get_property(const char32_t __code_point) noexcept ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __unicode {
struct __consume_result {
  char32_t __code_point : 31;
  enum : char32_t {
    __ok = 0,
    __error = 1
  } __status : 1 ;
};
static_assert(sizeof(__consume_result) == sizeof(char32_t));
inline constexpr char32_t __replacement_character = U'\ufffd';
inline constexpr __consume_result __consume_result_error{__replacement_character, __consume_result::__error};
[[nodiscard]]
[[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool __is_low_surrogate(char32_t __value) ;
[[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool __is_surrogate(char32_t __value) ;
[[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool __is_code_point(char32_t __value) ;
[[nodiscard]]
 ;
template <class _CharT>
class __code_point_view;
template <>
class __code_point_view<char> ;
template <>
class __code_point_view<wchar_t> {
  using _Iterator [[__gnu__::__nodebug__]] = typename basic_string_view<wchar_t>::const_iterator;
public:
  static_assert(sizeof(wchar_t) == 2 || sizeof(wchar_t) == 4, "sizeof(wchar_t) has a not implemented value");
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr explicit __code_point_view(_Iterator __first, _Iterator __last)  ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Iterator __position() const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool __at_end() const noexcept ;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr __consume_result __consume() noexcept ;
private:
  _Iterator __first_;
  _Iterator __last_;
};
class __extended_grapheme_cluster_break {
  using __EGC_property [[__gnu__::__nodebug__]] = __extended_grapheme_custer_property_boundary::__property;
  using __inCB_property [[__gnu__::__nodebug__]] = __indic_conjunct_break::__property;
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr explicit __extended_grapheme_cluster_break(char32_t __first_code_point)  ;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool operator()(char32_t __next_code_point) ;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr char32_t __current_code_point() const ;
private:
  [[nodiscard]]
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool
  __evaluate_GB9c_indic_conjunct_break(char32_t __next_code_point, __EGC_property __next_property) ;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool
  __evaluate_GB11_emoji(char32_t __next_code_point, __EGC_property __next_property) ;
  [[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool
  __evaluate_GB12_GB13_regional_indicator(char32_t __next_code_point, __EGC_property __next_property) ;
  char32_t __prev_code_point_;
  enum class __GB11_emoji_state {
    __Extended_Pictographic,
    __Extend,
    __ZWJ,
  };
  __GB11_emoji_state __GB11_emoji_state_ = __GB11_emoji_state::__Extended_Pictographic;
  enum class __GB9c_indic_conjunct_break_state {
    __Consonant,
    __Linker,
  };
  __GB9c_indic_conjunct_break_state __GB9c_indic_conjunct_break_state_ = __GB9c_indic_conjunct_break_state::__Consonant;
};
template <class _CharT>
class __extended_grapheme_cluster_view ;;
template <contiguous_iterator _Iterator>
__extended_grapheme_cluster_view(_Iterator, _Iterator) -> __extended_grapheme_cluster_view<iter_value_t<_Iterator>>;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __width_estimation_table {
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) inline constexpr uint32_t __entries[110] = {
    0x0440005f ,
    0x08c68001 ,
    0xe0003fff ,
    0xf0003ffd };
inline constexpr uint32_t __table_upper_bound = 0x0003fffd;
[[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr int __estimated_width(const char32_t __code_point) noexcept ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _StateT>
class fpos ;;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Func>
class __scope_guard ;;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
;
template <class _Iter>
struct __string_is_trivial_iterator : public false_type {};
template <class _Tp>
struct __string_is_trivial_iterator<_Tp*> : public is_arithmetic<_Tp> {};
template <class _Iter>
struct __string_is_trivial_iterator<__wrap_iter<_Iter> > : public __string_is_trivial_iterator<_Iter> {};
template <class _CharT, class _Traits, class _Tp>
struct __can_be_converted_to_string_view
    : public _BoolConstant< is_convertible<const _Tp&, basic_string_view<_CharT, _Traits> >::value &&
                            !is_convertible<const _Tp&, const _CharT*>::value > {};
struct __uninitialized_size_tag ;
struct __init_with_sentinel_tag ;
template <size_t _PaddingSize>
struct __padding {
  char __padding_[_PaddingSize];
};
template <>
struct __padding<0> {};
template <class _CharT, class _Traits, class _Allocator>
class basic_string {
public:
  using __self [[__gnu__::__nodebug__]] = basic_string;
  using __self_view [[__gnu__::__nodebug__]] = basic_string_view<_CharT, _Traits>;
  using traits_type = _Traits;
  using value_type = _CharT;
  using allocator_type = _Allocator;
  using __alloc_traits [[__gnu__::__nodebug__]] = allocator_traits<allocator_type>;
  using size_type = typename __alloc_traits::size_type;
  using difference_type = typename __alloc_traits::difference_type;
  using reference = value_type&;
  using const_reference = const value_type&;
  using pointer = typename __alloc_traits::pointer;
  using const_pointer = typename __alloc_traits::const_pointer;
  static_assert(is_trivially_copyable<value_type>::value, "Character type of basic_string must be trivially copyable");
  static_assert(is_same<_CharT, typename traits_type::char_type>::value,
                "traits_type::char_type must be the same type as CharT");
  static_assert(is_same<typename allocator_type::value_type, value_type>::value,
                "Allocator::value_type must be same type as value_type");
  static_assert(__check_valid_allocator<allocator_type>::value, "");
  using iterator = __wrap_iter<pointer>;
  using const_iterator = __wrap_iter<const_pointer>;
  using reverse_iterator = std::reverse_iterator<iterator>;
  using const_reverse_iterator = std::reverse_iterator<const_iterator>;
private:
  static_assert(8 == 8, "This implementation assumes that one byte contains 8 bits");
  static const size_type __endian_factor = 2;
  struct __long {
    struct __attribute__((__packed__)) {
      size_type __is_long_ : 1;
      size_type __cap_ : sizeof(size_type) * 8 - 1;
    };
    size_type __size_;
    pointer __data_;
  };
  enum { __min_cap = (sizeof(__long) - 1) / sizeof(value_type) > 2 ? (sizeof(__long) - 1) / sizeof(value_type) : 2 };
  struct __short {
    struct __attribute__((__packed__)) {
      unsigned char __is_long_ : 1;
      unsigned char __size_ : 7;
    };
    [[__no_unique_address__]] __padding<sizeof(value_type) - 1> __padding_;
    value_type __data_[__min_cap];
  };
  static_assert(sizeof(__short) == (sizeof(value_type) * (__min_cap + 1)), "__short has an unexpected size.");
  union __rep {
    __short __s;
    __long __l;
  };
  struct { [[__no_unique_address__]] __attribute__((__aligned__(::std::__compressed_pair_alignment<allocator_type>))) __rep __rep_; [[__no_unique_address__]] ::std::__compressed_pair_padding<__rep> __padding1_903_; [[__no_unique_address__]] allocator_type __alloc_; [[__no_unique_address__]] ::std::__compressed_pair_padding<allocator_type> __padding2_903_; };
  struct __annotate_new_size ;;
    ;
public:
  __attribute__((__visibility__("default"))) static const size_type npos = -1;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr basic_string()
      noexcept(is_nothrow_default_constructible<allocator_type>::value)
  ;
  constexpr basic_string(const basic_string& __str)  ;
  constexpr
  basic_string(const basic_string& __str, const allocator_type& __a)  ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr basic_string(basic_string&& __str)  ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr basic_string(basic_string&& __str, const allocator_type& __a)  ;
  template <__enable_if_t<__is_allocator<_Allocator>::value, int> = 0>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr basic_string(const _CharT* _Nonnull __s) {
    ((void)0);
    __init(__s, traits_type::length(__s));
  }
    ;
    ;
  constexpr
  basic_string(const basic_string& __str, size_type __pos, size_type __n, const _Allocator& __a = _Allocator())  ;
    ;
    ;
   constexpr ~basic_string() ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr operator __self_view() const noexcept ;
  constexpr basic_string&
  operator=(const basic_string& __str);
   ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr basic_string&
  operator=(basic_string&& __str) noexcept(__noexcept_move_assign_container<_Allocator, __alloc_traits>::value) ;
  basic_string& operator=(nullptr_t) = delete;
  constexpr basic_string& operator=(value_type __c);
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type length() const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type max_size() const noexcept {
    if (size_type __m = __alloc_traits::max_size(__alloc_); __m <= std::numeric_limits<size_type>::max() / 2) {
      size_type __res = __m - __alignment;
      if (__endian_factor == 2)
        __res &= ~size_type(1);
      return __res - 1;
    } else {
      bool __uses_lsb = __endian_factor == 2;
      return __uses_lsb ? __m - __alignment - 1 : (__m / 2) - __alignment - 1;
    }
  }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type capacity() const noexcept {
    return (__is_long() ? __get_long_cap() : static_cast<size_type>(__min_cap)) - 1;
  }
  constexpr void resize(size_type __n, value_type __c);
  constexpr void reserve(size_type __requested_capacity);
   ;
  [[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool empty() const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const_reference operator[](size_type __pos) const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr reference operator[](size_type __pos) noexcept ;
  constexpr const_reference at(size_type __n) const;
  constexpr reference at(size_type __n);
   ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr basic_string& operator+=(initializer_list<value_type> __il) ;
   ;
  constexpr basic_string& append(const basic_string& __str, size_type __pos, size_type __n = npos);
  template <class _Tp,
            __enable_if_t<__can_be_converted_to_string_view<_CharT, _Traits, _Tp>::value &&
                              !is_same<__remove_cvref_t<_Tp>, basic_string>::value,
                          int> = 0>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr basic_string&
  append(const _Tp& __t, size_type __pos, size_type __n = npos) ;
  constexpr basic_string& append(const value_type* __s, size_type __n);
  constexpr basic_string& append(const value_type* _Nonnull __s);
  constexpr basic_string& append(size_type __n, value_type __c);
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void __append_default_init(size_type __n);
   ;
   ;
   ;
  constexpr void push_back(value_type __c);
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const_reference front() const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr reference back() noexcept ;
   ;
  constexpr basic_string& assign(const basic_string& __str, size_type __pos, size_type __n = npos);
   ;
  constexpr basic_string& assign(const value_type* __s, size_type __n);
  constexpr basic_string& assign(const value_type* __s);
  constexpr basic_string& assign(size_type __n, value_type __c);
   ;
  constexpr basic_string&
  insert(size_type __pos1, const basic_string& __str, size_type __pos2, size_type __n = npos);
  constexpr basic_string& insert(size_type __pos, const value_type* __s, size_type __n);
  constexpr basic_string& insert(size_type __pos, const value_type* _Nonnull __s);
  constexpr basic_string& insert(size_type __pos, size_type __n, value_type __c);
  constexpr iterator insert(const_iterator __pos, value_type __c);
   ;
   ;
   ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr iterator
  insert(const_iterator __pos, initializer_list<value_type> __il) ;
  constexpr basic_string& erase(size_type __pos = 0, size_type __n = npos);
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr iterator erase(const_iterator __first, const_iterator __last);
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr basic_string&
  replace(size_type __pos1, size_type __n1, const basic_string& __str) ;
   ;
  constexpr basic_string&
  replace(size_type __pos1, size_type __n1, const basic_string& __str, size_type __pos2, size_type __n2 = npos);
  template <class _Tp,
            __enable_if_t<__can_be_converted_to_string_view<_CharT, _Traits, _Tp>::value &&
                              !is_same<__remove_cvref_t<_Tp>, basic_string>::value,
                          int> = 0>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr basic_string&
  replace(size_type __pos1, size_type __n1, const _Tp& __t, size_type __pos2, size_type __n2 = npos) ;
  constexpr basic_string&
  replace(size_type __pos, size_type __n1, const value_type* __s, size_type __n2);
  constexpr basic_string& replace(size_type __pos, size_type __n1, const value_type* __s);
  constexpr basic_string& replace(size_type __pos, size_type __n1, size_type __n2, value_type __c);
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr basic_string&
  replace(const_iterator __i1, const_iterator __i2, const basic_string& __str) ;
  constexpr size_type copy(value_type* __s, size_type __n, size_type __pos = 0) const;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const value_type* data() const noexcept {
    return std::__to_address(__get_pointer());
  }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type
  find(const basic_string& __str, size_type __pos = 0) const noexcept ;
   ;
  constexpr size_type find(const value_type* __s, size_type __pos, size_type __n) const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type
  find(const value_type* _Nonnull __s, size_type __pos = 0) const noexcept ;
  constexpr size_type find(value_type __c, size_type __pos = 0) const noexcept ;
  template <class _Tp, __enable_if_t<__can_be_converted_to_string_view<_CharT, _Traits, _Tp>::value, int> = 0>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type
  rfind(const _Tp& __t, size_type __pos = npos) const noexcept ;
  constexpr size_type rfind(const value_type* __s, size_type __pos, size_type __n) const noexcept ;
  constexpr size_type rfind(value_type __c, size_type __pos = npos) const noexcept ;
   ;
  constexpr size_type
  find_first_of(const value_type* __s, size_type __pos, size_type __n) const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type
  find_first_of(value_type __c, size_type __pos = 0) const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type
  find_last_of(const basic_string& __str, size_type __pos = npos) const noexcept ;
  template <class _Tp, __enable_if_t<__can_be_converted_to_string_view<_CharT, _Traits, _Tp>::value, int> = 0>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type
  find_last_of(const _Tp& __t, size_type __pos = npos) const noexcept ;
  constexpr size_type
  find_last_of(const value_type* __s, size_type __pos, size_type __n) const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type
  find_last_of(const value_type* _Nonnull __s, size_type __pos = npos) const noexcept ;
  constexpr size_type
  find_first_not_of(const value_type* __s, size_type __pos, size_type __n) const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type
  find_first_not_of(const value_type* _Nonnull __s, size_type __pos = 0) const noexcept ;
  template <class _Tp, __enable_if_t<__can_be_converted_to_string_view<_CharT, _Traits, _Tp>::value, int> = 0>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type
  find_last_not_of(const _Tp& __t, size_type __pos = npos) const noexcept ;
  constexpr size_type
  find_last_not_of(const value_type* __s, size_type __pos, size_type __n) const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type
  find_last_not_of(const value_type* _Nonnull __s, size_type __pos = npos) const noexcept ;
   ;
  template <class _Tp, __enable_if_t<__can_be_converted_to_string_view<_CharT, _Traits, _Tp>::value, int> = 0>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr int
  compare(size_type __pos1, size_type __n1, const _Tp& __t) const ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr int
  compare(size_type __pos1, size_type __n1, const basic_string& __str) const ;
  constexpr int
  compare(size_type __pos1, size_type __n1, const basic_string& __str, size_type __pos2, size_type __n2 = npos) const ;
   ;
  constexpr int compare(const value_type* _Nonnull __s) const noexcept ;
  constexpr int
  compare(size_type __pos1, size_type __n1, const value_type* _Nonnull __s) const ;
  constexpr int
  compare(size_type __pos1, size_type __n1, const value_type* __s, size_type __n2) const;
private:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool
  __is_long() const noexcept {
    if (__libcpp_is_constant_evaluated() && __builtin_constant_p(__rep_.__l.__is_long_)) ;
    return __rep_.__s.__is_long_;
  }
  static __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void __begin_lifetime(pointer __begin, size_type __n) ;
  constexpr __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static bool __fits_in_sso(size_type __sz) { return __sz < __min_cap; }
  ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void
  __set_short_size(size_type __s) noexcept {
    ((void)0);
    __rep_.__s.__size_ = __s;
    __rep_.__s.__is_long_ = false;
  }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void __set_long_size(size_type __s) noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void __set_long_cap(size_type __s) noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type __get_long_cap() const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void __set_long_pointer(pointer __p) noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const_pointer __get_long_pointer() const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr pointer
  __get_short_pointer() noexcept {
    return pointer_traits<pointer>::pointer_to(__rep_.__s.__data_[0]);
  }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const_pointer
  __get_short_pointer() const noexcept {
    return pointer_traits<const_pointer>::pointer_to(__rep_.__s.__data_[0]);
  }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const_pointer __get_pointer() const noexcept {
    return __is_long() ? __get_long_pointer() : __get_short_pointer();
  }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void
  __annotate_contiguous_container(const void* __old_mid, const void* __new_mid) const {
    (void)__old_mid;
    (void)__new_mid;
  }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void __annotate_new(size_type __current_size) const noexcept {
    __annotate_contiguous_container(data() + capacity() + 1, data() + __current_size + 1);
  }
  enum { __alignment = 8 };
  static __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_type __recommend(size_type __s) noexcept ;
  inline constexpr void __init(const value_type* __s, size_type __sz);
  inline constexpr void __init(size_type __n, value_type __c);
  ;
  template <class _ForwardIterator, __enable_if_t<__has_forward_iterator_category<_ForwardIterator>::value, int> = 0>
  inline constexpr void __init(_ForwardIterator __first, _ForwardIterator __last);
  template <class _InputIterator, class _Sentinel>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void
  __init_with_sentinel(_InputIterator __first, _Sentinel __last);
  template <class _InputIterator, class _Sentinel>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void
  __init_with_size(_InputIterator __first, _Sentinel __last, size_type __sz);
  constexpr
  __attribute__((__deprecated__("use __grow_by_without_replace"))) void __grow_by(
      size_type __old_cap,
      size_type __delta_cap,
      size_type __old_sz,
      size_type __n_copy,
      size_type __n_del,
      size_type __n_add = 0);
  constexpr __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __grow_by_without_replace(
      size_type __old_cap,
      size_type __delta_cap,
      size_type __old_sz,
      size_type __n_copy,
      size_type __n_del,
      size_type __n_add = 0);
  constexpr void __grow_by_and_replace(
      size_type __old_cap,
      size_type __delta_cap,
      size_type __old_sz,
      size_type __n_copy,
      size_type __n_del,
      size_type __n_add,
      const value_type* __p_new_stuff);
  ;
  ;
   ;
  [[__noreturn__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static void __throw_length_error() ;
  [[__noreturn__]]
  ;
};
extern template __attribute__((__visibility__("default"))) void basic_string<char>::__init(const value_type*, size_type); extern template __attribute__((__visibility__("default"))) void basic_string<char>::__init(size_type, value_type); extern template __attribute__((__visibility__("default"))) basic_string<char>::basic_string(const basic_string&, size_type, size_type, const allocator<char>&); extern template __attribute__((__visibility__("default"))) basic_string<char>::~basic_string(); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::operator=(value_type); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::assign(size_type, value_type); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::assign(const basic_string&, size_type, size_type); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::append(size_type, value_type); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::append(const value_type*); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::append(const value_type*, size_type); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::append(const basic_string&, size_type, size_type); extern template __attribute__((__visibility__("default"))) void basic_string<char>::push_back(value_type); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::insert(size_type, const value_type*); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::insert(size_type, size_type, value_type); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::insert(size_type, const value_type*, size_type); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::insert(size_type, const basic_string&, size_type, size_type); extern template __attribute__((__visibility__("default"))) basic_string<char>::iterator basic_string<char>::insert(basic_string::const_iterator, value_type); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::replace(size_type, size_type, const value_type*); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::replace(size_type, size_type, size_type, value_type); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::replace(size_type, size_type, const value_type*, size_type); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::replace(size_type, size_type, const basic_string&, size_type, size_type); extern template __attribute__((__visibility__("default"))) void basic_string<char>::__grow_by_and_replace(size_type, size_type, size_type, size_type, size_type, size_type, const value_type*); extern template __attribute__((__visibility__("default"))) void basic_string<char>::resize(size_type, value_type); extern template __attribute__((__visibility__("default"))) void basic_string<char>::reserve(size_type); extern template __attribute__((__visibility__("default"))) basic_string<char>::size_type basic_string<char>::copy(value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<char>::size_type basic_string<char>::find(value_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<char>::size_type basic_string<char>::find(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<char>::size_type basic_string<char>::rfind(value_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<char>::size_type basic_string<char>::rfind(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<char>::size_type basic_string<char>::find_first_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<char>::size_type basic_string<char>::find_last_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<char>::size_type basic_string<char>::find_first_not_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<char>::size_type basic_string<char>::find_last_not_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) char& basic_string<char>::at(size_type); extern template __attribute__((__visibility__("default"))) const char& basic_string<char>::at(size_type) const; extern template __attribute__((__visibility__("default"))) int basic_string<char>::compare(const value_type*) const; extern template __attribute__((__visibility__("default"))) int basic_string<char>::compare(size_type, size_type, const value_type*) const; extern template __attribute__((__visibility__("default"))) int basic_string<char>::compare(size_type, size_type, const value_type*, size_type) const; extern template __attribute__((__visibility__("default"))) int basic_string<char>::compare(size_type, size_type, const basic_string&, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) const basic_string<char>::size_type basic_string<char>::npos; extern template __attribute__((__visibility__("default"))) basic_string<char>::basic_string(const basic_string&); extern template __attribute__((__visibility__("default"))) basic_string<char>::basic_string(const basic_string&, const allocator<char>&); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::assign(const value_type*); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::assign(const value_type*, size_type); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::operator=(basic_string const&); extern template __attribute__((__visibility__("default"))) void basic_string<char>::__grow_by(size_type, size_type, size_type, size_type, size_type, size_type); extern template __attribute__((__visibility__("default"))) basic_string<char>& basic_string<char>::erase(size_type, size_type);
extern template __attribute__((__visibility__("default"))) void basic_string<wchar_t>::__init(const value_type*, size_type); extern template __attribute__((__visibility__("default"))) void basic_string<wchar_t>::__init(size_type, value_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::basic_string(const basic_string&, size_type, size_type, const allocator<wchar_t>&); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::~basic_string(); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::operator=(value_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::assign(size_type, value_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::assign(const basic_string&, size_type, size_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::append(size_type, value_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::append(const value_type*); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::append(const value_type*, size_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::append(const basic_string&, size_type, size_type); extern template __attribute__((__visibility__("default"))) void basic_string<wchar_t>::push_back(value_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::insert(size_type, const value_type*); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::insert(size_type, size_type, value_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::insert(size_type, const value_type*, size_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::insert(size_type, const basic_string&, size_type, size_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::iterator basic_string<wchar_t>::insert(basic_string::const_iterator, value_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::replace(size_type, size_type, const value_type*); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::replace(size_type, size_type, size_type, value_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::replace(size_type, size_type, const value_type*, size_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::replace(size_type, size_type, const basic_string&, size_type, size_type); extern template __attribute__((__visibility__("default"))) void basic_string<wchar_t>::__grow_by_and_replace(size_type, size_type, size_type, size_type, size_type, size_type, const value_type*); extern template __attribute__((__visibility__("default"))) void basic_string<wchar_t>::resize(size_type, value_type); extern template __attribute__((__visibility__("default"))) void basic_string<wchar_t>::reserve(size_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::size_type basic_string<wchar_t>::copy(value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::size_type basic_string<wchar_t>::find(value_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::size_type basic_string<wchar_t>::find(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::size_type basic_string<wchar_t>::rfind(value_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::size_type basic_string<wchar_t>::rfind(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::size_type basic_string<wchar_t>::find_first_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::size_type basic_string<wchar_t>::find_last_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::size_type basic_string<wchar_t>::find_first_not_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::size_type basic_string<wchar_t>::find_last_not_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) wchar_t& basic_string<wchar_t>::at(size_type); extern template __attribute__((__visibility__("default"))) const wchar_t& basic_string<wchar_t>::at(size_type) const; extern template __attribute__((__visibility__("default"))) int basic_string<wchar_t>::compare(const value_type*) const; extern template __attribute__((__visibility__("default"))) int basic_string<wchar_t>::compare(size_type, size_type, const value_type*) const; extern template __attribute__((__visibility__("default"))) int basic_string<wchar_t>::compare(size_type, size_type, const value_type*, size_type) const; extern template __attribute__((__visibility__("default"))) int basic_string<wchar_t>::compare(size_type, size_type, const basic_string&, size_type, size_type) const; extern template __attribute__((__visibility__("default"))) const basic_string<wchar_t>::size_type basic_string<wchar_t>::npos; extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::basic_string(const basic_string&); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>::basic_string(const basic_string&, const allocator<wchar_t>&); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::assign(const value_type*); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::assign(const value_type*, size_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::operator=(basic_string const&); extern template __attribute__((__visibility__("default"))) void basic_string<wchar_t>::__grow_by(size_type, size_type, size_type, size_type, size_type, size_type); extern template __attribute__((__visibility__("default"))) basic_string<wchar_t>& basic_string<wchar_t>::erase(size_type, size_type);
;
;
;
template <ranges::input_range _Range,
          class _Allocator = allocator<ranges::range_value_t<_Range>>,
          class = enable_if_t<__is_allocator<_Allocator>::value> >
basic_string(from_range_t, _Range&&, _Allocator = _Allocator())
    -> basic_string<ranges::range_value_t<_Range>, char_traits<ranges::range_value_t<_Range>>, _Allocator>;
template <class _CharT, class _Traits, class _Allocator>
constexpr void
basic_string<_CharT, _Traits, _Allocator>::__init(const value_type* __s, size_type __sz) {
  if (__libcpp_is_constant_evaluated())
    __rep_ = __rep();
  if (__sz > max_size())
    this->__throw_length_error();
  pointer __p;
  if (__fits_in_sso(__sz)) {
    __set_short_size(__sz);
    __p = __get_short_pointer();
  } else 
  traits_type::copy(std::__to_address(__p), __s, __sz);
  traits_type::assign(__p[__sz], value_type());
  __annotate_new(__sz);
}
 ;
 ;
 ;
 ;
 ;
 ;
 ;;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
template <class _CharT, class _Traits, class _Allocator>
__attribute__((__visibility__("default"))) const typename basic_string<_CharT, _Traits, _Allocator>::size_type
    basic_string<_CharT, _Traits, _Allocator>::npos;
template <class _CharT, class _Allocator>
struct __string_hash : public __unary_function<basic_string<_CharT, char_traits<_CharT>, _Allocator>, size_t> {
};
template <class _Allocator>
struct hash<basic_string<char, char_traits<char>, _Allocator> > : __string_hash<char, _Allocator> {};
template <class _Allocator>
struct hash<basic_string<char8_t, char_traits<char8_t>, _Allocator> > : __string_hash<char8_t, _Allocator> {};
template <class _Allocator>
struct hash<basic_string<char16_t, char_traits<char16_t>, _Allocator> > : __string_hash<char16_t, _Allocator> {};
template <class _Allocator>
struct hash<basic_string<char32_t, char_traits<char32_t>, _Allocator> > : __string_hash<char32_t, _Allocator> {};
template <class _Allocator>
struct hash<basic_string<wchar_t, char_traits<wchar_t>, _Allocator> > : __string_hash<wchar_t, _Allocator> {};
;
;
;
;
;
template <class _CharT, class _Traits, class _Allocator>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) basic_istream<_CharT, _Traits>&
getline(basic_istream<_CharT, _Traits>&& __is, basic_string<_CharT, _Traits, _Allocator>& __str);
template <class _CharT, class _Traits, class _Allocator, class _Up>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr typename basic_string<_CharT, _Traits, _Allocator>::size_type
erase(basic_string<_CharT, _Traits, _Allocator>& __str, const _Up& __v) ;
 ;
inline namespace literals {
inline namespace string_literals {
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr basic_string<char16_t>
operator""s(const char16_t* __str, size_t __len) ;
}
}
template <>
inline constexpr bool __format::__enable_insertable<std::basic_string<char>> = true;
template <>
inline constexpr bool __format::__enable_insertable<std::basic_string<wchar_t>> = true;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __format_spec {
[[noreturn]]
[[noreturn]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __throw_invalid_type_format_error(const char* __id) ;
template <contiguous_iterator _Iterator, class _ParseContext>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr __format::__parse_number_result<_Iterator>
__parse_arg_id(_Iterator __begin, _Iterator __end, _ParseContext& __ctx) ;
 ;
struct __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) __fields {
  uint16_t __sign_ : 1 ;
  uint16_t __alternate_form_ : 1 ;
  uint16_t __zero_padding_ : 1 ;
  uint16_t __precision_ : 1 ;
  uint16_t __locale_specific_form_ : 1 ;
  uint16_t __type_ : 1 ;
  uint16_t __use_range_fill_ : 1 ;
  uint16_t __clear_brackets_ : 1 ;
  uint16_t __consume_all_ : 1 ;
};
inline constexpr __fields __fields_bool{.__locale_specific_form_ = true, .__type_ = true, .__consume_all_ = true};
inline constexpr __fields __fields_integral{
    .__type_ = true,
    .__consume_all_ = true};
inline constexpr __fields __fields_floating_point{
    .__sign_ = true,
    .__type_ = true,
    .__consume_all_ = true};
inline constexpr __fields __fields_string{.__precision_ = true, .__type_ = true, .__consume_all_ = true};
inline constexpr __fields __fields_pointer{.__zero_padding_ = true, .__type_ = true, .__consume_all_ = true};
inline constexpr __fields __fields_tuple{.__use_range_fill_ = true, .__clear_brackets_ = true};
inline constexpr __fields __fields_range{.__use_range_fill_ = true, .__clear_brackets_ = true};
inline constexpr __fields __fields_fill_align_width{};
enum class __alignment : uint8_t ;;
enum class __sign : uint8_t ;;
enum class __type : uint8_t {
  __default = 0,
  __string,
  __binary_lower_case,
  __binary_upper_case,
  __octal,
  __decimal,
  __hexadecimal_lower_case,
  __hexadecimal_upper_case,
  __pointer_lower_case,
  __pointer_upper_case,
  __char,
  __debug
};
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) inline constexpr uint32_t __create_type_mask(__type __t) {
  uint32_t __shift = static_cast<uint32_t>(__t);
  return 1 << __shift;
}
inline constexpr uint32_t __type_mask_integer =
    __create_type_mask(__type::__binary_lower_case) |
    __create_type_mask(__type::__hexadecimal_upper_case);
struct __std {
  __alignment __alignment_ : 3;
  __sign __sign_ : 2;
  bool __alternate_form_ : 1;
  bool __locale_specific_form_ : 1;
  __type __type_;
};
struct __chrono {
  __alignment __alignment_ : 3;
  bool __locale_specific_form_ : 1;
  bool __hour_ : 1;
  bool __weekday_name_ : 1;
  bool __weekday_ : 1;
  bool __day_of_year_ : 1;
  bool __week_of_year_ : 1;
  bool __month_name_ : 1;
};
template <class _CharT>
struct __code_point;
template <>
struct __code_point<char> {
  char __data[4] ;
};
template <>
struct __code_point<wchar_t> {
  wchar_t __data[4 / sizeof(wchar_t)] ;
};
template <class _CharT>
struct __parsed_specifications {
  union {
    __alignment __alignment_ : 3;
    __std __std_;
    __chrono __chrono_;
  };
  int32_t __width_;
  int32_t __precision_;
  __code_point<_CharT> __fill_;
};
static_assert(sizeof(__parsed_specifications<char>) == 16);
static_assert(is_trivially_copyable_v<__parsed_specifications<char>>);
static_assert(sizeof(__parsed_specifications<wchar_t>) == 16);
static_assert(is_trivially_copyable_v<__parsed_specifications<wchar_t>>);
template <class _CharT>
class __parser {
public:
   ;
   ;
  bool __locale_specific_form_ : 1 ;
  bool __clear_brackets_ : 1 ;
  __type __type_;
  bool __hour_ : 1 ;
  bool __weekday_name_ : 1 ;
  bool __weekday_ : 1 ;
  bool __day_of_year_ : 1 ;
  bool __week_of_year_ : 1 ;
  bool __month_name_ : 1 ;
  uint8_t __reserved_0_ : 2 ;
  uint8_t __reserved_1_ : 6 ;
  bool __width_as_arg_ : 1 ;
  bool __precision_as_arg_ : 1 ;
  int32_t __width_;
  int32_t __precision_;
  __code_point<_CharT> __fill_;
   ;
};
static_assert(sizeof(__parser<char>) == 16);
static_assert(sizeof(__parser<wchar_t>) == 16);
 ;
 ;
template <contiguous_iterator _Iterator>
struct __column_width_result ;;
;
enum class __column_width_rounding ;
namespace __detail {
 ;
}
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __formatter {
struct __attribute__((__visibility__("default"))) __padding_size_result ;;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iterator, size_t _Size>
struct __static_bounded_iter_storage ;
template <class _Iterator>
struct __static_bounded_iter_storage<_Iterator, 0> ;;
template <class _Iterator, size_t _Size>
struct __static_bounded_iter ;;
template <class _Iterator, size_t _Size>
struct pointer_traits<__static_bounded_iter<_Iterator, _Size> > {
  using pointer = __static_bounded_iter<_Iterator, _Size>;
  using element_type = typename pointer_traits<_Iterator>::element_type;
  using difference_type = typename pointer_traits<_Iterator>::difference_type;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, size_t _Size>
struct array {
  using __trivially_relocatable [[__gnu__::__nodebug__]] =
      __conditional_t<__libcpp_is_trivially_relocatable<_Tp>::value, array, void>;
  using __replaceable [[__gnu__::__nodebug__]] = __conditional_t<__is_replaceable_v<_Tp>, array, void>;
  using __self [[__gnu__::__nodebug__]] = array;
  using value_type = _Tp;
  using reference = value_type&;
  using const_reference = const value_type&;
  using pointer = value_type*;
  using const_pointer = const value_type*;
  using iterator = pointer;
  using const_iterator = const_pointer;
  using size_type = size_t;
  using difference_type = ptrdiff_t;
  using reverse_iterator = std::reverse_iterator<iterator>;
  using const_reverse_iterator = std::reverse_iterator<const_iterator>;
  _Tp __elems_[_Size];
  [[__nodiscard__]]
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr reference at(size_type __n) ;
};
;
 ;
 ;
 ;
template <class _Tp, size_t _Size>
struct tuple_size<array<_Tp, _Size> > : public integral_constant<size_t, _Size> {};
template <size_t _Ip, class _Tp, size_t _Size>
struct tuple_element<_Ip, array<_Tp, _Size> > ;;
 ;
 ;
 ;
template <size_t _Ip, class _Tp, size_t _Size>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const _Tp&& get(const array<_Tp, _Size>&& __a) noexcept ;
 ;
 ;
 ;
 ;
} }
extern "C" 
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using ::lconv __attribute__((__using_if_exists__));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __locale {
struct __locale_guard ;;
using __locale_t [[__gnu__::__nodebug__]] = ::locale_t;
}
} }
namespace std
{
struct __type_info_implementations {
  struct __string_impl_base {
    typedef const char* __type_name_t;
  };
  struct __unique_impl : __string_impl_base {
  };
  struct __non_unique_impl : __string_impl_base {
  };
  struct __non_unique_arm_rtti_bit_impl ;;
  typedef
      __unique_impl
          __impl;
};
class __attribute__((__visibility__("default"))) [[_Clang::__ptrauth_vtable_pointer__( process_independent, no_address_discrimination, no_extra_discrimination)]] type_info {
protected:
  typedef __type_info_implementations::__impl __impl;
  __impl::__type_name_t __type_name;
public:
  virtual ~type_info();
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool operator==(const type_info& __arg) const noexcept ;
};
class __attribute__((__visibility__("default"))) bad_cast : public exception {
public:
};
class __attribute__((__visibility__("default"))) bad_typeid : public exception {
public:
};
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
[[__noreturn__]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __throw_bad_cast() ;
 ;
class __attribute__((__visibility__("default"))) __shared_count {
protected:
  long __shared_owners_;
  virtual ~__shared_count();
private:
public:
};
class __attribute__((__visibility__("default"))) __shared_weak_count : private __shared_count {
  long __shared_weak_owners_;
public:
protected:
public:
private:
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct once_flag;
;
struct once_flag {
  typedef unsigned long _State_type;
  static const _State_type _Unset = 0;
  static const _State_type _Pending = 1;
  static const _State_type _Complete = ~_State_type(0);
private:
  _State_type __state_;
  ;
};
template <class _Fp>
class __call_once_param ;;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __uninitialized_tag ;
template <class _Tp>
struct __no_destroy ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __private_constructor_tag ;;
} }
typedef long int ptrdiff_t;
typedef long unsigned int size_t;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__("default"))) locale;
template <class _CharT>
class collate;
;
;
class __attribute__((__visibility__("default"))) locale {
public:
  using __trivially_relocatable [[__gnu__::__nodebug__]] = locale;
  using __replaceable [[__gnu__::__nodebug__]] = locale;
  class __attribute__((__visibility__("default"))) facet;
  class __attribute__((__visibility__("default"))) id;
  typedef int category;
  static const category
      none = 0,
      collate = (1 << 3), ctype = (1 << 0), monetary = (1 << 4),
      numeric = (1 << 1), time = (1 << 2), messages = (1 << 5),
      all = collate | ctype | monetary | numeric | time | messages;
  locale(const locale&) noexcept;
  ;
   ;
private:
  class __imp;
  __imp* __locale_;
  template <class>
  friend struct __no_destroy;
  ;
  ;
};
class __attribute__((__visibility__("default"))) locale::facet : public __shared_count {
protected:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit facet(size_t __refs = 0)  ;
private:
};
class __attribute__((__visibility__("default"))) locale::id {
  once_flag __flag_;
  int32_t __id_;
  static int32_t __next_id;
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr id()  ;
public:
  friend class locale;
  friend class locale::__imp;
};
 ;
 ;
template <class _CharT>
class collate : public locale::facet {
public:
  typedef _CharT char_type;
  typedef basic_string<char_type> string_type;
  static locale::id id;
protected:
};
template <class _CharT>
locale::id collate<_CharT>::id;
extern template class __attribute__((__visibility__("default"))) collate<char>;
extern template class __attribute__((__visibility__("default"))) collate<wchar_t>;
template <class _CharT>
class collate_byname;
template <>
class __attribute__((__visibility__("default"))) collate_byname<char> : public collate<char> {
  __locale::__locale_t __l_;
public:
  typedef char char_type;
  typedef basic_string<char_type> string_type;
protected:
};
template <>
class __attribute__((__visibility__("default"))) collate_byname<wchar_t> : public collate<wchar_t> {
  __locale::__locale_t __l_;
public:
  typedef wchar_t char_type;
  typedef basic_string<char_type> string_type;
protected:
};
class __attribute__((__visibility__("default"))) ctype_base {
public:
  typedef unsigned short mask;
  static const mask space = _ISspace;
  static const mask print = _ISprint;
  static const mask cntrl = _IScntrl;
  static const mask upper = _ISupper;
  static const mask lower = _ISlower;
  static const mask alpha = _ISalpha;
  static const mask digit = _ISdigit;
  static const mask punct = _ISpunct;
  static const mask xdigit = _ISxdigit;
  static const mask blank = _ISblank;
  static const mask __regex_word = 0x80;
  static const mask alnum = alpha | digit;
  static const mask graph = alnum | punct;
  static_assert((__regex_word & ~(std::make_unsigned<mask>::type)(space | print | cntrl | upper | lower | alpha |
                                                                  digit | punct | xdigit | blank)) == __regex_word,
                "__regex_word can't overlap other bits");
};
template <class _CharT>
class ctype;
template <>
class __attribute__((__visibility__("default"))) ctype<wchar_t> : public locale::facet, public ctype_base {
public:
  typedef wchar_t char_type;
  static locale::id id;
protected:
};
template <>
class __attribute__((__visibility__("default"))) ctype<char> : public locale::facet, public ctype_base {
  const mask* __tab_;
  bool __del_;
public:
};
template <class _CharT>
class ctype_byname;
template <>
class __attribute__((__visibility__("default"))) ctype_byname<char> : public ctype<char> {
  __locale::__locale_t __l_;
public:
protected:
};
template <>
class __attribute__((__visibility__("default"))) ctype_byname<wchar_t> : public ctype<wchar_t> {
  __locale::__locale_t __l_;
public:
protected:
};
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
class __attribute__((__visibility__("default"))) codecvt_base {
public:
  enum result { ok, partial, error, noconv };
};
template <class _InternT, class _ExternT, class _StateT>
class codecvt;
template <>
class __attribute__((__visibility__("default"))) codecvt<char, char, mbstate_t> : public locale::facet, public codecvt_base {
public:
  typedef char intern_type;
  typedef char extern_type;
  typedef mbstate_t state_type;
  static locale::id id;
protected:
};
template <>
class __attribute__((__visibility__("default"))) codecvt<wchar_t, char, mbstate_t> : public locale::facet, public codecvt_base {
  __locale::__locale_t __l_;
public:
  typedef wchar_t intern_type;
  typedef char extern_type;
  typedef mbstate_t state_type;
  static locale::id id;
protected:
};
template <>
class __attribute__((__deprecated__)) __attribute__((__visibility__("default"))) codecvt<char16_t, char, mbstate_t>
    : public locale::facet, public codecvt_base {
public:
  typedef char16_t intern_type;
  typedef char extern_type;
  typedef mbstate_t state_type;
  static locale::id id;
protected:
};
template <>
class __attribute__((__visibility__("default"))) codecvt<char16_t, char8_t, mbstate_t> : public locale::facet, public codecvt_base {
public:
  typedef char16_t intern_type;
  typedef char8_t extern_type;
  typedef mbstate_t state_type;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit codecvt(size_t __refs = 0) : locale::facet(__refs) {}
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) result
  out(state_type& __st,
      const intern_type* __frm,
      const intern_type* __frm_end,
      const intern_type*& __frm_nxt,
      extern_type* __to,
      extern_type* __to_end,
      extern_type*& __to_nxt) const ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) result
  in(state_type& __st,
     const extern_type* __frm,
     const extern_type* __frm_end,
     const extern_type*& __frm_nxt,
     intern_type* __to,
     intern_type* __to_end,
     intern_type*& __to_nxt) const ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) int encoding() const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) bool always_noconv() const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) int
  length(state_type& __st, const extern_type* __frm, const extern_type* __end, size_t __mx) const ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) int max_length() const noexcept ;
  static locale::id id;
protected:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit codecvt(const char*, size_t __refs = 0) : locale::facet(__refs) {}
  ~codecvt() override;
  virtual result
  do_out(state_type& __st,
         const intern_type* __frm,
         const intern_type* __frm_end,
         const intern_type*& __frm_nxt,
         extern_type* __to,
         extern_type* __to_end,
         extern_type*& __to_nxt) const;
  virtual result
  do_in(state_type& __st,
        const extern_type* __frm,
        const extern_type* __frm_end,
        const extern_type*& __frm_nxt,
        intern_type* __to,
        intern_type* __to_end,
        intern_type*& __to_nxt) const;
  virtual result do_unshift(state_type& __st, extern_type* __to, extern_type* __to_end, extern_type*& __to_nxt) const;
  virtual int do_encoding() const noexcept;
  virtual bool do_always_noconv() const noexcept;
  virtual int do_length(state_type&, const extern_type* __frm, const extern_type* __end, size_t __mx) const;
  virtual int do_max_length() const noexcept;
};
template <>
class __attribute__((__deprecated__)) __attribute__((__visibility__("default"))) codecvt<char32_t, char, mbstate_t>
    : public locale::facet, public codecvt_base {
public:
  typedef char32_t intern_type;
  typedef char extern_type;
  typedef mbstate_t state_type;
  static locale::id id;
protected:
};
template <>
class __attribute__((__visibility__("default"))) codecvt<char32_t, char8_t, mbstate_t> : public locale::facet, public codecvt_base {
public:
  typedef char32_t intern_type;
  typedef char8_t extern_type;
  typedef mbstate_t state_type;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit codecvt(size_t __refs = 0) : locale::facet(__refs) {}
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) result
  out(state_type& __st,
      const intern_type* __frm,
      const intern_type* __frm_end,
      const intern_type*& __frm_nxt,
      extern_type* __to,
      extern_type* __to_end,
      extern_type*& __to_nxt) const ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) result
  in(state_type& __st,
     const extern_type* __frm,
     const extern_type* __frm_end,
     const extern_type*& __frm_nxt,
     intern_type* __to,
     intern_type* __to_end,
     intern_type*& __to_nxt) const ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) int encoding() const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) bool always_noconv() const noexcept ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) int
  length(state_type& __st, const extern_type* __frm, const extern_type* __end, size_t __mx) const ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) int max_length() const noexcept ;
  static locale::id id;
protected:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit codecvt(const char*, size_t __refs = 0) : locale::facet(__refs) {}
  ~codecvt() override;
  virtual result
  do_out(state_type& __st,
         const intern_type* __frm,
         const intern_type* __frm_end,
         const intern_type*& __frm_nxt,
         extern_type* __to,
         extern_type* __to_end,
         extern_type*& __to_nxt) const;
  virtual result
  do_in(state_type& __st,
        const extern_type* __frm,
        const extern_type* __frm_end,
        const extern_type*& __frm_nxt,
        intern_type* __to,
        intern_type* __to_end,
        intern_type*& __to_nxt) const;
  virtual result do_unshift(state_type& __st, extern_type* __to, extern_type* __to_end, extern_type*& __to_nxt) const;
  virtual int do_encoding() const noexcept;
  virtual bool do_always_noconv() const noexcept;
  virtual int do_length(state_type&, const extern_type* __frm, const extern_type* __end, size_t __mx) const;
  virtual int do_max_length() const noexcept;
};
template <class _InternT, class _ExternT, class _StateT>
class codecvt_byname : public codecvt<_InternT, _ExternT, _StateT> {
public:
protected:
};
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#pragma GCC diagnostic pop
extern template class __attribute__((__visibility__("default"))) codecvt_byname<char, char, mbstate_t>;
extern template class __attribute__((__visibility__("default"))) codecvt_byname<wchar_t, char, mbstate_t>;
extern template class __attribute__((__deprecated__))
__attribute__((__visibility__("default"))) codecvt_byname<char16_t, char, mbstate_t>;
extern template class __attribute__((__deprecated__))
__attribute__((__visibility__("default"))) codecvt_byname<char32_t, char, mbstate_t>;
extern template class __attribute__((__visibility__("default"))) codecvt_byname<char16_t, char8_t, mbstate_t>;
extern template class __attribute__((__visibility__("default"))) codecvt_byname<char32_t, char8_t, mbstate_t>;
template <size_t _Np>
struct __narrow_to_utf8 ;
template <>
struct __narrow_to_utf8<8> ;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <>
struct __attribute__((__visibility__("default"))) __narrow_to_utf8<16> : public codecvt<char16_t, char, mbstate_t> {
#pragma GCC diagnostic pop
   ;
};
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <>
struct __attribute__((__visibility__("default"))) __narrow_to_utf8<32> : public codecvt<char32_t, char, mbstate_t> {
#pragma GCC diagnostic pop
   ;
};
template <size_t _Np>
struct __widen_from_utf8 ;;
template <>
struct __widen_from_utf8<8> ;;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <>
struct __attribute__((__visibility__("default"))) __widen_from_utf8<16> : public codecvt<char16_t, char, mbstate_t> {
#pragma GCC diagnostic pop
   ;
};
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <>
struct __attribute__((__visibility__("default"))) __widen_from_utf8<32> : public codecvt<char32_t, char, mbstate_t> {
#pragma GCC diagnostic pop
   ;
};
template <class _CharT>
class numpunct;
template <>
class __attribute__((__visibility__("default"))) numpunct<char> : public locale::facet {
public:
  typedef char char_type;
  typedef basic_string<char_type> string_type;
  static locale::id id;
protected:
  char_type __decimal_point_;
  char_type __thousands_sep_;
  string __grouping_;
};
template <>
class __attribute__((__visibility__("default"))) numpunct<wchar_t> : public locale::facet {
public:
  typedef wchar_t char_type;
  typedef basic_string<char_type> string_type;
  static locale::id id;
protected:
  char_type __decimal_point_;
  char_type __thousands_sep_;
  string __grouping_;
};
template <class _CharT>
class numpunct_byname;
template <>
class __attribute__((__visibility__("default"))) numpunct_byname<char> : public numpunct<char> {
public:
  typedef char char_type;
  typedef basic_string<char_type> string_type;
protected:
private:
};
template <>
class __attribute__((__visibility__("default"))) numpunct_byname<wchar_t> : public numpunct<wchar_t> {
public:
  typedef wchar_t char_type;
  typedef basic_string<char_type> string_type;
protected:
private:
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __formatter {
 ;
 ;
 ;
;
;
;
;
 ;
 ;
 ;
 ;
template <class _CharT>
struct __bool_strings;
template <>
struct __bool_strings<char> ;
template <>
struct __bool_strings<wchar_t> ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <__fmt_char_type _CharT>
struct formatter<bool, _CharT> ;
template <>
inline constexpr bool enable_nonlocking_formatter_optimization<bool> = true;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _CharT>
  requires same_as<typename _Tp::__container, vector<bool, typename _Tp::__container::allocator_type>>
struct formatter<_Tp, _CharT> ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
template <__unsigned_integer _Tp>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Tp __bit_log2(_Tp __t) noexcept ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <__unsigned_integer _Tp>
[[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Tp bit_floor(_Tp __t) noexcept ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <__unsigned_integer _Tp>
[[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr int bit_width(_Tp __t) noexcept ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum class endian ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr int __popcount(_Tp __t) noexcept ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace rel_ops {
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
namespace Hyprutils::Memory {
    template <typename To, typename From>
    constexpr To sc(From&& from) noexcept ;
     ;
     ;
    namespace Math {
        enum eTransform {
            HYPRUTILS_TRANSFORM_NORMAL = 0,
            HYPRUTILS_TRANSFORM_90 = 1,
            HYPRUTILS_TRANSFORM_FLIPPED_180 = 6,
            HYPRUTILS_TRANSFORM_FLIPPED_270 = 7,
        };
    }
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <__fmt_char_type _CharT>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const _CharT* __statically_widen(const char* __str, const wchar_t* __wstr) ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __format {
template <class _Arr, class _Elem>
inline constexpr bool __is_bounded_array_of = false;
template <class _Elem, size_t _Len>
inline constexpr bool __is_bounded_array_of<_Elem[_Len], _Elem> = true;
;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
template <class _Context, size_t _Np>
struct __packed_format_arg_store ;;
template <class _Context>
struct __packed_format_arg_store<_Context, 0> {
  uint64_t __types_ = 0;
};
template <class _Context, size_t _Np>
struct __unpacked_format_arg_store {
  basic_format_arg<_Context> __args_[_Np];
};
}
template <class _Context, class... _Args>
struct __format_arg_store ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Context>
class basic_format_args ;;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _OutIt, class _CharT>
  requires output_iterator<_OutIt, const _CharT&>
class basic_format_context;
 ;
using format_context = basic_format_context<back_insert_iterator<__format::__output_buffer<char>>, char>;
using wformat_context = basic_format_context< back_insert_iterator<__format::__output_buffer<wchar_t>>, wchar_t>;
template <class _OutIt, class _CharT>
  requires output_iterator<_OutIt, const _CharT&>
class [[_Clang::__preferred_name__(format_context)]]
    [[_Clang::__preferred_name__(wformat_context)]] basic_format_context ;;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _CharT = char>
  requires same_as<remove_cvref_t<_Tp>, _Tp> && formattable<_Tp, _CharT>
struct range_formatter ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Rp, class _CharT>
concept __const_formattable_range =
    ranges::input_range<const _Rp> && formattable<ranges::range_reference_t<const _Rp>, _CharT>;
template <class _Rp, class _CharT>
using __fmt_maybe_const [[__gnu__::__nodebug__]] = conditional_t<__const_formattable_range<_Rp, _CharT>, const _Rp, _Rp>;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wshadow"
enum class range_format { disabled, map, set, sequence, string, debug_string };
#pragma clang diagnostic pop
template <class _Rp>
struct __instantiated_the_primary_template_of_format_kind;
template <class _Rp>
constexpr range_format format_kind = [] {
  static_assert(sizeof(_Rp) != sizeof(_Rp), "create a template specialization of format_kind for your type");
  return range_format::disabled;
}();
template <ranges::input_range _Rp>
  requires same_as<_Rp, remove_cvref_t<_Rp>>
inline constexpr range_format format_kind<_Rp> = [] {
  if constexpr (same_as<remove_cvref_t<ranges::range_reference_t<_Rp>>, _Rp>)
    return range_format::disabled;
  else if constexpr (requires { typename _Rp::key_type; }) ; else
    return range_format::sequence;
}();
template <range_format _Kp, ranges::input_range _Rp, class _CharT>
struct __range_default_formatter;
template <ranges::input_range _Rp, class _CharT>
struct __range_default_formatter<range_format::sequence, _Rp, _CharT> ;
template <ranges::input_range _Rp, class _CharT>
struct __range_default_formatter<range_format::map, _Rp, _CharT> ;;
template <ranges::input_range _Rp, class _CharT>
struct __range_default_formatter<range_format::set, _Rp, _CharT> ;;
template <range_format _Kp, ranges::input_range _Rp, class _CharT>
  requires(_Kp == range_format::string || _Kp == range_format::debug_string)
struct __range_default_formatter<_Kp, _Rp, _CharT> ;
template <ranges::input_range _Rp, class _CharT>
  requires(format_kind<_Rp> != range_format::disabled && formattable<ranges::range_reference_t<_Rp>, _CharT>)
struct formatter<_Rp, _CharT> : __range_default_formatter<format_kind<_Rp>, _Rp, _CharT> {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Allocator = allocator<_Tp> >
class deque;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Container = deque<_Tp> >
class queue;
template <class _Tp, class _Container = vector<_Tp>, class _Compare = less<typename _Container::value_type> >
class priority_queue;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Container = deque<_Tp> >
class stack;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Adaptor, class _CharT>
struct __formatter_container_adaptor ;
template <class _CharT, class _Tp, formattable<_CharT> _Container>
struct formatter<queue<_Tp, _Container>, _CharT>
    : public __formatter_container_adaptor<queue<_Tp, _Container>, _CharT> {};
template <class _CharT, class _Tp, class _Container, class _Compare>
struct formatter<priority_queue<_Tp, _Container, _Compare>, _CharT>
    : public __formatter_container_adaptor<priority_queue<_Tp, _Container, _Compare>, _CharT> {};
template <class _CharT, class _Tp, formattable<_CharT> _Container>
struct formatter<stack<_Tp, _Container>, _CharT>
    : public __formatter_container_adaptor<stack<_Tp, _Container>, _CharT> {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __escaped_output_table {
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) inline constexpr uint32_t __entries[735] = {
    0xbb9789a1 ,
    0xbe8785e1 ,
    0xc4d2c004 };
[[nodiscard]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool __needs_escape(const char32_t __code_point) noexcept ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __find_first_of {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto find_first_of = __find_first_of{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter1, class _Func1>
struct in_fun_result ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Iter, class _Func>
using for_each_result = in_fun_result<_Iter, _Func>;
struct __for_each {
private:
   ;
public:
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto for_each = __for_each{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using ::signbit __attribute__((__using_if_exists__));
using ::fpclassify __attribute__((__using_if_exists__));
using ::isgreater __attribute__((__using_if_exists__));
using ::isgreaterequal __attribute__((__using_if_exists__));
using ::isless __attribute__((__using_if_exists__));
using ::islessequal __attribute__((__using_if_exists__));
using ::islessgreater __attribute__((__using_if_exists__));
using ::isunordered __attribute__((__using_if_exists__));
using ::isunordered __attribute__((__using_if_exists__));
using ::float_t __attribute__((__using_if_exists__));
using ::double_t __attribute__((__using_if_exists__));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __formatter {
 ;
 ;
 ;
template <class _Tp>
struct __traits;
 ;
template <>
struct __traits<float> ;
template <>
struct __traits<double> ;;
template <floating_point _Fp>
class __float_buffer ;;
struct __float_result ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
}
template <__fmt_char_type _CharT>
struct __formatter_floating_point ;;
template <__fmt_char_type _CharT>
struct formatter<float, _CharT> : public __formatter_floating_point<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<double, _CharT> : public __formatter_floating_point<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<long double, _CharT> : public __formatter_floating_point<_CharT> {};
template <__fmt_char_type _CharT>
struct __formatter_integer ;;
template <__fmt_char_type _CharT>
struct formatter<unsigned, _CharT> : public __formatter_integer<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<unsigned long, _CharT> : public __formatter_integer<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<unsigned long long, _CharT> : public __formatter_integer<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<__uint128_t, _CharT> : public __formatter_integer<_CharT> {};
template <>
inline constexpr bool enable_nonlocking_formatter_optimization<long long> = true;
template <>
inline constexpr bool enable_nonlocking_formatter_optimization<__int128_t> = true;
template <>
inline constexpr bool enable_nonlocking_formatter_optimization<unsigned char> = true;
template <>
inline constexpr bool enable_nonlocking_formatter_optimization<unsigned short> = true;
template <>
inline constexpr bool enable_nonlocking_formatter_optimization<unsigned> = true;
template <>
inline constexpr bool enable_nonlocking_formatter_optimization<unsigned long> = true;
template <>
inline constexpr bool enable_nonlocking_formatter_optimization<unsigned long long> = true;
template <>
inline constexpr bool enable_nonlocking_formatter_optimization<__uint128_t> = true;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <__fmt_char_type _CharT>
struct __formatter_pointer {
public:
   ;
   ;
  __format_spec::__parser<_CharT> __parser_;
};
template <__fmt_char_type _CharT>
struct formatter<nullptr_t, _CharT> : public __formatter_pointer<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<void*, _CharT> : public __formatter_pointer<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<const void*, _CharT> : public __formatter_pointer<_CharT> {};
template <>
inline constexpr bool enable_nonlocking_formatter_optimization<nullptr_t> = true;
template <>
inline constexpr bool enable_nonlocking_formatter_optimization<void*> = true;
template <>
inline constexpr bool enable_nonlocking_formatter_optimization<const void*> = true;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <__fmt_char_type _CharT>
struct __formatter_string ;;
template <__fmt_char_type _CharT>
struct formatter<_CharT*, _CharT> : public formatter<const _CharT*, _CharT> {
  using _Base [[__gnu__::__nodebug__]] = formatter<const _CharT*, _CharT>;
   ;
};
template <__fmt_char_type _CharT, size_t _Size>
struct formatter<_CharT[_Size], _CharT> : public __formatter_string<_CharT> {
  using _Base [[__gnu__::__nodebug__]] = __formatter_string<_CharT>;
   ;
};
template <__fmt_char_type _CharT, class _Traits, class _Allocator>
struct formatter<basic_string<_CharT, _Traits, _Allocator>, _CharT> : public __formatter_string<_CharT> {
  using _Base [[__gnu__::__nodebug__]] = __formatter_string<_CharT>;
   ;
};
template <class _CharT, class... _Args>
struct basic_format_string ;
template <class... _Args>
using format_string = basic_format_string<char, type_identity_t<_Args>...>;
template <class... _Args>
using wformat_string = basic_format_string<wchar_t, type_identity_t<_Args>...>;
 ;
 ;
 ;
namespace __format {
}
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <__fmt_char_type _CharT, class _Tuple, formattable<_CharT>... _Args>
struct __formatter_tuple ;;
template <__fmt_char_type _CharT, formattable<_CharT>... _Args>
struct formatter<pair<_Args...>, _CharT> : public __formatter_tuple<_CharT, pair<_Args...>, _Args...> {};
template <__fmt_char_type _CharT, formattable<_CharT>... _Args>
struct formatter<tuple<_Args...>, _CharT> : public __formatter_tuple<_CharT, tuple<_Args...>, _Args...> {};
} }
namespace Hyprutils {
    namespace Math {
        class Vector2D {
          public:
            constexpr Vector2D(int xx, int yy)  ;
            constexpr Vector2D() = default;
            ~Vector2D() = default;
            double x = 0;
            double y = 0;
            constexpr Vector2D operator-(const Vector2D& a) const ;
            constexpr Vector2D operator-() const ;
            constexpr bool operator==(const Vector2D& a) const ;
        };
    }
}
template <typename CharT>
struct std::formatter<Hyprutils::Math::Vector2D, CharT> : std::formatter<CharT> {
    bool formatJson = false;
    bool formatX = false;
    std::string precision = "";
     ;
     ;
};
namespace Hyprutils::Math {
    struct SBoxExtents {
        Vector2D topLeft;
        Vector2D bottomRight;
    };
    class CBox {
      public:
        CBox() ;
        double x = 0, y = 0;
        union {
            double w;
            double width;
        };
        union {
            double h;
            double height;
        };
        double rot = 0;
      private:
    };
}
namespace Hyprutils {
    namespace Math {
        class CRegion {
          public:
             ;
          private:
            pixman_region32_t m_rRegion;
        };
    }
}
 namespace __attribute__((__type_visibility__("default"))) std {
using terminate_handler = void (*)();
class __attribute__((__visibility__("default"))) exception_ptr;
__attribute__((__visibility__("default"))) exception_ptr current_exception() noexcept;
[[__noreturn__]] __attribute__((__visibility__("default"))) void rethrow_exception(exception_ptr);
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _AlgPolicy, class _BidirectionalIterator>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void
__reverse_impl(_BidirectionalIterator __first, _BidirectionalIterator __last, bidirectional_iterator_tag) ;
 ;
class __attribute__((__visibility__("hidden"))) __do_message;
class __attribute__((__visibility__("default"))) error_category {
public:
  friend class __attribute__((__visibility__("hidden"))) __do_message;
};
class __attribute__((__visibility__("hidden"))) __do_message : public error_category {
public:
};
[[__gnu__::__const__]]
[[__gnu__::__const__]] __attribute__((__visibility__("default"))) const error_category& system_category() noexcept;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct is_error_condition_enum : public false_type {};
template <class _Tp>
inline constexpr bool is_error_condition_enum_v = is_error_condition_enum<_Tp>::value;
template <>
struct is_error_condition_enum<errc> : true_type {};
namespace __adl_only {
void make_error_condition() = delete;
}
class __attribute__((__visibility__("default"))) error_condition ;
template <>
struct hash<error_condition> : public __unary_function<error_condition, size_t> {
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct is_error_code_enum : public false_type {};
template <class _Tp>
inline constexpr bool is_error_code_enum_v = is_error_code_enum<_Tp>::value;
namespace __adl_only {
}
class __attribute__((__visibility__("default"))) error_code {
  int __val_;
  const error_category* __cat_;
public:
   ;
   ;
};
template <>
struct hash<error_code> : public __unary_function<error_code, size_t> {
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__("default"))) system_error : public runtime_error {
  error_code __ec_;
public:
};
[[__noreturn__]] __attribute__((__visibility__("default"))) void __throw_system_error(int __ev, const char* __what_arg);
[[__noreturn__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __throw_system_error(error_code __ec, const char* __what_arg) ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum __legacy_memory_order { __mo_relaxed, __mo_consume, __mo_acquire, __mo_release, __mo_acq_rel, __mo_seq_cst };
using __memory_order_underlying_t [[__gnu__::__nodebug__]] = __underlying_type_t<__legacy_memory_order>;
enum class memory_order : __memory_order_underlying_t {
  relaxed = __mo_relaxed,
  consume = __mo_consume,
  acquire = __mo_acquire,
  release = __mo_release,
  acq_rel = __mo_acq_rel,
  seq_cst = __mo_seq_cst
};
static_assert(is_same<__underlying_type_t<memory_order>, __memory_order_underlying_t>::value,
              "unexpected underlying type for std::memory_order");
inline constexpr auto memory_order_relaxed = memory_order::relaxed;
inline constexpr auto memory_order_consume = memory_order::consume;
inline constexpr auto memory_order_acquire = memory_order::acquire;
inline constexpr auto memory_order_release = memory_order::release;
inline constexpr auto memory_order_acq_rel = memory_order::acq_rel;
inline constexpr auto memory_order_seq_cst = memory_order::seq_cst;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <typename _Tp>
struct __cxx_atomic_base_impl {
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108")))
  __cxx_atomic_base_impl() noexcept = default;
  _Atomic(_Tp) __a_value;
};
 ;
template <class _Tp>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __cxx_atomic_init(__cxx_atomic_base_impl<_Tp>* __a, _Tp __val) noexcept ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <typename _Tp, typename _Base = __cxx_atomic_base_impl<_Tp> >
struct __cxx_atomic_impl : public _Base {
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using __cxx_contention_t [[__gnu__::__nodebug__]] = int32_t;
using __cxx_atomic_contention_t [[__gnu__::__nodebug__]] = __cxx_atomic_impl<__cxx_contention_t>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <intmax_t _Xp, intmax_t _Yp>
inline const intmax_t __static_gcd = __static_gcd<_Yp, _Xp % _Yp>;
template <intmax_t _Xp>
inline const intmax_t __static_gcd<_Xp, 0> = _Xp;
template <>
inline const intmax_t __static_gcd<0, 0> = 1;
template <intmax_t _Xp, intmax_t _Yp>
inline const intmax_t __static_lcm = _Xp / __static_gcd<_Xp, _Yp> * _Yp;
template <intmax_t _Xp>
inline const intmax_t __static_abs = _Xp < 0 ? -_Xp : _Xp;
template <intmax_t _Xp>
inline const intmax_t __static_sign = _Xp == 0 ? 0 : (_Xp < 0 ? -1 : 1);
template <intmax_t _Xp, intmax_t _Yp, intmax_t = __static_sign<_Yp> >
class __ll_add;
template <intmax_t _Xp, intmax_t _Yp>
class __ll_add<_Xp, _Yp, 1> ;
template <intmax_t _Xp, intmax_t _Yp>
class __ll_add<_Xp, _Yp, 0> {
public:
  static const intmax_t value = _Xp;
};
template <intmax_t _Xp, intmax_t _Yp>
class __ll_add<_Xp, _Yp, -1> ;;
template <intmax_t _Xp, intmax_t _Yp, intmax_t = __static_sign<_Yp> >
class __ll_sub;
template <intmax_t _Xp, intmax_t _Yp>
class __ll_sub<_Xp, _Yp, 1> ;;
template <intmax_t _Xp, intmax_t _Yp>
class __ll_mul {
  static const intmax_t nan = (1LL << (sizeof(intmax_t) * 8 - 1));
  static const intmax_t min = nan + 1;
  static const intmax_t max = -min;
  static const intmax_t __a_x = __static_abs<_Xp>;
  static const intmax_t __a_y = __static_abs<_Yp>;
  static_assert(_Xp != nan && _Yp != nan && __a_x <= max / __a_y, "overflow in __ll_mul");
public:
  static const intmax_t value = _Xp * _Yp;
};
template <intmax_t _Yp>
class __ll_mul<0, _Yp> {
public:
  static const intmax_t value = 0;
};
template <intmax_t _Xp>
class __ll_mul<_Xp, 0> {
public:
  static const intmax_t value = 0;
};
template <>
class __ll_mul<0, 0> {
public:
  static const intmax_t value = 0;
};
template <intmax_t _Xp, intmax_t _Yp>
class __ll_div ;;
template <intmax_t _Num, intmax_t _Den = 1>
class ratio {
  static_assert(__static_abs<_Num> >= 0, "ratio numerator is out of range");
  static_assert(_Den != 0, "ratio divide by 0");
  static_assert(__static_abs<_Den> > 0, "ratio denominator is out of range");
  static constexpr const intmax_t __na = __static_abs<_Num>;
  static constexpr const intmax_t __da = __static_abs<_Den>;
  static constexpr const intmax_t __s = __static_sign<_Num> * __static_sign<_Den>;
  static constexpr const intmax_t __gcd = __static_gcd<__na, __da>;
public:
  static inline constexpr const intmax_t num = __s * __na / __gcd;
  static inline constexpr const intmax_t den = __da / __gcd;
  typedef ratio<num, den> type;
};
template <class _Tp>
inline const bool __is_ratio_v = false;
template <intmax_t _Num, intmax_t _Den>
inline const bool __is_ratio_v<ratio<_Num, _Den> > = true;
typedef ratio<1LL, 1000000000000000000LL> atto;
typedef ratio<1LL, 1000000000000000LL> femto;
typedef ratio<1LL, 1000000000000LL> pico;
typedef ratio<1LL, 1000000000LL> nano;
typedef ratio<1LL, 1000000LL> micro;
typedef ratio<1LL, 1000LL> milli;
typedef ratio<1LL, 100LL> centi;
typedef ratio<1LL, 10LL> deci;
typedef ratio< 10LL, 1LL> deca;
typedef ratio< 100LL, 1LL> hecto;
typedef ratio< 1000LL, 1LL> kilo;
typedef ratio< 1000000LL, 1LL> mega;
typedef ratio< 1000000000LL, 1LL> giga;
typedef ratio< 1000000000000LL, 1LL> tera;
typedef ratio< 1000000000000000LL, 1LL> peta;
typedef ratio<1000000000000000000LL, 1LL> exa;
template <class _R1, class _R2>
struct __ratio_multiply {
private:
  static const intmax_t __gcd_n1_d2 = __static_gcd<_R1::num, _R2::den>;
  static const intmax_t __gcd_d1_n2 = __static_gcd<_R1::den, _R2::num>;
  static_assert(__is_ratio_v<_R1>, "[ratio.general]/2 requires R1 to be a specialisation of the ratio template");
  static_assert(__is_ratio_v<_R2>, "[ratio.general]/2 requires R2 to be a specialisation of the ratio template");
public:
  typedef typename ratio< __ll_mul<_R1::num / __gcd_n1_d2, _R2::num / __gcd_d1_n2>::value,
                          __ll_mul<_R2::den / __gcd_n1_d2, _R1::den / __gcd_d1_n2>::value >::type type;
};
template <class _R1, class _R2>
using ratio_multiply = typename __ratio_multiply<_R1, _R2>::type;
template <class _R1, class _R2>
struct __ratio_divide {
private:
  static const intmax_t __gcd_n1_n2 = __static_gcd<_R1::num, _R2::num>;
  static const intmax_t __gcd_d1_d2 = __static_gcd<_R1::den, _R2::den>;
  static_assert(__is_ratio_v<_R1>, "[ratio.general]/2 requires R1 to be a specialisation of the ratio template");
  static_assert(__is_ratio_v<_R2>, "[ratio.general]/2 requires R2 to be a specialisation of the ratio template");
public:
  typedef typename ratio< __ll_mul<_R1::num / __gcd_n1_n2, _R2::den / __gcd_d1_d2>::value,
                          __ll_mul<_R2::num / __gcd_n1_n2, _R1::den / __gcd_d1_d2>::value >::type type;
};
template <class _R1, class _R2>
using ratio_divide = typename __ratio_divide<_R1, _R2>::type;
template <class _R1, class _R2>
struct __ratio_add {
private:
  static const intmax_t __gcd_n1_n2 = __static_gcd<_R1::num, _R2::num>;
  static const intmax_t __gcd_d1_d2 = __static_gcd<_R1::den, _R2::den>;
  static_assert(__is_ratio_v<_R1>, "[ratio.general]/2 requires R1 to be a specialisation of the ratio template");
  static_assert(__is_ratio_v<_R2>, "[ratio.general]/2 requires R2 to be a specialisation of the ratio template");
public:
  typedef typename ratio_multiply<
      ratio<__gcd_n1_n2, _R1::den / __gcd_d1_d2>,
      ratio< __ll_add< __ll_mul<_R1::num / __gcd_n1_n2, _R2::den / __gcd_d1_d2>::value,
                       __ll_mul<_R2::num / __gcd_n1_n2, _R1::den / __gcd_d1_d2>::value >::value,
             _R2::den > >::type type;
};
template <class _R1, class _R2>
using ratio_add = typename __ratio_add<_R1, _R2>::type;
template <class _R1, class _R2>
struct __ratio_subtract {
private:
  static const intmax_t __gcd_n1_n2 = __static_gcd<_R1::num, _R2::num>;
  static const intmax_t __gcd_d1_d2 = __static_gcd<_R1::den, _R2::den>;
  static_assert(__is_ratio_v<_R1>, "[ratio.general]/2 requires R1 to be a specialisation of the ratio template");
  static_assert(__is_ratio_v<_R2>, "[ratio.general]/2 requires R2 to be a specialisation of the ratio template");
public:
  typedef typename ratio_multiply<
      ratio<__gcd_n1_n2, _R1::den / __gcd_d1_d2>,
      ratio< __ll_sub< __ll_mul<_R1::num / __gcd_n1_n2, _R2::den / __gcd_d1_d2>::value,
                       __ll_mul<_R2::num / __gcd_n1_n2, _R1::den / __gcd_d1_d2>::value >::value,
             _R2::den > >::type type;
};
template <class _R1, class _R2>
using ratio_subtract = typename __ratio_subtract<_R1, _R2>::type;
template <class _R1, class _R2>
struct ratio_equal : _BoolConstant<(_R1::num == _R2::num && _R1::den == _R2::den)> {
  static_assert(__is_ratio_v<_R1>, "[ratio.general]/2 requires R1 to be a specialisation of the ratio template");
  static_assert(__is_ratio_v<_R2>, "[ratio.general]/2 requires R2 to be a specialisation of the ratio template");
};
template <class _R1, class _R2>
struct ratio_not_equal : _BoolConstant<!ratio_equal<_R1, _R2>::value> {
  static_assert(__is_ratio_v<_R1>, "[ratio.general]/2 requires R1 to be a specialisation of the ratio template");
  static_assert(__is_ratio_v<_R2>, "[ratio.general]/2 requires R2 to be a specialisation of the ratio template");
};
template <class _R1,
          class _R2,
          bool _Odd = false,
          intmax_t _Q1 = _R1::num / _R1::den,
          intmax_t _M1 = _R1::num % _R1::den,
          intmax_t _Q2 = _R2::num / _R2::den,
          intmax_t _M2 = _R2::num % _R2::den>
struct __ratio_less1 ;
template <class _R1, class _R2, bool _Odd, intmax_t _Qp>
struct __ratio_less1<_R1, _R2, _Odd, _Qp, 0, _Qp, 0> ;
template <class _R1, class _R2, bool _Odd, intmax_t _Qp, intmax_t _M2>
struct __ratio_less1<_R1, _R2, _Odd, _Qp, 0, _Qp, _M2> ;;
template <class _R1, class _R2, intmax_t _S1 = __static_sign<_R1::num>, intmax_t _S2 = __static_sign<_R2::num> >
struct __ratio_less ;;
template <class _R1, class _R2>
struct __ratio_less<_R1, _R2, 1LL, 1LL> ;;
template <class _R1, class _R2>
struct __ratio_less<_R1, _R2, -1LL, -1LL> {
  static const bool value = __ratio_less1<ratio<-_R2::num, _R2::den>, ratio<-_R1::num, _R1::den> >::value;
};
template <class _R1, class _R2>
struct ratio_less : _BoolConstant<__ratio_less<_R1, _R2>::value> {
  static_assert(__is_ratio_v<_R1>, "[ratio.general]/2 requires R1 to be a specialisation of the ratio template");
  static_assert(__is_ratio_v<_R2>, "[ratio.general]/2 requires R2 to be a specialisation of the ratio template");
  static_assert(__is_ratio_v<_R2>, "[ratio.general]/2 requires R2 to be a specialisation of the ratio template");
};
template <class _R1, class _R2>
struct ratio_greater : _BoolConstant<ratio_less<_R2, _R1>::value> {
  static_assert(__is_ratio_v<_R1>, "[ratio.general]/2 requires R1 to be a specialisation of the ratio template");
  static_assert(__is_ratio_v<_R2>, "[ratio.general]/2 requires R2 to be a specialisation of the ratio template");
};
template <class _R1, class _R2>
struct ratio_greater_equal : _BoolConstant<!ratio_less<_R1, _R2>::value> {
  static_assert(__is_ratio_v<_R1>, "[ratio.general]/2 requires R1 to be a specialisation of the ratio template");
  static_assert(__is_ratio_v<_R2>, "[ratio.general]/2 requires R2 to be a specialisation of the ratio template");
};
template <class _R1, class _R2>
using __ratio_gcd [[__gnu__::__nodebug__]] = ratio<__static_gcd<_R1::num, _R2::num>, __static_lcm<_R1::den, _R2::den> >;
template <class _R1, class _R2>
inline constexpr bool ratio_equal_v = ratio_equal<_R1, _R2>::value;
template <class _R1, class _R2>
inline constexpr bool ratio_not_equal_v = ratio_not_equal<_R1, _R2>::value;
template <class _R1, class _R2>
inline constexpr bool ratio_less_v = ratio_less<_R1, _R2>::value;
namespace chrono {
template <class _Rep, class _Period = ratio<1> >
class duration;
template <class _Tp>
inline const bool __is_duration_v = false;
template <class _Rep, class _Period>
inline const bool __is_duration_v<duration<_Rep, _Period> > = true;
template <class _Rep, class _Period>
inline const bool __is_duration_v<const duration<_Rep, _Period> > = true;
template <class _Rep, class _Period>
inline const bool __is_duration_v<volatile duration<_Rep, _Period> > = true;
template <class _Rep, class _Period>
inline const bool __is_duration_v<const volatile duration<_Rep, _Period> > = true;
}
template <class _Rep1, class _Period1, class _Rep2, class _Period2>
struct common_type<chrono::duration<_Rep1, _Period1>, chrono::duration<_Rep2, _Period2> > ;;
namespace chrono {
template <class _FromDuration,
          class _ToDuration,
          class _Period = typename ratio_divide<typename _FromDuration::period, typename _ToDuration::period>::type,
          bool = _Period::num == 1,
          bool = _Period::den == 1>
struct __duration_cast;
template <class _FromDuration, class _ToDuration, class _Period>
struct __duration_cast<_FromDuration, _ToDuration, _Period, true, true> {
};
template <class _FromDuration, class _ToDuration, class _Period>
struct __duration_cast<_FromDuration, _ToDuration, _Period, true, false> {
};
template <class _FromDuration, class _ToDuration, class _Period>
struct __duration_cast<_FromDuration, _ToDuration, _Period, false, true> {
};
template <class _FromDuration, class _ToDuration, class _Period>
struct __duration_cast<_FromDuration, _ToDuration, _Period, false, false> {
};
 ;
template <class _Rep>
struct treat_as_floating_point : is_floating_point<_Rep> {};
 ;
template <class _Rep, class _Period>
class duration {
  static_assert(!__is_duration_v<_Rep>, "A duration representation can not be a duration");
  static_assert(__is_ratio_v<_Period>, "Second template parameter of duration must be a std::ratio");
  static_assert(_Period::num > 0, "duration period must be positive");
  template <class _R1, class _R2>
  struct __no_overflow ;
public:
  typedef _Rep rep;
  typedef typename _Period::type period;
private:
  rep __rep_;
public:
    ;
    ;
};
typedef duration<long long, nano> nanoseconds;
typedef duration<long long, micro> microseconds;
typedef duration<long long, milli> milliseconds;
typedef duration<long long > seconds;
typedef duration< long, ratio< 60> > minutes;
typedef duration< long, ratio<3600> > hours;
typedef duration< int, ratio_multiply<ratio<24>, hours::period>> days;
typedef duration< int, ratio_multiply<ratio<7>, days::period>> weeks;
typedef duration< int, ratio_multiply<ratio<146097, 400>, days::period>> years;
typedef duration< int, ratio_divide<years::period, ratio<12>>> months;
template <class _LhsDuration, class _RhsDuration>
struct __duration_eq ;
template <class _LhsDuration>
struct __duration_eq<_LhsDuration, _LhsDuration> ;
 ;
template <class _LhsDuration, class _RhsDuration>
struct __duration_lt ;
}
inline namespace literals {
inline namespace chrono_literals {
}
}
namespace chrono {
using namespace literals::chrono_literals;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
template <class _Clock, class _Duration = typename _Clock::duration>
class time_point {
  static_assert(__is_duration_v<_Duration>, "Second template parameter of time_point must be a std::chrono::duration");
public:
  typedef _Clock clock;
  typedef _Duration duration;
  typedef typename duration::rep rep;
  typedef typename duration::period period;
private:
  duration __d_;
public:
    ;
};
}
template <class _Clock, class _Duration1, class _Duration2>
struct common_type<chrono::time_point<_Clock, _Duration1>, chrono::time_point<_Clock, _Duration2> > ;;
namespace chrono {
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class __attribute__((__visibility__("default"))) steady_clock {
public:
  typedef nanoseconds duration;
  typedef duration::rep rep;
  typedef duration::period period;
  typedef chrono::time_point<steady_clock, duration> time_point;
  static constexpr const bool is_steady = true;
};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class __attribute__((__visibility__("default"))) system_clock {
public:
  typedef microseconds duration;
  typedef duration::rep rep;
  typedef duration::period period;
  typedef chrono::time_point<system_clock> time_point;
  static constexpr const bool is_steady = false;
};
template <class _Duration>
using sys_time = time_point<system_clock, _Duration>;
using sys_seconds = sys_time<seconds>;
using sys_days = sys_time<days>;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
typedef steady_clock high_resolution_clock;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
static constexpr const int __libcpp_polling_count = 64;
 ;
struct __spinning_backoff_policy ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class = void>
struct __atomic_waitable_traits ;
template <class _Tp, class = void>
struct __atomic_waitable : false_type {};
template <class _Tp>
struct __atomic_waitable< _Tp,
                          __void_t<decltype(__atomic_waitable_traits<__decay_t<_Tp> >::__atomic_load(
                                       std::declval<const _Tp&>(), std::declval<memory_order>())),
                                   decltype(__atomic_waitable_traits<__decay_t<_Tp> >::__atomic_contention_address(
                                       std::declval<const _Tp&>()))> > : true_type {};
template <class _AtomicWaitable, class _Poll>
struct __atomic_wait_backoff_impl ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __libcpp_is_always_lock_free ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] remove_volatile ;;
template <class _Tp>
using __remove_volatile_t [[__gnu__::__nodebug__]] = __remove_volatile(_Tp);
template <class _Tp>
using remove_volatile_t = __remove_volatile_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, bool = is_integral<_Tp>::value && !is_same<_Tp, bool>::value>
struct __atomic_base
{
};
template <class _Tp, bool _IsIntegral>
struct __atomic_waitable_traits<__atomic_base<_Tp, _IsIntegral> > ;
template <typename _Tp>
struct __check_atomic_mandates {
  using type [[__gnu__::__nodebug__]] = _Tp;
  static_assert(is_trivially_copyable<_Tp>::value, "std::atomic<T> requires that 'T' be a trivially copyable type");
};
template <class _Tp>
struct atomic : public __atomic_base<typename __check_atomic_mandates<_Tp>::type> {
  using __base [[__gnu__::__nodebug__]] = __atomic_base<_Tp>;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr atomic(_Tp __d)  ;
};
template <class _Tp>
struct atomic<_Tp*> : public __atomic_base<_Tp*> {
  using __base [[__gnu__::__nodebug__]] = __atomic_base<_Tp*>;
  using difference_type = ptrdiff_t;
};
template <class _Tp>
struct __atomic_waitable_traits<atomic<_Tp> > : __atomic_waitable_traits<__atomic_base<_Tp> > {};
template <class _Tp>
  requires is_floating_point_v<_Tp>
struct atomic<_Tp> : __atomic_base<_Tp> {
private:
   ;
   ;
   ;
public:
  using __base [[__gnu__::__nodebug__]] = __atomic_base<_Tp>;
  using value_type = _Tp;
  using difference_type = value_type;
};
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
typedef ptrdiff_t streamsize;
class __attribute__((__visibility__("default"))) ios_base {
public:
  class __attribute__((__visibility__("default"))) failure;
  typedef unsigned int fmtflags;
  static const fmtflags boolalpha = 0x0001;
  static const fmtflags dec = 0x0002;
  static const fmtflags fixed = 0x0004;
  static const fmtflags hex = 0x0008;
  static const fmtflags internal = 0x0010;
  static const fmtflags left = 0x0020;
  static const fmtflags oct = 0x0040;
  static const fmtflags right = 0x0080;
  static const fmtflags scientific = 0x0100;
  static const fmtflags showbase = 0x0200;
  typedef unsigned int iostate;
  static const iostate badbit = 0x1;
  static const iostate eofbit = 0x2;
  static const iostate failbit = 0x4;
  static const iostate goodbit = 0x0;
  typedef unsigned int openmode;
  static const openmode app = 0x01;
  static const openmode ate = 0x02;
  static const openmode binary = 0x04;
  static const openmode in = 0x08;
  static const openmode out = 0x10;
  static const openmode trunc = 0x20;
  static const openmode noreplace = 0x40;
  enum seekdir { beg, cur, end };
  class __attribute__((__visibility__("default"))) Init;
  virtual ~ios_base();
  enum event { erase_event, imbue_event, copyfmt_event };
  typedef void (*event_callback)(event, ios_base&, int __index);
  void clear(iostate __state = goodbit);
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void setstate(iostate __state);
protected:
private:
  fmtflags __fmtflags_;
  streamsize __precision_;
  streamsize __width_;
  iostate __rdstate_;
  iostate __exceptions_;
  void* __rdbuf_;
  void* __loc_;
  event_callback* __fn_;
  size_t __parray_size_;
  size_t __parray_cap_;
};
enum class io_errc;
template <>
struct is_error_code_enum<io_errc> : public true_type {};
class __attribute__((__visibility__("default"))) ios_base::failure : public system_error {
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) failure(const failure&) noexcept = default;
};
[[__noreturn__]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __throw_failure(char const* __msg) ;
class __attribute__((__visibility__("default"))) ios_base::Init {
public:
  bool __set_;
};
template <class _Traits>
struct __attribute__((__packed__)) _SentinelValueFill {
  typename _Traits::int_type __fill_val_;
};
template <class _CharT, class _Traits>
class basic_ios : public ios_base {
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename traits_type::int_type int_type;
  typedef typename traits_type::pos_type pos_type;
  typedef typename traits_type::off_type off_type;
  static_assert(is_same<_CharT, typename traits_type::char_type>::value,
                "traits_type::char_type must be the same type as CharT");
  ~basic_ios() override;
protected:
private:
  basic_ostream<char_type, traits_type>* __tie_;
  using _FillType [[__gnu__::__nodebug__]] = _SentinelValueFill<traits_type>;
  mutable _FillType __fill_;
};
extern template class __attribute__((__visibility__("default"))) basic_ios<char>;
extern template class __attribute__((__visibility__("default"))) basic_ios<wchar_t>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __has_array_cookie : _Not<is_trivially_destructible<_Tp> > {};
struct __itanium_array_cookie ;
template <class _Tp>
struct [[__gnu__::__aligned__(alignof(_Tp))]] __arm_array_cookie ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline const bool __is_bounded_array_v = __is_bounded_array(_Tp);
template <class _Tp>
struct [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] is_bounded_array : bool_constant<__is_bounded_array(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] inline constexpr bool is_bounded_array_v = __is_bounded_array(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct default_delete ;
template <class _Tp>
struct default_delete<_Tp[]> ;
template <class _Deleter>
inline const bool __is_default_deleter_v = false;
template <class _Tp>
inline const bool __is_default_deleter_v<default_delete<_Tp> > = true;
template <class _Deleter>
struct __unique_ptr_deleter_sfinae ;
template <class _Deleter>
struct __unique_ptr_deleter_sfinae<_Deleter&> ;;
template <class _Tp, class _Dp = default_delete<_Tp> >
class unique_ptr ;
struct __unique_ptr_array_bounds_stateless {
   ;
   ;
};
struct __unique_ptr_array_bounds_stored ;
template <class _Tp, class _Dp>
class unique_ptr<_Tp[], _Dp> {
public:
  typedef _Tp element_type;
  typedef _Dp deleter_type;
  using pointer = __pointer<_Tp, deleter_type>;
  using __trivially_relocatable [[__gnu__::__nodebug__]] = __conditional_t<
      __libcpp_is_trivially_relocatable<pointer>::value && __libcpp_is_trivially_relocatable<deleter_type>::value,
      unique_ptr,
      void>;
  using __replaceable [[__gnu__::__nodebug__]] =
      __conditional_t<__is_replaceable_v<pointer> && __is_replaceable_v<deleter_type>, unique_ptr, void>;
private:
  template <class _Up, class _OtherDeleter>
  friend class unique_ptr;
  struct { [[__no_unique_address__]] __attribute__((__aligned__(::std::__compressed_pair_alignment<deleter_type>))) pointer __ptr_; [[__no_unique_address__]] ::std::__compressed_pair_padding<pointer> __padding1_423_; [[__no_unique_address__]] deleter_type __deleter_; [[__no_unique_address__]] ::std::__compressed_pair_padding<deleter_type> __padding2_423_; };
  using _BoundsChecker [[__gnu__::__nodebug__]] = __unique_ptr_array_bounds_stateless;
  [[__no_unique_address__]] _BoundsChecker __checker_;
  template <class _From>
  struct _CheckArrayPointerConversion : is_same<_From, pointer> {};
  template <class _FromElem>
  struct _CheckArrayPointerConversion<_FromElem*>
      : integral_constant<bool,
                          is_same<_FromElem*, pointer>::value ||
                              (is_same<pointer, element_type*>::value &&
                               is_convertible<_FromElem (*)[], element_type (*)[]>::value) > {};
  typedef __unique_ptr_deleter_sfinae<_Dp> _DeleterSFINAE;
  template <bool _Dummy>
  using _BadRValRefType [[__gnu__::__nodebug__]] = typename __dependent_type<_DeleterSFINAE, _Dummy>::__bad_rval_ref_type;
  template <bool _Dummy, class _Deleter = typename __dependent_type< __type_identity<deleter_type>, _Dummy>::type>
  using _EnableIfDeleterDefaultConstructible [[__gnu__::__nodebug__]] =
      __enable_if_t<is_default_constructible<_Deleter>::value && !is_pointer<_Deleter>::value>;
  template <class _ArgType>
  using _EnableIfDeleterConstructible [[__gnu__::__nodebug__]] = __enable_if_t<is_constructible<deleter_type, _ArgType>::value>;
  template <class _Pp>
  using _EnableIfPointerConvertible [[__gnu__::__nodebug__]] = __enable_if_t< _CheckArrayPointerConversion<_Pp>::value >;
  template <class _UPtr, class _Up, class _ElemT = typename _UPtr::element_type>
  using _EnableIfMoveConvertible [[__gnu__::__nodebug__]] =
      __enable_if_t< is_array<_Up>::value && is_same<pointer, element_type*>::value &&
                     is_same<typename _UPtr::pointer, _ElemT*>::value &&
                     is_convertible<_ElemT (*)[], element_type (*)[]>::value >;
  template <class _UDel>
  using _EnableIfDeleterConvertible [[__gnu__::__nodebug__]] =
      __enable_if_t< (is_reference<_Dp>::value && is_same<_Dp, _UDel>::value) ||
                     (!is_reference<_Dp>::value && is_convertible<_UDel, _Dp>::value) >;
  template <class _UDel>
  using _EnableIfDeleterAssignable [[__gnu__::__nodebug__]] = __enable_if_t< is_assignable<_Dp&, _UDel&&>::value >;
public:
   ;
};
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
template <class _T1, class _D1>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool operator<(nullptr_t, const unique_ptr<_T1, _D1>& __x) ;
 ;
 ;
 ;
template <class _T1, class _D1>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool operator<=(nullptr_t, const unique_ptr<_T1, _D1>& __x) ;
template <class _T1, class _D1>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool operator>=(const unique_ptr<_T1, _D1>& __x, nullptr_t) ;
template <class _T1, class _D1>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool operator>=(nullptr_t, const unique_ptr<_T1, _D1>& __x) ;
 ;
 ;
 ;
;
 ;
 ;
;
template <class _Tp>
struct hash;
template <class _Tp, class _Dp>
struct hash<__enable_hash_helper< unique_ptr<_Tp, _Dp>, typename unique_ptr<_Tp, _Dp>::pointer> >
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits>
class basic_streambuf {
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename traits_type::int_type int_type;
  typedef typename traits_type::pos_type pos_type;
  typedef typename traits_type::off_type off_type;
  static_assert(is_same<_CharT, typename traits_type::char_type>::value,
                "traits_type::char_type must be the same type as CharT");
  virtual ~basic_streambuf() ;
  virtual int_type uflow() ;
  virtual streamsize xsputn(const char_type* __s, streamsize __n) ;
private:
  locale __loc_;
  char_type* __binp_ = nullptr;
  char_type* __ninp_ = nullptr;
  char_type* __einp_ = nullptr;
  char_type* __bout_ = nullptr;
  char_type* __nout_ = nullptr;
  char_type* __eout_ = nullptr;
  ;
};
extern template class __attribute__((__visibility__("default"))) basic_streambuf<char>;
extern template class __attribute__((__visibility__("default"))) basic_streambuf<wchar_t>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __attribute__((__visibility__("default"))) __num_get_base {
  static const int __num_get_buf_sz = 40;
  static const char __src[33];
  static const size_t __int_chr_cnt = 26;
  static const size_t __fp_chr_cnt = 28;
};
template <class _CharT>
struct __num_get : protected __num_get_base {
  [[__deprecated__("This exists only for ABI compatibility")]] static string
  __stage2_int_prep(ios_base& __iob, _CharT* __atoms, _CharT& __thousands_sep);
private:
   ;
};
extern template struct __attribute__((__visibility__("default"))) __num_get<char>;
extern template struct __attribute__((__visibility__("default"))) __num_get<wchar_t>;
;
 ;
 ;
 ;
template <class _CharT, class _InputIterator = istreambuf_iterator<_CharT> >
class num_get : public locale::facet, private __num_get<_CharT> {
public:
  typedef _CharT char_type;
  typedef _InputIterator iter_type;
  static locale::id id;
protected:
   ;
   ;
   ;
};
template <class _CharT, class _InputIterator>
locale::id num_get<_CharT, _InputIterator>::id;
extern template class __attribute__((__visibility__("default"))) num_get<char>;
extern template class __attribute__((__visibility__("default"))) num_get<wchar_t>;
struct __attribute__((__visibility__("default"))) __num_put_base {
protected:
};
template <class _CharT>
struct __num_put : protected __num_put_base {
};
extern template struct __attribute__((__visibility__("default"))) __num_put<char>;
extern template struct __attribute__((__visibility__("default"))) __num_put<wchar_t>;
template <class _CharT, class _OutputIterator = ostreambuf_iterator<_CharT> >
class num_put : public locale::facet, private __num_put<_CharT> {
public:
  typedef _CharT char_type;
  typedef _OutputIterator iter_type;
  static locale::id id;
protected:
  ;
  template <class _Float>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) inline _OutputIterator
  __do_put_floating_point(iter_type __s, ios_base& __iob, char_type __fl, _Float __v, char const* __len) const;
};
template <class _CharT, class _OutputIterator>
locale::id num_put<_CharT, _OutputIterator>::id;
extern template class __attribute__((__visibility__("default"))) num_put<char>;
extern template class __attribute__((__visibility__("default"))) num_put<wchar_t>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) basic_ostream<_CharT, _Traits>&
__put_character_sequence(basic_ostream<_CharT, _Traits>& __os, const _CharT* __str, size_t __len) ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT>
using _IsCharLikeType [[__gnu__::__nodebug__]] =
    _And<is_standard_layout<_CharT>, is_trivially_default_constructible<_CharT>, is_trivially_copyable<_CharT> >;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <size_t _N_words, size_t _Size>
class __bitset;
template <size_t _N_words, size_t _Size>
struct __has_storage_type<__bitset<_N_words, _Size> > ;;
template <size_t _N_words, size_t _Size>
class __bitset ;
template <size_t _Size>
class __bitset<1, _Size> ;;
template <>
class __bitset<0, 0> ;
template <size_t _Size>
class bitset;
template <size_t _Size>
struct hash<bitset<_Size> >;
template <size_t _Size>
class bitset : private __bitset<_Size == 0 / (sizeof(size_t) * 8) + 1, _Size> {
public:
  static const unsigned __n_words = _Size == 0 / (sizeof(size_t) * 8) + 1;
  typedef __bitset<__n_words, _Size> __base;
  typedef typename __base::reference reference;
  typedef typename __base::__const_reference __const_reference;
   ;
};
 ;
 ;
 ;
template <size_t _Size>
struct hash<bitset<_Size> > : public __unary_function<bitset<_Size>, size_t> {
};
;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits>
class basic_ostream : virtual public basic_ios<_CharT, _Traits> {
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename traits_type::int_type int_type;
  typedef typename traits_type::pos_type pos_type;
  typedef typename traits_type::off_type off_type;
  ~basic_ostream() override;
protected:
public:
  class sentry;
   ;
   ;
protected:
};
template <class _CharT, class _Traits>
class basic_ostream<_CharT, _Traits>::sentry {
  bool __ok_;
 ;
}
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
 ;
 ;
 ;
} }
namespace Hyprutils {
    namespace Math {
        class CBox;
        class Vector2D;
        class Mat3x3 ;
    }
}
using namespace Hyprutils::Math;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct is_bind_expression
    : _If< _IsSame<_Tp, __remove_cvref_t<_Tp> >::value, false_type, is_bind_expression<__remove_cvref_t<_Tp> > > {};
template <class _Tp>
inline constexpr bool is_bind_expression_v = is_bind_expression<_Tp>::value;
template <class _Tp>
struct is_placeholder
    : _If< _IsSame<_Tp, __remove_cvref_t<_Tp> >::value,
           integral_constant<int, 0>,
           is_placeholder<__remove_cvref_t<_Tp> > > {};
template <class _Tp>
inline constexpr int is_placeholder_v = is_placeholder<_Tp>::value;
namespace placeholders {
template <int _Np>
struct __ph ;
__attribute__((__visibility__("default"))) extern const __ph<1> _1;
__attribute__((__visibility__("default"))) extern const __ph<2> _2;
}
template <int _Np>
struct is_placeholder<placeholders::__ph<_Np> > : public integral_constant<int, _Np> {};
 ;
 ;
 ;
template <bool _IsPh, class _Ti, class _Uj>
struct __mu_return2 ;
template <class _Ti, class _Uj>
struct __mu_return2<true, _Ti, _Uj> ;
 ;
 ;
template <class _Ti, bool _IsReferenceWrapper, bool _IsBindEx, bool _IsPh, class _TupleUj>
struct __mu_return_impl;
template <bool _Invokable, class _Ti, class... _Uj>
struct __mu_return_invokable
;
template <class _Ti, class... _Uj>
struct __mu_return_invokable<true, _Ti, _Uj...> ;
template <class _Ti, class... _Uj>
struct __mu_return_impl<_Ti, false, true, false, tuple<_Uj...> >
    : public __mu_return_invokable<__is_invocable_v<_Ti&, _Uj...>, _Ti, _Uj...> {};
template <class _Ti, class _TupleUj>
struct __mu_return_impl<_Ti, false, false, true, _TupleUj> ;
template <class _Ti, class _TupleUj>
struct __mu_return_impl<_Ti, false, false, false, _TupleUj> ;
template <class _Ti, class _TupleUj>
struct __mu_return
    : public __mu_return_impl<
          _Ti,
          __is_reference_wrapper<_Ti>::value,
          is_bind_expression<_Ti>::value,
          0 < is_placeholder<_Ti>::value && is_placeholder<_Ti>::value <= tuple_size<_TupleUj>::value,
          _TupleUj> {};
template <class _Fp, class _BoundArgs, class _TupleUj>
struct __is_valid_bind_return ;
template <class _Fp, class... _BoundArgs, class _TupleUj>
struct __is_valid_bind_return<_Fp, const tuple<_BoundArgs...>, _TupleUj> {
  static const bool value = __is_invocable_v<_Fp, typename __mu_return<const _BoundArgs, _TupleUj>::type...>;
};
template <class _Fp, class _BoundArgs, class _TupleUj, bool = __is_valid_bind_return<_Fp, _BoundArgs, _TupleUj>::value>
struct __bind_return;
template <class _Fp, class... _BoundArgs, class _TupleUj>
struct __bind_return<_Fp, tuple<_BoundArgs...>, _TupleUj, true> ;
 ;
template <class _Fp, class... _BoundArgs>
class __bind : public __weak_result_type<__decay_t<_Fp> > {
protected:
  using _Fd [[__gnu__::__nodebug__]] = __decay_t<_Fp>;
  typedef tuple<__decay_t<_BoundArgs>...> _Td;
private:
  _Fd __f_;
  _Td __bound_args_;
  typedef typename __make_tuple_indices<sizeof...(_BoundArgs)>::type __indices;
};
template <class _Fp, class... _BoundArgs>
struct is_bind_expression<__bind<_Fp, _BoundArgs...> > : public true_type {};
template <class _Rp, class _Fp, class... _BoundArgs>
class __bind_r : public __bind<_Fp, _BoundArgs...> {
  typedef __bind<_Fp, _BoundArgs...> base;
  typedef typename base::_Fd _Fd;
  typedef typename base::_Td _Td;
   ;
};
template <class _Rp, class _Fp, class... _BoundArgs>
struct is_bind_expression<__bind_r<_Rp, _Fp, _BoundArgs...> > : public true_type {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
class __mem_fn : public __weak_result_type<_Tp> {
public:
  typedef _Tp type;
private:
  type __f_;
public:
   ;
};
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Fp>
struct __strip_signature;
template <class _Rp, class... _Args>
struct __strip_signature<_Rp (*)(_Args...)> ;
template <class _Rp, class... _Args>
struct __strip_signature<_Rp (*)(_Args...) noexcept> ;;
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...)> ;;
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) const volatile &> ;;
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) noexcept> ;;
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) const noexcept> ;;
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) volatile noexcept> ;;
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) const volatile noexcept> ;;
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) & noexcept> ;;
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) const & noexcept> ;;
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) volatile & noexcept> ;;
#pragma clang diagnostic push
class __attribute__((__visibility__("default"))) bad_function_call : public exception {
public:
  const char* what() const noexcept override;
};
#pragma clang diagnostic pop
[[__noreturn__]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __throw_bad_function_call() ;
template <class _Fp>
class function;
namespace __function {
template <class _Rp>
struct __maybe_derive_from_unary_function {};
template <class _Rp, class _A1>
struct __maybe_derive_from_unary_function<_Rp(_A1)> : public __unary_function<_A1, _Rp> {};
template <class _Rp>
struct __maybe_derive_from_binary_function {};
template <class _Rp, class _A1, class _A2>
struct __maybe_derive_from_binary_function<_Rp(_A1, _A2)> : public __binary_function<_A1, _A2, _Rp> {};
template <class _Fp>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) bool __not_null(_Fp const&) ;
template <class _Fp>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) bool __not_null(_Fp* __ptr) ;
 ;
template <class _Fp>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) bool __not_null(function<_Fp> const& __f) ;
}
namespace __function {
template <class _Fp>
class __base;
template <class _Rp, class... _ArgTypes>
class __base<_Rp(_ArgTypes...)> ;
template <class _FD, class _FB>
class __func;
template <class _Fp, class _Rp, class... _ArgTypes>
class __func<_Fp, _Rp(_ArgTypes...)> : public __base<_Rp(_ArgTypes...)> {
  _Fp __func_;
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit __func(const _Fp& __f)  ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __base<_Rp(_ArgTypes...)>* __clone() const override ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) void __clone(__base<_Rp(_ArgTypes...)>* __p) const override ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) void destroy() noexcept override ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) void destroy_deallocate() noexcept override ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) _Rp operator()(_ArgTypes&&... __arg) override ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) const void* target(const type_info& __ti) const noexcept override ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) const std::type_info& target_type() const noexcept override ;
};
template <class _Fp>
class __value_func;
template <class _Rp, class... _ArgTypes>
class __value_func<_Rp(_ArgTypes...)> {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
  typename aligned_storage<3 * sizeof(void*)>::type __buf_;
#pragma GCC diagnostic pop
  typedef __base<_Rp(_ArgTypes...)> __func;
  __func* __f_;
public:
  template <class _Fp, __enable_if_t<!is_same<__decay_t<_Fp>, __value_func>::value, int> = 0>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit __value_func(_Fp&& __f)  ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) __value_func(const __value_func& __f) ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void swap(__value_func& __f) noexcept ;
   ;
};
union __policy_storage {
  mutable char __small[sizeof(void*) * 2];
  void* __large;
};
template <typename _Fun>
struct __use_small_storage
    : public integral_constant<
          bool,
          sizeof(_Fun) <= sizeof(__policy_storage)&& alignof(_Fun) <= alignof(__policy_storage) &&
              is_trivially_copy_constructible<_Fun>::value && is_trivially_destructible<_Fun>::value> {};
struct __policy ;
template <typename _Tp>
using __fast_forward [[__gnu__::__nodebug__]] = __conditional_t<is_scalar<_Tp>::value, _Tp, _Tp&&>;
template <class _Fp>
class __policy_func;
template <class _Rp, class... _ArgTypes>
class __policy_func<_Rp(_ArgTypes...)> ;
}
template <class _Rp, class... _ArgTypes>
class function<_Rp(_ArgTypes...)>
    : public __function::__maybe_derive_from_unary_function<_Rp(_ArgTypes...)>,
      public __function::__maybe_derive_from_binary_function<_Rp(_ArgTypes...)> {
  typedef __function::__value_func<_Rp(_ArgTypes...)> __func;
  __func __f_;
  template <class _Fp,
            bool = _And<_IsNotSame<__remove_cvref_t<_Fp>, function>, __is_invocable<_Fp, _ArgTypes...> >::value>
  struct __callable;
  template <class _Fp>
  struct __callable<_Fp, true> {
    static const bool value =
        is_void<_Rp>::value || __is_core_convertible<__invoke_result_t<_Fp, _ArgTypes...>, _Rp>::value;
  };
  template <class _Fp>
  struct __callable<_Fp, false> ;
  template <class _Fp>
  using _EnableIfLValueCallable [[__gnu__::__nodebug__]] = __enable_if_t<__callable<_Fp&>::value>;
public:
  typedef _Rp result_type;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) function(const function&);
  template <class _Fp, class = _EnableIfLValueCallable<_Fp>>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) function(_Fp);
public:
  ;
  ;
};
;
;
template <class _Rp, class... _ArgTypes>
template <class _Fp, class>
function<_Rp(_ArgTypes...)>::function(_Fp __f) : __f_(std::move(__f)) {}
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Alloc>
struct __allocation_guard ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Alloc>
class __allocator_destructor ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__("default"))) bad_weak_ptr : public std::exception {
  ~bad_weak_ptr() noexcept override;
};
[[__noreturn__]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __throw_bad_weak_ptr() ;
template <class _Tp>
class weak_ptr;
template <class _Tp, class _Dp, class _Alloc>
class __shared_ptr_pointer : public __shared_weak_count {
  struct { [[__no_unique_address__]] __attribute__((__aligned__(::std::__compressed_pair_alignment<_Dp>), __aligned__(::std::__compressed_pair_alignment<_Alloc>))) _Tp __ptr_; [[__no_unique_address__]] ::std::__compressed_pair_padding<_Tp> __padding1_97_; [[__no_unique_address__]] _Dp __deleter_; [[__no_unique_address__]] ::std::__compressed_pair_padding<_Dp> __padding2_97_; [[__no_unique_address__]] _Alloc __alloc_; [[__no_unique_address__]] ::std::__compressed_pair_padding<_Alloc> __padding3_97_; };
public:
private:
};
struct __for_overwrite_tag ;
template <class _Tp, class _Alloc>
struct __shared_ptr_emplace : __shared_weak_count {
  using __value_type [[__gnu__::__nodebug__]] = __remove_cv_t<_Tp>;
    ;
    ;
private:
   ;
   ;
  struct _Storage ;
  _Storage __storage_;
};
struct __shared_ptr_dummy_rebind_allocator_type;
template <>
class allocator<__shared_ptr_dummy_rebind_allocator_type> ;
template <class _Tp>
class enable_shared_from_this;
template <class _Yp, class _Tp>
struct __bounded_convertible_to_unbounded : false_type {};
template <class _Up, std::size_t _Np, class _Tp>
struct __bounded_convertible_to_unbounded<_Up[_Np], _Tp> : is_same<__remove_cv_t<_Tp>, _Up[]> {};
template <class _Yp, class _Tp>
struct __compatible_with : _Or< is_convertible<_Yp*, _Tp*>, __bounded_convertible_to_unbounded<_Yp, _Tp> > {};
template <class _Yp, class _Tp, class = void>
struct __raw_pointer_compatible_with : _And< _Not<is_array<_Tp>>, is_convertible<_Yp*, _Tp*> > {};
template <class _Yp, class _Up, std::size_t _Np>
struct __raw_pointer_compatible_with<_Yp, _Up[_Np], __enable_if_t< is_convertible<_Yp (*)[_Np], _Up (*)[_Np]>::value> >
    : true_type {};
template <class _Yp, class _Up>
struct __raw_pointer_compatible_with<_Yp, _Up[], __enable_if_t< is_convertible<_Yp (*)[], _Up (*)[]>::value> >
    : true_type {};
template <class _Ptr, class = void>
struct __is_array_deletable : false_type {};
template <class _Ptr>
struct __is_array_deletable<_Ptr, decltype(delete[] std::declval<_Ptr>())> : true_type {};
template <class _Dp, class _Pt, class = decltype(std::declval<_Dp>()(std::declval<_Pt>()))>
true_type __well_formed_deleter_test(int);
;
template <class _Dp, class _Pt>
struct __well_formed_deleter : decltype(std::__well_formed_deleter_test<_Dp, _Pt>(0)) {};
template <class _Dp, class _Yp, class _Tp>
struct __shared_ptr_deleter_ctor_reqs ;
template <class _Dp>
using __shared_ptr_nullptr_deleter_ctor_reqs [[__gnu__::__nodebug__]] =
    _And<is_move_constructible<_Dp>, __well_formed_deleter<_Dp, nullptr_t> >;
template <class _Tp>
class shared_ptr ;;
;
;
 ;
 ;
 ;
 ;
template <size_t _Alignment>
struct __sp_aligned_storage ;
template <class _Tp, class _Alloc>
struct __unbounded_array_control_block;
template <class _Tp, class _Alloc>
struct __unbounded_array_control_block<_Tp[], _Alloc> : __shared_weak_count {
private:
  [[__no_unique_address__]] _Alloc __alloc_;
  size_t __count_;
  union {
    _Tp __data_[1];
  };
};
 ;
template <class _Tp, class _Alloc>
struct __bounded_array_control_block;
template <class _Tp, size_t _Count, class _Alloc>
struct __bounded_array_control_block<_Tp[_Count], _Alloc> : __shared_weak_count {
private:
  [[__no_unique_address__]] _Alloc __alloc_;
  union {
    _Tp __data_[_Count];
  };
};
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
template <class _Tp>
class weak_ptr ;
;
 ;
template <class _Tp = void>
struct owner_less;
template <class _Tp>
struct owner_less<shared_ptr<_Tp> > : __binary_function<shared_ptr<_Tp>, shared_ptr<_Tp>, bool> {
};
template <class _Tp>
struct owner_less<weak_ptr<_Tp> > : __binary_function<weak_ptr<_Tp>, weak_ptr<_Tp>, bool> {
};
template <>
struct owner_less<void> ;
template <class _Tp>
class enable_shared_from_this ;;
template <class _Tp>
struct hash;
template <class _Tp>
struct hash<shared_ptr<_Tp> > ;
;
class __attribute__((__visibility__("default"))) __sp_mut ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Key = void, class = void>
inline const bool __is_transparent_v = false;
template <class _Tp, class _Key>
inline const bool __is_transparent_v<_Tp, _Key, __void_t<typename _Tp::is_transparent> > = true;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
using __remove_const_ref_t [[__gnu__::__nodebug__]] = __remove_const_t<__libcpp_remove_reference_t<_Tp> >;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __extract_key_fail_tag ;
struct __extract_key_self_tag ;
struct __extract_key_first_tag ;
template <class _ValTy, class _Key, class _RawValTy = __remove_const_ref_t<_ValTy> >
struct __can_extract_key
    : __conditional_t<_IsSame<_RawValTy, _Key>::value, __extract_key_self_tag, __extract_key_fail_tag> {};
template <class _Pair, class _Key, class _First, class _Second>
struct __can_extract_key<_Pair, _Key, pair<_First, _Second> >
    : __conditional_t<_IsSame<__remove_const_t<_First>, _Key>::value, __extract_key_first_tag, __extract_key_fail_tag> {
};
template <class _ValTy, class _Key, class _ContainerValueTy, class _RawValTy = __remove_const_ref_t<_ValTy> >
struct __can_extract_map_key : integral_constant<bool, _IsSame<_RawValTy, _Key>::value> {};
template <class _ValTy, class _Key, class _RawValTy>
struct __can_extract_map_key<_ValTy, _Key, _Key, _RawValTy> : false_type {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Key, class _Tp>
struct __hash_value_type;
template <class _Tp>
struct __is_hash_value_type_imp : false_type {};
template <class _Key, class _Value>
struct __is_hash_value_type_imp<__hash_value_type<_Key, _Value> > : true_type {};
template <class... _Args>
struct __is_hash_value_type : false_type {};
template <class _One>
struct __is_hash_value_type<_One> : __is_hash_value_type_imp<__remove_cvref_t<_One> > {};
template <class _NodePtr>
struct __hash_node_base {
  typedef typename pointer_traits<_NodePtr>::element_type __node_type;
  typedef __hash_node_base __first_node;
  typedef __rebind_pointer_t<_NodePtr, __first_node> __node_base_pointer;
  typedef _NodePtr __node_pointer;
  typedef __node_base_pointer __next_pointer;
  static_assert(sizeof(__node_base_pointer) == sizeof(__node_pointer) && alignof(__node_base_pointer) ==
                    alignof(__node_pointer),
                "don't care about your ABI being broken, define the _LIBCPP_ABI_TREE_REMOVE_NODE_POINTER_UB macro to "
                "silence this diagnostic.");
  __next_pointer __next_;
};
template <class _Tp>
struct __get_hash_node_value_type ;;
template <class _Key, class _Tp>
struct __get_hash_node_value_type<__hash_value_type<_Key, _Tp> > {
  using type [[__gnu__::__nodebug__]] = pair<const _Key, _Tp>;
};
template <class _Tp>
using __get_hash_node_value_type_t [[__gnu__::__nodebug__]] = typename __get_hash_node_value_type<_Tp>::type;
template <class _Tp, class _VoidPtr>
struct __hash_node : public __hash_node_base< __rebind_pointer_t<_VoidPtr, __hash_node<_Tp, _VoidPtr> > > {
public:
};
template <class _Tp, class _Hash, class _Equal, class _Alloc>
class __hash_table;
template <class _NodePtr>
class __hash_iterator;
template <class _ConstNodePtr>
class __hash_const_iterator;
template <class _NodePtr>
class __hash_local_iterator;
template <class _ConstNodePtr>
class __hash_const_local_iterator;
template <class _HashIterator>
class __hash_map_iterator;
template <class _HashIterator>
class __hash_map_const_iterator;
template <class _Tp>
struct __hash_key_value_types ;;
template <class _Key, class _Tp>
struct __hash_key_value_types<__hash_value_type<_Key, _Tp> > {
  typedef _Key key_type;
  typedef _Tp mapped_type;
  typedef __hash_value_type<_Key, _Tp> __node_value_type;
  typedef pair<const _Key, _Tp> __container_value_type;
  typedef __container_value_type __map_value_type;
  static const bool __is_map = true;
   ;
   ;
};
template <class _Tp, class _AllocPtr, class _KVTypes = __hash_key_value_types<_Tp>, bool = _KVTypes::__is_map>
struct __hash_map_pointer_types ;;
template <class _Tp, class _AllocPtr, class _KVTypes>
struct __hash_map_pointer_types<_Tp, _AllocPtr, _KVTypes, true> {
  typedef typename _KVTypes::__map_value_type _Mv;
  typedef __rebind_pointer_t<_AllocPtr, _Mv> __map_value_type_pointer;
  typedef __rebind_pointer_t<_AllocPtr, const _Mv> __const_map_value_type_pointer;
};
template <class _NodePtr, class _NodeT = typename pointer_traits<_NodePtr>::element_type>
struct __hash_node_types;
template <class _NodePtr, class _Tp, class _VoidPtr>
struct __hash_node_types<_NodePtr, __hash_node<_Tp, _VoidPtr> >
    : public __hash_key_value_types<_Tp>,
      __hash_map_pointer_types<_Tp, _VoidPtr>
{
  typedef __hash_key_value_types<_Tp> __base;
public:
  typedef ptrdiff_t difference_type;
  typedef size_t size_type;
  typedef __rebind_pointer_t<_NodePtr, void> __void_pointer;
  typedef typename pointer_traits<_NodePtr>::element_type __node_type;
  typedef _NodePtr __node_pointer;
  typedef __hash_node_base<__node_pointer> __node_base_type;
  typedef __rebind_pointer_t<_NodePtr, __node_base_type> __node_base_pointer;
  typedef typename __node_base_type::__next_pointer __next_pointer;
  using __node_value_type [[__gnu__::__nodebug__]] = __get_hash_node_value_type_t<_Tp>;
  typedef __rebind_pointer_t<_VoidPtr, __node_value_type> __node_value_type_pointer;
  typedef __rebind_pointer_t<_VoidPtr, const __node_value_type> __const_node_value_type_pointer;
private:
  static_assert(!is_const<__node_type>::value, "_NodePtr should never be a pointer to const");
  static_assert(is_same<typename pointer_traits<_VoidPtr>::element_type, void>::value,
                "_VoidPtr does not point to unqualified void type");
  static_assert(is_same<__rebind_pointer_t<_VoidPtr, __node_type>, _NodePtr>::value,
                "_VoidPtr does not rebind to _NodePtr.");
};
template <class _HashIterator>
struct __hash_node_types_from_iterator;
template <class _NodePtr>
struct __hash_node_types_from_iterator<__hash_iterator<_NodePtr> > : __hash_node_types<_NodePtr> {};
template <class _NodePtr>
struct __hash_node_types_from_iterator<__hash_const_iterator<_NodePtr> > : __hash_node_types<_NodePtr> {};
template <class _NodePtr>
struct __hash_node_types_from_iterator<__hash_local_iterator<_NodePtr> > : __hash_node_types<_NodePtr> {};
template <class _NodePtr>
struct __hash_node_types_from_iterator<__hash_const_local_iterator<_NodePtr> > : __hash_node_types<_NodePtr> {};
template <class _NodeValueTp, class _VoidPtr>
struct __make_hash_node_types {
  typedef __hash_node<_NodeValueTp, _VoidPtr> _NodeTp;
  typedef __rebind_pointer_t<_VoidPtr, _NodeTp> _NodePtr;
  typedef __hash_node_types<_NodePtr> type;
};
template <class _NodePtr>
class __hash_iterator ;;
template <class _NodePtr>
class __hash_const_iterator ;
template <class _ConstNodePtr>
class __hash_const_local_iterator ;;
template <class _Alloc>
class __bucket_list_deallocator {
  typedef _Alloc allocator_type;
  typedef allocator_traits<allocator_type> __alloc_traits;
  typedef typename __alloc_traits::size_type size_type;
  struct { [[__no_unique_address__]] __attribute__((__aligned__(::std::__compressed_pair_alignment<allocator_type>))) size_type __size_; [[__no_unique_address__]] ::std::__compressed_pair_padding<size_type> __padding1_581_; [[__no_unique_address__]] allocator_type __alloc_; [[__no_unique_address__]] ::std::__compressed_pair_padding<allocator_type> __padding2_581_; };
public:
  typedef typename __alloc_traits::pointer pointer;
};
template <class _Alloc>
class __hash_map_node_destructor;
template <class _Alloc>
class __hash_node_destructor ;
template <class _NodeType, class _Alloc>
struct __generic_container_node_destructor;
template <class _Tp, class _VoidPtr, class _Alloc>
struct __enforce_unordered_container_requirements ;
;
;
template <class _Tp, class _Hash, class _Equal, class _Alloc>
class __hash_table {
public:
  using value_type = __get_hash_node_value_type_t<_Tp>;
  typedef _Hash hasher;
  typedef _Equal key_equal;
  typedef _Alloc allocator_type;
private:
  typedef allocator_traits<allocator_type> __alloc_traits;
  typedef typename __make_hash_node_types<_Tp, typename __alloc_traits::void_pointer>::type _NodeTypes;
public:
  typedef typename _NodeTypes::__node_value_type __node_value_type;
  typedef typename _NodeTypes::__container_value_type __container_value_type;
  typedef typename _NodeTypes::key_type key_type;
  typedef value_type& reference;
  typedef const value_type& const_reference;
  typedef typename __alloc_traits::pointer pointer;
  typedef typename __alloc_traits::const_pointer const_pointer;
  typedef typename __alloc_traits::size_type size_type;
  typedef typename _NodeTypes::difference_type difference_type;
public:
  typedef typename _NodeTypes::__node_type __node;
  typedef __rebind_alloc<__alloc_traits, __node> __node_allocator;
  typedef allocator_traits<__node_allocator> __node_traits;
  typedef typename _NodeTypes::__void_pointer __void_pointer;
  typedef typename _NodeTypes::__node_pointer __node_pointer;
  typedef typename _NodeTypes::__node_pointer __node_const_pointer;
  typedef typename _NodeTypes::__node_base_type __first_node;
  typedef typename _NodeTypes::__node_base_pointer __node_base_pointer;
  typedef typename _NodeTypes::__next_pointer __next_pointer;
private:
  static_assert(is_same<__node_pointer, typename __node_traits::pointer>::value,
                "Allocator does not rebind pointers in a sane manner.");
private:
  typedef __rebind_alloc<__node_traits, __next_pointer> __pointer_allocator;
  typedef __bucket_list_deallocator<__pointer_allocator> __bucket_list_deleter;
  typedef unique_ptr<__next_pointer[], __bucket_list_deleter> __bucket_list;
  typedef allocator_traits<__pointer_allocator> __pointer_alloc_traits;
  typedef typename __bucket_list_deleter::pointer __node_pointer_pointer;
  __bucket_list __bucket_list_;
  struct { [[__no_unique_address__]] __attribute__((__aligned__(::std::__compressed_pair_alignment<__node_allocator>))) __first_node __first_node_; [[__no_unique_address__]] ::std::__compressed_pair_padding<__first_node> __padding1_743_; [[__no_unique_address__]] __node_allocator __node_alloc_; [[__no_unique_address__]] ::std::__compressed_pair_padding<__node_allocator> __padding2_743_; };
  struct { [[__no_unique_address__]] __attribute__((__aligned__(::std::__compressed_pair_alignment<hasher>))) size_type __size_; [[__no_unique_address__]] ::std::__compressed_pair_padding<size_type> __padding1_744_; [[__no_unique_address__]] hasher __hasher_; [[__no_unique_address__]] ::std::__compressed_pair_padding<hasher> __padding2_744_; };
  struct { [[__no_unique_address__]] __attribute__((__aligned__(::std::__compressed_pair_alignment<key_equal>))) float __max_load_factor_; [[__no_unique_address__]] ::std::__compressed_pair_padding<float> __padding1_745_; [[__no_unique_address__]] key_equal __key_eq_; [[__no_unique_address__]] ::std::__compressed_pair_padding<key_equal> __padding2_745_; };
public:
public:
  typedef __hash_iterator<__node_pointer> iterator;
  typedef __hash_const_iterator<__node_pointer> const_iterator;
  typedef __hash_local_iterator<__node_pointer> local_iterator;
  typedef __hash_const_local_iterator<__node_pointer> const_local_iterator;
   ;
   ;
  template <class, class, class, class, class>
  friend class unordered_map;
  template <class, class, class, class, class>
  friend class unordered_multimap;
};
 ;
template <ranges::input_range _Range>
using __range_mapped_type [[__gnu__::__nodebug__]] = typename ranges::range_value_t<_Range>::second_type;
template <ranges::input_range _Range>
using __range_to_alloc_type [[__gnu__::__nodebug__]] =
    pair<const typename ranges::range_value_t<_Range>::first_type, typename ranges::range_value_t<_Range>::second_type>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _NodeType, class _Alloc>
struct __generic_container_node_destructor;
template <class _NodeType, class _Alloc, template <class, class> class _MapOrSetSpecifics>
class __basic_node_handle
    : public _MapOrSetSpecifics< _NodeType, __basic_node_handle<_NodeType, _Alloc, _MapOrSetSpecifics>> {
  template <class _Tp, class _Compare, class _Allocator>
  friend class __tree;
  template <class _Tp, class _Hash, class _Equal, class _Allocator>
  friend class __hash_table;
  friend struct _MapOrSetSpecifics< _NodeType, __basic_node_handle<_NodeType, _Alloc, _MapOrSetSpecifics>>;
  typedef allocator_traits<_Alloc> __alloc_traits;
  typedef __rebind_pointer_t<typename __alloc_traits::void_pointer, _NodeType> __node_pointer_type;
public:
  typedef _Alloc allocator_type;
private:
  __node_pointer_type __ptr_ = nullptr;
  optional<allocator_type> __alloc_;
public:
  [[nodiscard]]
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void swap(__basic_node_handle& __other) noexcept(
      __alloc_traits::propagate_on_container_swap::value || __alloc_traits::is_always_equal::value) ;
};
template <class _NodeType, class _Derived>
struct __set_node_handle_specifics ;
template <class _NodeType, class _Derived>
struct __map_node_handle_specifics ;
template <class _NodeType, class _Alloc>
using __set_node_handle [[__gnu__::__nodebug__]] = __basic_node_handle< _NodeType, _Alloc, __set_node_handle_specifics>;
template <class _NodeType, class _Alloc>
using __map_node_handle [[__gnu__::__nodebug__]] = __basic_node_handle< _NodeType, _Alloc, __map_node_handle_specifics>;
template <class _Iterator, class _NodeType>
struct __insert_return_type ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Key,
          class _Cp,
          class _Hash,
          class _Pred,
          bool = is_empty<_Hash>::value && !__libcpp_is_final<_Hash>::value>
class __unordered_map_hasher : private _Hash {
public:
   ;
};
template <class _Key, class _Cp, class _Hash, class _Pred>
class __unordered_map_hasher<_Key, _Cp, _Hash, _Pred, false> ;
 ;
template <class _Key,
          class _Cp,
          class _Pred,
          class _Hash,
          bool = is_empty<_Pred>::value && !__libcpp_is_final<_Pred>::value>
class __unordered_map_equal : private _Pred {
public:
   ;
   ;
   ;
   ;
   ;
};
 ;
template <class _Alloc>
class __hash_map_node_destructor ;;
template <class _Key, class _Tp>
struct __hash_value_type;
template <class _HashIterator>
class __hash_map_iterator ;
template <class _HashIterator>
class __hash_map_const_iterator ;;
template <class _Key, class _Tp, class _Hash, class _Pred, class _Alloc>
class unordered_multimap;
template <class _Key,
          class _Tp,
          class _Hash = hash<_Key>,
          class _Pred = equal_to<_Key>,
          class _Alloc = allocator<pair<const _Key, _Tp> > >
class unordered_map {
public:
  typedef _Key key_type;
  typedef _Tp mapped_type;
  typedef __type_identity_t<_Hash> hasher;
  typedef __type_identity_t<_Pred> key_equal;
  typedef __type_identity_t<_Alloc> allocator_type;
  typedef pair<const key_type, mapped_type> value_type;
  typedef value_type& reference;
  typedef const value_type& const_reference;
  static_assert(is_same<value_type, typename allocator_type::value_type>::value,
                "Allocator::value_type must be same type as value_type");
private:
  typedef __hash_value_type<key_type, mapped_type> __value_type;
  typedef __unordered_map_hasher<key_type, value_type, hasher, key_equal> __hasher;
  typedef __unordered_map_equal<key_type, value_type, key_equal, hasher> __key_equal;
  typedef __hash_table<__value_type, __hasher, __key_equal, allocator_type> __table;
  __table __table_;
  typedef typename __table::_NodeTypes _NodeTypes;
  typedef typename __table::__node_pointer __node_pointer;
  typedef typename __table::__node_const_pointer __node_const_pointer;
  typedef typename __table::__node_traits __node_traits;
  typedef typename __table::__node_allocator __node_allocator;
  typedef typename __table::__node __node;
  typedef __hash_map_node_destructor<__node_allocator> _Dp;
  typedef unique_ptr<__node, _Dp> __node_holder;
  typedef allocator_traits<allocator_type> __alloc_traits;
  static_assert(__check_valid_allocator<allocator_type>::value, "");
public:
  typedef typename __alloc_traits::pointer pointer;
  typedef typename __alloc_traits::const_pointer const_pointer;
  typedef typename __table::size_type size_type;
  typedef typename __table::difference_type difference_type;
  typedef __hash_map_iterator<typename __table::iterator> iterator;
  typedef __hash_map_const_iterator<typename __table::const_iterator> const_iterator;
  typedef __hash_map_iterator<typename __table::local_iterator> local_iterator;
  typedef __hash_map_const_iterator<typename __table::const_local_iterator> const_local_iterator;
  typedef __map_node_handle<__node, allocator_type> node_type;
  typedef __insert_return_type<iterator, node_type> insert_return_type;
  template <class _Key2, class _Tp2, class _Hash2, class _Pred2, class _Alloc2>
  friend class unordered_map;
  template <class _Key2, class _Tp2, class _Hash2, class _Pred2, class _Alloc2>
  friend class unordered_multimap;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) unordered_map(unordered_map&& __u, const allocator_type& __a);
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) unordered_map(initializer_list<value_type> __il);
  ;
   ;
   ;
   ;
private:
};
;
 ;
 ;
template <class _Key, class _Tp, class _Hash, class _Pred, class _Alloc>
struct __container_traits<unordered_map<_Key, _Tp, _Hash, _Pred, _Alloc> > ;;
template <class _Key,
          class _Tp,
          class _Hash = hash<_Key>,
          class _Pred = equal_to<_Key>,
          class _Alloc = allocator<pair<const _Key, _Tp> > >
class unordered_multimap ;;
;
;
;
;
;
;
;
;
;
;
;
;
 ;
 ;
 ;
template <class _Key, class _Tp, class _Hash, class _Pred, class _Alloc>
struct __container_traits<unordered_multimap<_Key, _Tp, _Hash, _Pred, _Alloc> > {
  static constexpr const bool __emplacement_has_strong_exception_safety_guarantee =
      __is_nothrow_invocable_v<_Hash, const _Key&>;
  static constexpr const bool __reservable = true;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace pmr {
template <class _KeyT, class _ValueT, class _HashT = std::hash<_KeyT>, class _PredT = std::equal_to<_KeyT>>
using unordered_map =
    std::unordered_map<_KeyT, _ValueT, _HashT, _PredT, polymorphic_allocator<std::pair<const _KeyT, _ValueT>>>;
template <class _KeyT, class _ValueT, class _HashT = std::hash<_KeyT>, class _PredT = std::equal_to<_KeyT>>
using unordered_multimap =
    std::unordered_multimap<_KeyT, _ValueT, _HashT, _PredT, polymorphic_allocator<std::pair<const _KeyT, _ValueT>>>;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Key, class _Value, class _Hash, class _BinaryPredicate, bool >
class _BMSkipTable;
template <class _Key, class _Value, class _Hash, class _BinaryPredicate>
class _BMSkipTable<_Key, _Value, _Hash, _BinaryPredicate, false> ;;
template <class _Key, class _Value, class _Hash, class _BinaryPredicate>
class _BMSkipTable<_Key, _Value, _Hash, _BinaryPredicate, true> ;
template <class _RandomAccessIterator1,
          class _Hash = hash<typename iterator_traits<_RandomAccessIterator1>::value_type>,
          class _BinaryPredicate = equal_to<>>
class boyer_moore_searcher ;
;
template <class _RandomAccessIterator1,
          class _Hash = hash<typename iterator_traits<_RandomAccessIterator1>::value_type>,
          class _BinaryPredicate = equal_to<>>
class boyer_moore_horspool_searcher ;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _ForwardIterator, class _BinaryPredicate = equal_to<>>
class default_searcher ;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __not_fn_op ;
 ;
template <auto _Fn>
struct __nttp_not_fn_t ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __bind_front_op ;
template <class _Fn, class... _BoundArgs>
struct __bind_front_t : __perfect_forward<__bind_front_op, _Fn, _BoundArgs...> {
  using __perfect_forward<__bind_front_op, _Fn, _BoundArgs...>::__perfect_forward;
};
};
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
[[noreturn]]  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) void __throw_bad_any_cast() ;
class any;
template <class _ValueType>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) add_pointer_t<add_const_t<_ValueType>> any_cast(any const*) noexcept;
template <class _ValueType>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) add_pointer_t<_ValueType> any_cast(any*) noexcept;
namespace __any_imp {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
using _Buffer [[__gnu__::__nodebug__]] = aligned_storage_t<3 * sizeof(void*), alignof(void*)>;
#pragma GCC diagnostic pop
template <class _Tp>
using _IsSmallObject [[__gnu__::__nodebug__]] =
    integral_constant<bool,
                      sizeof(_Tp) <= sizeof(_Buffer) && alignof(_Buffer) % alignof(_Tp) == 0 &&
                          is_nothrow_move_constructible<_Tp>::value >;
enum class _Action ;
template <class _Tp>
struct _SmallHandler;
template <class _Tp>
struct _LargeHandler;
template <class _Tp>
struct __unique_typeinfo ;
template <class _Tp>
 __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr const void* __get_fallback_typeid() ;
 ;
template <class _Tp>
using _Handler [[__gnu__::__nodebug__]] = conditional_t< _IsSmallObject<_Tp>::value, _SmallHandler<_Tp>, _LargeHandler<_Tp>>;
}
class any {
public:
  ;
  ;
  ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) ~any() ;
  ;
  ;
  ;
private:
  using _Action [[__gnu__::__nodebug__]] = __any_imp::_Action;
  using _HandleFuncPtr
      [[__gnu__::__nodebug__]] = void* (*)(_Action, any const*, any*, const type_info*, const void* __fallback_info);
  union _Storage {
    void* __ptr;
    __any_imp::_Buffer __buf;
  };
  template <class>
  friend struct __any_imp::_SmallHandler;
  template <class _ValueType>
  friend add_pointer_t<_ValueType> any_cast(any*) noexcept;
  _HandleFuncPtr __h_ = nullptr;
  _Storage __s_;
};
namespace __any_imp {
template <class _Tp>
struct _SmallHandler ;
template <class _Tp>
struct _LargeHandler ;
}
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __destruct_n ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __temporary_buffer_deleter ;
template <class _Tp>
using __unique_temporary_buffer [[__gnu__::__nodebug__]] = unique_ptr<_Tp, __temporary_buffer_deleter<_Tp> >;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Predicate>
class __invert
;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Comp, class _Proj>
class _MinmaxElementLessFunc ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Compare, class _Iter, class _Tp = typename iterator_traits<_Iter>::value_type>
inline const bool __use_branchless_sort =
    __libcpp_is_contiguous_iterator<_Iter>::value && __is_cheap_to_copy<_Tp> && is_arithmetic<_Tp>::value &&
    (__desugars_to_v<__less_tag, _Compare, _Tp, _Tp> || __desugars_to_v<__greater_tag, _Compare, _Tp, _Tp>);
namespace __detail {
enum { __block_size = sizeof(uint64_t) * 8 };
}
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
;;;;;;;;;;;;;;;;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Pred, class _Proj>
struct _ProjectedPred ;;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _InIter1, class _InIter2, class _OutIter>
struct __set_intersection_result ;;
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _InIter1, class _InIter2, class _OutIter>
struct __set_symmetric_difference_result ;;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _InIter1, class _InIter2, class _OutIter>
struct __set_union_result ;;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class>
struct __libcpp_random_is_valid_inttype : false_type {};
template <>
struct __libcpp_random_is_valid_inttype<int8_t> : true_type {};
template <>
struct __libcpp_random_is_valid_inttype<long> : true_type {};
template <>
struct __libcpp_random_is_valid_inttype<long long> : true_type {};
template <>
struct __libcpp_random_is_valid_inttype<uint8_t> : true_type {};
template <>
struct __libcpp_random_is_valid_inttype<unsigned short> : true_type {};
template <>
struct __libcpp_random_is_valid_inttype<unsigned int> : true_type {};
template <>
struct __libcpp_random_is_valid_inttype<unsigned long> : true_type {};
template <>
struct __libcpp_random_is_valid_inttype<unsigned long long> : true_type {};
template <>
struct __libcpp_random_is_valid_inttype<__int128_t> : true_type {};
template <>
struct __libcpp_random_is_valid_inttype<__uint128_t> : true_type {};
template <class, class = void>
struct __libcpp_random_is_valid_urng : false_type {};
template <class _Gp>
struct __libcpp_random_is_valid_urng<
    _Gp,
    __enable_if_t< is_unsigned<typename _Gp::result_type>::value &&
                   _IsSame<decltype(std::declval<_Gp&>()()), typename _Gp::result_type>::value > > : true_type {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _UIntType, _UIntType _Xp, size_t _Rp>
struct __log2_imp;
template <unsigned long long _Xp, size_t _Rp>
struct __log2_imp<unsigned long long, _Xp, _Rp> ;
template <__uint128_t _Xp, size_t _Rp>
struct __log2_imp<__uint128_t, _Xp, _Rp> {
  static const size_t value =
      (_Xp >> 64) ? (64 + __log2_imp<unsigned long long, (_Xp >> 64), 63>::value)
                  : __log2_imp<unsigned long long, _Xp, 63>::value;
};
template <class _UIntType, _UIntType _Xp>
struct __log2 {
  static const size_t value = __log2_imp<
      __conditional_t<sizeof(_UIntType) <= sizeof(unsigned long long), unsigned long long, __uint128_t>,
      _Xp,
      sizeof(_UIntType) * 8 - 1>::value;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Engine, class _UIntType>
class __independent_bits_engine ;
template <class _IntType = int>
class uniform_int_distribution ;;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__("default"))) __libcpp_debug_randomizer ;;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
template <class _Value, class _Map, class _Radix>
struct __radix_sort_traits {
  using __image_type [[__gnu__::__nodebug__]] = decay_t<__invoke_result_t<_Map, _Value>>;
  static_assert(is_unsigned<__image_type>::value);
  using __radix_type [[__gnu__::__nodebug__]] = decay_t<__invoke_result_t<_Radix, __image_type>>;
  static_assert(is_integral<__radix_type>::value);
  static constexpr auto __radix_value_range = numeric_limits<__radix_type>::max() + 1;
  static constexpr auto __radix_size = std::__bit_log2<uint64_t>(__radix_value_range);
  static constexpr auto __radix_count = sizeof(__image_type) * 8 / __radix_size;
};
template <class _Value, class _Map>
struct __counting_sort_traits ;;
 ;
 ;
 ;
 ;
 ;
 ;
template <size_t _Size>
struct __unsigned_integer_of_size;
template <>
struct __unsigned_integer_of_size<1> ;
template <>
struct __unsigned_integer_of_size<2> ;
template <>
struct __unsigned_integer_of_size<16> ;
template <size_t _Size>
using __unsigned_integer_of_size_t [[__gnu__::__nodebug__]] = typename __unsigned_integer_of_size<_Size>::type;
template <class _Sc>
using __unsigned_representation_for_t [[__gnu__::__nodebug__]] = __unsigned_integer_of_size_t<sizeof(_Sc)>;
 ;
 ;
;
template <class _Tp, class = void>
inline const bool __is_ordered_integer_representable_v = false;
struct __low_byte_fn ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __unique_copy_tags {
struct __reread_from_input_tag ;;
struct __reread_from_output_tag ;;
struct __read_from_tmp_value_tag ;;
}
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter1>
struct in_found_result ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter1, class _OutIter1, class _OutIter2>
struct in_out_out_result ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _T1>
struct min_max_result ;
template <class _OutIter1, class _ValType1>
struct out_value_result ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __all_of {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto all_of = __all_of{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __any_of {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto any_of = __any_of{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __binary_search {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto binary_search = __binary_search{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __clamp {
   ;
};
inline namespace __cpo {
inline constexpr auto clamp = __clamp{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __contains {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto contains = __contains{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Ip, class _Op>
using copy_backward_result = in_out_result<_Ip, _Op>;
struct __copy_backward {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto copy_backward = __copy_backward{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Ip, class _Op>
using copy_if_result = in_out_result<_Ip, _Op>;
struct __copy_if {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto copy_if = __copy_if{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __count {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto count = __count{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __count_if {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto count_if = __count_if{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __equal {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto equal = __equal{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __equal_range {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto equal_range = __equal_range{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __fill {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto fill = __fill{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __find_end {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto find_end = __find_end{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Iter, class _Func>
using for_each_n_result = in_fun_result<_Iter, _Func>;
struct __for_each_n {
   ;
};
inline namespace __cpo {
inline constexpr auto for_each_n = __for_each_n{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __generate {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto generate = __generate{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __includes {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto includes = __includes{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __inplace_merge {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto inplace_merge = __inplace_merge{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __is_heap {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto is_heap = __is_heap{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __is_heap_until {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto is_heap_until = __is_heap_until{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __is_partitioned {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto is_partitioned = __is_partitioned{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __is_permutation {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto is_permutation = __is_permutation{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
 ;
struct __is_sorted_until {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto is_sorted_until = __is_sorted_until{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __is_sorted {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto is_sorted = __is_sorted{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __lexicographical_compare {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto lexicographical_compare = __lexicographical_compare{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __lower_bound {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto lower_bound = __lower_bound{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __make_heap {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto make_heap = __make_heap{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __max {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto max = __max{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __max_element {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto max_element = __max_element{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter1, class _InIter2, class _OutIter>
using merge_result = in_in_out_result<_InIter1, _InIter2, _OutIter>;
struct __merge {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto merge = __merge{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __min_element {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto min_element = __min_element{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _T1>
using minmax_result = min_max_result<_T1>;
struct __minmax {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto minmax = __minmax{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _T1>
using minmax_element_result = min_max_result<_T1>;
struct __minmax_element {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto minmax_element = __minmax_element{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using move_result = in_out_result<_InIter, _OutIter>;
struct __move {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto move = __move{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using move_backward_result = in_out_result<_InIter, _OutIter>;
struct __move_backward {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto move_backward = __move_backward{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter>
using next_permutation_result = in_found_result<_InIter>;
struct __next_permutation {
   ;
   ;
};
inline namespace __cpo {
constexpr inline auto next_permutation = __next_permutation{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __none_of {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto none_of = __none_of{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __nth_element {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto nth_element = __nth_element{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __partial_sort {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto partial_sort = __partial_sort{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using partial_sort_copy_result = in_out_result<_InIter, _OutIter>;
struct __partial_sort_copy {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto partial_sort_copy = __partial_sort_copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __partition {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto partition = __partition{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter1, class _OutIter2>
using partition_copy_result = in_out_out_result<_InIter, _OutIter1, _OutIter2>;
struct __partition_copy {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto partition_copy = __partition_copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __partition_point {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto partition_point = __partition_point{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __pop_heap {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto pop_heap = __pop_heap{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter>
using prev_permutation_result = in_found_result<_InIter>;
struct __prev_permutation {
   ;
   ;
};
inline namespace __cpo {
constexpr inline auto prev_permutation = __prev_permutation{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __push_heap {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto push_heap = __push_heap{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
 ;
struct __remove_if {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto remove_if = __remove_if{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __remove {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto remove = __remove{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using remove_copy_if_result = in_out_result<_InIter, _OutIter>;
 ;
struct __remove_copy_if {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto remove_copy_if = __remove_copy_if{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using remove_copy_result = in_out_result<_InIter, _OutIter>;
struct __remove_copy {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto remove_copy = __remove_copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
 ;
struct __replace_if {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto replace_if = __replace_if{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __replace {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto replace = __replace{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using replace_copy_if_result = in_out_result<_InIter, _OutIter>;
 ;
struct __replace_copy_if {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto replace_copy_if = __replace_copy_if{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using replace_copy_result = in_out_result<_InIter, _OutIter>;
struct __replace_copy {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto replace_copy = __replace_copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __reverse {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto reverse = __reverse{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using reverse_copy_result = in_out_result<_InIter, _OutIter>;
struct __reverse_copy {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto reverse_copy = __reverse_copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __rotate {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto rotate = __rotate{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using rotate_copy_result = in_out_result<_InIter, _OutIter>;
struct __rotate_copy {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto rotate_copy = __rotate_copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Gen>
class _ClassicGenAdaptor {
private:
  _Gen& __gen_;
public:
  using result_type = invoke_result_t<_Gen&>;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Gen>
concept uniform_random_bit_generator = invocable<_Gen&> && unsigned_integral<invoke_result_t<_Gen&>> && requires {
  { _Gen::min() } -> same_as<invoke_result_t<_Gen&>>;
  { _Gen::max() } -> same_as<invoke_result_t<_Gen&>>;
  requires bool_constant<(_Gen::min() < _Gen::max())>::value;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __sample {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto sample = __sample{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __search_n {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto search_n = __search_n{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using set_difference_result = in_out_result<_InIter, _OutIter>;
struct __set_difference {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto set_difference = __set_difference{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter1, class _InIter2, class _OutIter>
using set_intersection_result = in_in_out_result<_InIter1, _InIter2, _OutIter>;
struct __set_intersection {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto set_intersection = __set_intersection{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter1, class _InIter2, class _OutIter>
using set_symmetric_difference_result = in_in_out_result<_InIter1, _InIter2, _OutIter>;
struct __set_symmetric_difference {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto set_symmetric_difference = __set_symmetric_difference{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter1, class _InIter2, class _OutIter>
using set_union_result = in_in_out_result<_InIter1, _InIter2, _OutIter>;
struct __set_union {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto set_union = __set_union{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __shuffle {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto shuffle = __shuffle{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __sort {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto sort = __sort{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __sort_heap {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto sort_heap = __sort_heap{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __stable_partition {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto stable_partition = __stable_partition{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __stable_sort {
   ;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto stable_sort = __stable_sort{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _I1, class _I2>
using swap_ranges_result = in_in_result<_I1, _I2>;
struct __swap_ranges {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto swap_ranges = __swap_ranges{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __unique {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto unique = __unique{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using unique_copy_result = in_out_result<_InIter, _OutIter>;
template <class _InIter, class _OutIter>
concept __can_reread_from_output = (input_iterator<_OutIter> && same_as<iter_value_t<_InIter>, iter_value_t<_OutIter>>);
struct __unique_copy {
   ;
  template <class _InIter, class _OutIter>
  using __algo_tag_t [[__gnu__::__nodebug__]] = decltype(__get_algo_tag<_InIter, _OutIter>());
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto unique_copy = __unique_copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __contains_subrange {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto contains_subrange = __contains_subrange{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __starts_with {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto starts_with = __starts_with{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __ends_with {
   ;
};
inline namespace __cpo {
inline constexpr auto ends_with = __ends_with{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
 ;
struct __find_last {
  template <class _Type>
  struct __op ;
   ;
   ;
};
struct __find_last_if {
  template <class _Pred>
  struct __op ;
   ;
   ;
};
struct __find_last_if_not {
  template <class _Pred>
  struct __op ;;
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto find_last = __find_last{};
inline constexpr auto find_last_if = __find_last_if{};
inline constexpr auto find_last_if_not = __find_last_if_not{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Ip, class _Tp>
struct in_value_result ;;
template <class _Ip, class _Tp>
using fold_left_with_iter_result = in_value_result<_Ip, _Tp>;
template <class _Fp, class _Tp, class _Ip, class _Rp, class _Up = decay_t<_Rp>>
concept __indirectly_binary_left_foldable_impl =
    invocable<_Fp&, _Up, iter_reference_t<_Ip>> &&
    assignable_from<_Up&, invoke_result_t<_Fp&, _Up, iter_reference_t<_Ip>>>;
template <class _Fp, class _Tp, class _Ip>
concept __indirectly_binary_left_foldable =
    copy_constructible<_Fp> &&
    invocable<_Fp&, _Tp, iter_reference_t<_Ip>> &&
    __indirectly_binary_left_foldable_impl<_Fp, _Tp, _Ip, invoke_result_t<_Fp&, _Tp, iter_reference_t<_Ip>>>;
struct __fold_left_with_iter {
   ;
   ;
};
inline constexpr auto fold_left_with_iter = __fold_left_with_iter();
struct __fold_left {
   ;
   ;
};
inline constexpr auto fold_left = __fold_left();
}
} }
enum eIcons : uint8_t ;;
enum eRenderStage : uint8_t ;
enum eInputType : uint8_t ;
struct SCallbackInfo ;
enum eHyprCtlOutputFormat : uint8_t ;;
struct SHyprCtlCommand {
    std::string name = "";
    bool exact = true;
    std::function<std::string(eHyprCtlOutputFormat, std::string)> fn;
};
struct SDispatchResult ;
using WINDOWID = int64_t;
using MONITORID = int64_t;
using WORKSPACEID = int64_t;
using HOOK_CALLBACK_FN = std::function<void(void*, SCallbackInfo&, std::any)>;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits>
class basic_istream : virtual public basic_ios<_CharT, _Traits> {
  streamsize __gc_;
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename traits_type::int_type int_type;
  typedef typename traits_type::pos_type pos_type;
  typedef typename traits_type::off_type off_type;
protected:
public:
  bool __ok_;
public:
};
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
template <class _Stream, class _Tp, class = void>
struct __is_istreamable : false_type {};
template <class _Stream, class _Tp>
struct __is_istreamable<_Stream, _Tp, decltype(std::declval<_Stream>() >> std::declval<_Tp>(), void())> : true_type {};
 ;
template <class _CharT, class _Traits>
class basic_iostream : public basic_istream<_CharT, _Traits>, public basic_ostream<_CharT, _Traits> {
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename traits_type::int_type int_type;
  typedef typename traits_type::pos_type pos_type;
  typedef typename traits_type::off_type off_type;
protected:
};
extern template class __attribute__((__visibility__("default"))) basic_istream<char>;
extern template class __attribute__((__visibility__("default"))) basic_istream<wchar_t>;
extern template class __attribute__((__visibility__("default"))) basic_iostream<char>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
extern __attribute__((__visibility__("default"))) istream cin;
extern __attribute__((__visibility__("default"))) ostream cout;
extern __attribute__((__visibility__("default"))) ostream cerr;
extern __attribute__((__visibility__("default"))) ostream clog;
extern __attribute__((__visibility__("default"))) wistream wcin;
extern __attribute__((__visibility__("default"))) wostream wcout;
extern __attribute__((__visibility__("default"))) wostream wcerr;
extern __attribute__((__visibility__("default"))) wostream wclog;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__("default"))) money_base {
public:
  enum part { none, space, symbol, sign, value };
  struct pattern ;
};
template <class _CharT, bool _International = false>
class moneypunct : public locale::facet, public money_base {
public:
  typedef _CharT char_type;
  typedef basic_string<char_type> string_type;
  static locale::id id;
  static const bool intl = _International;
protected:
};
template <class _CharT, bool _International>
locale::id moneypunct<_CharT, _International>::id;
template <class _CharT, bool _International>
const bool moneypunct<_CharT, _International>::intl;
extern template class __attribute__((__visibility__("default"))) moneypunct<char, false>;
extern template class __attribute__((__visibility__("default"))) moneypunct<char, true>;
extern template class __attribute__((__visibility__("default"))) moneypunct<wchar_t, false>;
extern template class __attribute__((__visibility__("default"))) moneypunct<wchar_t, true>;
template <class _CharT, bool _International = false>
class moneypunct_byname : public moneypunct<_CharT, _International> {
public:
  typedef money_base::pattern pattern;
  typedef _CharT char_type;
  typedef basic_string<char_type> string_type;
protected:
private:
  char_type __decimal_point_;
};
extern template class __attribute__((__visibility__("default"))) moneypunct_byname<char, false>;
extern template class __attribute__((__visibility__("default"))) moneypunct_byname<char, true>;
extern template class __attribute__((__visibility__("default"))) moneypunct_byname<wchar_t, false>;
extern template class __attribute__((__visibility__("default"))) moneypunct_byname<wchar_t, true>;
template <class _CharT>
class __money_get {
protected:
  typedef _CharT char_type;
  typedef basic_string<char_type> string_type;
};
extern template class __attribute__((__visibility__("default"))) __money_get<char>;
extern template class __attribute__((__visibility__("default"))) __money_get<wchar_t>;
template <class _CharT, class _InputIterator = istreambuf_iterator<_CharT> >
class money_get : public locale::facet, private __money_get<_CharT> {
public:
  typedef _CharT char_type;
  typedef _InputIterator iter_type;
  typedef basic_string<char_type> string_type;
  static locale::id id;
protected:
private:
};
template <class _CharT, class _InputIterator>
locale::id money_get<_CharT, _InputIterator>::id;
 ;
extern template class __attribute__((__visibility__("default"))) money_get<char>;
extern template class __attribute__((__visibility__("default"))) money_get<wchar_t>;
template <class _CharT>
class __money_put {
protected:
  typedef _CharT char_type;
  typedef basic_string<char_type> string_type;
};
extern template class __attribute__((__visibility__("default"))) __money_put<char>;
extern template class __attribute__((__visibility__("default"))) __money_put<wchar_t>;
template <class _CharT, class _OutputIterator = ostreambuf_iterator<_CharT> >
class money_put : public locale::facet, private __money_put<_CharT> {
public:
  typedef _CharT char_type;
  typedef _OutputIterator iter_type;
  typedef basic_string<char_type> string_type;
  static locale::id id;
protected:
};
template <class _CharT, class _OutputIterator>
locale::id money_put<_CharT, _OutputIterator>::id;
extern template class __attribute__((__visibility__("default"))) money_put<char>;
extern template class __attribute__((__visibility__("default"))) money_put<wchar_t>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
class __attribute__((__visibility__("default"))) time_base {
public:
  enum dateorder { no_order, dmy, mdy, ymd, ydm };
};
template <class _CharT>
class __time_get_c_storage {
protected:
  typedef basic_string<_CharT> string_type;
  virtual const string_type* __months() const;
};
template <>
__attribute__((__visibility__("default"))) const string* __time_get_c_storage<char>::__months() const;
template <class _CharT, class _InputIterator = istreambuf_iterator<_CharT> >
class time_get : public locale::facet, public time_base, private __time_get_c_storage<_CharT> {
public:
  typedef _CharT char_type;
  typedef _InputIterator iter_type;
  typedef time_base::dateorder dateorder;
  typedef basic_string<char_type> string_type;
  static locale::id id;
protected:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) ~time_get() override ;
  virtual dateorder do_date_order() const;
  virtual iter_type
  do_get_date(iter_type __b, iter_type __e, ios_base& __iob, ios_base::iostate& __err, tm* __tm) const;
private:
};
template <class _CharT, class _InputIterator>
locale::id time_get<_CharT, _InputIterator>::id;
extern template class __attribute__((__visibility__("default"))) time_get<char>;
extern template class __attribute__((__visibility__("default"))) time_get<wchar_t>;
class __attribute__((__visibility__("default"))) __time_get {
protected:
  __locale::__locale_t __loc_;
};
template <class _CharT>
class __time_get_storage : public __time_get {
protected:
  typedef basic_string<_CharT> string_type;
  string_type __weeks_[14];
  string_type __months_[24];
  string_type __am_pm_[2];
  string_type __c_;
  string_type __r_;
  string_type __x_;
  string_type __X_;
  explicit __time_get_storage(const char* __nm);
  explicit __time_get_storage(const string& __nm);
  time_base::dateorder __do_date_order() const;
private:
  void init(const ctype<_CharT>&);
  string_type __analyze(char __fmt, const ctype<_CharT>&);
};
template <> __attribute__((__visibility__("default"))) time_base::dateorder __time_get_storage<char>::__do_date_order() const; template <> __attribute__((__visibility__("default"))) __time_get_storage<char>::__time_get_storage(const char*); template <> __attribute__((__visibility__("default"))) __time_get_storage<char>::__time_get_storage(const string&); template <> __attribute__((__visibility__("default"))) void __time_get_storage<char>::init(const ctype<char>&); template <> __attribute__((__visibility__("default"))) __time_get_storage<char>::string_type __time_get_storage<char>::__analyze( char, const ctype<char>&); extern template __attribute__((__visibility__("default"))) time_base::dateorder __time_get_storage<char>::__do_date_order() const; extern template __attribute__((__visibility__("default"))) __time_get_storage<char>::__time_get_storage(const char*); extern template __attribute__((__visibility__("default"))) __time_get_storage<char>::__time_get_storage(const string&); extern template __attribute__((__visibility__("default"))) void __time_get_storage<char>::init(const ctype<char>&); extern template __attribute__((__visibility__("default"))) __time_get_storage<char>::string_type __time_get_storage<char>::__analyze(char, const ctype<char>&);
template <> __attribute__((__visibility__("default"))) time_base::dateorder __time_get_storage<wchar_t>::__do_date_order() const; template <> __attribute__((__visibility__("default"))) __time_get_storage<wchar_t>::__time_get_storage(const char*); template <> __attribute__((__visibility__("default"))) __time_get_storage<wchar_t>::__time_get_storage(const string&); template <> __attribute__((__visibility__("default"))) void __time_get_storage<wchar_t>::init(const ctype<wchar_t>&); template <> __attribute__((__visibility__("default"))) __time_get_storage<wchar_t>::string_type __time_get_storage<wchar_t>::__analyze( char, const ctype<wchar_t>&); extern template __attribute__((__visibility__("default"))) time_base::dateorder __time_get_storage<wchar_t>::__do_date_order() const; extern template __attribute__((__visibility__("default"))) __time_get_storage<wchar_t>::__time_get_storage(const char*); extern template __attribute__((__visibility__("default"))) __time_get_storage<wchar_t>::__time_get_storage(const string&); extern template __attribute__((__visibility__("default"))) void __time_get_storage<wchar_t>::init(const ctype<wchar_t>&); extern template __attribute__((__visibility__("default"))) __time_get_storage<wchar_t>::string_type __time_get_storage<wchar_t>::__analyze(char, const ctype<wchar_t>&);
template <class _CharT, class _InputIterator = istreambuf_iterator<_CharT> >
class time_get_byname : public time_get<_CharT, _InputIterator>, private __time_get_storage<_CharT> {
public:
  typedef time_base::dateorder dateorder;
  typedef _InputIterator iter_type;
  typedef _CharT char_type;
  typedef basic_string<char_type> string_type;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit time_get_byname(const char* __nm, size_t __refs = 0)  ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit time_get_byname(const string& __nm, size_t __refs = 0)  ;
protected:
private:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) const string_type* __months() const override ;
};
extern template class __attribute__((__visibility__("default"))) time_get_byname<char>;
extern template class __attribute__((__visibility__("default"))) time_get_byname<wchar_t>;
class __attribute__((__visibility__("default"))) __time_put {
  __locale::__locale_t __loc_;
protected:
  ~__time_put();
};
template <class _CharT, class _OutputIterator = ostreambuf_iterator<_CharT> >
class time_put : public locale::facet, private __time_put {
public:
  typedef _CharT char_type;
  typedef _OutputIterator iter_type;
  iter_type
  put(iter_type __s, ios_base& __iob, char_type __fl, const tm* __tm, const char_type* __pb, const char_type* __pe)
      const;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) iter_type
  put(iter_type __s, ios_base& __iob, char_type __fl, const tm* __tm, char __fmt, char __mod = 0) const ;
  static locale::id id;
protected:
};
template <class _CharT, class _OutputIterator>
locale::id time_put<_CharT, _OutputIterator>::id;
extern template class __attribute__((__visibility__("default"))) time_put<char>;
extern template class __attribute__((__visibility__("default"))) time_put<wchar_t>;
template <class _CharT, class _OutputIterator = ostreambuf_iterator<_CharT> >
class time_put_byname : public time_put<_CharT, _OutputIterator> {
public:
protected:
  ios_base::fmtflags __mask_;
public:
   ;
   ;
};
class __iom_t3 ;;
template <class _CharT>
class __iom_t4 ;
 ;
class __iom_t5 ;
class __iom_t6 ;
template <class _MoneyT>
class __iom_t7;
;
template <class _MoneyT>
class __iom_t7 ;
 ;
 ;
template <class _MoneyT>
class __iom_t8;
;
template <class _MoneyT>
class __iom_t8 ;
 ;
 ;
template <class _CharT>
class __iom_t9;
;
template <class _CharT>
class __iom_t9 ;;
 ;
 ;
template <class _CharT>
class __iom_t10;
;
template <class _CharT>
class __iom_t10 {
  const tm* __tm_;
  const _CharT* __fmt_;
public:
  ;
};
 ;
 ;
template <class _CharT, class _Traits>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) basic_ostream<_CharT, _Traits>& __quoted_output(
    _CharT __escape) ;
 ;
template <class _CharT, class _Traits>
struct __attribute__((__visibility__("hidden"))) __quoted_output_proxy ;;
template <class _CharT, class _Traits, class _Allocator>
struct __attribute__((__visibility__("hidden"))) __quoted_proxy ;
template <class _CharT, class _Traits, class _Allocator>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) __quoted_output_proxy<_CharT, _Traits>
__quoted(const basic_string<_CharT, _Traits, _Allocator>& __s,
         _CharT __delim = _CharT('"'),
         _CharT __escape = _CharT('\\')) ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 { inline namespace __fs { namespace filesystem {
template <class _Tp>
struct __can_convert_char ;;
template <class _Tp>
struct __can_convert_char<const _Tp> : public __can_convert_char<_Tp> {};
template <>
struct __can_convert_char<char> ;
template <>
struct __can_convert_char<wchar_t> {
  static const bool value = true;
  using __char_type [[__gnu__::__nodebug__]] = wchar_t;
};
template <>
struct __can_convert_char<char8_t> {
  static const bool value = true;
  using __char_type [[__gnu__::__nodebug__]] = char8_t;
};
template <>
struct __can_convert_char<char16_t> {
  static const bool value = true;
  using __char_type [[__gnu__::__nodebug__]] = char16_t;
};
template <>
struct __can_convert_char<char32_t> {
  static const bool value = true;
  using __char_type [[__gnu__::__nodebug__]] = char32_t;
};
 ;
typedef u8string __u8_string;
struct _NullSentinel ;
template <class _Tp>
using _Void [[__gnu__::__nodebug__]] = void;
template <class _Tp, class = void>
struct __is_pathable_string : public false_type {};
template <class _ECharT, class _Traits, class _Alloc>
struct __is_pathable_string< basic_string<_ECharT, _Traits, _Alloc>,
                             _Void<typename __can_convert_char<_ECharT>::__char_type> >
    : public __can_convert_char<_ECharT> {
  using _Str [[__gnu__::__nodebug__]] = basic_string<_ECharT, _Traits, _Alloc>;
};
template <class _Source,
          class _DS = __decay_t<_Source>,
          class _UnqualPtrType = __remove_const_t<__remove_pointer_t<_DS> >,
          bool _IsCharPtr = is_pointer<_DS>::value && __can_convert_char<_UnqualPtrType>::value>
struct __is_pathable_char_array : false_type {};
template <class _Source, class _ECharT, class _UPtr>
struct __is_pathable_char_array<_Source, _ECharT*, _UPtr, true> : __can_convert_char<__remove_const_t<_ECharT> > {
};
template <class _Iter, bool _IsIt = __has_input_iterator_category<_Iter>::value, class = void>
struct __is_pathable_iter : false_type {};
template <class _Iter>
struct __is_pathable_iter<
    _Iter,
    true,
    _Void<typename __can_convert_char< typename iterator_traits<_Iter>::value_type>::__char_type> >
    : __can_convert_char<typename iterator_traits<_Iter>::value_type> {
  using _ECharT [[__gnu__::__nodebug__]] = typename iterator_traits<_Iter>::value_type;
};
template <class _Tp,
          bool _IsStringT = __is_pathable_string<_Tp>::value,
          bool _IsCharIterT = __is_pathable_char_array<_Tp>::value,
          bool _IsIterT = !_IsCharIterT && __is_pathable_iter<_Tp>::value>
struct __is_pathable : false_type {
  static_assert(!_IsStringT && !_IsCharIterT && !_IsIterT, "Must all be false");
};
template <class _Tp>
struct __is_pathable<_Tp, true, false, false> : __is_pathable_string<_Tp> {};
template <class _Tp>
struct __is_pathable<_Tp, false, true, false> : __is_pathable_char_array<_Tp> {};
template <class _Tp>
struct __is_pathable<_Tp, false, false, true> : __is_pathable_iter<_Tp> {};
typedef string __path_string;
typedef char __path_value;
template <class _ECharT>
struct _PathCVT;
template <class _ECharT>
struct _PathCVT ;
template <>
struct _PathCVT<__path_value> ;
class __attribute__((__visibility__("default"))) path ;;
}} } }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits>
class basic_filebuf : public basic_streambuf<_CharT, _Traits> {
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename traits_type::int_type int_type;
  typedef typename traits_type::pos_type pos_type;
  typedef typename traits_type::off_type off_type;
  typedef typename traits_type::state_type state_type;
  using native_handle_type = int;
  ~basic_filebuf() override;
  const codecvt<char_type, char, state_type>* __cv_;
  state_type __st_;
  state_type __st_last_;
  ios_base::openmode __om_;
  bool __owns_ib_;
  bool __always_noconv_;
  ;
  ;
};
template <class _CharT, class _Traits>
class basic_ifstream : public basic_istream<_CharT, _Traits> {
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename traits_type::int_type int_type;
  ;
  ;
  ;
private:
  basic_filebuf<char_type, traits_type> __sb_;
};
template <class _CharT, class _Traits>
class basic_ofstream : public basic_ostream<_CharT, _Traits> {
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename traits_type::int_type int_type;
  typedef typename traits_type::pos_type pos_type;
  typedef typename traits_type::off_type off_type;
  using native_handle_type = typename basic_filebuf<_CharT, _Traits>::native_handle_type;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) basic_ofstream();
  ;
  ;
private:
  basic_filebuf<char_type, traits_type> __sb_;
};
template <class _CharT, class _Traits>
class basic_fstream : public basic_iostream<_CharT, _Traits> {
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename traits_type::int_type int_type;
  typedef typename traits_type::pos_type pos_type;
  typedef typename traits_type::off_type off_type;
  using native_handle_type = typename basic_filebuf<_CharT, _Traits>::native_handle_type;
  ;
  ;
private:
  basic_filebuf<char_type, traits_type> __sb_;
};
extern template class __attribute__((__visibility__("default"))) basic_ifstream<char>;
extern template class __attribute__((__visibility__("default"))) basic_ofstream<char>;
extern template class __attribute__((__visibility__("default"))) basic_filebuf<char>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 { inline namespace __fs { namespace filesystem {
struct _FilesystemClock;
}} } }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
using file_clock = filesystem::_FilesystemClock;
template <class _Duration>
using file_time = time_point<file_clock, _Duration>;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 { inline namespace __fs { namespace filesystem {
struct _FilesystemClock ;;
}} } }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
struct local_t ;
template <class _Duration>
using local_time = time_point<local_t, _Duration>;
using local_seconds = local_time<seconds>;
using local_days = local_time<days>;
struct last_spec {
  explicit last_spec() = default;
};
inline constexpr last_spec last;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class day {
private:
  unsigned char __d_;
public:
};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
template <class _Duration>
class hh_mm_ss {
private:
  static_assert(__is_duration_v<_Duration>, "template parameter of hh_mm_ss must be a std::chrono::duration");
  using __CommonType [[__gnu__::__nodebug__]] = common_type_t<_Duration, chrono::seconds>;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static constexpr uint64_t __pow10(unsigned __exp) ;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static constexpr unsigned __width(uint64_t __n, uint64_t __d = 10, unsigned __w = 0) ;
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static unsigned constexpr fractional_width =
      __width(__CommonType::period::den) < 19 ? __width(__CommonType::period::den) : 6u;
  using precision = duration<typename __CommonType::rep, ratio<1, __pow10(fractional_width)>>;
private:
  bool __is_neg_;
  chrono::hours __h_;
  chrono::minutes __m_;
  chrono::seconds __s_;
  precision __f_;
};
;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class year {
private:
  short __y_;
};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
inline namespace literals {
inline namespace chrono_literals {
}
}
namespace chrono {
using namespace literals::chrono_literals;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class month {
private:
  unsigned char __m_;
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit inline constexpr month(unsigned __val) noexcept
      : __m_(static_cast<unsigned char>(__val)) {}
  ;
  ;
};
inline constexpr month January{1};
inline constexpr month February{2};
inline constexpr month March{3};
inline constexpr month April{4};
inline constexpr month May{5};
inline constexpr month June{6};
inline constexpr month July{7};
inline constexpr month August{8};
inline constexpr month September{9};
inline constexpr month October{10};
inline constexpr month November{11};
inline constexpr month December{12};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class weekday_indexed;
class weekday_last;
class weekday {
private:
  unsigned char __wd_;
  ;
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) inline explicit constexpr weekday(unsigned __val) noexcept
      : __wd_(static_cast<unsigned char>(__val == 0)) {}
  ;
  ;
  ;
  ;
};
class weekday_indexed {
private:
  chrono::weekday __wd_;
  unsigned char __idx_;
public:
};
class weekday_last {
private:
  chrono::weekday __wd_;
public:
};
inline constexpr weekday Sunday{0};
inline constexpr weekday Monday{1};
inline constexpr weekday Tuesday{2};
inline constexpr weekday Wednesday{3};
inline constexpr weekday Thursday{4};
inline constexpr weekday Friday{5};
inline constexpr weekday Saturday{6};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class month_weekday {
private:
  chrono::month __m_;
  chrono::weekday_indexed __wdi_;
public:
};
class month_weekday_last {
  chrono::month __m_;
  chrono::weekday_last __wdl_;
public:
};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class month_day ;
class month_day_last {
private:
  chrono::month __m_;
public:
};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class year_month ;;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class year_month_day_last;
class year_month_day ;;
class year_month_day_last {
private:
  chrono::year __y_;
  chrono::month_day_last __mdl_;
public:
  ;
  ;
  ;
  ;
};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class year_month_weekday {
  chrono::year __y_;
  chrono::month __m_;
  chrono::weekday_indexed __wdi_;
public:
  ;
  ;
};
class year_month_weekday_last ;;
}
template <class _Tp>
concept __is_time_point = __is_specialization_v<_Tp, chrono::time_point>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits, class _Allocator>
class basic_stringbuf : public basic_streambuf<_CharT, _Traits> {
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename traits_type::int_type int_type;
  typedef typename traits_type::pos_type pos_type;
  typedef typename traits_type::off_type off_type;
  typedef _Allocator allocator_type;
  typedef basic_string<char_type, traits_type, allocator_type> string_type;
private:
  string_type __str_;
  mutable char_type* __hm_;
  ios_base::openmode __mode_;
  ;
public:
protected:
};
;
template <class _CharT, class _Traits, class _Allocator>
class basic_istringstream : public basic_istream<_CharT, _Traits> {
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename traits_type::int_type int_type;
  typedef typename traits_type::pos_type pos_type;
  typedef typename traits_type::off_type off_type;
  typedef _Allocator allocator_type;
  typedef basic_string<char_type, traits_type, allocator_type> string_type;
private:
  basic_stringbuf<char_type, traits_type, allocator_type> __sb_;
public:
    ;
    ;
   ;
   ;
   ;
};
 ;
template <class _CharT, class _Traits, class _Allocator>
class basic_ostringstream : public basic_ostream<_CharT, _Traits> {
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename traits_type::int_type int_type;
  typedef typename traits_type::pos_type pos_type;
  typedef typename traits_type::off_type off_type;
  typedef _Allocator allocator_type;
  typedef basic_string<char_type, traits_type, allocator_type> string_type;
private:
  basic_stringbuf<char_type, traits_type, allocator_type> __sb_;
public:
    ;
    ;
   ;
   ;
   ;
};
 ;
template <class _CharT, class _Traits, class _Allocator>
class basic_stringstream : public basic_iostream<_CharT, _Traits> {
public:
   ;
   ;
   ;
};
 ;
extern template class __attribute__((__visibility__("default"))) basic_stringbuf<char>;
extern template class __attribute__((__visibility__("default"))) basic_stringstream<char>;
extern template class __attribute__((__visibility__("default"))) basic_ostringstream<char>;
extern template class __attribute__((__visibility__("default"))) basic_istringstream<char>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __format_spec {
inline constexpr __fields __fields_chrono_fractional{
    .__precision_ = true, .__locale_specific_form_ = true, .__type_ = false};
inline constexpr __fields __fields_chrono{.__locale_specific_form_ = true, .__type_ = false};
enum class __flags ;
template <class _CharT>
class __parser_chrono {
  using _ConstIterator [[__gnu__::__nodebug__]] = typename basic_format_parse_context<_CharT>::const_iterator;
public:
   ;
  __parser<_CharT> __parser_;
  basic_string_view<_CharT> __chrono_specs_;
private:
};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __formatter {
 ;
 ;
 ;
 ;
 ;
 ;
 ;
struct __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) __time_zone {
  string __abbrev;
  chrono::seconds __offset;
};
 ;
 ;
 ;
 ;
 ;
 ;
}
template <__fmt_char_type _CharT>
struct __formatter_chrono ;
template <class _Duration, __fmt_char_type _CharT>
struct formatter<chrono::sys_time<_Duration>, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
};
template <class _Duration, __fmt_char_type _CharT>
struct formatter<chrono::file_time<_Duration>, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
};
template <class _Duration, __fmt_char_type _CharT>
struct formatter<chrono::local_time<_Duration>, _CharT> : public __formatter_chrono<_CharT> {
public:
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::day, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::month, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::year, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::weekday, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::weekday_indexed, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::weekday_last, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::month_day, _CharT> : public __formatter_chrono<_CharT> {
public:
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::month_weekday, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::month_weekday_last, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
   ;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::year_month, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
   ;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::year_month_day, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
   ;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::year_month_day_last, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
   ;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::year_month_weekday, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
   ;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::year_month_weekday_last, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
   ;
};
template <class _Duration, __fmt_char_type _CharT>
struct formatter<chrono::hh_mm_ss<_Duration>, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base [[__gnu__::__nodebug__]] = __formatter_chrono<_CharT>;
   ;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
typedef long unsigned int size_t;
typedef __signed__ char __s8;
typedef unsigned char __u8;
typedef __signed__ short __s16;
typedef unsigned short __u16;
typedef __signed__ int __s32;
typedef unsigned int __u32;
__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;
typedef void (*__kernel_sighandler_t)(int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned long __kernel_old_dev_t;
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;
typedef __kernel_ulong_t __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef __kernel_long_t __kernel_suseconds_t;
typedef int __kernel_daddr_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;
typedef struct {
 int val[2];
} __kernel_fsid_t;
typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_old_time_t;
typedef __kernel_long_t __kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef __signed__ __int128 __s128 __attribute__((aligned(16)));
typedef unsigned __int128 __u128 __attribute__((aligned(16)));
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;
typedef __u16 __sum16;
typedef __u32 __wsum;
typedef unsigned __poll_t;
struct sched_attr ;
struct sched_param
;
extern "C" 
typedef unsigned long int __cpu_mask;
typedef struct
 cpu_set_t;
extern "C" 
typedef long int __jmp_buf[8];
struct __jmp_buf_tag
  ;
enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP
  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL
  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP
};
enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};
enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
enum
{
  PTHREAD_INHERIT_SCHED,
  PTHREAD_EXPLICIT_SCHED
};
enum
{
  PTHREAD_SCOPE_SYSTEM,
  PTHREAD_SCOPE_PROCESS
};
enum
{
  PTHREAD_PROCESS_PRIVATE,
  PTHREAD_PROCESS_SHARED
};
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};
enum
{
  PTHREAD_CANCEL_ENABLE,
  PTHREAD_CANCEL_DISABLE
};
enum
{
  PTHREAD_CANCEL_DEFERRED,
  PTHREAD_CANCEL_ASYNCHRONOUS
};
extern "C" {
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
struct __cancel_jmp_buf_tag
{
  __jmp_buf __cancel_jmp_buf;
  int __mask_was_saved;
};
typedef struct
 __pthread_unwind_buf_t __attribute__ ((__aligned__));
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
class __pthread_cleanup_class
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
 ;
;
;
;
;
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using __libcpp_timespec_t [[__gnu__::__nodebug__]] = ::timespec;
typedef pthread_mutex_t __libcpp_mutex_t;
typedef pthread_mutex_t __libcpp_recursive_mutex_t;
typedef pthread_cond_t __libcpp_condvar_t;
typedef pthread_once_t __libcpp_exec_once_flag;
typedef pthread_t __libcpp_thread_id;
typedef pthread_t __libcpp_thread_t;
typedef pthread_key_t __libcpp_tls_key;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__("default"))) [[_Clang::__capability__("mutex")]] mutex {
  __libcpp_mutex_t __m_ = {  };
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr mutex() = default;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) ~mutex() = default;
  [[_Clang::__try_acquire_capability__(true)]]
  [[_Clang::__release_capability__]]
  typedef __libcpp_mutex_t* native_handle_type;
};
static_assert(is_nothrow_default_constructible<mutex>::value, "the default constructor for std::mutex must be nothrow");
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __attribute__((__visibility__("default"))) defer_lock_t {
  explicit defer_lock_t() = default;
};
struct __attribute__((__visibility__("default"))) try_to_lock_t {
  explicit try_to_lock_t() = default;
};
struct __attribute__((__visibility__("default"))) adopt_lock_t {
  explicit adopt_lock_t() = default;
};
inline constexpr defer_lock_t defer_lock = defer_lock_t();
inline constexpr try_to_lock_t try_to_lock = try_to_lock_t();
inline constexpr adopt_lock_t adopt_lock = adopt_lock_t();
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Mutex>
class unique_lock ;
;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum class cv_status;
 ;
 ;
class __attribute__((__visibility__("default"))) condition_variable {
  __libcpp_condvar_t __cv_ ;
public:
  ;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Mutex>
class [[_Clang::__scoped_lockable__]] lock_guard ;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__("default"))) __thread_id;
namespace this_thread {
}
template <>
struct hash<__thread_id>;
class __thread_id {
  __libcpp_thread_id __id_;
public:
  friend class __attribute__((__visibility__("default"))) thread;
  friend struct hash<__thread_id>;
};
namespace this_thread {
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__("default"))) recursive_mutex {
  __libcpp_recursive_mutex_t __m_;
public:
   ;
   ;
};
class __attribute__((__visibility__("default"))) recursive_timed_mutex {
  mutex __m_;
  condition_variable __cv_;
  size_t __count_;
  __thread_id __id_;
public:
   ;
   ;
};
 ;
 ;
 ;
template <class _L0, class _L1, class _L2, class... _L3>
void __lock_first(int __i, _L0& __l0, _L1& __l1, _L2& __l2, _L3&... __l3) ;
 ;
template <class... _Mutexes>
class scoped_lock;
template <>
class scoped_lock<> ;
template <class _Mutex>
class [[_Clang::__scoped_lockable__]] scoped_lock<_Mutex> {
public:
  typedef _Mutex mutex_type;
private:
  mutex_type& __m_;
public:
  [[nodiscard]]
  [[_Clang::__release_capability__]]
  [[nodiscard]]
  scoped_lock(scoped_lock const&) = delete;
  scoped_lock& operator=(scoped_lock const&) = delete;
};
template <class... _MArgs>
class scoped_lock {
  static_assert(sizeof...(_MArgs) > 1, "At least 2 lock types required");
  typedef tuple<_MArgs&...> _MutexTuple;
public:
  [[nodiscard]]
  [[nodiscard]]
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) ~scoped_lock() ;
private:
   ;
  _MutexTuple __t_;
};
;
} }
enum eLogLevel : int8_t ;
namespace Debug {
    inline std::string m_logFile;
    inline std::ofstream m_logOfs;
    inline int64_t* const* m_disableLogs = nullptr;
    inline int64_t* const* m_disableTime = nullptr;
    inline bool m_disableStdout = false;
    inline bool m_trace = false;
    inline bool m_shuttingDown = false;
    inline int64_t* const* m_coloredLogs = nullptr;
     ;
};
namespace Hyprgraphics {
    class CColor {
      public:
        struct SSRGB ;
        struct SHSL ;
        struct SOkLab {
            double l = 0, a = 0, b = 0;
        };
        struct xy {
            double x = 0, y = 0;
        };
        struct XYZ ;
      private:
        double r = 0, g = 0, b = 0;
    };
    class CMatrix3 {
      public:
        CColor::XYZ operator*(const CColor::XYZ& xyz) const;
        const std::array<std::array<double, 3>, 3>& mat();
      private:
        std::array<std::array<double, 3>, 3> m ;
    };
    struct SPCPRimaries {
        CColor::xy red, green, blue, white;
    };
};
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Smart, class _Pointer, class... _Args>
class inout_ptr_t ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Smart, class _Pointer, class... _Args>
class out_ptr_t ;;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Ip>
concept __nothrow_input_iterator =
    input_iterator<_Ip> && is_lvalue_reference_v<iter_reference_t<_Ip>> &&
    same_as<remove_cvref_t<iter_reference_t<_Ip>>, iter_value_t<_Ip>>;
template <class _Sp, class _Ip>
concept __nothrow_sentinel_for = sentinel_for<_Sp, _Ip>;
template <class _Rp>
concept __nothrow_input_range =
    range<_Rp> && __nothrow_input_iterator<iterator_t<_Rp>> && __nothrow_sentinel_for<sentinel_t<_Rp>, iterator_t<_Rp>>;
template <class _Ip>
concept __nothrow_forward_iterator =
    __nothrow_input_iterator<_Ip> && forward_iterator<_Ip> && __nothrow_sentinel_for<_Ip, _Ip>;
template <class _Rp>
concept __nothrow_forward_range = __nothrow_input_range<_Rp> && __nothrow_forward_iterator<iterator_t<_Rp>>;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __construct_at {
   ;
};
inline namespace __cpo {
inline constexpr auto construct_at = __construct_at{};
}
struct __destroy_at {
   ;
};
inline namespace __cpo {
inline constexpr auto destroy_at = __destroy_at{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __destroy {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto destroy = __destroy{};
}
struct __destroy_n {
   ;
};
inline namespace __cpo {
inline constexpr auto destroy_n = __destroy_n{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __uninitialized_default_construct {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto uninitialized_default_construct = __uninitialized_default_construct{};
}
struct __uninitialized_default_construct_n {
   ;
};
inline namespace __cpo {
inline constexpr auto uninitialized_default_construct_n = __uninitialized_default_construct_n{};
}
struct __uninitialized_value_construct {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto uninitialized_value_construct = __uninitialized_value_construct{};
}
struct __uninitialized_value_construct_n {
   ;
};
inline namespace __cpo {
inline constexpr auto uninitialized_value_construct_n = __uninitialized_value_construct_n{};
}
struct __uninitialized_fill {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto uninitialized_fill = __uninitialized_fill{};
}
struct __uninitialized_fill_n {
   ;
};
inline namespace __cpo {
inline constexpr auto uninitialized_fill_n = __uninitialized_fill_n{};
}
template <class _InputIterator, class _OutputIterator>
using uninitialized_copy_result = in_out_result<_InputIterator, _OutputIterator>;
struct __uninitialized_copy {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto uninitialized_copy = __uninitialized_copy{};
}
template <class _InputIterator, class _OutputIterator>
using uninitialized_move_result = in_out_result<_InputIterator, _OutputIterator>;
struct __uninitialized_move {
   ;
   ;
};
inline namespace __cpo {
inline constexpr auto uninitialized_move = __uninitialized_move{};
}
template <class _InputIterator, class _OutputIterator>
using uninitialized_move_n_result = in_out_result<_InputIterator, _OutputIterator>;
struct __uninitialized_move_n {
   ;
};
inline namespace __cpo {
inline constexpr auto uninitialized_move_n = __uninitialized_move_n{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline constexpr bool __is_cv_std_pair = __is_pair_v<remove_cv_t<_Tp>>;
template <class _Tp, class = void>
struct __uses_allocator_construction_args;
namespace __uses_allocator_detail {
template <class _Ap, class _Bp>
void __fun(const pair<_Ap, _Bp>&);
template <class _Tp>
decltype(__uses_allocator_detail::__fun(std::declval<_Tp>()), true_type()) __convertible_to_const_pair_ref_impl(int);
;
template <class _Tp>
inline constexpr bool __convertible_to_const_pair_ref =
    decltype(__uses_allocator_detail::__convertible_to_const_pair_ref_impl<_Tp>(0))::value;
template <class _Tp, class _Up>
inline constexpr bool __uses_allocator_constraints =
    __is_cv_std_pair<_Tp> && !__pair_like_no_subrange<_Up> && !__convertible_to_const_pair_ref<_Up>;
}
;
template <class _Pair>
struct __uses_allocator_construction_args<_Pair, __enable_if_t<__is_cv_std_pair<_Pair>>> ;
 ;
 ;
 ;
 ;
 ;
} }
namespace Hyprutils {
    namespace Memory {
        namespace Impl_ {
            class impl_base {
              public:
                using DeleteFn = void (*)(void*);
              private:
                unsigned int _ref = 0;
                unsigned int _weak = 0;
                bool _lockable = true;
                void* _data = nullptr;
                bool _destroying = false;
                DeleteFn _deleter = nullptr;
            };
        }
    }
}
namespace Hyprutils {
    namespace Memory {
        template <typename T>
        class CSharedPointer {
          public:
            template <typename X>
            using validHierarchy = std::enable_if_t<std::is_assignable_v<CSharedPointer<T>&, X>, CSharedPointer&>;
            template <typename X>
            using isConstructible = std::enable_if_t<std::is_constructible_v<T&, X&>>;
              ;
            CSharedPointer(const CSharedPointer& ref)  ;
             ;
            CSharedPointer(std::nullptr_t) noexcept ;
            ~CSharedPointer() ;
             ;
             ;
            T* operator->() const ;
            Impl_::impl_base* impl_ = nullptr;
            void* m_data = nullptr;
          private:
        };
        template <typename U, typename... Args>
        [[nodiscard]]  CSharedPointer<U> makeShared(Args&&... args) ;
         ;
         ;
    }
}
template <typename T>
struct std::hash<Hyprutils::Memory::CSharedPointer<T>> ;
namespace Hyprutils {
    namespace Memory {
        template <typename T>
        class CUniquePointer {
          public:
            template <typename X>
            using validHierarchy = std::enable_if_t<std::is_assignable_v<CUniquePointer<T>&, X>, CUniquePointer&>;
            template <typename X>
            using isConstructible = std::enable_if_t<std::is_constructible_v<T&, X&>>;
            ;
             ;
            CUniquePointer() noexcept = default;
        };
         ;
    }
}
template <typename T>
struct std::hash<Hyprutils::Memory::CUniquePointer<T>> ;
namespace Hyprutils {
    namespace Memory {
        template <typename T>
        class CWeakPointer {
          public:
            template <typename X>
            using validHierarchy = std::enable_if_t<std::is_assignable_v<CWeakPointer<T>&, X>, CWeakPointer&>;
            template <typename X>
            using isConstructible = std::enable_if_t<std::is_constructible_v<T&, X&>>;
        };
         ;
    }
}
template <typename T>
struct std::hash<Hyprutils::Memory::CWeakPointer<T>> ;;
namespace Hyprutils::Memory {
    namespace Atomic_ {
        class impl : public Impl_::impl_base {
            std::recursive_mutex m_mutex;
          public:
        };
    }
    template <typename T>
    class CAtomicWeakPointer;
    template <typename T>
    class CAtomicSharedPointer ;;
    template <typename T>
    class CAtomicWeakPointer ;
     ;
     ;
     ;
}
using namespace Hyprutils::Memory;
template <typename T>
using SP = Hyprutils::Memory::CSharedPointer<T>;
template <typename T>
using WP = Hyprutils::Memory::CWeakPointer<T>;
template <typename T>
using UP = Hyprutils::Memory::CUniquePointer<T>;
template <typename T>
using ASP = Hyprutils::Memory::CAtomicSharedPointer<T>;
class CHyprColor {
  public:
    CHyprColor(float r, float g, float b, float a);
    CHyprColor(uint64_t);
    bool operator==(const CHyprColor& c2) const ;
    double r = 0, g = 0, b = 0, a = 0;
  private:
    Hyprgraphics::CColor::SOkLab m_okLab;
};
namespace Colors {
    static const CHyprColor WHITE = CHyprColor(1.F, 1.F, 1.F, 1.F);
    static const CHyprColor GREEN = CHyprColor(0.F, 1.F, 0.F, 1.F);
    static const CHyprColor BLUE = CHyprColor(0.F, 0.F, 1.F, 1.F);
};
class CWorkspace;
class CWindow;
class CLayerSurface;
class CMonitor;
using PHLWORKSPACE = SP<CWorkspace>;
using PHLWORKSPACEREF = WP<CWorkspace>;
using PHLWINDOW = SP<CWindow>;
using PHLWINDOWREF = WP<CWindow>;
using PHLLS = SP<CLayerSurface>;
using PHLLSREF = WP<CLayerSurface>;
using PHLMONITOR = SP<CMonitor>;
using PHLMONITORREF = WP<CMonitor>;
class CWindow;
using PHLWINDOW = SP<CWindow>;
class CWLSurfaceResource;
class CHyprXWaylandManager ;
inline UP<CHyprXWaylandManager> g_pXWaylandManager;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Key, class _Compare = less<_Key>, class _Allocator = allocator<_Key> >
class set;
template <class _Key, class _Compare = less<_Key>, class _Allocator = allocator<_Key> >
class multiset;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Key, class _Tp, class _Compare = less<_Key>, class _Allocator = allocator<pair<const _Key, _Tp> > >
class map;
template <class _Key, class _Tp, class _Compare = less<_Key>, class _Allocator = allocator<pair<const _Key, _Tp> > >
class multimap;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Compare, class _Allocator>
class __tree;
template <class _Tp, class _NodePtr, class _DiffType>
class __tree_iterator;
template <class _Tp, class _ConstNodePtr, class _DiffType>
class __tree_const_iterator;
template <class _Pointer>
class __tree_end_node;
template <class _VoidPtr>
class __tree_node_base;
template <class _Tp, class _VoidPtr>
class __tree_node;
template <class _Key, class _Value>
struct __value_type;
template <class _Allocator>
class __map_node_destructor;
template <class _TreeIterator>
class __map_iterator;
template <class _TreeIterator>
class __map_const_iterator;
 ;
 ;
 ;
 ;
 ;
template <class _Tp>
struct __is_tree_value_type_imp : false_type {};
template <class _Key, class _Value>
struct __is_tree_value_type_imp<__value_type<_Key, _Value> > : true_type {};
template <class... _Args>
struct __is_tree_value_type : false_type {};
template <class _One>
struct __is_tree_value_type<_One> : __is_tree_value_type_imp<__remove_cvref_t<_One> > {};
template <class _Tp>
struct __get_tree_key_type ;
template <class _Key, class _ValueT>
struct __get_tree_key_type<__value_type<_Key, _ValueT> > {
  using type [[__gnu__::__nodebug__]] = _Key;
};
template <class _Tp>
using __get_tree_key_type_t [[__gnu__::__nodebug__]] = typename __get_tree_key_type<_Tp>::type;
template <class _Tp>
struct __get_node_value_type {
  using type [[__gnu__::__nodebug__]] = _Tp;
};
template <class _Tp>
using __get_node_value_type_t [[__gnu__::__nodebug__]] = typename __get_node_value_type<_Tp>::type;
template <class _NodePtr, class _NodeT = typename pointer_traits<_NodePtr>::element_type>
struct __tree_node_types;
template <class _Pointer>
class __tree_end_node {
public:
  typedef _Pointer pointer;
  pointer __left_;
};
template <class _VoidPtr>
class [[_Clang::__standalone_debug__]]
__tree_node_base : public __tree_end_node<__rebind_pointer_t<_VoidPtr, __tree_node_base<_VoidPtr> > > {
public:
  using pointer = __rebind_pointer_t<_VoidPtr, __tree_node_base>;
  using __end_node_pointer [[__gnu__::__nodebug__]] = __rebind_pointer_t<_VoidPtr, __tree_end_node<pointer> >;
  pointer __right_;
  __end_node_pointer __parent_;
  bool __is_black_;
};
template <class _Tp, class _VoidPtr>
class [[_Clang::__standalone_debug__]] __tree_node : public __tree_node_base<_VoidPtr> {
public:
  using __node_value_type [[__gnu__::__nodebug__]] = __get_node_value_type_t<_Tp>;
  __node_value_type __value_;
};
template <class _Allocator>
class __tree_node_destructor ;
template <class _Tp, class _NodePtr, class _DiffType>
class __tree_iterator {
  typedef __tree_node_types<_NodePtr> _NodeTypes;
  typedef _NodePtr __node_pointer;
  typedef typename _NodeTypes::__node_base_pointer __node_base_pointer;
  typedef typename _NodeTypes::__end_node_pointer __end_node_pointer;
  __end_node_pointer __ptr_;
  template <class, class, class>
  friend class __tree;
  template <class, class, class>
  friend class __tree_const_iterator;
  template <class>
  friend class __map_iterator;
  template <class, class, class, class>
  friend class map;
  template <class, class, class, class>
  friend class multimap;
  template <class, class, class>
  friend class set;
  template <class, class, class>
  friend class multiset;
};
template <class _Tp, class _NodePtr, class _DiffType>
class __tree_const_iterator {
  typedef __tree_node_types<_NodePtr> _NodeTypes;
  using __node_pointer = _NodePtr;
  typedef typename _NodeTypes::__node_base_pointer __node_base_pointer;
  typedef typename _NodeTypes::__end_node_pointer __end_node_pointer;
  __end_node_pointer __ptr_;
public:
  using iterator_category = bidirectional_iterator_tag;
  using value_type = __get_node_value_type_t<_Tp>;
  using difference_type = _DiffType;
  using reference = const value_type&;
  typedef __tree_iterator<_Tp, __node_pointer, difference_type> __non_const_iterator;
public:
  template <class, class, class>
  friend class multiset;
  template <class>
  friend class __map_const_iterator;
};
;
template <class _Tp, class _Compare, class _Allocator>
class __tree {
public:
  using value_type = __get_node_value_type_t<_Tp>;
  typedef _Compare value_compare;
  typedef _Allocator allocator_type;
private:
  typedef allocator_traits<allocator_type> __alloc_traits;
  using key_type = __get_tree_key_type_t<_Tp>;
public:
  typedef typename __alloc_traits::pointer pointer;
  typedef typename __alloc_traits::const_pointer const_pointer;
  typedef typename __alloc_traits::size_type size_type;
  typedef typename __alloc_traits::difference_type difference_type;
public:
  using __void_pointer [[__gnu__::__nodebug__]] = typename __alloc_traits::void_pointer;
  using __node [[__gnu__::__nodebug__]] = __tree_node<_Tp, __void_pointer>;
  using __node_pointer = __rebind_pointer_t<__void_pointer, __node>;
  using __node_base [[__gnu__::__nodebug__]] = __tree_node_base<__void_pointer>;
  using __node_base_pointer [[__gnu__::__nodebug__]] = __rebind_pointer_t<__void_pointer, __node_base>;
  using __end_node_t [[__gnu__::__nodebug__]] = __tree_end_node<__node_base_pointer>;
  using __end_node_pointer [[__gnu__::__nodebug__]] = __rebind_pointer_t<__void_pointer, __end_node_t>;
  using __parent_pointer [[__gnu__::__nodebug__]] = __end_node_pointer;
  typedef __rebind_alloc<__alloc_traits, __node> __node_allocator;
  typedef allocator_traits<__node_allocator> __node_traits;
  static_assert(sizeof(__node_base_pointer) == sizeof(__end_node_pointer) && alignof(__node_base_pointer) ==
                    alignof(__end_node_pointer),
                "Allocator does not rebind pointers in a sane manner.");
private:
  __end_node_pointer __begin_node_;
  struct { [[__no_unique_address__]] __attribute__((__aligned__(::std::__compressed_pair_alignment<__node_allocator>))) __end_node_t __end_node_; [[__no_unique_address__]] ::std::__compressed_pair_padding<__end_node_t> __padding1_854_; [[__no_unique_address__]] __node_allocator __node_alloc_; [[__no_unique_address__]] ::std::__compressed_pair_padding<__node_allocator> __padding2_854_; };
  struct { [[__no_unique_address__]] __attribute__((__aligned__(::std::__compressed_pair_alignment<value_compare>))) size_type __size_; [[__no_unique_address__]] ::std::__compressed_pair_padding<size_type> __padding1_855_; [[__no_unique_address__]] value_compare __value_comp_; [[__no_unique_address__]] ::std::__compressed_pair_padding<value_compare> __padding2_855_; };
public:
public:
public:
  typedef __tree_iterator<_Tp, __node_pointer, difference_type> iterator;
  typedef __tree_const_iterator<_Tp, __node_pointer, difference_type> const_iterator;
   ;
   ;
   ;
   ;
  template <class _Pp>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) pair<iterator, bool> __emplace_unique_extract_key(_Pp&& __x, __extract_key_self_tag) ;
   ;
   ;
   ;
  ;
  typedef __tree_node_destructor<__node_allocator> _Dp;
  typedef unique_ptr<__node, _Dp> __node_holder;
  ;
   ;
  ;
private:
  ;
   ;
   ;
  struct _DetachedTreeCache ;
};
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Key, class _Compare, class _Allocator>
class set {
public:
  typedef _Key key_type;
  typedef key_type value_type;
  typedef __type_identity_t<_Compare> key_compare;
  typedef key_compare value_compare;
  typedef __type_identity_t<_Allocator> allocator_type;
  typedef value_type& reference;
  typedef const value_type& const_reference;
  static_assert(is_same<typename allocator_type::value_type, value_type>::value,
                "Allocator::value_type must be same type as value_type");
private:
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace pmr {
template <class _KeyT, class _CompareT = std::less<_KeyT>>
using set = std::set<_KeyT, _CompareT, polymorphic_allocator<_KeyT>>;
template <class _KeyT, class _CompareT = std::less<_KeyT>>
using multiset = std::multiset<_KeyT, _CompareT, polymorphic_allocator<_KeyT>>;
}
} }
extern "C" {
struct xkb_context;
struct xkb_keymap;
struct xkb_state;
typedef uint32_t xkb_keycode_t;
typedef uint32_t xkb_keysym_t;
typedef uint32_t xkb_layout_index_t;
typedef uint32_t xkb_layout_mask_t;
typedef uint32_t xkb_level_index_t;
typedef uint32_t xkb_mod_index_t;
typedef uint32_t xkb_mod_mask_t;
typedef uint32_t xkb_led_index_t;
typedef uint32_t xkb_led_mask_t;
struct xkb_rmlvo_builder;
enum xkb_rmlvo_builder_flags {
    XKB_RMLVO_BUILDER_NO_FLAGS = 0
};
;
;
;
;
;
struct xkb_rule_names ;;
struct xkb_component_names ;;
;
;
enum xkb_keysym_flags {
    XKB_KEYSYM_NO_FLAGS = 0,
    XKB_KEYSYM_CASE_INSENSITIVE = (1 << 0)
};
;
;
;
;
;
;
;
enum xkb_log_level {
    XKB_LOG_LEVEL_CRITICAL = 10,
    XKB_LOG_LEVEL_ERROR = 20,
    XKB_LOG_LEVEL_WARNING = 30,
    XKB_LOG_LEVEL_INFO = 40,
    XKB_LOG_LEVEL_DEBUG = 50
};
;
;
;
;
;
enum xkb_keymap_compile_flags {
    XKB_KEYMAP_COMPILE_NO_FLAGS = 0
};
;
;
;
;
;
;
;
;
;
;
;
typedef void
(*xkb_keymap_key_iter_t)(struct xkb_keymap *keymap, xkb_keycode_t key,
                         void *data);
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
enum xkb_key_direction {
    XKB_KEY_UP,
    XKB_STATE_LAYOUT_LATCHED = (1 << 5),
    XKB_STATE_LAYOUT_LOCKED = (1 << 6),
    XKB_STATE_LAYOUT_EFFECTIVE = (1 << 7),
    XKB_STATE_LEDS = (1 << 8)
};
;
;
;
;
;
enum xkb_state_match {
    XKB_STATE_MATCH_ANY = (1 << 0),
    XKB_STATE_MATCH_ALL = (1 << 1),
    XKB_STATE_MATCH_NON_EXCLUSIVE = (1 << 16)
};
;
;
enum xkb_consumed_mode {
    XKB_CONSUMED_MODE_XKB,
    XKB_CONSUMED_MODE_GTK
};
;
;
;
;
;
;
;
;
;
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <size_t _I0, size_t... _In>
struct __static_max;
template <size_t _I0>
struct __static_max<_I0> {
  static const size_t value = _I0;
};
template <size_t _I0, size_t _I1, size_t... _In>
struct __static_max<_I0, _I1, _In...> {
  static const size_t value = _I0 >= _I1 ? __static_max<_I0, _In...>::value : __static_max<_I1, _In...>::value;
};
template <size_t _Len, class _Type0, class... _Types>
struct __attribute__((__deprecated__)) [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] aligned_union ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __attribute__((__deprecated__)) [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] is_pod : integral_constant<bool, __is_pod(_Tp)> {};
template <class _Tp>
__attribute__((__deprecated__)) [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] inline constexpr bool is_pod_v = __is_pod(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] is_polymorphic : integral_constant<bool, __is_polymorphic(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] inline constexpr bool is_polymorphic_v = __is_polymorphic(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] has_unique_object_representations
    : integral_constant<bool, __has_unique_object_representations(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] inline constexpr bool has_unique_object_representations_v =
    __has_unique_object_representations(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] is_aggregate : integral_constant<bool, __is_aggregate(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] inline constexpr bool is_aggregate_v = __is_aggregate(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] is_implicit_lifetime : bool_constant<__builtin_is_implicit_lifetime(_Tp)> {};
template <class _Tp>
[[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] inline constexpr bool is_implicit_lifetime_v = __builtin_is_implicit_lifetime(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
struct [[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] reference_converts_from_temporary
    : public bool_constant<__reference_converts_from_temporary(_Tp, _Up)> {};
template <class _Tp, class _Up>
[[_Clang::__no_specializations__("Users are not allowed to specialize this standard library entity")]] inline constexpr bool reference_converts_from_temporary_v =
    __reference_converts_from_temporary(_Tp, _Up);
} }
namespace Hyprutils {
    namespace Signal {
        class CSignalBase;
        class CSignalListener {
          public:
            [[deprecated("Relic of the legacy untyped signal API. Using this with CSignalT is undefined behavior.")]] void emit(std::any data);
          private:
            std::function<void(void*)> m_fHandler;
            friend class CSignalBase;
        };
        typedef Hyprutils::Memory::CSharedPointer<CSignalListener> CHyprSignalListener;
    }
}
namespace Hyprutils {
    namespace Signal {
        class CSignalBase {
          protected:
            std::vector<Hyprutils::Memory::CWeakPointer<CSignalListener>> m_vListeners;
            std::vector<Hyprutils::Memory::CSharedPointer<CSignalListener>> m_vStaticListeners;
        };
        template <typename... Args>
        class CSignalT : public CSignalBase {
            template <typename T>
            using RefArg = std::conditional_t<std::is_reference_v<T> || std::is_arithmetic_v<T>, T, const T&>;
          public:
            [[nodiscard("Listener is unregistered when the ptr is lost")]]
            [[nodiscard("Listener is unregistered when the ptr is lost")]]
             ;
          private:
        };
        class CSignal : public CSignalT<std::any> {
          public:
        };
    }
}
using namespace Hyprutils::Signal;
enum eHIDCapabilityType : uint8_t ;
enum eHIDType : uint8_t {
    HID_TYPE_UNKNOWN = 0,
    HID_TYPE_POINTER,
    HID_TYPE_KEYBOARD,
    HID_TYPE_TOUCH,
    HID_TYPE_TABLET,
    HID_TYPE_TABLET_TOOL,
    HID_TYPE_TABLET_PAD,
};
class IHID {
  public:
    struct {
        CSignalT<> destroy;
    } m_events;
    std::string m_deviceName;
    std::string m_hlName;
};
namespace Aquamarine { class IPointer; };
class IPointer : public IHID {
  public:
    struct SMotionEvent ;
    struct SMotionAbsoluteEvent {
        uint32_t timeMs = 0;
        Vector2D absolute;
        SP<IHID> device;
    };
    struct SButtonEvent ;
    struct SAxisEvent {
        uint32_t timeMs = 0;
        wl_pointer_axis_source source = WL_POINTER_AXIS_SOURCE_WHEEL;
        wl_pointer_axis axis = WL_POINTER_AXIS_VERTICAL_SCROLL;
        wl_pointer_axis_relative_direction relativeDirection = WL_POINTER_AXIS_RELATIVE_DIRECTION_IDENTICAL;
        double delta = 0.0;
        int32_t deltaDiscrete = 0;
        bool mouse = false;
    };
    struct SSwipeBeginEvent ;
    struct SSwipeUpdateEvent ;
    struct SSwipeEndEvent ;
    struct SPinchBeginEvent ;;
    struct SPinchUpdateEvent {
        uint32_t timeMs = 0;
        uint32_t fingers = 0;
        Vector2D delta;
        double scale = 1.0, rotation = 0.0;
    };
    struct SPinchEndEvent {
        uint32_t timeMs = 0;
        bool cancelled = false;
    };
    struct SHoldBeginEvent {
        uint32_t timeMs = 0;
        uint32_t fingers = 0;
    };
    struct SHoldEndEvent {
        CSignalT<SPinchBeginEvent> pinchBegin;
        CSignalT<SPinchEndEvent> pinchEnd;
        CSignalT<SPinchUpdateEvent> pinchUpdate;
        CSignalT<SHoldBeginEvent> holdBegin;
        CSignalT<SHoldEndEvent> holdEnd;
    } m_pointerEvents;
    bool m_connected = false;
    std::string m_boundOutput = "";
    bool m_flipX = false;
    bool m_flipY = false;
    bool m_isTouchpad = false;
    std::optional<float> m_scrollFactor = {};
    WP<IPointer> m_self;
};
namespace Time {
    using steady_tp = std::chrono::steady_clock::time_point;
    using system_tp = std::chrono::system_clock::time_point;
    using steady_dur = std::chrono::steady_clock::duration;
    using system_dur = std::chrono::system_clock::duration;
    steady_tp steadyNow();
};
class CEventLoopTimer {
  public:
  private:
    std::function<void(SP<CEventLoopTimer> self, void* data)> m_cb;
    void* m_data = nullptr;
    std::optional<Time::steady_tp> m_expires;
    bool m_wasCancelled = false;
};
class CTimer {
  public:
  private:
    Time::steady_tp m_lastReset;
};
class CInputManager;
class CConfigManager;
class CPluginSystem;
class IKeyboard;
enum eMouseBindMode : int8_t;
struct SSubmap {
    std::string name = "";
    std::string reset = "";
};
struct SKeybind {
    bool locked = false;
    SSubmap submap ;
    std::string description = "";
    bool release = false;
    bool repeat = false;
    bool longPress = false;
    bool mouse = false;
    bool nonConsuming = false;
    bool transparent = false;
    bool ignoreMods = false;
    bool multiKey = false;
    bool hasDescription = false;
    bool dontInhibit = false;
    bool click = false;
    bool drag = false;
    bool shadowed = false;
};
enum eFocusWindowMode : uint8_t {
    MODE_CLASS_REGEX = 0,
    MODE_INITIAL_CLASS_REGEX,
    MODE_TITLE_REGEX,
    MODE_INITIAL_TITLE_REGEX,
    MODE_TAG_REGEX,
    MODE_ADDRESS,
    MODE_PID,
    MODE_ACTIVE_WINDOW
};
struct SPressedKeyWithMods ;
enum eMultiKeyCase : uint8_t ;
class CKeybindManager {
  public:
    std::unordered_map<std::string, std::function<SDispatchResult(std::string)>> m_dispatchers;
    bool m_groupsLocked = false;
    std::vector<SP<SKeybind>> m_keybinds;
    std::unordered_map<std::string, xkb_keycode_t> m_keyToCodeCache;
  private:
    std::vector<SPressedKeyWithMods> m_pressedKeys;
    inline static SSubmap m_currentSelectedSubmap = {};
    std::vector<WP<SKeybind>> m_activeKeybinds;
    friend class CWorkspace;
    friend class CPointerManager;
};
inline UP<CKeybindManager> g_pKeybindManager;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Value, class _Hash, class _Pred, class _Alloc>
class unordered_multiset;
template <class _Value, class _Hash = hash<_Value>, class _Pred = equal_to<_Value>, class _Alloc = allocator<_Value> >
class unordered_set ;;
;
;
;
;
;
;
;
;
;
;
 ;
 ;
 ;
template <class _Value, class _Hash, class _Pred, class _Alloc>
struct __container_traits<unordered_set<_Value, _Hash, _Pred, _Alloc> > ;
;
;
;
;
;
;
;
;
;
;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace pmr {
template <class _KeyT, class _HashT = std::hash<_KeyT>, class _PredT = std::equal_to<_KeyT>>
using unordered_set = std::unordered_set<_KeyT, _HashT, _PredT, polymorphic_allocator<_KeyT>>;
template <class _KeyT, class _HashT = std::hash<_KeyT>, class _PredT = std::equal_to<_KeyT>>
using unordered_multiset =
    std::unordered_multiset<_KeyT, _HashT, _PredT, polymorphic_allocator<_KeyT>>;
}
} }
class CSessionLockSurface;
class CSessionLock;
class CWLSurfaceResource;
struct SSessionLockSurface {
    WP<CSessionLockSurface> surface;
    WP<CWLSurfaceResource> pWlrSurface;
    uint64_t iMonitorID = -1;
    bool mapped = false;
    struct  listeners;
};
struct SSessionLock ;
class CSessionLockManager ;
inline UP<CSessionLockManager> g_pSessionLockManager;
namespace Hyprutils {
    namespace String {
        class CVarList {
          public:
          private:
            std::vector<std::string> m_vArgs;
        };
    }
}
using namespace Hyprutils::String;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Key,
          class _CP,
          class _Compare,
          bool = is_empty<_Compare>::value && !__libcpp_is_final<_Compare>::value>
class __map_value_compare : private _Compare {
public:
   ;
   ;
};
template <class _Key, class _CP, class _Compare>
class __map_value_compare<_Key, _CP, _Compare, false> ;
 ;
template <class _Allocator>
class __map_node_destructor ;
template <class _Key, class _Tp>
struct __value_type;
template <class _TreeIterator>
class __map_iterator ;
template <class _TreeIterator>
class __map_const_iterator {
  _TreeIterator __i_;
public:
  using iterator_category = bidirectional_iterator_tag;
  using value_type = typename _TreeIterator::value_type;
  using difference_type = typename _TreeIterator::difference_type;
  using reference = const value_type&;
  using pointer = typename _TreeIterator::pointer;
  template <class, class, class, class>
  friend class map;
  template <class, class, class, class>
  friend class multimap;
  template <class, class, class>
  friend class __tree_const_iterator;
};
template <class _Key, class _Tp, class _Compare, class _Allocator>
class map {
public:
  typedef _Key key_type;
  typedef _Tp mapped_type;
  typedef pair<const key_type, mapped_type> value_type;
  typedef __type_identity_t<_Compare> key_compare;
  typedef __type_identity_t<_Allocator> allocator_type;
  typedef value_type& reference;
  typedef const value_type& const_reference;
  static_assert(is_same<typename allocator_type::value_type, value_type>::value,
                "Allocator::value_type must be same type as value_type");
  class value_compare : public __binary_function<value_type, value_type, bool> {
    friend class map;
  protected:
    key_compare comp;
  public:
  };
private:
  typedef std::__value_type<key_type, mapped_type> __value_type;
  typedef __map_value_compare<key_type, value_type, key_compare> __vc;
  typedef __tree<__value_type, __vc, allocator_type> __base;
  typedef typename __base::__node_traits __node_traits;
  typedef allocator_traits<allocator_type> __alloc_traits;
  static_assert(__check_valid_allocator<allocator_type>::value, "");
  __base __tree_;
public:
  typedef typename __alloc_traits::pointer pointer;
  typedef typename __alloc_traits::const_pointer const_pointer;
  typedef typename __alloc_traits::size_type size_type;
  typedef typename __alloc_traits::difference_type difference_type;
  typedef __map_iterator<typename __base::iterator> iterator;
  typedef __map_const_iterator<typename __base::const_iterator> const_iterator;
  typedef std::reverse_iterator<iterator> reverse_iterator;
  typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
  typedef __map_node_handle<typename __base::__node, allocator_type> node_type;
  typedef __insert_return_type<iterator, node_type> insert_return_type;
  template <class _Key2, class _Value2, class _Comp2, class _Alloc2>
  friend class map;
  template <class _Key2, class _Value2, class _Comp2, class _Alloc2>
  friend class multimap;
    ;
    ;
    ;
    ;
   ;
   ;
   ;
   ;
   ;
   ;
private:
  typedef typename __base::__node __node;
  typedef typename __base::__node_allocator __node_allocator;
  typedef typename __base::__node_pointer __node_pointer;
  typedef typename __base::__node_base_pointer __node_base_pointer;
  typedef typename __base::__parent_pointer __parent_pointer;
  typedef __map_node_destructor<__node_allocator> _Dp;
  typedef unique_ptr<__node, _Dp> __node_holder;
};
;
;
;
;
;
;
 ;
 ;
 ;
 ;
template <class _Key, class _Tp, class _Compare, class _Allocator>
struct __container_traits<map<_Key, _Tp, _Compare, _Allocator> > ;
template <class _Key, class _Tp, class _Compare, class _Allocator>
class multimap ;
;
;
;
;
;
;
 ;
 ;
 ;
 ;
template <class _Key, class _Tp, class _Compare, class _Allocator>
struct __container_traits<multimap<_Key, _Tp, _Compare, _Allocator> > ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace pmr {
template <class _KeyT, class _ValueT, class _CompareT = std::less<_KeyT>>
using map =
    std::map<_KeyT, _ValueT, _CompareT, polymorphic_allocator<std::pair<const _KeyT, _ValueT>>>;
template <class _KeyT, class _ValueT, class _CompareT = std::less<_KeyT>>
using multimap =
    std::multimap<_KeyT, _ValueT, _CompareT, polymorphic_allocator<std::pair<const _KeyT, _ValueT>>>;
}
} }
enum eConfigValueDataTypes : int8_t {
    CVD_TYPE_INVALID = -1,
    CVD_TYPE_GRADIENT = 0,
    CVD_TYPE_CSS_VALUE = 1,
    CVD_TYPE_FONT_WEIGHT = 2,
};
class ICustomConfigValueData {
  public:
    virtual ~ICustomConfigValueData() = default;
};
class CGradientValueData : public ICustomConfigValueData {
  public:
    CGradientValueData(CHyprColor col) ;;
    virtual ~CGradientValueData() = default;
    std::vector<CHyprColor> m_colors;
    ;
    ;
    int64_t m_top;
    int64_t m_right;
    int64_t m_bottom;
    int64_t m_left;
};
class CFontWeightConfigValueData : public ICustomConfigValueData {
  public:
    int64_t m_value = 400;
};
namespace Hyprutils {
    namespace Animation {
        struct SAnimationPropertyConfig ;;
    }
}
namespace Hyprutils {
    namespace Animation {
        constexpr int BAKEDPOINTS = 255;
        constexpr float INVBAKEDPOINTS = 1.f / BAKEDPOINTS;
        class CBezierCurve {
          public:
          private:
            std::vector<Hyprutils::Math::Vector2D> m_vPoints;
            std::array<Hyprutils::Math::Vector2D, BAKEDPOINTS> m_aPointsBaked;
        };
    }
}
namespace Hyprutils {
    namespace Animation {
        class CBaseAnimatedVariable;
        class CAnimationManager {
          public:
            struct SAnimationManagerSignals ;
            std::vector<Memory::CWeakPointer<CBaseAnimatedVariable>> m_vActiveAnimatedVariables;
          private:
            std::unordered_map<std::string, Memory::CSharedPointer<CBezierCurve>> m_mBezierCurves;
            bool m_bTickScheduled = false;
            struct SAnimVarListeners ;
            Memory::CUniquePointer<SAnimVarListeners> m_listeners;
            Memory::CUniquePointer<SAnimationManagerSignals> m_events;
        };
    }
}
namespace Hyprutils {
    namespace Animation {
        class CBaseAnimatedVariable {
          public:
            using CallbackFun = std::function<void(Memory::CWeakPointer<CBaseAnimatedVariable> thisptr)>;
            ;
            ;
            int m_Type = -1;
          protected:
            friend class CAnimationManager;
            CAnimationManager* m_pAnimationManager = nullptr;
            bool m_bIsConnectedToActive = false;
            bool m_bIsBeingAnimated = false;
            Memory::CWeakPointer<CBaseAnimatedVariable> m_pSelf;
            Memory::CWeakPointer<CAnimationManager::SAnimationManagerSignals> m_pSignals;
          private:
            Memory::CWeakPointer<SAnimationPropertyConfig> m_pConfig;
            std::chrono::steady_clock::time_point animationBegin;
            bool m_bDummy = true;
            bool m_bRemoveEndAfterRan = true;
            bool m_bRemoveBeginAfterRan = true;
            CallbackFun m_fEndCallback;
            CallbackFun m_fBeginCallback;
            CallbackFun m_fUpdateCallback;
        };
        template <class ValueImpl>
        concept AnimatedType = requires(ValueImpl val) {
            requires std::is_copy_constructible_v<ValueImpl>;
            { val == val } -> std::same_as<bool>;
            { val = val };
        };
        template <AnimatedType VarType, class AnimationContext>
        class CGenericAnimatedVariable : public CBaseAnimatedVariable {
          public:
            AnimationContext m_Context;
          private:
            VarType m_Value;
            VarType m_Goal;
            VarType m_Begun;
        };
    }
}
enum eAVarDamagePolicy : int8_t ;;
enum eAnimatedVarType : int8_t {
    AVARTYPE_INVALID = -1,
    AVARTYPE_FLOAT,
    AVARTYPE_VECTOR,
    AVARTYPE_COLOR
};
template <class T>
struct STypeToAnimatedVarType_t ;
template <>
struct STypeToAnimatedVarType_t<float> ;
template <>
struct STypeToAnimatedVarType_t<Vector2D> ;
template <>
struct STypeToAnimatedVarType_t<CHyprColor> ;;
template <class T>
inline constexpr eAnimatedVarType typeToeAnimatedVarType = STypeToAnimatedVarType_t<T>::value;
template <class T, class... U>
concept OneOf = (... or std::same_as<T, U>);
template <class T>
concept Animable = OneOf<T, Vector2D, float, CHyprColor>;
struct SAnimationContext ;
template <Animable VarType>
using CAnimatedVariable = Hyprutils::Animation::CGenericAnimatedVariable<VarType, SAnimationContext>;
template <Animable VarType>
using PHLANIMVAR = SP<CAnimatedVariable<VarType>>;
template <Animable VarType>
using PHLANIMVARREF = WP<CAnimatedVariable<VarType>>;
class CTagKeeper {
  public:
    ;
  private:
    std::set<std::string> m_tags;
};
class CWindow;
class IHyprWindowDecoration;
enum eDecorationPositioningPolicy : uint8_t {
    DECORATION_POSITION_ABSOLUTE = 0,
    DECORATION_POSITION_STICKY,
};
enum eDecorationEdges : uint8_t ;
struct SDecorationPositioningInfo {
    eDecorationPositioningPolicy policy = DECORATION_POSITION_ABSOLUTE;
    uint32_t edges = 0;
    uint32_t priority = 10;
    SBoxExtents desiredExtents;
    bool reserved = false;
};
struct SDecorationPositioningReply ;;
class CDecorationPositioner {
  public:
  private:
    struct SWindowPositioningData ;
    struct SWindowData ;
    std::map<PHLWINDOWREF, SWindowData> m_windowDatas;
    std::vector<UP<SWindowPositioningData>> m_windowPositioningDatas;
};
inline UP<CDecorationPositioner> g_pDecorationPositioner;
class IHyprWindowDecoration ;
namespace Aquamarine {
    struct SGLFormat ;
    struct SDRMFormat {
        uint32_t drmFormat = 0;
        std::vector<uint64_t> modifiers;
    };
};
using DRMFormat = uint32_t;
using SHMFormat = uint32_t;
struct SPixelFormat ;
using SDRMFormat = Aquamarine::SDRMFormat;
namespace NFormatUtils {
};
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class type_index ;
template <class _Tp>
struct hash;
template <>
struct hash<type_index> : public __unary_function<type_index, size_t> {
};
} }
namespace Aquamarine {
    class IAttachment ;
    template <typename T>
    concept AttachmentConcept = std::is_base_of_v<IAttachment, T>;
    class CAttachmentManager {
      public:
      private:
        std::unordered_map<std::type_index, Hyprutils::Memory::CSharedPointer<IAttachment>> attachments;
    };
};
namespace Aquamarine {
    enum eBufferCapability : uint32_t ;
    enum eBufferType : uint32_t ;
    struct SDMABUFAttrs ;
    struct SSHMAttrs ;
    class IBuffer ;
};
class IHLBuffer;
namespace Hyprutils { namespace Math { class CRegion; } };
enum eTextureType : int8_t ;
class CTexture ;
class CFramebuffer ;
class IPassElement {
  public:
};
class CWLSurfaceResource;
class CTexture;
class CSyncTimeline;
class CSurfacePassElement : public IPassElement {
  public:
    struct SRenderData {
        PHLMONITORREF pMonitor;
        Time::steady_tp when = Time::steadyNow();
        Vector2D pos, localPos;
        void* data = nullptr;
        SP<CWLSurfaceResource> surface = nullptr;
        SP<CTexture> texture = nullptr;
        bool mainSurface = true;
        double w = 0, h = 0;
        int rounding = 0;
        bool dontRound = true;
        float roundingPower = 2.0F;
        bool decorate = false;
        float alpha = 1.F, fadeAlpha = 1.F;
        bool blur = false;
        bool blockBlurOptimization = false;
        bool squishOversized = true;
        PHLWINDOW pWindow;
        PHLLS pLS;
        bool popup = false;
        int surfaceCounter = 0;
        CBox clipBox ;
        uint32_t discardMode = 0;
        float discardOpacity = 0.f;
        bool useNearestNeighbor = false;
        bool flipEndFrame = false;
    };
  private:
    SRenderData m_data;
};
class IWindowTransformer ;
class CSubsurface;
class CPopup;
class CPointerConstraint;
class CWLSurfaceResource;
class CWLSurface ;
class CPopup;
class CWLSubsurfaceResource;
class CSubsurface ;
class CXDGPopupResource;
class CPopup {
  public:
    SP<CWLSurface> m_wlSurface;
    WP<CPopup> m_self;
    bool m_mapped = false;
    PHLANIMVAR<float> m_alpha;
    bool m_fadingOut = false;
  private:
    PHLWINDOWREF m_windowOwner;
    PHLLSREF m_layerOwner;
    WP<CPopup> m_parent;
    WP<CXDGPopupResource> m_resource;
    Vector2D m_lastSize ;
    Vector2D m_lastPos ;
    bool m_requestedReposition = false;
    bool m_inert = false;
    std::vector<UP<CPopup>> m_children;
    UP<CSubsurface> m_subsurfaceHead;
    struct {
        CHyprSignalListener newPopup;
        CHyprSignalListener destroy;
        CHyprSignalListener map;
        CHyprSignalListener unmap;
        CHyprSignalListener commit;
        CHyprSignalListener dismissed;
        CHyprSignalListener reposition;
    } m_listeners;
};
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Err>
class bad_expected_access;
#pragma clang diagnostic push
template <>
class __attribute__((__visibility__("default"))) bad_expected_access<void> : public exception {
protected:
public:
};
#pragma clang diagnostic pop
template <class _Err>
class bad_expected_access : public bad_expected_access<void> {
public:
private:
  _Err __unex_;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct unexpect_t {
  explicit unexpect_t() = default;
};
inline constexpr unexpect_t unexpect;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Err>
class unexpected;
template <class _Tp>
struct __is_std_unexpected : false_type {};
template <class _Err>
struct __is_std_unexpected<unexpected<_Err>> : true_type {};
template <class _Tp>
using __valid_std_unexpected [[__gnu__::__nodebug__]] = _BoolConstant<
    is_object_v<_Tp> &&
    !is_array_v<_Tp> &&
    !__is_std_unexpected<_Tp>::value &&
    !is_const_v<_Tp> &&
    !is_volatile_v<_Tp>
    >;
template <class _Err>
class unexpected ;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Err>
class expected;
template <class _Tp>
struct __is_std_expected : false_type {};
template <class _Tp, class _Err>
struct __is_std_expected<expected<_Tp, _Err>> : true_type {};
struct __expected_construct_in_place_from_invoke_tag ;
struct __expected_construct_unexpected_from_invoke_tag ;
 ;
struct __conditional_no_unique_address_invoke_tag ;
template <bool _NoUnique, class _Tp>
struct __conditional_no_unique_address;
template <class _Tp>
struct __conditional_no_unique_address<true, _Tp> ;
template <class _Tp>
struct __conditional_no_unique_address<false, _Tp> ;
template <class _First, class _Second>
inline constexpr bool __fits_in_tail_padding = []() {
  struct __x ;
  return sizeof(__x) == sizeof(_First);
}();
template <class _Tp, class _Err>
class __expected_base {
  union __union_t ;
  static constexpr bool __put_flag_in_tail = __fits_in_tail_padding<__union_t, bool>;
  static constexpr bool __allow_reusing_expected_tail_padding = !__put_flag_in_tail;
  struct __repr {
      ;
      ;
      ;
      ;
      ;
    ;
    ;
  private:
    template <class, class>
    friend class __expected_base;
    ;
    [[__no_unique_address__]] __conditional_no_unique_address<__put_flag_in_tail, __union_t> __union_;
    [[__no_unique_address__]] bool __has_val_;
  };
  ;
protected:
    ;
    ;
   ;
private:
  [[__no_unique_address__]] __conditional_no_unique_address<__allow_reusing_expected_tail_padding, __repr> __repr_;
};
template <class _Tp, class _Err>
class expected : private __expected_base<_Tp, _Err> {
  static_assert(!is_reference_v<_Tp> && !is_function_v<_Tp> && !is_same_v<remove_cv_t<_Tp>, in_place_t> &&
                    !is_same_v<remove_cv_t<_Tp>, unexpect_t> && !__is_std_unexpected<remove_cv_t<_Tp>>::value &&
                    __valid_std_unexpected<_Err>::value,
                "[expected.object.general] A program that instantiates the definition of template expected<T, E> for a "
                "reference type, a function type, or for possibly cv-qualified types in_place_t, unexpect_t, or a "
                "specialization of unexpected for the T parameter is ill-formed. A program that instantiates the "
                "definition of the template expected<T, E> with a type for the E parameter that is not a valid "
                "template argument for unexpected is ill-formed.");
  template <class _Up, class _OtherErr>
  friend class expected;
  using __base [[__gnu__::__nodebug__]] = __expected_base<_Tp, _Err>;
public:
  using value_type = _Tp;
  using error_type = _Err;
  using unexpected_type = unexpected<_Err>;
  using __trivially_relocatable [[__gnu__::__nodebug__]] =
      __conditional_t<__libcpp_is_trivially_relocatable<_Tp>::value && __libcpp_is_trivially_relocatable<_Err>::value,
                      expected,
                      void>;
  using __replaceable [[__gnu__::__nodebug__]] =
      __conditional_t<__is_replaceable_v<_Tp> && __is_replaceable_v<_Err>, expected, void>;
  template <class _Up>
  using rebind = expected<_Up, error_type>;
private:
  template <class _Up, class _OtherErr, class _UfQual, class _OtherErrQual>
  using __can_convert [[__gnu__::__nodebug__]] = _And<
      is_constructible<_Tp, _UfQual>,
      is_constructible<_Err, _OtherErrQual>,
      _If<_Not<is_same<remove_cv_t<_Tp>, bool>>::value,
          _And< _Not<_And<is_same<_Tp, _Up>, is_same<_Err, _OtherErr>>>,
                _Not<is_constructible<_Tp, expected<_Up, _OtherErr>&>>,
                _Not<is_constructible<_Tp, expected<_Up, _OtherErr>>>,
                _Not<is_constructible<_Tp, const expected<_Up, _OtherErr>&>>,
                _Not<is_constructible<_Tp, const expected<_Up, _OtherErr>>>,
                _Not<is_convertible<expected<_Up, _OtherErr>&, _Tp>>,
                _Not<is_convertible<expected<_Up, _OtherErr>&&, _Tp>>,
                _Not<is_convertible<const expected<_Up, _OtherErr>&, _Tp>>,
                _Not<is_convertible<const expected<_Up, _OtherErr>&&, _Tp>>>,
          true_type>,
      _Not<is_constructible<unexpected<_Err>, expected<_Up, _OtherErr>&>>,
      _Not<is_constructible<unexpected<_Err>, expected<_Up, _OtherErr>>>,
      _Not<is_constructible<unexpected<_Err>, const expected<_Up, _OtherErr>&>>,
      _Not<is_constructible<unexpected<_Err>, const expected<_Up, _OtherErr>>> >;
    ;
    ;
public:
    ;
    ;
    ;
public:
   ;
private:
  template <class _OtherErrQual>
  static constexpr bool __can_assign_from_unexpected =
      _And< is_constructible<_Err, _OtherErrQual>,
            is_assignable<_Err&, _OtherErrQual>,
            _Lazy<_Or,
                  is_nothrow_constructible<_Err, _OtherErrQual>,
                  is_nothrow_move_constructible<_Tp>,
                  is_nothrow_move_constructible<_Err>> >::value;
public:
   ;
  template <class _OtherErr>
    requires(__can_assign_from_unexpected<_OtherErr>)
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr expected& operator=(unexpected<_OtherErr>&& __un) ;
   ;
   ;
public:
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr _Err&& error() && noexcept ;
   ;
   ;
  template <class _Func>
    requires is_constructible_v<_Tp, _Tp&&>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto or_else(_Func&& __f) && ;
   ;
   ;
   ;
   ;
  template <class _Func>
    requires is_constructible_v<_Err, const _Err&&>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto transform(_Func&& __f) const&& ;
  template <class _Func>
    requires is_constructible_v<_Tp, _Tp&>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto transform_error(_Func&& __f) & ;
  template <class _Func>
    requires is_constructible_v<_Tp, const _Tp&>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto transform_error(_Func&& __f) const& ;
  template <class _Func>
    requires is_constructible_v<_Tp, _Tp&&>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto transform_error(_Func&& __f) && ;
  template <class _Func>
    requires is_constructible_v<_Tp, const _Tp&&>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr auto transform_error(_Func&& __f) const&& ;
  template <class _T2, class _E2>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator==(const expected& __x, const expected<_T2, _E2>& __y)
    requires(!is_void_v<_T2>)
            && requires {
                 { *__x == *__y } -> __core_convertible_to<bool>;
                 { __x.error() == __y.error() } -> __core_convertible_to<bool>;
               }
  {
    if (__x.__has_val() != __y.__has_val()) ; else ;
  }
  template <class _T2>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator==(const expected& __x, const _T2& __v)
    requires(!__is_std_expected<_T2>::value) && requires {
      { *__x == __v } -> __core_convertible_to<bool>;
    }
  {
    return __x.__has_val() && static_cast<bool>(__x.__val() == __v);
  }
  template <class _E2>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator==(const expected& __x, const unexpected<_E2>& __e)
    requires requires {
      { __x.error() == __e.error() } -> __core_convertible_to<bool>;
    }
  {
    return !__x.__has_val() && static_cast<bool>(__x.__unex() == __e.error());
  }
};
template <class _Err>
class __expected_void_base ;;
template <class _Tp, class _Err>
  requires is_void_v<_Tp>
class expected<_Tp, _Err> : private __expected_void_base<_Err> {
  static_assert(__valid_std_unexpected<_Err>::value,
                "[expected.void.general] A program that instantiates expected<T, E> with a E that is not a "
                "valid argument for unexpected<E> is ill-formed");
  template <class, class>
  friend class expected;
  template <class _Up, class _OtherErr, class _OtherErrQual>
  using __can_convert [[__gnu__::__nodebug__]] =
      _And< is_void<_Up>,
            is_constructible<_Err, _OtherErrQual>,
            _Not<is_constructible<unexpected<_Err>, expected<_Up, _OtherErr>&>>,
            _Not<is_constructible<unexpected<_Err>, expected<_Up, _OtherErr>>>,
            _Not<is_constructible<unexpected<_Err>, const expected<_Up, _OtherErr>&>>,
            _Not<is_constructible<unexpected<_Err>, const expected<_Up, _OtherErr>>>>;
  using __base [[__gnu__::__nodebug__]] = __expected_void_base<_Err>;
   ;
  template <class _T2, class _E2>
    requires is_void_v<_T2>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator==(const expected& __x, const expected<_T2, _E2>& __y)
    requires requires {
      { __x.error() == __y.error() } -> __core_convertible_to<bool>;
    }
  {
    if (__x.__has_val() != __y.__has_val()) ; else ;
  }
  template <class _E2>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) friend constexpr bool operator==(const expected& __x, const unexpected<_E2>& __y)
    requires requires {
      { __x.error() == __y.error() } -> __core_convertible_to<bool>;
    }
  {
    return !__x.__has_val() && static_cast<bool>(__x.__unex() == __y.error());
  }
};
} }
extern "C" ;
namespace Hyprutils {
    namespace OS {
        class CFileDescriptor ;
    };
};
struct SCallstackFrameInfo ;;
struct SWorkspaceIDName {
    WORKSPACEID id = -1L;
    std::string name;
    bool isAutoIDd = false;
};
std::string execAndGet(const char*);
int64_t getPPIDof(int64_t pid);
Vector2D configStringToVector2D(const std::string&);
 ;
enum eFullscreenMode : int8_t {
    FSMODE_NONE = 0,
    FSMODE_MAXIMIZED = 1 << 0,
    FSMODE_FULLSCREEN = 1 << 1,
    FSMODE_MAX = (1 << 2) - 1
};
class CWindow;
class CWorkspace {
    PHLANIMVAR<Vector2D> m_renderOffset;
    PHLANIMVAR<float> m_alpha;
    bool m_forceRendering = false;
    bool m_visible = false;
    bool m_isSpecialWorkspace = false;
    PHLWINDOWREF m_lastFocusedWindow;
    bool m_defaultFloating = false;
    bool m_defaultPseudo = false;
  private:
    SWorkspaceIDName m_prevWorkspace;
    SP<HOOK_CALLBACK_FN> m_focusedWindowHook;
    bool m_inert = true;
    SP<CWorkspace> m_selfPersistent;
    bool m_persistent = false;
};
namespace re2 {
    class RE2;
};
class CRuleRegexContainer ;;
class CWindowRule ;
class CConfigImpl;
struct SConfigDefaultValue;
struct SSpecialCategory;
namespace Hyprlang {
    struct SVector2D;
    class CConfigCustomValueType;
    typedef int64_t INT;
    typedef float FLOAT;
    typedef const char* STRING;
    typedef SVector2D VEC2;
    typedef CConfigCustomValueType CUSTOMTYPE;
    struct SVector2D ;
    class CParseResult ;
    struct SSpecialCategoryOptions ;
    typedef CParseResult (*PCONFIGHANDLERFUNC)(const char* COMMAND, const char* VALUE);
    typedef CParseResult (*PCONFIGCUSTOMVALUEHANDLERFUNC)(const char* VALUE, void** data);
    typedef void (*PCONFIGCUSTOMVALUEDESTRUCTOR)(void** data);
    class CConfigCustomValueType {
      public:
      private:
        PCONFIGCUSTOMVALUEHANDLERFUNC handler = nullptr;
        PCONFIGCUSTOMVALUEDESTRUCTOR dtor = nullptr;
        void* data = nullptr;
        std::string defaultVal = "";
        std::string lastVal = "";
        friend class CConfigValue;
        friend class CConfig;
    };
    class CConfig {
      public:
      private:
        bool m_bCommenced = false;
        CConfigImpl* impl;
    };
    template <typename T>
    class CSimpleConfigValue ;
};
template <typename T>
class CConfigValue ;;
enum eOverridePriority : uint8_t ;
 ;
template <typename T, bool Extended = std::is_same_v<T, bool> || std::is_same_v<T, Hyprlang::INT> || std::is_same_v<T, Hyprlang::FLOAT>>
class CWindowOverridableVar {
  public:
    CWindowOverridableVar(T const& value)  ;
    CWindowOverridableVar(std::string const& value)
        requires(Extended && !std::is_same_v<T, bool>)  ;
    CWindowOverridableVar(std::string const& value, std::optional<T> const& min, std::optional<T> const& max = std::nullopt)
        requires(Extended && !std::is_same_v<T, bool>)  ;
    ~CWindowOverridableVar() = default;
  private:
    std::map<eOverridePriority, T> m_values;
    std::optional<T> m_defaultValue;
    std::optional<T> m_minValue;
    std::optional<T> m_maxValue;
    std::any m_configValue;
};
struct wl_client;
struct wl_resource;
enum wpContentTypeManagerV1Error : uint32_t ;
enum wpContentTypeV1Type : uint32_t ;
class CWpContentTypeManagerV1;
class CWpContentTypeV1;
class CWlSurface;
class CWpContentTypeV1;
extern const wl_interface wp_content_type_manager_v1_interface;
extern const wl_interface wp_content_type_v1_interface;
struct CWpContentTypeManagerV1DestroyWrapper {
    wl_listener listener;
    CWpContentTypeManagerV1* parent = nullptr;
};
class CWpContentTypeManagerV1 {
  public:
  private:
    struct {
        std::function<void(CWpContentTypeManagerV1*)> destroy;
        std::function<void(CWpContentTypeManagerV1*, uint32_t, wl_resource*)> getSurfaceContentType;
    } requests;
    std::function<void(CWpContentTypeManagerV1*)> onDestroy;
    wl_resource* pResource = nullptr;
    CWpContentTypeManagerV1DestroyWrapper resourceDestroyListener;
    void* pData = nullptr;
};
struct CWpContentTypeV1DestroyWrapper {
    wl_listener listener;
    CWpContentTypeV1* parent = nullptr;
};
class CWpContentTypeV1 ;
namespace NContentType {
    enum eContentType : uint8_t ;
}
class CXDGSurfaceResource;
class CXWaylandSurface;
enum eIdleInhibitMode : uint8_t {
    IDLEINHIBIT_NONE = 0,
    IDLEINHIBIT_ALWAYS,
    IDLEINHIBIT_FULLSCREEN,
    IDLEINHIBIT_FOCUS
};
enum eGroupRules : uint8_t {
    GROUP_NONE = 0,
    GROUP_SET = 1 << 0,
    GROUP_SET_ALWAYS = 1 << 1,
    GROUP_BARRED = 1 << 2,
    GROUP_LOCK = 1 << 3,
    GROUP_LOCK_ALWAYS = 1 << 4,
    GROUP_INVADE = 1 << 5,
    GROUP_OVERRIDE = 1 << 6,
};
enum eGetWindowProperties : uint8_t ;
enum eSuppressEvents : uint8_t {
    SUPPRESS_NONE = 0,
    SUPPRESS_FULLSCREEN = 1 << 0,
    SUPPRESS_MAXIMIZE = 1 << 1,
    SUPPRESS_ACTIVATE = 1 << 2,
    SUPPRESS_ACTIVATE_FOCUSONLY = 1 << 3,
    SUPPRESS_FULLSCREEN_OUTPUT = 1 << 4,
};
class IWindowTransformer;
struct SAlphaValue {
    float alpha;
    bool overridden;
    ;
};
struct SWindowData {
    CWindowOverridableVar<SAlphaValue> alpha = SAlphaValue{.alpha = 1.f, .overridden = false};
    CWindowOverridableVar<SAlphaValue> alphaInactive = SAlphaValue{.alpha = 1.f, .overridden = false};
    CWindowOverridableVar<SAlphaValue> alphaFullscreen = SAlphaValue{.alpha = 1.f, .overridden = false};
    CWindowOverridableVar<bool> allowsInput = false;
    CWindowOverridableVar<bool> dimAround = false;
    CWindowOverridableVar<bool> decorate = true;
    CWindowOverridableVar<bool> focusOnActivate = false;
    CWindowOverridableVar<bool> keepAspectRatio = false;
    CWindowOverridableVar<bool> nearestNeighbor = false;
    CWindowOverridableVar<bool> noAnim = false;
    CWindowOverridableVar<bool> noBorder = false;
    CWindowOverridableVar<bool> noBlur = false;
    CWindowOverridableVar<bool> noDim = false;
    CWindowOverridableVar<bool> noFocus = false;
    CWindowOverridableVar<bool> noMaxSize = false;
    CWindowOverridableVar<bool> noRounding = false;
    CWindowOverridableVar<bool> noShadow = false;
    CWindowOverridableVar<bool> noShortcutsInhibit = false;
    CWindowOverridableVar<bool> opaque = false;
    CWindowOverridableVar<bool> RGBX = false;
    CWindowOverridableVar<bool> syncFullscreen = true;
    CWindowOverridableVar<bool> tearing = false;
    CWindowOverridableVar<bool> xray = false;
    CWindowOverridableVar<bool> renderUnfocused = false;
    CWindowOverridableVar<bool> noFollowMouse = false;
    CWindowOverridableVar<bool> noScreenShare = false;
    CWindowOverridableVar<bool> noVRR = false;
    CWindowOverridableVar<Hyprlang::INT> borderSize ;
    CWindowOverridableVar<Hyprlang::INT> rounding = {std::string("decoration:rounding"), sc<Hyprlang::INT>(0), std::nullopt};
    CWindowOverridableVar<Hyprlang::FLOAT> roundingPower ;
    CWindowOverridableVar<Hyprlang::FLOAT> scrollMouse ;
    CWindowOverridableVar<Hyprlang::FLOAT> scrollTouchpad ;
    CWindowOverridableVar<std::string> animationStyle;
    CWindowOverridableVar<Vector2D> maxSize;
    CWindowOverridableVar<Vector2D> minSize;
    CWindowOverridableVar<CGradientValueData> activeBorderColor;
    CWindowOverridableVar<CGradientValueData> inactiveBorderColor;
    CWindowOverridableVar<bool> persistentSize;
};
struct SInitialWorkspaceToken ;;
struct SFullscreenState ;;
class CWindow {
  public:
  private:
  public:
    SP<CWLSurface> m_wlSurface;
    struct {
        CSignalT<> destroy;
    } m_events;
    WP<CXDGSurfaceResource> m_xdgSurface;
    WP<CXWaylandSurface> m_xwaylandSurface;
    Vector2D m_position = Vector2D(0, 0);
    Vector2D m_size = Vector2D(0, 0);
    PHLANIMVAR<Vector2D> m_realPosition;
    PHLANIMVAR<Vector2D> m_realSize;
    Vector2D m_reportedPosition;
    Vector2D m_reportedSize;
    Vector2D m_pendingReportedSize;
    std::optional<std::pair<uint32_t, Vector2D>> m_pendingSizeAck;
    std::vector<std::pair<uint32_t, Vector2D>> m_pendingSizeAcks;
    Vector2D m_lastFloatingSize;
    bool m_requestsFloat = false;
    bool m_createdOverFullscreen = false;
    bool m_isX11 = false;
    bool m_X11DoesntWantBorders = false;
    bool m_X11ShouldntFocus = false;
    float m_X11SurfaceScaledBy = 1.f;
    bool m_noInitialFocus = false;
    bool m_wantsInitialFullscreen = false;
    MONITORID m_wantsInitialFullscreenMonitor = -1L;
    uint64_t m_suppressedEvents = SUPPRESS_NONE;
    UP<CSubsurface> m_subsurfaceHead;
    UP<CPopup> m_popupHead;
    CGradientValueData m_realBorderColor ;
    CGradientValueData m_realBorderColorPrevious ;
    PHLANIMVAR<float> m_borderFadeAnimationProgress;
    PHLANIMVAR<float> m_borderAngleAnimationProgress;
    PHLANIMVAR<float> m_alpha;
    bool m_fadingOut = false;
    bool m_readyToDelete = false;
    Vector2D m_originalClosedPos;
    Vector2D m_originalClosedSize;
    SBoxExtents m_originalClosedExtents;
    bool m_animatingIn = false;
    bool m_pinned = false;
    bool m_pinFullscreened = false;
    bool m_isUrgent = false;
    PHLWINDOWREF m_lastCycledWindow;
    std::vector<UP<IHyprWindowDecoration>> m_windowDecorations;
    std::vector<IHyprWindowDecoration*> m_decosToRemove;
    SWindowData m_windowData;
    std::vector<UP<IWindowTransformer>> m_transformers;
    PHLANIMVAR<float> m_activeInactiveAlpha;
    PHLANIMVAR<float> m_movingFromWorkspaceAlpha;
    PHLANIMVAR<CHyprColor> m_realShadowColor;
    PHLANIMVAR<float> m_dimPercent;
    int m_monitorMovedFrom = -1;
    PHLANIMVAR<float> m_movingToWorkspaceAlpha;
    PHLWINDOWREF m_swallowed;
    bool m_currentlySwallowed = false;
    bool m_groupSwallowed = false;
    bool m_stayFocused = false;
    MONITORID m_lastSurfaceMonitorID = -1;
    eIdleInhibitMode m_idleInhibitMode = IDLEINHIBIT_NONE;
    std::string m_initialWorkspaceToken = "";
    struct SGroupData {
        PHLWINDOWREF pNextWindow;
        bool head = false;
        bool locked = false;
        bool deny = false;
    } m_groupData;
    uint16_t m_groupRules = GROUP_NONE;
    bool m_tearingHint = false;
    std::vector<SP<CWindowRule>> m_matchedRules;
    CTagKeeper m_tags;
    PHLANIMVAR<float> m_notRespondingTint;
    Time::steady_tp m_closeableSince = Time::steadyNow();
    PHLWINDOWREF m_self;
    struct  m_listeners;
  private:
    bool m_hidden = false;
    bool m_suspended = false;
    WORKSPACEID m_lastWorkspace = -1L;
};
namespace NWindowProperties {
    static const std::unordered_map<std::string, std::function<CWindowOverridableVar<bool>*(const PHLWINDOW&)>> boolWindowProperties = {
        {"allowsinput", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.allowsInput; }},
        {"dimaround", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.dimAround; }},
        {"decorate", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.decorate; }},
        {"focusonactivate", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.focusOnActivate; }},
        {"keepaspectratio", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.keepAspectRatio; }},
        {"nearestneighbor", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.nearestNeighbor; }},
        {"noanim", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.noAnim; }},
        {"noblur", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.noBlur; }},
        {"noborder", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.noBorder; }},
        {"nodim", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.noDim; }},
        {"nofocus", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.noFocus; }},
        {"nomaxsize", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.noMaxSize; }},
        {"norounding", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.noRounding; }},
        {"noshadow", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.noShadow; }},
        {"noshortcutsinhibit", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.noShortcutsInhibit; }},
        {"opaque", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.opaque; }},
        {"forcergbx", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.RGBX; }},
        {"syncfullscreen", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.syncFullscreen; }},
        {"novrr", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.noVRR; }},
        {"immediate", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.tearing; }},
        {"xray", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.xray; }},
        {"nofollowmouse", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.noFollowMouse; }},
        {"noscreenshare", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.noScreenShare; }},
    };
    const std::unordered_map<std::string, std::function<CWindowOverridableVar<Hyprlang::INT>*(const PHLWINDOW&)>> intWindowProperties = {
        {"rounding", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.rounding; }},
        {"bordersize", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.borderSize; }},
    };
    const std::unordered_map<std::string, std::function<CWindowOverridableVar<Hyprlang::FLOAT>*(PHLWINDOW)>> floatWindowProperties = {
        {"roundingpower", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.roundingPower; }},
        {"scrollmouse", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.scrollMouse; }},
        {"scrolltouchpad", [](const PHLWINDOW& pWindow) { return &pWindow->m_windowData.scrollTouchpad; }},
    };
};
template <typename CharT>
struct std::formatter<PHLWINDOW, CharT> : std::formatter<CharT> {
    bool formatAddressOnly = false;
    bool formatWorkspace = false;
    bool formatMonitor = false;
    bool formatClass = false;
     ;
     ;
};
struct wl_client;
struct wl_resource;
enum wpColorManagerV1Error : uint32_t ;
enum wpColorManagerV1RenderIntent : uint32_t ;
enum wpColorManagerV1Feature : uint32_t ;
enum wpColorManagerV1Primaries : uint32_t ;;
enum wpColorManagerV1TransferFunction : uint32_t ;;
enum wpColorManagementSurfaceV1Error : uint32_t ;;
enum wpColorManagementSurfaceFeedbackV1Error : uint32_t ;;
enum wpImageDescriptionCreatorIccV1Error : uint32_t ;
enum wpImageDescriptionCreatorParamsV1Error : uint32_t ;;
enum wpImageDescriptionV1Error : uint32_t ;;
enum wpImageDescriptionV1Cause : uint32_t ;;
class CWpColorManagerV1;
class CWpColorManagementOutputV1;
class CWlOutput;
class CWpColorManagementSurfaceV1;
class CWlSurface;
class CWpColorManagementSurfaceFeedbackV1;
class CWlSurface;
class CWpImageDescriptionCreatorIccV1;
class CWpImageDescriptionV1;
class CWpImageDescriptionCreatorIccV1;
class CWpImageDescriptionV1;
class CWpImageDescriptionCreatorParamsV1;
class CWpImageDescriptionV1;
class CWpImageDescriptionV1;
class CWpImageDescriptionInfoV1;
class CWpImageDescriptionInfoV1;
extern const wl_interface wp_color_manager_v1_interface;
extern const wl_interface wp_color_management_output_v1_interface;
extern const wl_interface wp_color_management_surface_v1_interface;
extern const wl_interface wp_color_management_surface_feedback_v1_interface;
extern const wl_interface wp_image_description_creator_icc_v1_interface;
extern const wl_interface wp_image_description_creator_params_v1_interface;
extern const wl_interface wp_image_description_v1_interface;
extern const wl_interface wp_image_description_info_v1_interface;
struct CWpColorManagerV1DestroyWrapper {
    wl_listener listener;
    CWpColorManagerV1* parent = nullptr;
};
class CWpColorManagerV1 {
  public:
  private:
    struct {
        std::function<void(CWpColorManagerV1*)> destroy;
        std::function<void(CWpColorManagerV1*, uint32_t, wl_resource*)> getOutput;
        std::function<void(CWpColorManagerV1*, uint32_t, wl_resource*)> getSurface;
        std::function<void(CWpColorManagerV1*, uint32_t, wl_resource*)> getSurfaceFeedback;
        std::function<void(CWpColorManagerV1*, uint32_t)> createIccCreator;
        std::function<void(CWpColorManagerV1*, uint32_t)> createParametricCreator;
        std::function<void(CWpColorManagerV1*, uint32_t)> createWindowsScrgb;
    } requests;
    std::function<void(CWpColorManagerV1*)> onDestroy;
    wl_resource* pResource = nullptr;
    CWpColorManagerV1DestroyWrapper resourceDestroyListener;
    void* pData = nullptr;
};
struct CWpColorManagementOutputV1DestroyWrapper {
    wl_listener listener;
    CWpColorManagementOutputV1* parent = nullptr;
};
class CWpColorManagementOutputV1 {
  public:
  private:
    struct {
        std::function<void(CWpColorManagementOutputV1*)> destroy;
        std::function<void(CWpColorManagementOutputV1*, uint32_t)> getImageDescription;
    } requests;
    std::function<void(CWpColorManagementOutputV1*)> onDestroy;
    wl_resource* pResource = nullptr;
    CWpColorManagementOutputV1DestroyWrapper resourceDestroyListener;
    void* pData = nullptr;
};
struct CWpColorManagementSurfaceV1DestroyWrapper {
    wl_listener listener;
    CWpColorManagementSurfaceV1* parent = nullptr;
};
class CWpColorManagementSurfaceV1 {
  public:
  private:
    struct  requests;
    std::function<void(CWpColorManagementSurfaceV1*)> onDestroy;
    wl_resource* pResource = nullptr;
    CWpColorManagementSurfaceV1DestroyWrapper resourceDestroyListener;
    void* pData = nullptr;
};
struct CWpColorManagementSurfaceFeedbackV1DestroyWrapper {
    wl_listener listener;
    CWpColorManagementSurfaceFeedbackV1* parent = nullptr;
};
class CWpColorManagementSurfaceFeedbackV1 ;;
struct CWpImageDescriptionCreatorIccV1DestroyWrapper {
    wl_listener listener;
    CWpImageDescriptionCreatorIccV1* parent = nullptr;
};
class CWpImageDescriptionCreatorIccV1 ;
struct CWpImageDescriptionCreatorParamsV1DestroyWrapper {
    wl_listener listener;
    CWpImageDescriptionCreatorParamsV1* parent = nullptr;
};
class CWpImageDescriptionCreatorParamsV1 ;
struct CWpImageDescriptionV1DestroyWrapper {
    wl_listener listener;
    CWpImageDescriptionV1* parent = nullptr;
};
class CWpImageDescriptionV1 {
  public:
  private:
    struct {
        std::function<void(CWpImageDescriptionV1*)> destroy;
        std::function<void(CWpImageDescriptionV1*, uint32_t)> getInformation;
    } requests;
    std::function<void(CWpImageDescriptionV1*)> onDestroy;
    wl_resource* pResource = nullptr;
    CWpImageDescriptionV1DestroyWrapper resourceDestroyListener;
    void* pData = nullptr;
};
struct CWpImageDescriptionInfoV1DestroyWrapper {
    wl_listener listener;
    CWpImageDescriptionInfoV1* parent = nullptr;
};
class CWpImageDescriptionInfoV1 ;;
namespace NColorManagement {
    enum eNoShader : uint8_t ;;
    enum ePrimaries : uint8_t ;;
    using SPCPRimaries = Hyprgraphics::SPCPRimaries;
    namespace NColorPrimaries {
        static const auto DEFAULT_PRIMARIES = SPCPRimaries{};
        static const auto BT709 = SPCPRimaries{
            .red = {.x = 0.64, .y = 0.33},
            .green = {.x = 0.30, .y = 0.60},
            .blue = {.x = 0.15, .y = 0.06},
            .white = {.x = 0.3127, .y = 0.3290},
            .blue = {.x = 0.155, .y = 0.070},
            .white = {.x = 0.3127, .y = 0.3290},
        };
        static const auto GENERIC_FILM = SPCPRimaries{
            .red = {.x = 0.243, .y = 0.692},
            .green = {.x = 0.145, .y = 0.049},
            .blue = {.x = 0.681, .y = 0.319},
            .white = {.x = 0.310, .y = 0.316},
            .red = {.x = 0.680, .y = 0.320},
            .green = {.x = 0.265, .y = 0.690},
            .blue = {.x = 0.150, .y = 0.060},
            .white = {.x = 0.314, .y = 0.351},
        };
        static const auto DISPLAY_P3 = SPCPRimaries{
            .red = {.x = 0.680, .y = 0.320},
            .green = {.x = 0.265, .y = 0.690},
            .blue = {.x = 0.150, .y = 0.060},
            .white = {.x = 0.3127, .y = 0.3290},
        };
        static const auto ADOBE_RGB = SPCPRimaries{
            .red = {.x = 0.6400, .y = 0.3300},
            .green = {.x = 0.2100, .y = 0.7100},
            .blue = {.x = 0.1500, .y = 0.0600},
            .white = {.x = 0.3127, .y = 0.3290},
        };
    }
    struct SImageDescription ;
}
namespace Hyprutils::CLI {
    class CLoggerImpl;
    enum eLogLevel : uint8_t {
        LOG_TRACE = 0,
        LOG_DEBUG,
        LOG_WARN,
        LOG_ERR,
        LOG_CRIT,
    };
    class CLogger {
      public:
         ;
      private:
        Memory::CUniquePointer<CLoggerImpl> m_impl;
        eLogLevel m_logLevel = LOG_DEBUG;
        bool m_shouldLogAtAll = false;
        friend class CLoggerImpl;
        friend class CLoggerConnection;
    };
    class CLoggerConnection {
      public:
         ;
      private:
        Memory::CWeakPointer<CLoggerImpl> m_impl;
        CLogger* m_logger = nullptr;
        eLogLevel m_logLevel = LOG_DEBUG;
        std::string m_name = "";
    };
};
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __intrusive_shared_ptr_traits;
template <class _Tp>
struct __intrusive_shared_ptr {
private:
  _Tp* __raw_ptr_ = nullptr;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using atomic_bool = atomic<bool>;
using atomic_char = atomic<char>;
using atomic_schar = atomic<signed char>;
using atomic_uchar = atomic<unsigned char>;
using atomic_short = atomic<short>;
using atomic_ushort = atomic<unsigned short>;
using atomic_int = atomic<int>;
using atomic_uint = atomic<unsigned int>;
using atomic_long = atomic<long>;
using atomic_ulong = atomic<unsigned long>;
using atomic_llong = atomic<long long>;
using atomic_ullong = atomic<unsigned long long>;
using atomic_char8_t = atomic<char8_t>;
using atomic_char16_t = atomic<char16_t>;
using atomic_char32_t = atomic<char32_t>;
using atomic_wchar_t = atomic<wchar_t>;
using atomic_int_least8_t = atomic<int_least8_t>;
using atomic_uint_least8_t = atomic<uint_least8_t>;
using atomic_int_least16_t = atomic<int_least16_t>;
using atomic_uint_least16_t = atomic<uint_least16_t>;
using atomic_int_least32_t = atomic<int_least32_t>;
using atomic_uint_least32_t = atomic<uint_least32_t>;
using atomic_int_least64_t = atomic<int_least64_t>;
using atomic_uint_least64_t = atomic<uint_least64_t>;
using atomic_int_fast8_t = atomic<int_fast8_t>;
using atomic_uint_fast8_t = atomic<uint_fast8_t>;
using atomic_int_fast16_t = atomic<int_fast16_t>;
using atomic_uint_fast16_t = atomic<uint_fast16_t>;
using atomic_int_fast32_t = atomic<int_fast32_t>;
using atomic_uint32_t = atomic<uint32_t>;
using atomic_int64_t = atomic< int64_t>;
using atomic_uint64_t = atomic<uint64_t>;
using atomic_intptr_t = atomic<intptr_t>;
using atomic_uintptr_t = atomic<uintptr_t>;
using atomic_size_t = atomic<size_t>;
using atomic_ptrdiff_t = atomic<ptrdiff_t>;
using atomic_intmax_t = atomic<intmax_t>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct atomic_flag ;
template <>
struct __atomic_waitable_traits<atomic_flag> ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <size_t _Alignment>
struct __alignment_checker_type ;
template <size_t _Alignment>
struct __get_aligner_instance ;
template <class _Tp>
struct __atomic_ref_base {
private:
  friend struct __atomic_waitable_traits<__atomic_ref_base<_Tp>>;
  static constexpr size_t __min_alignment = (sizeof(_Tp) & (sizeof(_Tp) - 1)) || sizeof(_Tp);
public:
};
template <class _Tp>
struct __atomic_waitable_traits<__atomic_ref_base<_Tp>> ;
template <class _Tp>
struct atomic_ref : public __atomic_ref_base<_Tp> {
  static_assert(is_trivially_copyable_v<_Tp>, "std::atomic_ref<T> requires that 'T' be a trivially copyable type");
  using __base [[__gnu__::__nodebug__]] = __atomic_ref_base<_Tp>;
};
template <class _Tp>
  requires(std::integral<_Tp> && !std::same_as<bool, _Tp>)
struct atomic_ref<_Tp> : public __atomic_ref_base<_Tp> {
  using __base [[__gnu__::__nodebug__]] = __atomic_ref_base<_Tp>;
  using difference_type = __base::value_type;
};
template <class _Tp>
  requires std::floating_point<_Tp>
struct atomic_ref<_Tp> : public __atomic_ref_base<_Tp> {
  using __base [[__gnu__::__nodebug__]] = __atomic_ref_base<_Tp>;
  using difference_type = __base::value_type;
};
template <class _Tp>
struct atomic_ref<_Tp*> : public __atomic_ref_base<_Tp*> {
  using __base [[__gnu__::__nodebug__]] = __atomic_ref_base<_Tp*>;
  using difference_type = ptrdiff_t;
};
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _State, _State _LockedBit>
class __atomic_unique_lock ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Derived>
struct __intrusive_node_base {
  _Derived* __next_ = nullptr;
  _Derived* __prev_ = nullptr;
};
template <class _Node>
struct __intrusive_list_view {
private:
  _Node* __head_ = nullptr;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __stop_callback_base : __intrusive_node_base<__stop_callback_base> {
  using __callback_fn_t [[__gnu__::__nodebug__]] = void(__stop_callback_base*) noexcept;
  __callback_fn_t* __callback_fn_;
  atomic<bool> __completed_ = false;
  bool* __destroyed_ = nullptr;
};
class __stop_state {
  static constexpr uint32_t __stop_requested_bit = 1;
  static constexpr uint32_t __callback_list_locked_bit = 1 << 1;
  static constexpr uint32_t __stop_source_counter_shift = 2;
  atomic<uint32_t> __state_ = 0;
  template <class _Tp>
  friend struct __intrusive_shared_ptr_traits;
};
template <class _Tp>
struct __intrusive_shared_ptr_traits;
template <>
struct __intrusive_shared_ptr_traits<__stop_state> ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class stop_token ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Callback>
class stop_callback : private __stop_callback_base {
  static_assert(invocable<_Callback>,
                "Mandates: stop_callback is instantiated with an argument for the template parameter Callback that "
                "satisfies invocable.");
  static_assert(destructible<_Callback>,
                "Mandates: stop_callback is instantiated with an argument for the template parameter Callback that "
                "satisfies destructible.");
public:
  using callback_type = _Callback;
    ;
    ;
private:
  [[__no_unique_address__]] _Callback __callback_;
  __intrusive_shared_ptr<__stop_state> __state_;
  friend __stop_callback_base;
    ;
};
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Lock>
struct __unlock_guard ;
class __attribute__((__visibility__("default"))) condition_variable_any ;
} }
typedef unsigned int drm_handle_t;
extern "C" {
typedef unsigned int drm_context_t;
typedef unsigned int drm_drawable_t;
typedef unsigned int drm_magic_t;
struct drm_clip_rect ;
struct drm_drawable_info {
 unsigned int num_rects;
 struct drm_clip_rect *rects;
};
struct drm_tex_region ;
struct drm_hw_lock {
 __volatile__ unsigned int lock;
 char padding[60];
};
struct drm_version ;
struct drm_block {
 int unused;
};
struct drm_control ;
enum drm_map_type {
 _DRM_FRAME_BUFFER = 0,
 _DRM_REGISTERS = 1,
 _DRM_SHM = 2,
 _DRM_AGP = 3,
 _DRM_SCATTER_GATHER = 4,
 _DRM_CONSISTENT = 5
};
enum drm_map_flags {
 _DRM_RESTRICTED = 0x01,
 _DRM_READ_ONLY = 0x02,
 _DRM_LOCKED = 0x04,
 _DRM_KERNEL = 0x08,
 _DRM_WRITE_COMBINING = 0x10,
 _DRM_CONTAINS_LOCK = 0x20,
 _DRM_REMOVABLE = 0x40,
 _DRM_DRIVER = 0x80
};
struct drm_ctx_priv_map ;
struct drm_map ;;
struct drm_client ;;
enum drm_stat_type {
 _DRM_STAT_LOCK,
 _DRM_STAT_OPENS,
 _DRM_STAT_CLOSES,
 _DRM_STAT_IOCTLS,
 _DRM_STAT_LOCKS,
 _DRM_STAT_UNLOCKS,
 _DRM_STAT_VALUE,
 _DRM_STAT_BYTE,
 _DRM_STAT_COUNT,
 _DRM_STAT_IRQ,
 _DRM_STAT_PRIMARY,
 _DRM_STAT_SECONDARY,
 _DRM_STAT_DMA,
 _DRM_STAT_SPECIAL,
 _DRM_STAT_MISSED
};
struct drm_stats ;
enum drm_lock_flags {
 _DRM_LOCK_READY = 0x01,
 _DRM_LOCK_QUIESCENT = 0x02,
 _DRM_LOCK_FLUSH = 0x04,
 _DRM_LOCK_FLUSH_ALL = 0x08,
 _DRM_HALT_ALL_QUEUES = 0x10,
 _DRM_HALT_CUR_QUEUES = 0x20
};
struct drm_lock ;
enum drm_dma_flags {
 _DRM_DMA_BLOCK = 0x01,
 _DRM_DMA_WHILE_LOCKED = 0x02,
 _DRM_DMA_PRIORITY = 0x04,
 _DRM_DMA_WAIT = 0x10,
 _DRM_DMA_SMALLER_OK = 0x20,
 _DRM_DMA_LARGER_OK = 0x40
};
struct drm_buf_desc {
 int count;
 int size;
 int low_mark;
 int high_mark;
 enum {
  _DRM_PAGE_ALIGN = 0x01,
  _DRM_AGP_BUFFER = 0x02,
  _DRM_SG_BUFFER = 0x04,
  _DRM_FB_BUFFER = 0x08,
  _DRM_PCI_BUFFER_RO = 0x10
 } flags;
 unsigned long agp_start;
};
struct drm_buf_info ;
struct drm_buf_free ;
struct drm_buf_pub ;
struct drm_buf_map ;
struct drm_dma ;;
enum drm_ctx_flags {
 _DRM_CONTEXT_PRESERVED = 0x01,
 _DRM_CONTEXT_2DONLY = 0x02
};
struct drm_ctx ;
struct drm_ctx_res ;
struct drm_draw {
 drm_drawable_t handle;
 unsigned long long data;
};
struct drm_auth {
 drm_magic_t magic;
};
struct drm_irq_busid ;
enum drm_vblank_seq_type {
 _DRM_VBLANK_ABSOLUTE = 0x0,
 _DRM_VBLANK_RELATIVE = 0x1,
 _DRM_VBLANK_HIGH_CRTC_MASK = 0x0000003e,
 _DRM_VBLANK_EVENT = 0x4000000,
 _DRM_VBLANK_FLIP = 0x8000000,
 _DRM_VBLANK_NEXTONMISS = 0x10000000,
 _DRM_VBLANK_SECONDARY = 0x20000000,
 _DRM_VBLANK_SIGNAL = 0x40000000
};
struct drm_wait_vblank_request ;;
struct drm_wait_vblank_reply ;;
struct drm_scatter_gather ;;
struct drm_set_version ;
struct drm_get_cap ;;
struct drm_set_client_cap {
 __u64 capability;
 __u64 value;
};
struct drm_prime_handle {
 __u32 handle;
 __u32 flags;
 __s32 fd;
};
struct drm_syncobj_create {
 __u32 handle;
 __u32 flags;
};
struct drm_syncobj_destroy {
 __u32 handle;
 __u32 pad;
};
struct drm_syncobj_handle {
 __u32 handle;
 __u32 flags;
 __s32 fd;
 __u32 pad;
 __u64 point;
};
struct drm_syncobj_transfer {
 __u32 src_handle;
 __u32 dst_handle;
 __u64 src_point;
 __u64 dst_point;
 __u32 flags;
 __u32 pad;
};
struct drm_syncobj_wait {
 __u64 handles;
};
struct drm_syncobj_eventfd {
 __u32 handle;
 __u32 flags;
 __u64 point;
 __s32 fd;
 __u32 pad;
};
struct drm_syncobj_array {
 __u64 handles;
 __u32 count_handles;
 __u32 pad;
};
struct drm_syncobj_timeline_array {
 __u64 handles;
 __u64 points;
 __u32 count_handles;
 __u32 flags;
};
struct drm_crtc_get_sequence {
 __u32 crtc_id;
 __u32 active;
 __u64 sequence;
};
struct drm_color_ctm_3x4 {
 __u64 matrix[12];
};
struct drm_color_lut {
 __u16 red;
 __u16 green;
 __u16 blue;
 __u16 reserved;
};
enum drm_colorop_lut1d_interpolation_type {
 DRM_COLOROP_LUT1D_INTERPOLATION_LINEAR,
};
struct drm_plane_size_hint {
 __u16 width;
 __u16 height;
};
struct hdr_metadata_infoframe {
 __u8 eotf;
 __u8 metadata_type;
 struct {
  __u16 x, y;
 } display_primaries[3];
 struct {
  __u16 x, y;
 } white_point;
 __u16 max_display_mastering_luminance;
 __u16 min_display_mastering_luminance;
 __u16 max_cll;
 __u16 max_fall;
};
struct hdr_output_metadata {
 __u32 metadata_type;
 union {
  struct hdr_metadata_infoframe hdmi_metadata_type1;
 };
};
struct drm_mode_crtc_page_flip {
 __u32 crtc_id;
 __u32 fb_id;
 __u32 flags;
 __u32 reserved;
 __u64 user_data;
};
struct drm_mode_crtc_page_flip_target {
 __u32 crtc_id;
 __u32 fb_id;
 __u32 flags;
 __u32 sequence;
 __u64 user_data;
};
struct drm_mode_create_dumb ;
struct drm_mode_map_dumb ;
struct drm_mode_destroy_dumb ;
struct drm_mode_atomic ;;
struct drm_format_modifier_blob {
 __u32 version;
 __u32 flags;
 __u32 count_formats;
 __u32 formats_offset;
 __u32 count_modifiers;
 __u32 modifiers_offset;
};
struct drm_format_modifier {
 __u64 formats;
 __u32 offset;
 __u32 pad;
 __u64 modifier;
};
struct drm_mode_create_blob {
 __u64 data;
 __u32 length;
 __u32 blob_id;
};
struct drm_mode_destroy_blob {
 __u32 blob_id;
};
struct drm_mode_create_lease {
 __u64 object_ids;
 __u32 object_count;
 __u32 flags;
 __u32 lessee_id;
 __u32 fd;
};
struct drm_mode_list_lessees {
 __u32 count_lessees;
 __u32 pad;
 __u64 lessees_ptr;
};
struct drm_mode_get_lease {
 __u32 count_objects;
 __u32 pad;
 __u64 objects_ptr;
};
struct drm_mode_revoke_lease {
 __u32 lessee_id;
};
struct drm_mode_rect {
 __s32 x1;
 __s32 y1;
 __s32 x2;
 __s32 y2;
};
struct drm_mode_closefb {
 __u32 fb_id;
 __u32 pad;
};
}
extern "C" {
struct drm_event {
 __u32 type;
 __u32 length;
};
struct drm_event_vblank {
 struct drm_event base;
 __u64 user_data;
 __u32 tv_sec;
 __u32 tv_usec;
 __u32 sequence;
 __u32 crtc_id;
};
struct drm_event_crtc_sequence {
 struct drm_event base;
 __u64 user_data;
 __s64 time_ns;
 __u64 sequence;
};
typedef struct drm_clip_rect drm_clip_rect_t;
typedef struct drm_drawable_info drm_drawable_info_t;
typedef struct drm_tex_region drm_tex_region_t;
typedef struct drm_hw_lock drm_hw_lock_t;
typedef struct drm_version drm_version_t;
typedef struct drm_unique drm_unique_t;
typedef struct drm_list drm_list_t;
typedef struct drm_block drm_block_t;
typedef struct drm_control drm_control_t;
typedef enum drm_map_type drm_map_type_t;
typedef enum drm_map_flags drm_map_flags_t;
typedef struct drm_ctx_priv_map drm_ctx_priv_map_t;
typedef struct drm_map drm_map_t;
typedef struct drm_client drm_client_t;
typedef enum drm_stat_type drm_stat_type_t;
typedef struct drm_stats drm_stats_t;
typedef enum drm_lock_flags drm_lock_flags_t;
typedef struct drm_lock drm_lock_t;
typedef enum drm_dma_flags drm_dma_flags_t;
typedef struct drm_buf_desc drm_buf_desc_t;
typedef struct drm_buf_info drm_buf_info_t;
typedef struct drm_buf_free drm_buf_free_t;
typedef struct drm_buf_pub drm_buf_pub_t;
typedef struct drm_buf_map drm_buf_map_t;
typedef struct drm_dma drm_dma_t;
typedef union drm_wait_vblank drm_wait_vblank_t;
typedef struct drm_agp_mode drm_agp_mode_t;
typedef enum drm_ctx_flags drm_ctx_flags_t;
typedef struct drm_ctx drm_ctx_t;
typedef struct drm_ctx_res drm_ctx_res_t;
typedef struct drm_draw drm_draw_t;
typedef struct drm_update_draw drm_update_draw_t;
typedef struct drm_auth drm_auth_t;
typedef struct drm_irq_busid drm_irq_busid_t;
typedef enum drm_vblank_seq_type drm_vblank_seq_type_t;
typedef struct drm_agp_buffer drm_agp_buffer_t;
typedef struct drm_agp_binding drm_agp_binding_t;
typedef struct drm_agp_info drm_agp_info_t;
typedef struct drm_scatter_gather drm_scatter_gather_t;
typedef struct drm_set_version drm_set_version_t;
}
extern "C" ;
namespace Aquamarine {
    class CBackend;
    class CSwapchain;
    struct SAllocatorBufferParams {
        Hyprutils::Math::Vector2D size;
        uint32_t format = 0;
        bool scanout = false, cursor = false, multigpu = false;
    };
    enum eAllocatorType {
        AQ_ALLOCATOR_TYPE_GBM = 0,
        AQ_ALLOCATOR_TYPE_DRM_DUMB,
    };
    class IAllocator {
      public:
    };
};
struct libinput_device;
namespace Aquamarine {
    class ITabletTool;
    class IKeyboard {
      public:
        struct SKeyEvent ;
        struct SModifiersEvent ;;
        struct {
            Hyprutils::Signal::CSignalT<> destroy;
            Hyprutils::Signal::CSignalT<SKeyEvent> key;
            Hyprutils::Signal::CSignalT<SModifiersEvent> modifiers;
        } events;
    };
    class IPointer {
      public:
        enum ePointerAxis : uint32_t {
            AQ_POINTER_AXIS_VERTICAL = 0,
            AQ_POINTER_AXIS_HORIZONTAL,
        };
        enum ePointerAxisSource : uint32_t {
            AQ_POINTER_AXIS_SOURCE_WHEEL = 0,
            AQ_POINTER_AXIS_SOURCE_FINGER,
            AQ_POINTER_AXIS_SOURCE_CONTINUOUS,
            AQ_POINTER_AXIS_SOURCE_TILT,
        };
        enum ePointerAxisRelativeDirection : uint32_t {
            AQ_POINTER_AXIS_RELATIVE_IDENTICAL = 0,
            AQ_POINTER_AXIS_RELATIVE_INVERTED,
        };
        struct SMoveEvent ;;
        struct SWarpEvent ;;
        struct SButtonEvent ;;
        struct SAxisEvent {
            uint32_t timeMs = 0;
            ePointerAxis axis = AQ_POINTER_AXIS_VERTICAL;
            ePointerAxisSource source = AQ_POINTER_AXIS_SOURCE_WHEEL;
            ePointerAxisRelativeDirection direction = AQ_POINTER_AXIS_RELATIVE_IDENTICAL;
            double delta = 0.0, discrete = 0.0;
        };
        struct SSwipeBeginEvent ;;
        struct SSwipeUpdateEvent {
            uint32_t timeMs = 0;
            uint32_t fingers = 0;
            Hyprutils::Math::Vector2D delta;
        };
        struct SSwipeEndEvent ;;
        struct SPinchBeginEvent {
            uint32_t timeMs = 0;
            uint32_t fingers = 0;
        };
        struct SPinchUpdateEvent {
            uint32_t timeMs = 0;
            uint32_t fingers = 0;
            Hyprutils::Math::Vector2D delta;
            double scale = 1.0, rotation = 0.0;
        };
        struct SPinchEndEvent {
            uint32_t timeMs = 0;
            bool cancelled = false;
        };
        struct SHoldBeginEvent {
            uint32_t timeMs = 0;
            uint32_t fingers = 0;
        };
        struct SHoldEndEvent {
            uint32_t timeMs = 0;
            bool cancelled = false;
        };
        struct  events;
    };
    class ITouch {
      public:
        Hyprutils::Math::Vector2D physicalSize;
        struct SDownEvent {
            uint32_t timeMs = 0;
            int32_t touchID = 0;
            Hyprutils::Math::Vector2D pos;
        };
        struct SUpEvent ;
        struct SMotionEvent {
            uint32_t timeMs = 0;
            int32_t touchID = 0;
            Hyprutils::Math::Vector2D pos;
        };
        struct SCancelEvent ;
        struct {
            Hyprutils::Signal::CSignalT<> destroy;
            Hyprutils::Signal::CSignalT<SMotionEvent> move;
            Hyprutils::Signal::CSignalT<SDownEvent> down;
            Hyprutils::Signal::CSignalT<SUpEvent> up;
            Hyprutils::Signal::CSignalT<SCancelEvent> cancel;
            Hyprutils::Signal::CSignalT<> frame;
        } events;
    };
    class ISwitch {
      public:
        enum eSwitchType : uint32_t {
            AQ_SWITCH_TYPE_UNKNOWN = 0,
            AQ_SWITCH_TYPE_LID,
            AQ_SWITCH_TYPE_TABLET_MODE,
        };
        struct SFireEvent ;
        struct {
            Hyprutils::Signal::CSignalT<> destroy;
            Hyprutils::Signal::CSignalT<SFireEvent> fire;
        } events;
    };
    enum eTabletToolAxes : uint32_t ;
    class ITablet {
      public:
        uint16_t usbVendorID = 0, usbProductID = 0;
        Hyprutils::Math::Vector2D physicalSize;
        std::vector<std::string> paths;
        struct SAxisEvent ;;
        struct SProximityEvent {
            Hyprutils::Memory::CSharedPointer<ITabletTool> tool;
            uint32_t timeMs = 0;
            Hyprutils::Math::Vector2D absolute;
            bool in = false;
        };
        struct STipEvent {
            Hyprutils::Memory::CSharedPointer<ITabletTool> tool;
            uint32_t timeMs = 0;
            Hyprutils::Math::Vector2D absolute;
            bool down = false;
        };
        struct SButtonEvent {
            Hyprutils::Memory::CSharedPointer<ITabletTool> tool;
            uint32_t timeMs = 0, button = 0;
            bool down = false;
        };
        struct  events;
    };
    class ITabletTool {
      public:
        enum eTabletToolType : uint32_t {
            AQ_TABLET_TOOL_TYPE_INVALID = 0,
            AQ_TABLET_TOOL_TYPE_PEN,
            AQ_TABLET_TOOL_TYPE_ERASER,
            AQ_TABLET_TOOL_TYPE_BRUSH,
            AQ_TABLET_TOOL_TYPE_PENCIL,
            AQ_TABLET_TOOL_TYPE_AIRBRUSH,
            AQ_TABLET_TOOL_TYPE_MOUSE,
            AQ_TABLET_TOOL_TYPE_LENS,
            AQ_TABLET_TOOL_TYPE_TOTEM,
        };
        eTabletToolType type = AQ_TABLET_TOOL_TYPE_INVALID;
        uint64_t serial = 0, id = 0;
        enum eTabletToolCapabilities : uint32_t ;
        uint32_t capabilities = 0;
        struct  events;
    };
    class ITabletPad {
      public:
        struct STabletPadGroup {
            std::vector<uint32_t> buttons, strips, rings;
            uint16_t modes = 0;
        };
        uint16_t buttons = 0, rings = 0, strips = 0;
        std::vector<std::string> paths;
        std::vector<Hyprutils::Memory::CSharedPointer<STabletPadGroup>> groups;
        struct SButtonEvent ;
        enum eTabletPadRingSource : uint16_t {
            AQ_TABLET_PAD_RING_SOURCE_UNKNOWN = 0,
            AQ_TABLET_PAD_RING_SOURCE_FINGER,
        };
        enum eTabletPadStripSource : uint16_t {
            AQ_TABLET_PAD_STRIP_SOURCE_UNKNOWN = 0,
            AQ_TABLET_PAD_STRIP_SOURCE_FINGER,
        };
        struct SRingEvent ;;
        struct SStripEvent {
            uint32_t timeMs = 0;
            eTabletPadStripSource source = AQ_TABLET_PAD_STRIP_SOURCE_UNKNOWN;
            uint16_t strip = 0;
            double pos = 0.0;
            uint16_t mode = 0;
        };
        struct  events;
    };
}
struct udev;
struct udev_monitor;
struct udev_device;
struct libseat;
struct libinput;
struct libinput_event;
struct libinput_device;
struct libinput_tablet_tool;
namespace Aquamarine {
    class CBackend;
    class CSession;
    class CLibinputDevice;
    struct SPollFD;
    class CSessionDevice {
      public:
        int fd = -1;
        int deviceID = -1;
        dev_t dev;
        std::string path;
        enum eChangeEventType : uint32_t {
            AQ_SESSION_EVENT_CHANGE_HOTPLUG = 0,
            AQ_SESSION_EVENT_CHANGE_LEASE,
        };
        struct SChangeEvent {
            eChangeEventType type = AQ_SESSION_EVENT_CHANGE_HOTPLUG;
            struct {
                uint32_t connectorID = 0, propID = 0;
            } hotplug;
        };
        struct  events;
        int renderNodeFd = -1;
      private:
        Hyprutils::Memory::CWeakPointer<CSession> session;
    };
    class CLibinputKeyboard : public IKeyboard {
      public:
      private:
        Hyprutils::Memory::CWeakPointer<CLibinputDevice> device;
        friend class CLibinputDevice;
    };
    class CLibinputMouse : public IPointer {
      public:
      private:
        Hyprutils::Memory::CWeakPointer<CLibinputDevice> device;
        friend class CLibinputDevice;
    };
    class CLibinputTouch : public ITouch {
      public:
      private:
        Hyprutils::Memory::CWeakPointer<CLibinputDevice> device;
        friend class CLibinputDevice;
    };
    class CLibinputSwitch : public ISwitch {
      public:
        eSwitchType type = AQ_SWITCH_TYPE_UNKNOWN;
        bool state = false;
      private:
        Hyprutils::Memory::CWeakPointer<CLibinputDevice> device;
        friend class CLibinputDevice;
    };
    class CLibinputTablet : public ITablet {
      public:
      private:
        Hyprutils::Memory::CWeakPointer<CLibinputDevice> device;
        friend class CLibinputDevice;
    };
    class CLibinputTabletTool : public ITabletTool {
      public:
      private:
        Hyprutils::Memory::CWeakPointer<CLibinputDevice> device;
        libinput_tablet_tool* libinputTool = nullptr;
        friend class CLibinputDevice;
    };
    class CLibinputTabletPad : public ITabletPad {
      public:
      private:
        Hyprutils::Memory::CWeakPointer<CLibinputDevice> device;
        friend class CLibinputDevice;
    };
    class CLibinputDevice {
      public:
        libinput_device* device;
        Hyprutils::Memory::CWeakPointer<CLibinputDevice> self;
        Hyprutils::Memory::CWeakPointer<CSession> session;
        std::string name;
        Hyprutils::Memory::CSharedPointer<CLibinputKeyboard> keyboard;
        Hyprutils::Memory::CSharedPointer<CLibinputMouse> mouse;
        Hyprutils::Memory::CSharedPointer<CLibinputTouch> touch;
        Hyprutils::Memory::CSharedPointer<CLibinputSwitch> switchy;
        Hyprutils::Memory::CSharedPointer<CLibinputTablet> tablet;
        Hyprutils::Memory::CSharedPointer<CLibinputTabletPad> tabletPad;
        std::vector<Hyprutils::Memory::CSharedPointer<CLibinputTabletTool>> tabletTools;
    };
    class CSession {
      public:
        bool active = true;
        uint32_t vt = 0;
        std::string seatName;
        Hyprutils::Memory::CWeakPointer<CSession> self;
        std::vector<Hyprutils::Memory::CSharedPointer<CSessionDevice>> sessionDevices;
        std::vector<Hyprutils::Memory::CSharedPointer<CLibinputDevice>> libinputDevices;
        udev* udevHandle = nullptr;
        udev_monitor* udevMonitor = nullptr;
        libseat* libseatHandle = nullptr;
        libinput* libinputHandle = nullptr;
        struct SAddDrmCardEvent ;;
        struct {
            Hyprutils::Signal::CSignalT<> changeActive;
            Hyprutils::Signal::CSignalT<SAddDrmCardEvent> addDrmCard;
            Hyprutils::Signal::CSignalT<> destroy;
        } events;
      private:
        Hyprutils::Memory::CWeakPointer<CBackend> backend;
        std::vector<Hyprutils::Memory::CSharedPointer<SPollFD>> polls;
        friend class CSessionDevice;
        friend class CLibinputDevice;
    };
};
namespace Aquamarine {
    class IOutput;
    class IPointer;
    class IKeyboard;
    class ITouch;
    class ISwitch;
    class ITablet;
    class ITabletTool;
    class ITabletPad;
    enum eBackendType : uint32_t ;
    enum eBackendRequestMode : uint32_t ;
    enum eBackendLogLevel : uint32_t ;
    struct SBackendImplementationOptions ;
    struct SBackendOptions {
        std::function<void(eBackendLogLevel, std::string)> logFunction;
        Hyprutils::Memory::CSharedPointer<Hyprutils::CLI::CLoggerConnection> logConnection;
    };
    struct SPollFD ;
    class IBackendImplementation {
      public:
        enum eBackendCapabilities : uint32_t ;
    };
    class CBackend ;;
};
extern "C" {
typedef long int ptrdiff_t;
typedef long unsigned int size_t;
typedef struct _drmModeRes  drmModeRes, *drmModeResPtr;
typedef struct _drmModeModeInfo {
 uint32_t clock;
 uint16_t hdisplay, hsync_start, hsync_end, htotal, hskew;
 uint16_t vdisplay, vsync_start, vsync_end, vtotal, vscan;
 uint32_t vrefresh;
 uint32_t flags;
 uint32_t type;
 char name[32];
} drmModeModeInfo, *drmModeModeInfoPtr;
typedef struct _drmModeFB  drmModeFB, *drmModeFBPtr;
typedef struct _drmModeFB2 {
 uint32_t fb_id;
 uint32_t width, height;
 uint32_t pixel_format;
 uint64_t modifier;
 uint32_t flags;
 void *data;
} drmModePropertyBlobRes, *drmModePropertyBlobPtr;
typedef struct _drmModeProperty  drmModePropertyRes, *drmModePropertyPtr;
;
;
typedef struct _drmModeCrtc  drmModeCrtc, *drmModeCrtcPtr;
typedef struct _drmModeEncoder  drmModeEncoder, *drmModeEncoderPtr;
typedef enum {
 DRM_MODE_SUBPIXEL_VERTICAL_RGB = 4,
 DRM_MODE_SUBPIXEL_VERTICAL_BGR = 5,
 DRM_MODE_SUBPIXEL_NONE = 6
} drmModeSubPixel;
typedef struct _drmModeConnector  drmModePlane, *drmModePlanePtr;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
typedef struct _drmModeAtomicReq drmModeAtomicReq, *drmModeAtomicReqPtr;
;
;
;
;
;
;
;
;
;
;
;
typedef struct drmModeLesseeList  drmModeLesseeListRes, *drmModeLesseeListPtr;
;
typedef struct drmModeObjectList  drmModeObjectListRes, *drmModeObjectListPtr;
;
;
;
;
;
;
}
namespace Aquamarine {
    class IBackendImplementation;
    class IOutput;
    struct SSwapchainOptions {
        size_t length = 0;
        Hyprutils::Math::Vector2D size;
        uint32_t format = 0;
        bool scanout = false, cursor = false , multigpu = false ;
        Hyprutils::Memory::CWeakPointer<IOutput> scanoutOutput;
    };
    class CSwapchain {
      public:
      private:
        Hyprutils::Memory::CWeakPointer<CSwapchain> self;
        SSwapchainOptions options;
        Hyprutils::Memory::CSharedPointer<IAllocator> allocator;
        Hyprutils::Memory::CWeakPointer<IBackendImplementation> backendImpl;
        std::vector<Hyprutils::Memory::CSharedPointer<IBuffer>> buffers;
        int lastAcquired = 0;
        friend class CGBMBuffer;
    };
};
namespace Aquamarine {
    class IBackendImplementation;
    struct SOutputMode {
        Hyprutils::Math::Vector2D pixelSize;
        unsigned int refreshRate = 0 ;
        bool preferred = false;
        std::optional<drmModeModeInfo> modeInfo;
    };
    enum eOutputPresentationMode : uint32_t {
        AQ_OUTPUT_PRESENTATION_VSYNC = 0,
        AQ_OUTPUT_PRESENTATION_IMMEDIATE,
    };
    enum eSubpixelMode : uint32_t {
        AQ_SUBPIXEL_UNKNOWN = 0,
        AQ_SUBPIXEL_NONE,
        AQ_SUBPIXEL_HORIZONTAL_RGB,
        AQ_SUBPIXEL_HORIZONTAL_BGR,
        AQ_SUBPIXEL_VERTICAL_RGB,
        AQ_SUBPIXEL_VERTICAL_BGR,
    };
    class IOutput;
    class COutputState {
      public:
        enum eOutputStateProperties : uint32_t ;
        struct SInternalState {
            uint32_t committed = 0;
            Hyprutils::Math::CRegion damage;
            bool enabled = false;
            bool adaptiveSync = false;
            eOutputPresentationMode presentationMode = AQ_OUTPUT_PRESENTATION_VSYNC;
            std::vector<uint16_t> gammaLut;
            std::vector<uint16_t> degammaLut;
            Hyprutils::Math::Vector2D lastModeSize;
            Hyprutils::Memory::CWeakPointer<SOutputMode> mode;
        };
      private:
        SInternalState internalState;
        friend class IOutput;
        friend class CWaylandOutput;
        friend class CDRMOutput;
        friend class CHeadlessOutput;
    };
    class IOutput {
      public:
        enum scheduleFrameReason : uint32_t ;
        struct SHDRMetadata {
            float desiredContentMaxLuminance = 0;
            float desiredMaxFrameAverageLuminance = 0;
            float desiredContentMinLuminance = 0;
            bool supportsPQ = false;
        };
        struct xy {
            double x = 0;
            double y = 0;
        };
        struct SChromaticityCoords {
            xy red;
            xy green;
            xy blue;
            xy white;
        };
        struct SParsedEDID {
            std::string make, serial, model;
            std::optional<SHDRMetadata> hdrMetadata;
            std::optional<SChromaticityCoords> chromaticityCoords;
            bool supportsBT2020 = false;
        };
        std::string name, description, make, model, serial;
        SParsedEDID parsedEDID;
        Hyprutils::Math::Vector2D physicalSize;
        bool enabled = false;
        bool nonDesktop = false;
        eSubpixelMode subpixel = AQ_SUBPIXEL_NONE;
        bool vrrCapable = false, vrrActive = false;
        bool needsFrame = false;
        bool supportsExplicit = false;
        std::vector<Hyprutils::Memory::CSharedPointer<SOutputMode>> modes;
        Hyprutils::Memory::CSharedPointer<COutputState> state = Hyprutils::Memory::makeShared<COutputState>();
        Hyprutils::Memory::CSharedPointer<CSwapchain> swapchain;
        enum eOutputPresentFlags : uint32_t ;
        struct SStateEvent ;
        struct SPresentEvent ;
        struct {
            Hyprutils::Signal::CSignalT<> destroy;
            Hyprutils::Signal::CSignalT<> frame;
            Hyprutils::Signal::CSignalT<> needsFrame;
            Hyprutils::Signal::CSignalT<SPresentEvent> present;
            Hyprutils::Signal::CSignalT<> commit;
            Hyprutils::Signal::CSignalT<SStateEvent> state;
        } events;
    };
}
class CWLSurfaceResource;
struct SWorkspaceRule;
enum eManagersInitStage : uint8_t ;
class CCompositor ;;
inline UP<CCompositor> g_pCompositor;
export module example;
