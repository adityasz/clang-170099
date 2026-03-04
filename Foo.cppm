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
{};
typedef __rlim_t rlim_t;
typedef __rlim64_t rlim64_t;
struct rlimit
  ;
struct rlimit64
  ;
enum __rusage_who
{};
struct timeval
;;
struct rusage
  ;
enum __priority_which
{};
extern "C" ;
typedef __id_t id_t;
extern "C" ;
 namespace __attribute__(()) std { inline namespace __1 {
template <class _Tp, _Tp __v>
struct  integral_constant {
  static inline constexpr const _Tp value = __v;
  typedef _Tp value_type;
  typedef integral_constant type;
};
typedef integral_constant<bool, true> true_type;
typedef integral_constant<bool, false> false_type;
template <bool _Val>
using _BoolConstant  = integral_constant<bool, _Val>;
template <bool __b>
using bool_constant = integral_constant<bool, __b>;
} }
 namespace __attribute__(()) std { inline namespace __1 {
template <class _Tp>
struct  is_class : integral_constant<bool, __is_class(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_class_v = __is_class(_Tp);
} }
 namespace __attribute__(()) std { inline namespace __1 {
template <class _Tp>
struct  is_enum : integral_constant<bool, __is_enum(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_enum_v = __is_enum(_Tp);
template <class _Tp>
struct  is_scoped_enum : bool_constant<__is_scoped_enum(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_scoped_enum_v = __is_scoped_enum(_Tp);
} }
 namespace __attribute__(()) std { inline namespace __1 {
template <class _Tp>
struct  is_union : integral_constant<bool, __is_union(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_union_v = __is_union(_Tp);
} }
 namespace __attribute__(()) std { inline namespace __1 {
template <class _Tp>
concept __class_or_enum = is_class_v<_Tp> || is_union_v<_Tp> || is_enum_v<_Tp>;
} }
 namespace __attribute__(()) std { inline namespace __1 {
using size_t = decltype(sizeof(int));
} }
 namespace __attribute__(()) std { inline namespace __1 {
template <class _Tp>
struct  remove_cv ;
template <class _Tp>
using __remove_cv_t  = __remove_cv(_Tp);
template <class _Tp>
using remove_cv_t = __remove_cv_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <class _Tp> struct __libcpp_is_floating_point : false_type {};
template <> struct __libcpp_is_floating_point<float> : true_type {};
template <> struct __libcpp_is_floating_point<double> : true_type {};
template <> struct __libcpp_is_floating_point<long double> : true_type {};
template <class _Tp>
struct  is_floating_point : __libcpp_is_floating_point<__remove_cv_t<_Tp> > {};
template <class _Tp>
 inline constexpr bool is_floating_point_v = is_floating_point<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <class _Tp>
struct  is_integral : _BoolConstant<__is_integral(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_integral_v = __is_integral(_Tp);
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <class _Tp>
struct  is_arithmetic
    : integral_constant<bool, is_integral<_Tp>::value || is_floating_point<_Tp>::value> {};
template <class _Tp>
 inline constexpr bool is_arithmetic_v = is_arithmetic<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <class _Tp>
struct  is_signed : _BoolConstant<__is_signed(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_signed_v = __is_signed(_Tp);
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <class _Tp>
concept integral = is_integral_v<_Tp>;
template <class _Tp>
concept signed_integral = integral<_Tp> && is_signed_v<_Tp>;
template <class _Tp>
concept unsigned_integral = integral<_Tp> && !signed_integral<_Tp>;
template <class _Tp>
concept floating_point = is_floating_point_v<_Tp>;
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <class _T1, class _T2>
struct  is_convertible : integral_constant<bool, __is_convertible(_T1, _T2)> {};
template <class _From, class _To>
 inline constexpr bool is_convertible_v = __is_convertible(_From, _To);
template <class _Tp, class _Up>
struct  is_nothrow_convertible : bool_constant<__is_nothrow_convertible(_Tp, _Up)> {};
template <class _Tp, class _Up>
 inline constexpr bool is_nothrow_convertible_v = __is_nothrow_convertible(_Tp, _Up);
} }
 namespace __attribute__(()) std { inline namespace __1 {
template <class _Tp>
_Tp&& __declval(int);
;
template <class _Tp>
__attribute__(()) __attribute__(()) __attribute__(()) decltype(std::__declval<_Tp>(0)) declval() noexcept ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _From, class _To>
concept convertible_to = is_convertible_v<_From, _To> && requires { static_cast<_To>(std::declval); };
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
struct  is_same : _BoolConstant<__is_same(_Tp, _Up)> {};
template <class _Tp, class _Up>
 inline constexpr bool is_same_v = __is_same(_Tp, _Up);
template <class _Tp, class _Up>
using _IsSame  = _BoolConstant<__is_same(_Tp, _Up)>;
template <class _Tp, class _Up>
using _IsNotSame  = _BoolConstant<!__is_same(_Tp, _Up)>;
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
using __void_t  = void;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class = void>
inline const bool __is_referenceable_v = false;
template <class _Tp>
concept __referenceable = __is_referenceable_v<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  is_void : _BoolConstant<__is_same(__remove_cv(_Tp), void)> {};
template <class _Tp>
 inline constexpr bool is_void_v = __is_same(__remove_cv(_Tp), void);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  remove_reference ;;
template <class _Tp>
using __libcpp_remove_reference_t  = __remove_reference_t(_Tp);
template <class _Tp>
using remove_reference_t = __libcpp_remove_reference_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  add_pointer ;;
template <class _Tp>
using __add_pointer_t  = __add_pointer(_Tp);
template <class _Tp>
using add_pointer_t = __add_pointer_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <bool>
struct _IfImpl;
template <>
struct _IfImpl<true> ;
template <>
struct _IfImpl<false> ;
template <bool _Cond, class _IfRes, class _ElseRes>
using _If  = typename _IfImpl<_Cond>::template _Select<_IfRes, _ElseRes>;
template <bool _Bp, class _If, class _Then>
struct  conditional {
  using type  = _If;
};
template <class _If, class _Then>
struct conditional<false, _If, _Then> {
  using type  = _Then;
};
template <bool _Bp, class _IfRes, class _ElseRes>
using conditional_t  = typename conditional<_Bp, _IfRes, _ElseRes>::type;
template <bool _Bp, class _If, class _Then>
using __conditional_t  = typename conditional<_Bp, _If, _Then>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  decay ;
template <class _Tp>
using __decay_t  = __decay(_Tp);
template <class _Tp>
using decay_t = __decay_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
using __remove_cvref_t  = __remove_cvref(_Tp);
template <class _Tp>
struct  remove_cvref ;;
template <class _Tp>
using remove_cvref_t = __remove_cvref_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __type_identity {
  typedef _Tp type;
};
template <class _Tp>
using __type_identity_t  = typename __type_identity<_Tp>::type;
template <class _Tp>
struct  type_identity ;;
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
using __common_type_t  = typename common_type<_Args...>::type;
template <class... _Args>
struct common_type : __builtin_common_type<__common_type_t, __type_identity, __empty, _Args...> {};
template <class... _Tp>
using common_type_t = typename common_type<_Tp...>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _From>
struct __copy_cv ;;
template <class _From>
struct __copy_cv ;;
template <class _From>
struct __copy_cv ;;
template <class _From>
struct __copy_cv ;;
template <class _From, class _To>
using __copy_cv_t  = typename __copy_cv<_From>::template __apply<_To>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  add_lvalue_reference ;;
template <class _Tp>
using __add_lvalue_reference_t  = __add_lvalue_reference(_Tp);
template <class _Tp>
using add_lvalue_reference_t = __add_lvalue_reference_t<_Tp>;
template <class _Tp>
struct  add_rvalue_reference ;;
template <class _Tp>
using __add_rvalue_reference_t  = __add_rvalue_reference(_Tp);
template <class _Tp>
using add_rvalue_reference_t = __add_rvalue_reference_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _From>
struct __copy_cvref ;
template <class _From>
struct __copy_cvref ;
template <class _From>
struct __copy_cvref ;
template <class _From, class _To>
using __copy_cvref_t  = typename __copy_cvref<_From>::template __apply<_To>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  is_reference : _BoolConstant<__is_reference(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_reference_v = __is_reference(_Tp);
template <class _Tp>
struct  is_lvalue_reference : _BoolConstant<__is_lvalue_reference(_Tp)> {};
template <class _Tp>
struct  is_rvalue_reference : _BoolConstant<__is_rvalue_reference(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_lvalue_reference_v = __is_lvalue_reference(_Tp);
template <class _Tp>
 inline constexpr bool is_rvalue_reference_v = __is_rvalue_reference(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Xp, class _Yp>
using __cond_res  = decltype(false ? std::declval<_Xp > : std::declval<_Yp >);
template <class _Tp>
struct __xref ;;
template <class _Ap, class _Bp, class _Xp = remove_reference_t<_Ap>, class _Yp = remove_reference_t<_Bp>>
struct __common_ref;
template <class _Xp, class _Yp>
using __common_ref_t  = typename __common_ref<_Xp, _Yp>::__type;
template <class _Xp, class _Yp>
using __cv_cond_res  = __cond_res<__copy_cv_t<_Xp, _Yp>&, __copy_cv_t<_Yp, _Xp>&>;
template <class _Ap, class _Bp, class _Xp, class _Yp>
  requires
    requires { typename __cv_cond_res<_Xp, _Yp>; } &&
    is_reference_v<__cv_cond_res<_Xp, _Yp>>
struct __common_ref<_Ap&, _Bp&, _Xp, _Yp> ;
template <class _Xp, class _Yp>
using __common_ref_C  = remove_reference_t<__common_ref_t<_Xp&, _Yp&>>&&;
template <class _Ap, class _Bp, class _Xp, class _Yp>
struct __common_ref ;
template <class _Tp, class _Up>
using __common_ref_D  = __common_ref_t<const _Tp&, _Up&>;
template <class _Ap, class _Bp, class _Xp, class _Yp>
  requires
    requires { typename __common_ref_D<_Xp, _Yp>; } &&
    is_convertible_v<_Ap&&, __common_ref_D<_Xp, _Yp>>
struct __common_ref<_Ap&&, _Bp&, _Xp, _Yp> ;;
template <class _Ap, class _Bp, class _Xp, class _Yp>
struct __common_ref : __common_ref<_Bp&&, _Ap&> {};
template <class _Ap, class _Bp, class _Xp, class _Yp>
struct __common_ref ;;
template <class...>
struct  common_reference;
template <class... _Types>
using common_reference_t = typename common_reference<_Types...>::type;
template <class, class, template <class> class, template <class> class>
struct basic_common_reference ;;
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
struct __common_reference_sub_bullet1<_Tp, _Up> ;
template <class _Tp, class _Up>
using __basic_common_reference_t  =
    typename basic_common_reference<remove_cvref_t<_Tp>,
                                    remove_cvref_t<_Up>,
                                    __xref<_Tp>::template __apply,
                                    __xref<_Up>::template __apply>::type;
template <class _Tp, class _Up>
  requires requires { typename __basic_common_reference_t<_Tp, _Up>; }
struct __common_reference_sub_bullet2<_Tp, _Up> ;
template <class _Tp, class _Up>
  requires requires { typename __cond_res<_Tp, _Up>; }
struct __common_reference_sub_bullet3<_Tp, _Up> ;;
template <class _Tp, class _Up>
struct __common_reference_sub_bullet3 : common_type<_Tp, _Up> {};
template <class _Tp, class _Up, class _Vp, class... _Rest>
  requires requires { typename common_reference_t<_Tp, _Up>; }
struct common_reference<_Tp, _Up, _Vp, _Rest...> : common_reference<common_reference_t<_Tp, _Up>, _Vp, _Rest...> {};
template <class...>
struct  common_reference ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
concept common_reference_with =
    same_as<common_reference_t<_Tp, _Up>, common_reference_t<_Up, _Tp>> &&
    convertible_to<_Tp, common_reference_t<_Tp, _Up>> && convertible_to<_Up, common_reference_t<_Tp, _Up>>;
} }
 namespace __attribute__(()) std { inline namespace __1 {
template <class _Tp>
using __make_const_lvalue_ref  = const __libcpp_remove_reference_t<_Tp>&;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
  __attribute__(()) __attribute__(()) __attribute__(()) constexpr _Tp&&
forward() noexcept ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Lhs, class _Rhs>
concept assignable_from =
    is_lvalue_reference_v<_Lhs> &&
    common_reference_with<__make_const_lvalue_ref<_Lhs>, __make_const_lvalue_ref<_Rhs>> &&
    requires(_Lhs __lhs, _Rhs&& __rhs) {
      { __lhs = std::forward } -> same_as<_Lhs>;
    };
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  is_nothrow_destructible : integral_constant<bool, __is_nothrow_destructible(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_nothrow_destructible_v = is_nothrow_destructible<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
concept destructible = is_nothrow_destructible_v<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class... _Args>
struct  is_constructible : integral_constant<bool, __is_constructible(_Tp, _Args...)> {};
template <class _Tp, class... _Args>
 inline constexpr bool is_constructible_v = __is_constructible(_Tp, _Args...);
template <class _Tp>
struct  is_copy_constructible
    : integral_constant<bool, __is_constructible(_Tp, __add_lvalue_reference_t<const _Tp>)> {};
template <class _Tp>
 inline constexpr bool is_copy_constructible_v = is_copy_constructible<_Tp>::value;
template <class _Tp>
struct  is_move_constructible
    : integral_constant<bool, __is_constructible(_Tp, __add_rvalue_reference_t<_Tp>)> {};
template <class _Tp>
 inline constexpr bool is_move_constructible_v = is_move_constructible<_Tp>::value;
template <class _Tp>
struct  is_default_constructible : integral_constant<bool, __is_constructible(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_default_constructible_v = __is_constructible(_Tp);
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
 inline constexpr size_t extent_v = __array_extent(_Tp, _Ip);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template < class _Tp, class... _Args>
struct  is_nothrow_constructible
    : integral_constant<bool, __is_nothrow_constructible(_Tp, _Args...)> {};
template <class _Tp, class... _Args>
 inline constexpr bool is_nothrow_constructible_v =
    is_nothrow_constructible<_Tp, _Args...>::value;
template <class _Tp>
struct  is_nothrow_copy_constructible
    : integral_constant<bool, __is_nothrow_constructible(_Tp, __add_lvalue_reference_t<const _Tp>)> {};
template <class _Tp>
 inline constexpr bool is_nothrow_copy_constructible_v =
    is_nothrow_copy_constructible<_Tp>::value;
template <class _Tp>
struct  is_nothrow_move_constructible
    : integral_constant<bool, __is_nothrow_constructible(_Tp, __add_rvalue_reference_t<_Tp>)> {};
template <class _Tp>
 inline constexpr bool is_nothrow_move_constructible_v =
    is_nothrow_move_constructible<_Tp>::value;
template <class _Tp>
struct  is_nothrow_default_constructible
    : integral_constant<bool, __is_nothrow_constructible(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_nothrow_default_constructible_v = __is_nothrow_constructible(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr __libcpp_remove_reference_t<_Tp>&&
move( _Tp&& __t) noexcept ;
template <class _Tp>
using __move_if_noexcept_result_t  =
    __conditional_t<!is_nothrow_move_constructible<_Tp>::value && is_copy_constructible<_Tp>::value, const _Tp&, _Tp&&>;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
namespace __swap {
template <class _Tp>
void swap(_Tp&, _Tp&) = delete;
template <class _Tp, class _Up>
concept __unqualified_swappable_with =
    (__class_or_enum<remove_cvref_t<_Tp>> || __class_or_enum<remove_cvref_t<_Up>>) &&
    requires {
        swap;
    };
struct __fn;
template <class _Tp, class _Up, size_t _Size>
concept __swappable_arrays =
    !__unqualified_swappable_with<_Tp , _Up > &&
    extent_v<_Tp> == extent_v<_Up> &&
    requires(_Tp , _Up , const __fn& __swap) {
        __swap;
    };
template <class _Tp>
concept __exchangeable =
    !__unqualified_swappable_with<_Tp&, _Tp&> && move_constructible<_Tp> && assignable_from<_Tp&, _Tp>;
struct __fn {};
}
inline namespace __cpo {
inline constexpr auto swap = __swap::__fn{};
}
}
template <class _Tp>
concept swappable = requires { ranges::swap; };
template <class _Tp, class _Up>
concept swappable_with = common_reference_with<_Tp, _Up> && requires {
  ranges::swap;
  ranges::swap;
  ranges::swap;
  ranges::swap;
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  is_object : _BoolConstant<__is_object(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_object_v = __is_object(_Tp);
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
struct  is_base_of : integral_constant<bool, __is_base_of(_Bp, _Dp)> {};
template <class _Bp, class _Dp>
 inline constexpr bool is_base_of_v = __is_base_of(_Bp, _Dp);
template <class _Base, class _Derived>
struct  is_virtual_base_of : bool_constant<__builtin_is_virtual_base_of(_Base, _Derived)> {};
template <class _Base, class _Derived>
 inline constexpr bool is_virtual_base_of_v = __builtin_is_virtual_base_of(_Base, _Derived);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Dp, class _Bp>
concept derived_from = is_base_of_v<_Bp, _Dp> && is_convertible_v<const volatile _Dp*, const volatile _Bp*>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
concept __boolean_testable_impl = convertible_to<_Tp, bool>;
template <class _Tp>
concept __boolean_testable = __boolean_testable_impl<_Tp> && requires {
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
 namespace __attribute__(()) std { inline namespace __1 {
template <bool, class _Tp = void>
struct  enable_if;
template <class _Tp>
struct enable_if<true, _Tp> {
  typedef _Tp type;
};
template <bool _Bp, class _Tp = void>
using __enable_if_t  = typename enable_if<_Bp, _Tp>::type;
template <bool _Bp, class _Tp = void>
using enable_if_t = typename enable_if<_Bp, _Tp>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up, class = void>
inline const bool __is_core_convertible_v = false;
template <class _Tp, class _Up>
inline const bool
    __is_core_convertible_v<_Tp, _Up, decltype(static_cast<void (*)(_Up)>(0)(0))> = true;
template <class _Tp, class _Up>
using __is_core_convertible  = integral_constant<bool, __is_core_convertible_v<_Tp, _Up> >;
template <class _Tp, class _Up>
concept __core_convertible_to = __is_core_convertible_v<_Tp, _Up>;
template <class _Tp, class _Up, bool = __is_core_convertible_v<_Tp, _Up> >
inline const bool __is_nothrow_core_convertible_v = false;
template <class _Tp, class _Up>
inline const bool __is_nothrow_core_convertible_v<_Tp, _Up, true> =
    noexcept(static_cast<void (_Up) noexcept>(static_cast<_Tp () noexcept>(0)));
} }
 namespace __attribute__(()) std {}
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
struct __invoke_result_impl<__void_t<decltype(0)>, _Args...> {
  using type  = decltype(0);
};
template <class... _Args>
using __invoke_result  = __invoke_result_impl<void, _Args...>;
template <class... _Args>
using __invoke_result_t  = typename __invoke_result<_Args...>::type;
 ;
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
struct  is_invocable : bool_constant<__is_invocable_v<_Fn, _Args...> > {};
template <class _Ret, class _Fn, class... _Args>
struct  is_nothrow_invocable_r
    : bool_constant<__is_nothrow_invocable_r_v<_Ret, _Fn, _Args...>> {};
template <class _Fn, class... _Args>
 inline constexpr bool is_nothrow_invocable_v = __is_nothrow_invocable_v<_Fn, _Args...>;
template <class _Ret, class _Fn, class... _Args>
 inline constexpr bool is_nothrow_invocable_r_v =
    __is_nothrow_invocable_r_v<_Ret, _Fn, _Args...>;
template <class _Fn, class... _Args>
struct  invoke_result : __invoke_result<_Fn, _Args...> {};
template <class _Fn, class... _Args>
using invoke_result_t = __invoke_result_t<_Fn, _Args...>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Fn, class... _Args>
__attribute__(()) __attribute__(()) __attribute__(()) constexpr invoke_result_t<_Fn, _Args...>
invoke() noexcept ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Fn, class... _Args>
concept invocable = requires {
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
true_type __sfinae_test_impl();
;
template <template <class...> class _Templ, class... _Args>
using _IsValidExpansion  = decltype(std::__sfinae_test_impl<_Templ, _Args...>);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
using __test_for_primary_template  =
    __enable_if_t<_IsSame<_Tp, typename _Tp::__primary_template>::value>;
template <class _Tp>
using __is_primary_template  = _IsValidExpansion<__test_for_primary_template, _Tp>;
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
struct __find_first<__type_list<_Head, _Tail...>, _Size, false> ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
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
struct incrementable_traits<_Tp> ;;
template <class _Tp>
concept __has_integral_minus = requires(const _Tp& __x, const _Tp& __y) {
  { __x - __y } -> integral;
};
template <__has_integral_minus _Tp>
  requires(!__has_member_difference_type<_Tp>)
struct incrementable_traits<_Tp> ;;
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
 namespace __attribute__(()) std { inline namespace __1 {
template <class _Tp>
struct  is_array : _BoolConstant<__is_array(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_array_v = __is_array(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
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
using __make_indices_imp  =
    typename __make_integer_seq<__integer_sequence, size_t, _Ep - _Sp>::template __to_tuple_indices<_Sp>;
template <class _Tp, _Tp... _Ip>
struct integer_sequence ;;
template <size_t... _Ip>
using index_sequence = integer_sequence<size_t, _Ip...>;
template <class _Tp, _Tp _Ep>
using make_integer_sequence  = __make_integer_seq<integer_sequence, _Tp, _Ep>;
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
struct tuple_element ;;
template <size_t _Ip, class... _Types>
struct tuple_element<_Ip, __tuple_types<_Types...> > ;;
template <size_t _Ip, class... _Tp>
using tuple_element_t  = typename tuple_element<_Ip, _Tp...>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Default, class _Void, template <class...> class _Op, class... _Args>
struct __detector {
  using type  = _Default;
};
template <class _Default, template <class...> class _Op, class... _Args>
struct __detector<_Default, __void_t<_Op<_Args...> >, _Op, _Args...> {
  using type  = _Op<_Args...>;
};
template <class _Default, template <class...> class _Op, class... _Args>
using __detected_or_t  = typename __detector<_Default, void, _Op, _Args...>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <bool>
struct _OrImpl;
template <>
struct _OrImpl<true> {
  template <class _Res, class _First, class... _Rest>
  using _Result  =
      typename _OrImpl<!bool(_First::value) && sizeof...(_Rest) != 0>::template _Result<_First, _Rest...>;
};
template <>
struct _OrImpl<false> ;
template <class... _Args>
using _Or  = typename _OrImpl<sizeof...(_Args) != 0>::template _Result<false_type, _Args...>;
template <class... _Args>
struct  disjunction : _Or<_Args...> {};
template <class... _Args>
 inline constexpr bool disjunction_v = _Or<_Args...>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  remove_const ;;
template <class _Tp>
using __remove_const_t  = __remove_const(_Tp);
template <class _Tp>
using remove_const_t = __remove_const_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
concept __dereferenceable = requires(_Tp& __t) {
  { *__t } -> __referenceable;
};
template <__dereferenceable _Tp>
using iter_reference_t = decltype(*std::declval<_Tp&>);
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
concept __cpp17_input_iterator = __cpp17_iterator<_Ip> && equality_comparable<_Ip> && requires {
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
      { __i } -> convertible_to<iter_reference_t<_Ip>>;
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
struct __iterator_traits_difference_type<_Ip> ;
template <class>
struct __iterator_traits ;
template <class _Tp>
using __pointer_member  = typename _Tp::pointer;
template <__specifies_members _Ip>
struct __iterator_traits<_Ip> ;;
template <__cpp17_input_iterator_missing_members _Ip>
struct __iterator_traits<_Ip> ;;
template <__cpp17_iterator_missing_members _Ip>
struct __iterator_traits<_Ip> ;
template <class _Ip>
struct iterator_traits : __iterator_traits<_Ip> {};
template <class _Tp>
  requires is_object_v<_Tp>
struct iterator_traits<_Tp*> ;
template <class _Tp>
using __iterator_category  = typename _Tp::iterator_category;
template <class _Tp>
using __iterator_concept  = typename _Tp::iterator_concept;
template <class _Tp, class _Up>
using __has_iterator_category_convertible_to  =
    is_convertible<__detected_or_t<__nat, __iterator_category, iterator_traits<_Tp> >, _Up>;
template <class _Tp, class _Up>
using __has_iterator_concept_convertible_to  =
    is_convertible<__detected_or_t<__nat, __iterator_concept, _Tp>, _Up>;
template <class _Tp>
using __has_input_iterator_category  = __has_iterator_category_convertible_to<_Tp, input_iterator_tag>;
template <class _Tp>
using __has_forward_iterator_category  =
    __has_iterator_category_convertible_to<_Tp, forward_iterator_tag>;
template <class _Tp>
using __has_bidirectional_iterator_category  =
    __has_iterator_category_convertible_to<_Tp, bidirectional_iterator_tag>;
template <class _Tp>
using __has_random_access_iterator_category  =
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
using __has_exactly_input_iterator_category  =
    integral_constant<bool,
                      __has_iterator_category_convertible_to<_Tp, input_iterator_tag>::value &&
                          !__has_iterator_category_convertible_to<_Tp, forward_iterator_tag>::value>;
template <class _Tp>
using __has_exactly_forward_iterator_category  =
    integral_constant<bool,
                      __has_iterator_category_convertible_to<_Tp, forward_iterator_tag>::value &&
                          !__has_iterator_category_convertible_to<_Tp, bidirectional_iterator_tag>::value>;
template <class _Tp>
using __has_exactly_bidirectional_iterator_category  =
    integral_constant<bool,
                      __has_iterator_category_convertible_to<_Tp, bidirectional_iterator_tag>::value &&
                          !__has_iterator_category_convertible_to<_Tp, random_access_iterator_tag>::value>;
template <class _InputIterator>
using __iter_value_type  = typename iterator_traits<_InputIterator>::value_type;
template <class _InputIterator>
using __iter_key_type  = remove_const_t<tuple_element_t<0, __iter_value_type<_InputIterator>>>;
template <class _InputIterator>
using __iter_mapped_type  = tuple_element_t<1, __iter_value_type<_InputIterator>>;
template <class _InputIterator>
using __iter_to_alloc_type  =
    pair<const tuple_element_t<0, __iter_value_type<_InputIterator>>,
         tuple_element_t<1, __iter_value_type<_InputIterator>>>;
template <class _Iter>
using __iter_diff_t  = typename iterator_traits<_Iter>::difference_type;
template <class _Iter>
using __iter_reference  = typename iterator_traits<_Iter>::reference;
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
concept __unqualified_iter_move = __class_or_enum<remove_cvref_t<_Tp>> && requires {
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
struct __fn {};
}
inline namespace __cpo {
inline constexpr auto iter_move = __iter_move::__fn{};
}
}
template <__dereferenceable _Tp>
  requires requires {
    { ranges::iter_move } -> __referenceable;
  }
using iter_rvalue_reference_t = decltype(ranges::iter_move);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class...>
using __expand_to_true  = true_type;
template <class... _Pred>
__expand_to_true<__enable_if_t<_Pred::value>...> __and_helper(int);
template <class...>
false_type __and_helper0;
template <class... _Pred>
using _And  = decltype(std::__and_helper<_Pred...>(0));
template <bool... _Preds>
struct __all_dummy;
template <bool... _Pred>
struct __all : _IsSame<__all_dummy<_Pred...>, __all_dummy<(_Pred, true)...> > {};
template <class...>
struct  conjunction : true_type {};
template <class _Arg>
struct conjunction<_Arg> : _Arg {};
template <class _Arg, class... _Args>
struct conjunction<_Arg, _Args...> : conditional_t<!bool(), _Arg, conjunction<_Args...>> {};
template <class... _Args>
 inline constexpr bool conjunction_v = conjunction<_Args...>::value;
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
using __difference_type_member  = typename _Tp::difference_type;
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
};
template <class _From, class _To>
using __rebind_pointer_t  = typename pointer_traits<_From>::template rebind<_To>;
template <class _Pointer, class = void>
struct __to_address_helper;
template <class _Tp>
__attribute__(()) __attribute__(()) __attribute__(()) constexpr _Tp* __to_address(_Tp* __p) noexcept ;
template <class _Pointer, class = void>
struct _HasToAddress : false_type {};
template <class _Pointer>
struct _HasToAddress<_Pointer, decltype(pointer_traits<_Pointer>::to_address) >
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
 __attribute__(()) __attribute__(()) __attribute__(()) constexpr auto to_address(const _Pointer& __p) noexcept
    -> decltype(0) ;
template <class _Tp>
struct __pointer_of ;
template <class _Tp>
concept __has_pointer_member = requires { typename _Tp::pointer; };
template <class _Tp>
concept __has_element_type_member = requires { typename _Tp::element_type; };
template <class _Tp>
  requires __has_pointer_member<_Tp>
struct __pointer_of<_Tp> ;
template <class _Tp>
  requires(!__has_pointer_member<_Tp> && __has_element_type_member<_Tp>)
struct __pointer_of<_Tp> ;;
template <class _Tp>
  requires(!__has_pointer_member<_Tp> && !__has_element_type_member<_Tp> &&
           __has_element_type_member<pointer_traits<_Tp>>)
struct __pointer_of<_Tp> ;
template <typename _Tp>
using __pointer_of_t  = typename __pointer_of<_Tp>::type;
template <typename _Tp, typename _Up>
using __pointer_of_or_t  = __detected_or_t<_Up, __pointer_of_t, _Tp>;
template <class _Smart>
concept __resettable_smart_pointer = requires(_Smart __s) { __s.reset; };
template <class _Smart, class _Pointer, class... _Args>
concept __resettable_smart_pointer_with_args = requires(_Smart __s, _Pointer __p, _Args... __args) {
  __s.reset;
};
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  is_pointer : _BoolConstant<__is_pointer(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_pointer_v = __is_pointer(_Tp);
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
using __projected_iterator_t  = typename _Tp::__projected_iterator;
template <class _Tp>
using __projected_projection_t  = typename _Tp::__projected_projection;
template <class _Tp>
concept __specialization_of_projected = requires {
  typename __projected_iterator_t<_Tp>;
  typename __projected_projection_t<_Tp>;
} && __is_primary_template<_Tp>::value;
template <class _Tp>
struct __indirect_value_t_impl ;
template <__specialization_of_projected _Tp>
struct __indirect_value_t_impl<_Tp> ;;
template <indirectly_readable _Tp>
using __indirect_value_t  = typename __indirect_value_t_impl<_Tp>::type;
template <indirectly_readable _Tp>
using iter_common_reference_t = common_reference_t<iter_reference_t<_Tp>, __indirect_value_t<_Tp>>;
template <class _Out, class _Tp>
concept indirectly_writable = requires {
      std::forward;
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
struct __iter_traits_cache ;
template <class _Iter>
using _ITER_TRAITS  = typename __iter_traits_cache<_Iter>::type;
struct __iter_concept_concept_test ;
struct __iter_concept_category_test ;
struct __iter_concept_random_fallback ;
template <class _Iter, class _Tester>
struct __test_iter_concept : _IsValidExpansion<_Tester::template _Apply, _Iter>, _Tester {};
template <class _Iter>
struct __iter_concept_cache ;
template <class _Iter>
using _ITER_CONCEPT  = typename __iter_concept_cache<_Iter>::type::template _Apply<_Iter>;
template <class _Ip>
concept input_iterator = input_or_output_iterator<_Ip> && indirectly_readable<_Ip> && requires {
  typename _ITER_CONCEPT<_Ip>;
} && derived_from<_ITER_CONCEPT<_Ip>, input_iterator_tag>;
template <class _Ip, class _Tp>
concept output_iterator =
    input_or_output_iterator<_Ip> && indirectly_writable<_Ip, _Tp> && requires(_Ip __it, _Tp&& __t) {
      *__it++ = std::forward;
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
      { __j } -> same_as<iter_reference_t<_Ip>>;
    };
template <class _Ip>
concept contiguous_iterator =
    random_access_iterator<_Ip> && derived_from<_ITER_CONCEPT<_Ip>, contiguous_iterator_tag> &&
    is_lvalue_reference_v<iter_reference_t<_Ip>> && same_as<iter_value_t<_Ip>, remove_cvref_t<iter_reference_t<_Ip>>> &&
    requires {
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
using __has_random_access_iterator_category_or_concept 
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
  { static_cast<::std::__decay_t<decltype(0)> >(__t.begin) } -> input_or_output_iterator;
};
template <class _Tp>
concept __unqualified_begin =
    !__member_begin<_Tp> && __can_borrow<_Tp> && __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp&& __t) {
      { static_cast<::std::__decay_t<decltype(0)> >(begin(__t)) } -> input_or_output_iterator;
    };
struct __fn {};
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
  { static_cast<::std::__decay_t<decltype(0)> >(__t.end) } -> sentinel_for<iterator_t<_Tp>>;
};
template <class _Tp>
concept __unqualified_end =
    !__member_end<_Tp> && __can_borrow<_Tp> && __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp&& __t) {
      typename iterator_t<_Tp>;
      { static_cast<::std::__decay_t<decltype(0)> >(end(__t)) } -> sentinel_for<iterator_t<_Tp>>;
    };
struct __fn {};
}
inline namespace __cpo {
inline constexpr auto end = __end::__fn{};
}
}
namespace ranges {}
namespace ranges {}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum class _OrdResult : signed char { __less , __equiv , __greater  };
enum class _PartialOrdResult : signed char {
  __less ,
  __equiv ,
  __greater ,
  __unordered ,
};
class partial_ordering;
class weak_ordering;
class strong_ordering;
struct _CmpUnspecifiedParam ;
class partial_ordering {
  __attribute__(()) __attribute__(()) __attribute__(()) explicit constexpr partial_ordering(_PartialOrdResult __v) noexcept : __value_() {}
public:
  static const partial_ordering less;
  static const partial_ordering equivalent;
  static const partial_ordering greater;
  static const partial_ordering unordered;
private:
  _PartialOrdResult __value_;
};
inline constexpr partial_ordering partial_ordering::less(_PartialOrdResult::__less);
inline constexpr partial_ordering partial_ordering::equivalent(_PartialOrdResult::__equiv);
inline constexpr partial_ordering partial_ordering::greater(_PartialOrdResult::__greater);
inline constexpr partial_ordering partial_ordering::unordered(_PartialOrdResult::__unordered);
class weak_ordering {
  using _ValueT  = signed char;
  __attribute__(()) __attribute__(()) __attribute__(()) explicit constexpr weak_ordering(_OrdResult __v) noexcept : __value_() {}
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
  using _ValueT  = signed char;
  __attribute__(()) __attribute__(()) __attribute__(()) explicit constexpr strong_ordering(_OrdResult __v) noexcept : __value_() {}
public:
  static const strong_ordering less;
  static const strong_ordering equal;
  static const strong_ordering equivalent;
  static const strong_ordering greater;
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
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__(()) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, size_t _Size>
struct array;
;
;
;
template <size_t _Ip, class _Tp, size_t _Size>
__attribute__(()) __attribute__(()) __attribute__(()) constexpr const _Tp&& get() noexcept;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __has_allocator_type ;;
template <class _Tp, class _Alloc, bool = __has_allocator_type<_Tp>::value>
struct __uses_allocator : public integral_constant<bool, is_convertible<_Alloc, typename _Tp::allocator_type>::value> {};
template <class _Tp, class _Alloc>
struct __uses_allocator<_Tp, _Alloc, false> : public false_type {};
template <class _Tp, class _Alloc>
struct uses_allocator : public __uses_allocator<_Tp, _Alloc> {};
template <class _Tp, class _Alloc>
inline constexpr bool uses_allocator_v = uses_allocator<_Tp, _Alloc>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  is_const : _BoolConstant<__is_const(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_const_v = __is_const(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  is_volatile : _BoolConstant<__is_volatile(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_volatile_v = __is_volatile(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct tuple_size;
template <class _Tp, class...>
using __enable_if_tuple_size_imp  = _Tp;
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
struct __make_tuple_types_flat<_Tuple<_Types...>, __tuple_indices<_Idx...>> ;
template <class _Vt, size_t _Np, size_t... _Idx>
struct __make_tuple_types_flat<array<_Vt, _Np>, __tuple_indices<_Idx...>> ;
template <class _Tp,
          size_t _Ep = tuple_size<__libcpp_remove_reference_t<_Tp> >::value,
          size_t _Sp = 0,
          bool _SameSize = 0>
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
  using __constructible  = decltype(__do_test(_ToArgs{}, _FromArgs{}));
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
struct __attribute__(()) __check_tuple_constructor_fail ;
template <bool _CanCopy, bool _CanMove>
struct __sfinae_ctor_base {};
template 
struct __sfinae_ctor_base<false, false> ;
template 
struct __sfinae_ctor_base<true, false> ;
template 
struct __sfinae_ctor_base<false, true> ;
template <bool _CanCopy, bool _CanMove>
struct __sfinae_assign_base {};
template 
struct __sfinae_assign_base<false, false> ;
template 
struct __sfinae_assign_base<true, false> ;
template 
struct __sfinae_assign_base<false, true> ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
struct  is_assignable : _BoolConstant<__is_assignable(_Tp, _Up)> {};
template <class _Tp, class _Arg>
 inline constexpr bool is_assignable_v = __is_assignable(_Tp, _Arg);
template <class _Tp>
struct  is_copy_assignable
    : integral_constant<bool, __is_assignable(__add_lvalue_reference_t<_Tp>, __add_lvalue_reference_t<const _Tp>)> {};
template <class _Tp>
 inline constexpr bool is_copy_assignable_v = is_copy_assignable<_Tp>::value;
template <class _Tp>
struct  is_move_assignable
    : integral_constant<bool, __is_assignable(__add_lvalue_reference_t<_Tp>, __add_rvalue_reference_t<_Tp>)> {};
template <class _Tp>
 inline constexpr bool is_move_assignable_v = is_move_assignable<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  is_empty : integral_constant<bool, __is_empty(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_empty_v = __is_empty(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __libcpp_is_final : integral_constant<bool, __is_final(_Tp)> {};
template <class _Tp>
struct  is_final : integral_constant<bool, __is_final(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_final_v = __is_final(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
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
using ::int8_t __attribute__(());
using ::int16_t __attribute__(());
using ::int32_t __attribute__(());
using ::int64_t __attribute__(());
using ::uint8_t __attribute__(());
using ::uint16_t __attribute__(());
using ::uint32_t __attribute__(());
using ::uint64_t __attribute__(());
using ::int_least8_t __attribute__(());
using ::int_least16_t __attribute__(());
using ::int_least32_t __attribute__(());
using ::int_least64_t __attribute__(());
using ::uint_least8_t __attribute__(());
using ::uint_least16_t __attribute__(());
using ::uint_least32_t __attribute__(());
using ::uint_least64_t __attribute__(());
using ::int_fast8_t __attribute__(());
using ::int_fast16_t __attribute__(());
using ::int_fast32_t __attribute__(());
using ::int_fast64_t __attribute__(());
using ::intptr_t __attribute__(());
using ::uintptr_t __attribute__(());
using ::intmax_t __attribute__((__using_if_exists__));
using ::uintmax_t __attribute__(());
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  is_trivially_copyable : integral_constant<bool, __is_trivially_copyable(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_trivially_copyable_v = __is_trivially_copyable(_Tp);
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
                            0> {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__(()) std { inline namespace __1 {
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
using __maybe_const  = __conditional_t<_Const, const _Tp, _Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Pred>
struct _Not : _BoolConstant<!_Pred::value> {};
template <class _Tp>
struct  negation : _Not<_Tp> {};
template <class _Tp>
 inline constexpr bool negation_v = !_Tp::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__0)) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum float_round_style {
  
  round_toward_zero ,
  
  
  
};
enum __attribute__((__deprecated__)) float_denorm_style {
  
  denorm_absent ,
  
};
template <class _Tp, bool = is_arithmetic<_Tp>::value>
class __libcpp_numeric_limits ;
template <class _Tp>
class __libcpp_numeric_limits<_Tp, true> {
protected:
  typedef _Tp type;
  static constexpr const bool is_specialized = true;
  static constexpr const bool is_signed = type() < type();
  static constexpr const int digits = static_cast<int>(sizeof(type) * 8 - is_signed);
  static constexpr const int digits10 = digits * 3 / 10;
  static constexpr const int max_digits10 = 0;
  static constexpr const type __min = is_signed ? _Tp(_Tp(1) << digits) : 0;
  static constexpr const type __max = is_signed ? type(type(~0) ^ __min) : type(~0);
   __attribute__(()) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) static constexpr type max() noexcept { return __max; }
  static constexpr const bool is_integer = true;
  static constexpr const bool is_exact = true;
  static constexpr const int radix = 2;
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
template 
class __libcpp_numeric_limits<bool, true> ;;
template <>
class __libcpp_numeric_limits<float, true> ;
template <>
class __libcpp_numeric_limits<double, true> ;
template <>
class __libcpp_numeric_limits<long double, true> ;
template <class _Tp>
class numeric_limits : private __libcpp_numeric_limits<_Tp> {
  typedef __libcpp_numeric_limits<_Tp> __base;
  typedef typename __base::type type;
public:
  static inline constexpr const bool is_specialized = __base::is_specialized;
   __attribute__(()) __attribute__(()) __attribute__((__abi_tag__("ne210108"))) static constexpr type max() noexcept { return __base::max(); }
  static inline constexpr const int digits = __base::digits;
  static inline constexpr const int digits10 = __base::digits10;
  static inline constexpr const int max_digits10 = __base::max_digits10;
  static inline constexpr const bool is_signed = __base::is_signed;
  static inline constexpr const bool is_integer = __base::is_integer;
  static inline constexpr const bool is_exact = __base::is_exact;
  static inline constexpr const int radix = __base::radix;
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
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __compare_weak_order_fallback {
struct __fn ;
}
inline namespace __cpo {}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <size_t _Ip, class _Hp, bool = is_empty<_Hp>::value && !__libcpp_is_final<_Hp>::value >
class __tuple_leaf;
template <size_t _Ip, class _Hp, bool>
class __tuple_leaf ;
template <size_t _Ip, class _Hp>
class __tuple_leaf<_Ip, _Hp, true> : private __remove_cv_t<_Hp> {};
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
class  tuple ;
template <>
class tuple<> ;
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
struct __tuple_cat_return_ref_imp<tuple<_Types...>, __tuple_indices<_I0...>, _Tuple0> ;
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
 ;
template <class _Fn, class _Tuple>
 __attribute__(()) __attribute__(()) __attribute__(()) constexpr decltype(auto) apply(_Fn&& __f, _Tuple&& __t)
    noexcept ;
 ;
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
using __perfect_forward  = __perfect_forward_impl<_Op, index_sequence_for<_Args...>, _Args...>;
} }
 namespace __attribute__(()) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  remove_pointer ;
template <class _Tp>
using __remove_pointer_t  = __remove_pointer(_Tp);
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
  { static_cast<::std::__decay_t<decltype(0)> >(__t.data) } -> __ptr_to_object;
};
template <class _Tp>
concept __ranges_begin_invocable = !__member_data<_Tp> && __can_borrow<_Tp> && requires {
  { ranges::begin } -> contiguous_iterator;
};
struct __fn {};
}
inline namespace __cpo {
inline constexpr auto data = __data::__fn{};
}
}
namespace ranges {
namespace __cdata {
struct __fn ;
}
inline namespace __cpo {}
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
  ranges::__is_derived_from_view_interface;
};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  is_unsigned : _BoolConstant<__is_unsigned(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_unsigned_v = __is_unsigned(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
using __make_unsigned_t  = __make_unsigned(_Tp);
template <class _Tp>
struct  make_unsigned ;
template <class _Tp>
using make_unsigned_t = __make_unsigned_t<_Tp>;
 ;
template <class _Tp, class _Up>
using __copy_unsigned_t  = __conditional_t<is_unsigned<_Tp>::value, __make_unsigned_t<_Up>, _Up>;
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
  { static_cast<::std::__decay_t<decltype(0)> >(__t.size) } -> __integer_like;
};
template <class _Tp>
concept __unqualified_size =
    __size_enabled<_Tp> && !__member_size<_Tp> && __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp&& __t) {
      { static_cast<::std::__decay_t<decltype(0)> >(size(__t)) } -> __integer_like;
    };
template <class _Tp>
concept __difference =
    !__member_size<_Tp> && !__unqualified_size<_Tp> && __class_or_enum<remove_cvref_t<_Tp>> && requires {
      { ranges::begin } -> forward_iterator;
      { ranges::end } -> sized_sentinel_for<decltype(ranges::begin)>;
    };
struct __fn {};
}
inline namespace __cpo {
inline constexpr auto size = __size::__fn{};
}
}
namespace ranges {}
} }
namespace std
{
template <class _Ep>
class  initializer_list {
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
concept range = requires {
  ranges::begin;
  ranges::end;
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
concept sized_range = range<_Tp> && requires { ranges::size; };
template <sized_range _Rp>
using range_size_t = decltype(ranges::size);
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
concept contiguous_range = random_access_range<_Tp> && contiguous_iterator<iterator_t<_Tp>> && requires {
  { ranges::data } -> same_as<add_pointer_t<range_reference_t<_Tp>>>;
};
template <class _Tp>
concept common_range = range<_Tp> && same_as<iterator_t<_Tp>, sentinel_t<_Tp>>;
template <class _Tp>
inline constexpr bool __is_std_initializer_list = false;
template <class _Tp>
concept viewable_range =
    range<_Tp> &&
    ((view<remove_cvref_t<_Tp>> && constructible_from<remove_cvref_t<_Tp>, _Tp>) ||
     (!view<remove_cvref_t<_Tp>> &&
      (is_lvalue_reference_v<_Tp> ||
       (movable<remove_reference_t<_Tp>> && !__is_std_initializer_list<remove_cvref_t<_Tp>>))));
template <class... _Rs>
using __concat_reference_t  = common_reference_t<range_reference_t<_Rs>...>;
template <class... _Rs>
using __concat_value_t  = common_type_t<range_value_t<_Rs>...>;
template <class... _Rs>
using __concat_rvalue_reference_t  = common_reference_t<range_rvalue_reference_t<_Rs>...>;
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
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, bool>
struct __underlying_type_impl;
template <class _Tp>
struct __underlying_type_impl<_Tp, false> ;
template <class _Tp>
struct  underlying_type : __underlying_type_impl<_Tp, is_enum<_Tp>::value> {};
template <class _Tp>
using __underlying_type_t  = __underlying_type(_Tp);
template <class _Tp>
using underlying_type_t = __underlying_type_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <range _Rp>
  requires movable<_Rp> && (!__is_std_initializer_list<remove_cvref_t<_Rp>>)
class owning_view : public view_interface<owning_view<_Rp>> {};
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
struct __pipeable : _Fn, __range_adaptor_closure<__pipeable<_Fn>> {};
;
template <class _Tp>
_Tp __derived_from_range_adaptor_closure();
template <class _Tp>
concept _RangeAdaptorClosure = !ranges::range<remove_cvref_t<_Tp>> && requires {
  { ranges::__derived_from_range_adaptor_closure } -> same_as<remove_cvref_t<_Tp>>;
};
 ;
 ;
template <class _Tp>
  requires is_class_v<_Tp> && same_as<_Tp, remove_cv_t<_Tp>>
class  range_adaptor_closure : public __range_adaptor_closure<_Tp> {};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <range _Range>
  requires is_object_v<_Range>
class ref_view : public view_interface<ref_view<_Range>> {};
;
template <class _Tp>
inline constexpr bool enable_borrowed_range<ref_view<_Tp>> = true;
}
} }
 namespace __attribute__(()) std { inline namespace __1 {
namespace ranges::views {
namespace __all {
struct __fn : __range_adaptor_closure<__fn> {};
}
inline namespace __cpo {
inline constexpr auto all = __all::__fn{};
}
template <ranges::viewable_range _Range>
using all_t = decltype(views::all);
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
namespace __iter_swap {
;
template <class _T1, class _T2>
concept __unqualified_iter_swap =
    (__class_or_enum<remove_cvref_t<_T1>> || __class_or_enum<remove_cvref_t<_T2>>) && requires {
      iter_swap(std::forward, std::forward<_T2>);
    };
template <class _T1, class _T2>
concept __readable_swappable =
    indirectly_readable<_T1> && indirectly_readable<_T2> &&
    swappable_with<iter_reference_t<_T1>, iter_reference_t<_T2>>;
struct __fn {};
}
inline namespace __cpo {
inline constexpr auto iter_swap = __iter_swap::__fn{};
}
}
template <class _I1, class _I2 = _I1>
concept indirectly_swappable =
    indirectly_readable<_I1> && indirectly_readable<_I2> && requires {
      ranges::iter_swap;
      ranges::iter_swap;
      ranges::iter_swap;
      ranges::iter_swap;
    };
} }
 namespace __attribute__(()) std {
class __attribute__(()) exception {};
class __attribute__(()) bad_exception : public exception {};
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using nullptr_t = decltype(nullptr);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Arg, class _Result>
struct __unary_function_keep_layout_base {};
template <class _Arg, class _Result>
using __unary_function  = __unary_function_keep_layout_base<_Arg, _Result>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline const bool __is_unqualified_v = __is_same(_Tp, __remove_cvref(_Tp));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline constexpr bool __tuple_like_no_subrange_impl = false;
template <class _Tp, size_t _Size>
inline constexpr bool __tuple_like_no_subrange_impl<array<_Tp, _Size>> = true;

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
  static __attribute__(()) __attribute__(()) __attribute__(()) constexpr bool __is_pair_constructible() {
    return is_constructible<_T1, _U1>::value && is_constructible<_T2, _U2>::value;
  }
  template <class _U1, class _U2>
  static __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr bool __is_implicit() ;
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
  using __trivially_relocatable  =
      __conditional_t<__libcpp_is_trivially_relocatable<_T1>::value && __libcpp_is_trivially_relocatable<_T2>::value,
                      pair,
                      void>;
  using __replaceable  = __conditional_t<__is_replaceable_v<_T1> && __is_replaceable_v<_T2>, pair, void>;
    ;
  template <class _CheckArgsDep = __check_pair_construction<_T1, _T2>,
            __enable_if_t<_CheckArgsDep::template __is_pair_constructible<_T1 const&, _T2 const&>(), int> = 0>
  __attribute__(()) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108")))
  constexpr explicit(!_CheckArgsDep::template __is_implicit<_T1 const&, _T2 const&>)
      pair(_T1 const& __t1, _T2 const& __t2) noexcept(is_nothrow_copy_constructible<first_type>::value &&
                                                      is_nothrow_copy_constructible<second_type>::value)  ;
    ;
    ;
    ;
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
struct tuple_element<1, pair<_T1, _T2> > ;
template <size_t _Ip>
struct __get_pair;
template <>
struct __get_pair<0> ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
__attribute__(()) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) inline constexpr bool __libcpp_is_constant_evaluated() noexcept ;
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
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
template <class _Size, size_t = sizeof(_Size) * 8>
struct __murmur2_or_cityhash;
template <class _Size>
struct __murmur2_or_cityhash<_Size, 32> ;
template <class _Size>
struct __murmur2_or_cityhash<_Size, 64> ;;
template <class _Tp, size_t = sizeof(_Tp) / sizeof(size_t)>
struct __scalar_hash;
template <class _Tp>
struct __scalar_hash<_Tp, 0> : public __unary_function<_Tp, size_t> {};
template <class _Tp>
struct __scalar_hash<_Tp, 1> : public __unary_function<_Tp, size_t> {};
template <class _Tp>
struct __scalar_hash<_Tp, 2> : public __unary_function<_Tp, size_t> {};
template <class _Tp>
struct hash<_Tp*> : public __unary_function<_Tp*, size_t> {};
template <class _Tp, class = void>
struct __hash_impl ;;
template <class _Tp>
struct __hash_impl<_Tp, __enable_if_t<is_enum<_Tp>::value && __is_unqualified_v<_Tp> > >
    : __unary_function<_Tp, size_t> {};
template <class _Tp>
struct __hash_impl<
    _Tp,
    __enable_if_t<is_integral<_Tp>::value && __is_unqualified_v<_Tp> && 0> >
    : __unary_function<_Tp, size_t> {};
template <class _Tp>
struct __hash_impl<_Tp,
                   __enable_if_t<is_integral<_Tp>::value && __is_unqualified_v<_Tp> && (sizeof(_Tp) > sizeof(size_t))> >
    : __scalar_hash<_Tp> {};
template <class _Tp>
struct __hash_impl<_Tp, __enable_if_t<is_floating_point<_Tp>::value && __is_unqualified_v<_Tp> > >
    : __scalar_hash<_Tp> {};
template <>
struct __hash_impl<long double> : __scalar_hash<long double> {};
template <class _Tp>
struct hash : public __hash_impl<_Tp> {};
template <>
struct hash<nullptr_t> : public __unary_function<nullptr_t, size_t> {};
template <class _Key, class _Hash>
using __check_hash_requirements  =
    integral_constant<bool,
                      is_copy_constructible<_Hash>::value && is_move_constructible<_Hash>::value &&
                          __is_invocable_r_v<size_t, _Hash, _Key const&> >;
template <class _Key, class _Hash = hash<_Key> >
using __has_enabled_hash  =
    integral_constant<bool, __check_hash_requirements<_Key, _Hash>::value && is_default_constructible<_Hash>::value >;
template <class _Type, class>
using __enable_hash_helper_imp  = _Type;
template <class _Type, class... _Keys>
using __enable_hash_helper  =
    __enable_hash_helper_imp<_Type, __enable_if_t<__all<__has_enabled_hash<_Keys>::value...>::value> >;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Arg1, class _Arg2, class _Result>
struct __binary_function_keep_layout_base {};
template <class _Arg1, class _Arg2, class _Result>
using __binary_function  = __binary_function_keep_layout_base<_Arg1, _Arg2, _Result>;
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
struct plus : __binary_function<_Tp, _Tp, _Tp> {};
;
template <class _Tp, class _Up>
inline const bool __desugars_to_v<__plus_tag, plus<void>, _Tp, _Up> = true;
template 
struct plus<void> ;
template <class _Tp = void>
struct minus : __binary_function<_Tp, _Tp, _Tp> {};
;
template <>
struct minus<void> {};
template <class _Tp = void>
struct multiplies : __binary_function<_Tp, _Tp, _Tp> {};
;
template 
struct multiplies<void> ;
template <class _Tp = void>
struct divides : __binary_function<_Tp, _Tp, _Tp> {};
;
template 
struct divides<void> ;
template <class _Tp = void>
struct modulus : __binary_function<_Tp, _Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template 
struct modulus<void> ;
template <class _Tp = void>
struct negate : __unary_function<_Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template 
struct negate<void> ;
template <class _Tp = void>
struct bit_and : __binary_function<_Tp, _Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template 
struct bit_and<void> ;
template <class _Tp = void>
struct bit_not : __unary_function<_Tp, _Tp> {};
;
template 
struct bit_not<void> ;
template <class _Tp = void>
struct bit_or : __binary_function<_Tp, _Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template 
struct bit_or<void> ;
template <class _Tp = void>
struct bit_xor : __binary_function<_Tp, _Tp, _Tp> {
  typedef _Tp __result_type;
};
;
template 
struct bit_xor<void> ;
template <class _Tp = void>
struct equal_to : __binary_function<_Tp, _Tp, bool> {};
;
template 
struct equal_to<void> ;

template <class _Tp, class _Up>
inline const bool __desugars_to_v<__equal_tag, equal_to<void>, _Tp, _Up> = true;
template <class _Tp = void>
struct not_equal_to : __binary_function<_Tp, _Tp, bool> {};
;
template 
struct not_equal_to<void> ;
template <class _Tp>
struct less : __binary_function<_Tp, _Tp, bool> {};
;
template 
struct less<void> ;
template <class _Tp, class _Up>
inline const bool __desugars_to_v<__less_tag, less<>, _Tp, _Up> = true;
template <class _Tp = void>
struct less_equal : __binary_function<_Tp, _Tp, bool> {};
;
template 
struct less_equal<void> ;
template <class _Tp = void>
struct greater_equal : __binary_function<_Tp, _Tp, bool> {};
;
template 
struct greater_equal<void> ;;
template <class _Tp = void>
struct greater : __binary_function<_Tp, _Tp, bool> {};
;

template 
struct greater<void> ;;
template <class _Tp, class _Up>
inline const bool __desugars_to_v<__greater_tag, greater<>, _Tp, _Up> = true;
template <class _Tp = void>
struct logical_and : __binary_function<_Tp, _Tp, bool> {};
;
template 
struct logical_and<void> ;
template <class _Tp = void>
struct logical_not : __unary_function<_Tp, bool> {};
;
template 
struct logical_not<void> ;;
template <class _Tp = void>
struct logical_or : __binary_function<_Tp, _Tp, bool> {};
;
template 
struct logical_or<void> ;;
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
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
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  add_const ;;
template <class _Tp>
using add_const_t = typename add_const<_Tp>::type;
template <class _Tp>
struct  add_cv ;;
template <class _Tp>
using add_cv_t = typename add_cv<_Tp>::type;
template <class _Tp>
struct  add_volatile ;;
template <class _Tp>
using add_volatile_t = typename add_volatile<_Tp>::type;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, bool>
struct __dependent_type : public _Tp {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Arg>
struct  is_trivially_assignable
    : integral_constant<bool, __is_trivially_assignable(_Tp, _Arg)> {};
template <class _Tp, class _Arg>
 inline constexpr bool is_trivially_assignable_v = __is_trivially_assignable(_Tp, _Arg);
template <class _Tp>
struct  is_trivially_copy_assignable
    : integral_constant<
          bool,
          __is_trivially_assignable(__add_lvalue_reference_t<_Tp>, __add_lvalue_reference_t<const _Tp>)> {};
template <class _Tp>
 inline constexpr bool is_trivially_copy_assignable_v =
    is_trivially_copy_assignable<_Tp>::value;
template <class _Tp>
struct  is_trivially_move_assignable
    : integral_constant<bool, __is_trivially_assignable(__add_lvalue_reference_t<_Tp>, __add_rvalue_reference_t<_Tp>)> {};
template <class _Tp>
 inline constexpr bool is_trivially_move_assignable_v =
    is_trivially_move_assignable<_Tp>::value;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class... _Args>
struct  is_trivially_constructible
    : integral_constant<bool, __is_trivially_constructible(_Tp, _Args...)> {};
template <class _Tp, class... _Args>
 inline constexpr bool is_trivially_constructible_v =
    __is_trivially_constructible(_Tp, _Args...);
template <class _Tp>
struct  is_trivially_copy_constructible
    : integral_constant<bool, __is_trivially_constructible(_Tp, __add_lvalue_reference_t<const _Tp>)> {};
template <class _Tp>
 inline constexpr bool is_trivially_copy_constructible_v =
    is_trivially_copy_constructible<_Tp>::value;
template <class _Tp>
struct  is_trivially_move_constructible
    : integral_constant<bool, __is_trivially_constructible(_Tp, __add_rvalue_reference_t<_Tp>)> {};
template <class _Tp>
 inline constexpr bool is_trivially_move_constructible_v =
    is_trivially_move_constructible<_Tp>::value;
template <class _Tp>
struct  is_trivially_default_constructible
    : integral_constant<bool, __is_trivially_constructible(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_trivially_default_constructible_v =
    __is_trivially_constructible(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  is_trivially_destructible
    : integral_constant<bool, __is_trivially_destructible(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_trivially_destructible_v = is_trivially_destructible<_Tp>::value;
} }
 namespace __attribute__(()) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __attribute__(()) in_place_t ;
template <class _Tp>
struct in_place_type_t ;
template <class _Tp>
inline constexpr in_place_type_t<_Tp> in_place_type;
template <size_t _Idx>
struct in_place_index_t ;;
template <size_t _Idx>
inline constexpr in_place_index_t<_Idx> in_place_index;
template <class _Tp>
struct __is_inplace_type_imp : false_type {};
template <class _Tp>
struct __is_inplace_type_imp<in_place_type_t<_Tp>> : true_type {};
template <class _Tp>
using __is_inplace_type  = __is_inplace_type_imp<__remove_cvref_t<_Tp>>;
template <class _Tp>
struct __is_inplace_index_imp : false_type {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__0)) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, size_t _Size>
struct __farray ;;
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
__attribute__(()) __attribute__(()) __attribute__(()) constexpr auto __choose_index_type() ;
template <size_t _NumAlts>
using __variant_index_t  = decltype(std::__choose_index_type<_NumAlts>);
template <class _IndexType>
constexpr _IndexType __variant_npos = static_cast<_IndexType>(-1);
 ;
 ;
 ;
 ;
namespace __find_detail {}
namespace __variant_detail {
struct __valueless_t ;
enum class _Trait { _TriviallyAvailable, _Available, _Unavailable };
template <typename _Tp, template <typename> class _IsTriviallyAvailable, template <typename> class _IsAvailable>
constexpr _Trait __trait =
    _IsTriviallyAvailable<_Tp>::value ? _Trait::_TriviallyAvailable
    : _IsAvailable<_Tp>::value
        ? _Trait::_Available
        : _Trait::_Unavailable;
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
template <size_t _Index, class _Tp, class... _Types> union __union<_Trait::_Available, _Index, _Tp, _Types...> ;
template <size_t _Index, class _Tp, class... _Types> union __union<_Trait::_Unavailable, _Index, _Tp, _Types...> ;
template <_Trait _DestructibleTrait, class... _Types>
class __base ;
template <class _Traits, _Trait = _Traits::__destructible_trait>
class __dtor;
template <class... _Types> class __dtor<__traits<_Types...>, _Trait::_TriviallyAvailable> : public __base<_Trait::_TriviallyAvailable, _Types...> {};
template <class... _Types> class __dtor<__traits<_Types...>, _Trait::_Available> : public __base<_Trait::_Available, _Types...> {};
template <class... _Types> class __dtor<__traits<_Types...>, _Trait::_Unavailable> : public __base<_Trait::_Unavailable, _Types...> {};
template <class _Traits>
class __ctor : public __dtor<_Traits> {};
template <class _Traits, _Trait = _Traits::__move_constructible_trait>
class __move_constructor;
template <class... _Types> class __move_constructor<__traits<_Types...>, _Trait::_TriviallyAvailable> : public __ctor<__traits<_Types...>> { using __base_type  = __ctor<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class... _Types> class __move_constructor<__traits<_Types...>, _Trait::_Available> : public __ctor<__traits<_Types...>> { using __base_type  = __ctor<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      static_assert(true, ""); };
template <class... _Types> class __move_constructor<__traits<_Types...>, _Trait::_Unavailable> : public __ctor<__traits<_Types...>> { using __base_type  = __ctor<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class _Traits, _Trait = _Traits::__copy_constructible_trait>
class __copy_constructor;
template <class... _Types> class __copy_constructor<__traits<_Types...>, _Trait::_TriviallyAvailable> : public __move_constructor<__traits<_Types...>> { using __base_type  = __move_constructor<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class... _Types> class __copy_constructor<__traits<_Types...>, _Trait::_Available> : public __move_constructor<__traits<_Types...>> { using __base_type  = __move_constructor<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      static_assert(true, ""); };
template <class... _Types> class __copy_constructor<__traits<_Types...>, _Trait::_Unavailable> : public __move_constructor<__traits<_Types...>> { using __base_type  = __move_constructor<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class _Traits>
class __assignment : public __copy_constructor<_Traits> {
  using __base_type  = __copy_constructor<_Traits>;
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
template <class... _Types> class __move_assignment<__traits<_Types...>, _Trait::_TriviallyAvailable> : public __assignment<__traits<_Types...>> { using __base_type  = __assignment<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class... _Types> class __move_assignment<__traits<_Types...>, _Trait::_Available> : public __assignment<__traits<_Types...>> { using __base_type  = __assignment<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      static_assert(true, ""); };
template <class... _Types> class __move_assignment<__traits<_Types...>, _Trait::_Unavailable> : public __assignment<__traits<_Types...>> { using __base_type  = __assignment<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class _Traits, _Trait = _Traits::__copy_assignable_trait>
class __copy_assignment;
template <class... _Types> class __copy_assignment<__traits<_Types...>, _Trait::_TriviallyAvailable> : public __move_assignment<__traits<_Types...>> { using __base_type  = __move_assignment<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class... _Types> class __copy_assignment<__traits<_Types...>, _Trait::_Available> : public __move_assignment<__traits<_Types...>> { using __base_type  = __move_assignment<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      static_assert(true, ""); };
template <class... _Types> class __copy_assignment<__traits<_Types...>, _Trait::_Unavailable> : public __move_assignment<__traits<_Types...>> { using __base_type  = __move_assignment<__traits<_Types...>>; public: using __base_type::__base_type; using __base_type::operator=;      };
template <class... _Types>
class __impl : public __copy_assignment<__traits<_Types...>> {
  using __base_type  = __copy_assignment<__traits<_Types...>>;
public:
  using __base_type::__base_type;
   ;
private:
};
struct __no_narrowing_check ;;
struct __narrowing_check ;
template <class _Dest, class _Source>
using __check_for_narrowing  =
    typename _If< is_arithmetic<_Dest>::value, __narrowing_check, __no_narrowing_check >::template _Apply<_Dest,
                                                                                                          _Source>;
template <class _Tp, size_t _Idx>
struct __overload ;
template <class... _Bases>
struct __all_overloads : _Bases... {};
template <class _IdxSeq>
struct __make_overloads_imp;
template <size_t... _Idx>
struct __make_overloads_imp<__tuple_indices<_Idx...> > ;
template <class... _Types>
using _MakeOverloads  =
    typename __make_overloads_imp< __make_indices_imp<sizeof...(_Types), 0> >::template _Apply<_Types...>;
template <class _Tp, class... _Types>
using __best_match_t  = typename invoke_result_t<_MakeOverloads<_Types...>, _Tp, _Tp>::type;
}
;
;
template <class... _Types>
class  variant
    : private __sfinae_ctor_base< __all<is_copy_constructible_v<_Types>...>::value,
                                  __all<is_move_constructible_v<_Types>...>::value>,
      private __sfinae_assign_base<
          __all<(is_copy_constructible_v<_Types> && is_copy_assignable_v<_Types>)...>::value,
          __all<(is_move_constructible_v<_Types> && is_move_assignable_v<_Types>)...>::value> {};
 ;
 ;
 ;
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
 ;
 ;
 ;
 ;
 ;
 ;
template < class _Visitor, class... _Vs, typename>
__attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr decltype(auto) visit(_Visitor&& __visitor, _Vs&&... __vs) ;
 ;
 ;
template <class... _Types>
struct hash< __enable_hash_helper<variant<_Types...>, remove_const_t<_Types>...>> ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <class _Iter>
concept __can_use_postfix_proxy =
    constructible_from<iter_value_t<_Iter>, iter_reference_t<_Iter>> && move_constructible<iter_value_t<_Iter>>;
template <input_or_output_iterator _Iter, sentinel_for<_Iter> _Sent>
  requires(!same_as<_Iter, _Sent> && copyable<_Iter>)
class common_iterator ;;
template <class _Iter, class _Sent>
struct incrementable_traits<common_iterator<_Iter, _Sent>> ;;
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
class common_view : public view_interface<common_view<_View>> {};
;
template <class _View>
inline constexpr bool enable_borrowed_range<common_view<_View>> = enable_borrowed_range<_View>;
namespace views {}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
concept common_with =
    same_as<common_type_t<_Tp, _Up>, common_type_t<_Up, _Tp>> &&
    requires {
        static_cast<common_type_t<_Tp, _Up>>(std::declval);
        static_cast<common_type_t<_Tp, _Up>>(std::declval);
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
struct default_sentinel_t ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class>
struct __counted_iterator_concept ;
template <class _Iter>
  requires requires { typename _Iter::iterator_concept; }
struct __counted_iterator_concept<_Iter> ;;
template <class>
struct __counted_iterator_category ;;
template <class _Iter>
  requires requires { typename _Iter::iterator_category; }
struct __counted_iterator_category<_Iter> ;
template <class>
struct __counted_iterator_value_type ;;
template <indirectly_readable _Iter>
struct __counted_iterator_value_type<_Iter> ;;
template <input_or_output_iterator _Iter>
class counted_iterator
    : public __counted_iterator_concept<_Iter>,
      public __counted_iterator_category<_Iter>,
      public __counted_iterator_value_type<_Iter> {
public:
  ;
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
    !convertible_to<remove_pointer_t<_From> , remove_pointer_t<_To> >;
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
  static constexpr bool _StoreSize = 0;
private:
  static constexpr bool _MustProvideSizeAtConstruction = !_StoreSize;
  struct _Empty ;
  using _Size  = conditional_t<_StoreSize, make_unsigned_t<iter_difference_t<_Iter>>, _Empty>;
   _Iter __begin_ = _Iter();
   _Sent __end_ = _Sent();
   _Size __size_ = 0;
public:
    ;
    ;
    ;
    ;
    ;
   ;
};
;
};
template <class _Ip, class _Sp, ranges::subrange_kind _Kp>
struct tuple_element<0, const ranges::subrange<_Ip, _Sp, _Kp>> ;;
} }
 namespace __attribute__((__type_visibility__0)) std {
enum class byte : unsigned char;
}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
inline constexpr size_t dynamic_extent = 0;
template <typename _Tp, size_t _Extent = dynamic_extent>
class span;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iterator>
struct __bounded_iter ;
 ;
template <class _Iterator>
struct pointer_traits ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iter, bool = __libcpp_is_contiguous_iterator<_Iter>::value>
struct __unwrap_iter_impl ;
template <class _Iter>
struct __unwrap_iter_impl<_Iter, true> ;;
 ;
 ;
template <class _Category, class _Tp, class _Distance = ptrdiff_t, class _Pointer = _Tp*, class _Reference = _Tp&>
struct __attribute__((__deprecated__)) iterator {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
namespace ranges {
struct __next ;;
inline namespace __cpo {}
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
using __is_segmented_iterator  = __has_specialization<__segmented_iterator_traits<_Iterator> >;
template <class _SegmentedIterator>
struct __has_random_access_local_iterator
    : __has_random_access_iterator_category<
          typename __segmented_iterator_traits< _SegmentedIterator >::__local_iterator > {};
template <class _Iter>
class reverse_iterator
    : public iterator<typename iterator_traits<_Iter>::iterator_category,
                      typename iterator_traits<_Iter>::value_type,
                      typename iterator_traits<_Iter>::difference_type,
                      typename iterator_traits<_Iter>::pointer,
                      typename iterator_traits<_Iter>::reference>
{
private:
  _Iter __t_;
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
 ;
 ;
template <class _Iter, bool __b>
struct __unwrap_iter_impl ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iter>
class __wrap_iter ;
 ;
 ;
 ;
 ;
 ;
;
 ;
template <class _It>
struct pointer_traits ;
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
class 
      
      
      
      
      
      
      basic_string;
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
class __attribute__((__visibility__0)) __libcpp_refstring ;;
} }
namespace std
{
class __attribute__((__visibility__0)) logic_error : public exception {};
class __attribute__((__visibility__0)) runtime_error : public exception {};
class __attribute__((__visibility__0)) domain_error : public logic_error {};
class __attribute__((__visibility__0)) invalid_argument : public logic_error {};
class __attribute__((__visibility__0)) length_error : public logic_error {};
class __attribute__((__visibility__0)) out_of_range : public logic_error {};
class __attribute__((__visibility__0)) range_error : public runtime_error {};
class __attribute__((__visibility__0)) overflow_error : public runtime_error {};
class __attribute__((__visibility__0)) underflow_error : public runtime_error {
public:
};
}
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
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
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_string_view;
typedef basic_string_view<char> string_view;
typedef basic_string_view<char8_t> u8string_view;
typedef basic_string_view<char16_t> u16string_view;
typedef basic_string_view<char32_t> u32string_view;
typedef basic_string_view<wchar_t> wstring_view;
template <class _CharT, class _Traits>
class 
      
      
      
      
      basic_string_view;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Tp>
  requires is_object_v<_Tp>
class empty_view : public view_interface<empty_view<_Tp>> {};
template <class _Tp>
inline constexpr bool enable_borrowed_range<empty_view<_Tp>> = true;
namespace views {}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct unreachable_sentinel_t {};
inline constexpr unreachable_sentinel_t unreachable_sentinel;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline const bool __is_null_pointer_v = __is_same(__remove_cv(_Tp), nullptr_t);
template <class _Tp>
struct  is_null_pointer : integral_constant<bool, __is_null_pointer_v<_Tp>> {};
template <class _Tp>
struct  is_scalar : _BoolConstant<__is_scalar(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_scalar_v = __is_scalar(_Tp);
} }
namespace std
{}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct nullopt_t {
  struct __secret_tag {};
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr explicit nullopt_t(__secret_tag, __secret_tag) noexcept {}
};
inline constexpr nullopt_t nullopt{nullopt_t::__secret_tag{}, nullopt_t::__secret_tag{}};
struct __optional_construct_from_invoke_tag ;
template <class _Tp, bool = is_trivially_destructible<_Tp>::value>
struct __optional_destruct_base;
template <class _Tp>
struct __optional_destruct_base<_Tp, false> {
  typedef _Tp value_type;
    char __null_state_;
    remove_cv_t<value_type> __val_;
    ;
    ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr void reset() noexcept ;
};
template <class _Tp>
struct __optional_destruct_base<_Tp, true> {
  typedef _Tp value_type;
    ;
    ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr void reset() noexcept ;
};
template <class _Tp, bool = is_reference<_Tp>::value>
struct __optional_storage_base : __optional_destruct_base<_Tp> {
  using __base  = __optional_destruct_base<_Tp>;
  using value_type = _Tp;
  using __base::__base;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr bool has_value() const noexcept ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr value_type& __get() & noexcept ;
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
struct __optional_move_base : __optional_copy_base<_Tp> {};
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
struct __optional_copy_assign_base<_Tp, false> : __optional_move_base<_Tp> {};
template <class _Tp,
          bool = is_trivially_destructible<_Tp>::value && is_trivially_move_constructible<_Tp>::value &&
                 is_trivially_move_assignable<_Tp>::value>
struct __optional_move_assign_base : __optional_copy_assign_base<_Tp> {};
template <class _Tp>
struct __optional_move_assign_base<_Tp, false> : __optional_copy_assign_base<_Tp> {
  using value_type = _Tp;
  using __optional_copy_assign_base<_Tp>::__optional_copy_assign_base;
};
template <class _Tp>
using __optional_sfinae_ctor_base_t  =
    __sfinae_ctor_base< is_copy_constructible<_Tp>::value, is_move_constructible<_Tp>::value >;
template <class _Tp>
using __optional_sfinae_assign_base_t  =
    __sfinae_assign_base< (is_copy_constructible<_Tp>::value && is_copy_assignable<_Tp>::value),
                          (is_move_constructible<_Tp>::value && is_move_assignable<_Tp>::value) >;
template <class _Tp>
class optional;
template <class _Tp>
concept __is_derived_from_optional = requires { [] {}; };
template <class _Tp>
struct __is_std_optional : false_type {};
template <class _Tp>
struct __is_std_optional<optional<_Tp>> : true_type {};
template <class _Tp>
class optional
    : private __optional_move_assign_base<_Tp>,
      private __optional_sfinae_ctor_base_t<_Tp>,
      private __optional_sfinae_assign_base_t<_Tp> {
  using __base  = __optional_move_assign_base<_Tp>;
public:
  using value_type = _Tp;
  using __trivially_relocatable  =
      conditional_t<__libcpp_is_trivially_relocatable<_Tp>::value, optional, void>;
  struct _CheckOptionalArgsConstructor ;
  template <class _Up>
  using _CheckOptionalArgsCtor  =
      _If< _IsNotSame<__remove_cvref_t<_Up>, in_place_t>::value && _IsNotSame<__remove_cvref_t<_Up>, optional>::value &&
               0,
           _CheckOptionalArgsConstructor,
           __check_tuple_constructor_fail >;
  template <class _QualUp>
  struct _CheckOptionalLikeConstructor ;
  template <class _Up, class _QualUp>
  using _CheckOptionalLikeCtor  =
      _If< _And< _IsNotSame<_Up, _Tp>, is_constructible<_Tp, _QualUp> >::value,
           _CheckOptionalLikeConstructor<_QualUp>,
           __check_tuple_constructor_fail >;
  template <class _Up, class _QualUp>
  using _CheckOptionalLikeAssign  =
      _If< _And< _IsNotSame<_Up, _Tp>, is_constructible<_Tp, _QualUp>, is_assignable<_Tp&, _QualUp> >::value,
           _CheckOptionalLikeConstructor<_QualUp>,
           __check_tuple_constructor_fail >;
public:
    ;
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
         ? copyable<_Tp> || 0
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
class __movable_box<_Tp> ;;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Int>
struct __get_wider_signed ;
template <class _Start>
using _IotaDiffT  =
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
class iota_view : public view_interface<iota_view<_Start, _BoundSentinel>> {};
;
template <class _Start, class _BoundSentinel>
inline constexpr bool enable_borrowed_range<iota_view<_Start, _BoundSentinel>> = true;
namespace views {}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Tp>
  requires is_object_v<_Tp>
class __non_propagating_cache ;
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
using __repeat_view_iterator_difference_t  = typename __repeat_view_iterator_difference<_Tp>::type;
namespace views::__drop {
struct __fn;
}
namespace views::__take {
struct __fn;
}
template <move_constructible _Tp, semiregular _Bound = unreachable_sentinel_t>
  requires(is_object_v<_Tp> && same_as<_Tp, remove_cv_t<_Tp>> &&
           (__integer_like_with_usable_difference_type<_Bound> || same_as<_Bound, unreachable_sentinel_t>))
class __attribute__((__abi_tag__0)) repeat_view : public view_interface<repeat_view<_Tp, _Bound>> {
  friend struct views::__take::__fn;
  friend struct views::__drop::__fn;
  class __iterator;
public:
    ;
private:
   __movable_box<_Tp> __value_;
   _Bound __bound_ = _Bound();
};
;
template <move_constructible _Tp, semiregular _Bound>
  requires(is_object_v<_Tp> && same_as<_Tp, remove_cv_t<_Tp>> &&
           (__integer_like_with_usable_difference_type<_Bound> || same_as<_Bound, unreachable_sentinel_t>))
class repeat_view<_Tp, _Bound>::__iterator {
  friend class repeat_view;
  using _IndexT  = conditional_t<same_as<_Bound, unreachable_sentinel_t>, ptrdiff_t, _Bound>;
public:
  using iterator_concept = random_access_iterator_tag;
  const _Tp* __value_ = nullptr;
  _IndexT __current_ = _IndexT();
};
namespace views {}
template <class _Tp>
inline constexpr bool __is_repeat_specialization = false;
template <class _Tp, class _Bound>
inline constexpr bool __is_repeat_specialization<repeat_view<_Tp, _Bound>> = true;
}
} }
 namespace __attribute__((__type_visibility__0)) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct equal_to ;
struct not_equal_to ;
struct less ;;
struct less_equal ;;
struct greater ;;
struct greater_equal ;
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
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __has_result_type ;
template <class _Tp>
struct __derives_from_unary_function ;
template <class _Tp>
struct __derives_from_binary_function ;
template <class _Tp, bool = __derives_from_unary_function<_Tp>::value>
struct __maybe_derive_from_unary_function
    : public __derives_from_unary_function<_Tp>::type {};
template <class _Tp>
struct __maybe_derive_from_unary_function<_Tp, false> ;;
template <class _Tp, bool = __derives_from_binary_function<_Tp>::value>
struct __maybe_derive_from_binary_function
    : public __derives_from_binary_function<_Tp>::type {};
template <class _Tp>
struct __maybe_derive_from_binary_function<_Tp, false> ;
template <class _Tp, bool = __has_result_type<_Tp>::value>
struct __weak_result_type_imp
    : public __maybe_derive_from_unary_function<_Tp>,
      public __maybe_derive_from_binary_function<_Tp> {};
template <class _Tp>
struct __weak_result_type_imp<_Tp, false>
    : public __maybe_derive_from_unary_function<_Tp>, public __maybe_derive_from_binary_function<_Tp> {};
template <class _Tp>
struct __weak_result_type : public __weak_result_type_imp<_Tp> {};
template <class _Rp>
struct __weak_result_type ;
template <class _Rp>
struct __weak_result_type ;;
template <class _Rp>
struct __weak_result_type ;;
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
struct __weak_result_type<_Rp (_A1, _A2)> : public __binary_function<_A1, _A2, _Rp> {};
template <class _Rp, class _Cp, class _A1>
struct __weak_result_type<_Rp (_Cp::*)(_A1)> : public __binary_function<_Cp*, _A1, _Rp> {};
template <class _Rp, class _Cp, class _A1>
struct __weak_result_type<_Rp (_Cp::*)(_A1) const> : public __binary_function<const _Cp*, _A1, _Rp> {};
template <class _Rp, class _Cp, class _A1>
struct __weak_result_type<_Rp (_Cp::*)(_A1) volatile> : public __binary_function<volatile _Cp*, _A1, _Rp> {};
template <class _Rp, class _Cp, class _A1>
struct __weak_result_type<_Rp (_Cp::*)(_A1) const volatile> : public __binary_function<const volatile _Cp*, _A1, _Rp> {};
template <class _Rp, class _A1, class _A2, class _A3, class... _A4>
struct __weak_result_type<_Rp(_A1, _A2, _A3, _A4...)> ;;
template <class _Rp, class _A1, class _A2, class _A3, class... _A4>
struct __weak_result_type<_Rp (_A1, _A2, _A3, _A4...)> ;;
template <class _Rp, class _A1, class _A2, class _A3, class... _A4>
struct __weak_result_type<_Rp (_A1, _A2, _A3, _A4...)> ;;
template <class _Rp, class _Cp, class _A1, class _A2, class... _A3>
struct __weak_result_type<_Rp (_Cp::*)(_A1, _A2, _A3...)> ;;
template <class _Rp, class _Cp, class _A1, class _A2, class... _A3>
struct __weak_result_type<_Rp (_Cp::*)(_A1, _A2, _A3...) const> ;;
template <class _Rp, class _Cp, class _A1, class _A2, class... _A3>
struct __weak_result_type<_Rp (_Cp::*)(_A1, _A2, _A3...) volatile> ;;
template <class _Rp, class _Cp, class _A1, class _A2, class... _A3>
struct __weak_result_type<_Rp (_Cp::*)(_A1, _A2, _A3...) const volatile> ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, template <class...> class _Template>
inline constexpr bool __is_specialization_v = false;
template <class _Tp>
class reference_wrapper : public __weak_result_type<_Tp> {};
;
 ;
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
struct basic_common_reference<_Tp, _Rp, _TpQual, _RpQual> ;
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline constexpr bool __is_ranges_subrange_v = false;
template <class _Iter, class _Sent, ranges::subrange_kind _Kind>
inline constexpr bool __is_ranges_subrange_v<ranges::subrange<_Iter, _Sent, _Kind>> = true;
template <class _Tp>
concept __tuple_like = __tuple_like_no_subrange<_Tp> || __is_ranges_subrange_v<remove_cvref_t<_Tp>>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline const bool __is_signed_integer_v = false;
template <class _Tp>
inline const bool __is_unsigned_integer_v = false;
template <class _Tp>
concept __signed_integer = __is_signed_integer_v<_Tp>;
template <class _Tp>
concept __unsigned_integer = __is_unsigned_integer_v<_Tp>;
template <class _Tp>
concept __signed_or_unsigned_integer = __signed_integer<_Tp> || __unsigned_integer<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
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
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct _FirstPaddingByte {
   _Tp __v_;
  char __first_padding_byte_;
};
template <class _Tp>
inline const size_t __datasizeof_v = __builtin_offsetof(_FirstPaddingByte<_Tp>, __first_padding_byte_);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum class __element_count : size_t ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline const bool __is_char_type = false;
template <>
inline const bool __is_char_type<char> = true;
template <>
inline const bool __is_char_type<char8_t> = true;
template <class _Tp>
inline __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr size_t __constexpr_strlen(const _Tp* __str) noexcept {
  static_assert(__is_char_type<_Tp>, "__constexpr_strlen only works with char and char8_t");
  if (__libcpp_is_constant_evaluated) ;
  return __builtin_strlen(reinterpret_cast<const char*>(__str));
}
 ;
 ;
 ;
 ;
 ;
 ;
 ;
template <class _Tp, class _Up>
__attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr _Tp*
__constexpr_memmove ;
} }
extern "C" {
enum
{
  _ISupper ,
  _ISlower ,
  _ISalpha ,
  _ISdigit ,
  _ISxdigit ,
  _ISspace ,
  _ISprint ,
  
  _ISblank ,
  _IScntrl ,
  _ISpunct ,
  
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
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
typedef unsigned int wint_t;
typedef unsigned long int wctype_t;
enum
{
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
};
extern "C" 
 namespace __attribute__((__type_visibility__0)) std {}
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
   __value;
} __mbstate_t;
typedef __mbstate_t mbstate_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
extern "C" ;
typedef long int ptrdiff_t;
typedef long unsigned int size_t;
typedef struct  max_align_t;
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <class _Iter, class _Sent>
struct __unwrap_range_impl ;
template <class _Iter>
struct __unwrap_range_impl<_Iter, _Iter> ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter1, class _InIter2>
struct in_in_result ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
inline constexpr bool __can_map_to_integer_v =
    sizeof(_Tp) == alignof(_Tp) && 0;
template <size_t _TypeSize>
struct __get_as_integer_type_impl;
template <>
struct __get_as_integer_type_impl<1> ;
template <>
struct __get_as_integer_type_impl<2> ;
template <>
struct __get_as_integer_type_impl<4> ;
template <>
struct __get_as_integer_type_impl<8> ;
template <class _Tp>
using __get_as_integer_type_t  = typename __get_as_integer_type_impl<sizeof(_Tp)>::type;
template <class _Tp>
inline constexpr size_t __native_vector_size = 32 / sizeof(_Tp);
template <class _ArithmeticT, size_t _Np>
using __simd_vector __attribute__((__ext_vector_type__(_Np)))  = _ArithmeticT;
template <class _VecT>
inline constexpr size_t __simd_vector_size_v = [] -> size_t {};
template <class _Tp, size_t _Np>
inline constexpr size_t __simd_vector_size_v<__simd_vector<_Tp, _Np>> = _Np;
 ;
 ;
template <class _BaseIter, class _Alias>
struct __aliasing_iterator_wrapper ;
template <class _BaseT, class _Alias>
using __aliasing_iterator  = typename __aliasing_iterator_wrapper<_BaseT, _Alias>::__iterator;
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
struct __mismatch {};
inline namespace __cpo {
constexpr inline auto mismatch = __mismatch{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
namespace __rbegin {
template <class _Tp>
concept __member_rbegin = __can_borrow<_Tp> && requires(_Tp&& __t) {
  { static_cast<::std::__decay_t<decltype(0)> >(__t.rbegin) } -> input_or_output_iterator;
};
template <class _Tp>
concept __unqualified_rbegin =
    !__member_rbegin<_Tp> && __can_borrow<_Tp> && __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp&& __t) {
      { static_cast<::std::__decay_t<decltype(0)> >(rbegin(__t)) } -> input_or_output_iterator;
    };
template <class _Tp>
concept __can_reverse =
    __can_borrow<_Tp> && !__member_rbegin<_Tp> && !__unqualified_rbegin<_Tp> && requires {
      { ranges::begin } -> same_as<decltype(ranges::end)>;
      { ranges::begin } -> bidirectional_iterator;
    };
struct __fn {};
}
inline namespace __cpo {
inline constexpr auto rbegin = __rbegin::__fn{};
}
}
namespace ranges {}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {}
namespace ranges {
namespace __crend {
struct __fn ;
}
inline namespace __cpo {}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _AlgPolicy>
struct _IterOps;
struct _RangeAlgPolicy ;
template <>
struct _IterOps<_RangeAlgPolicy> ;
struct _ClassicAlgPolicy ;;
template <>
struct _IterOps<_ClassicAlgPolicy> ;
template <class _AlgPolicy, class _Iter>
using __policy_iter_diff_t  = typename _IterOps<_AlgPolicy>::template __difference_type<_Iter>;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __min {};
inline namespace __cpo {
inline constexpr auto min = __min{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std {}
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
class   basic_istream;
template <class _CharT, class _Traits>
class   basic_iostream;
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
   _Val __value_ = _Val();
};
template <movable _Val, class _CharT, class _Traits>
  requires default_initializable<_Val> && __stream_extractable<_Val, _CharT, _Traits>
class basic_istream_view<_Val, _CharT, _Traits>::__iterator {};
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
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <class _Iter, class = void>
struct __move_iter_category_base ;
template <class _Iter>
  requires requires { typename iterator_traits<_Iter>::iterator_category; }
struct __move_iter_category_base<_Iter> ;
template <class _Iter, class _Sent>
concept __move_iter_comparable = requires {
  { std::declval == std::declval<_Sent> } -> convertible_to<bool>;
};
template <class _Iter>
class move_iterator
    : public __move_iter_category_base<_Iter>
{
private:
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) static constexpr auto __get_iter_concept() ;
public:
  using iterator_type = _Iter;
  using iterator_concept = decltype(__get_iter_concept);
  using value_type = iter_value_t<_Iter>;
  using difference_type = iter_difference_t<_Iter>;
  using pointer = _Iter;
  using reference = iter_rvalue_reference_t<_Iter>;
    ;
   ;
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
class as_rvalue_view : public view_interface<as_rvalue_view<_View>> {};
;
template <class _View>
inline constexpr bool enable_borrowed_range<as_rvalue_view<_View>> = enable_borrowed_range<_View>;
namespace views {}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __adjacent_find {};
inline namespace __cpo {
inline constexpr auto adjacent_find = __adjacent_find{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <forward_range _View, indirect_binary_predicate<iterator_t<_View>, iterator_t<_View>> _Pred>
  requires view<_View> && is_object_v<_Pred>
class __attribute__((__abi_tag__0)) chunk_by_view : public view_interface<chunk_by_view<_View, _Pred>> {
   _View __base_ = _View();
   __movable_box<_Pred> __pred_;
  using _Cache  = __non_propagating_cache<iterator_t<_View>>;
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
   iterator_t<_View> __current_ = iterator_t<_View>();
   iterator_t<_View> __next_ = iterator_t<_View>();
public:
  using value_type = subrange<iterator_t<_View>>;
  using difference_type = range_difference_t<_View>;
};
namespace views {
namespace __chunk_by {
struct __fn {};
}
inline namespace __cpo {
inline constexpr auto chunk_by = __chunk_by::__fn{};
}
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct from_range_t {};
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
  using _InnerRng  = range_reference_t<_View>;
   _View __base_ = _View();
  static constexpr bool _UseOuterItCache = !forward_range<_View>;
  using _OuterItCache  =
      _If<_UseOuterItCache, __non_propagating_cache<iterator_t<_View>>, __empty_cache>;
   _OuterItCache __outer_it_;
  static constexpr bool _UseInnerCache = !is_reference_v<_InnerRng>;
  using _InnerCache  =
      _If<_UseInnerCache, __non_propagating_cache<remove_cvref_t<_InnerRng>>, __empty_cache>;
   _InnerCache __inner_;
   _Pattern __pattern_ = _Pattern();
  template <bool _Const>
  struct __iterator;
  template <bool _Const>
  struct __sentinel;
public:
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr explicit join_with_view(_View __base, _Pattern __pattern)  ;
    ;
   __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr auto end() ;
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
  using _Parent  = __maybe_const<_Const, join_with_view>;
  using _Base  = __maybe_const<_Const, _View>;
  using _InnerBase  = range_reference_t<_Base>;
  using _PatternBase  = __maybe_const<_Const, _Pattern>;
  using _OuterIter  = iterator_t<_Base>;
  using _InnerIter  = iterator_t<_InnerBase>;
  using _PatternIter  = iterator_t<_PatternBase>;
  static_assert(!_Const || forward_range<_Base>, "Const can only be true when Base models forward_range.");
  static constexpr bool __ref_is_glvalue = is_reference_v<_InnerBase>;
  _Parent* __parent_ = nullptr;
  static constexpr bool _OuterIterPresent = forward_range<_Base>;
  using _OuterIterType  = _If<_OuterIterPresent, _OuterIter, std::__empty>;
   static consteval auto __get_iterator_concept() noexcept ;
public:
  using iterator_concept = decltype(__get_iterator_concept);
  using value_type = common_type_t<iter_value_t<_InnerIter>, iter_value_t<_PatternIter>>;
   __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) friend constexpr decltype(auto) iter_move(const __iterator& __x) ;
};
template <input_range _View, forward_range _Pattern>
  requires view<_View> && input_range<range_reference_t<_View>> && view<_Pattern> &&
           __concatable<range_reference_t<_View>, _Pattern>
template <bool _Const>
struct join_with_view<_View, _Pattern>::__sentinel {
private:
  friend join_with_view;
  using _Parent  = __maybe_const<_Const, join_with_view>;
  using _Base  = __maybe_const<_Const, _View>;
   sentinel_t<_Base> __end_ = sentinel_t<_Base>();
  template <bool _OtherConst>
   __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) static constexpr auto& __get_outer_of(const __iterator<_OtherConst>& __x) ;
public:
  template <bool _OtherConst>
    requires sentinel_for<sentinel_t<_Base>, iterator_t<__maybe_const<_OtherConst, _View>>>
   __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) friend constexpr bool
  operator==(const __iterator<_OtherConst>& __x, const __sentinel& __y) {}
};
namespace views {
namespace __join_with_view {
struct __fn {
   ;
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
      __c.reserve;
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
struct __minimal_input_iterator ;
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
using __product_iterator_element_t  =
    decltype(__product_iterator_traits<_Iterator>::template __get_iterator_element<_Nth>);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class... _Ranges>
concept __zip_is_common =
    (sizeof...(_Ranges) == 1 && (common_range<_Ranges> && ...)) ||
    (!0 && (common_range<_Ranges> && ...)) ||
    ((random_access_range<_Ranges> && ...) && (sized_range<_Ranges> && ...));
 ;
 ;
template <class _Fun, class _Tuple1, class _Tuple2, size_t... _Indices>
__attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr tuple<
    invoke_result_t<_Fun&,
                    typename tuple_element<_Indices, remove_cvref_t<_Tuple1>>::type,
                    typename tuple_element<_Indices, remove_cvref_t<_Tuple2>>::type>...>
__tuple_zip_transform(_Fun&& __f, _Tuple1&& __tuple1, _Tuple2&& __tuple2, index_sequence<_Indices...>) ;
 ;
 ;
 ;
 ;
template <class _Tp>
__attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr _Tp __abs ;
template <input_range... _Views>
  requires(view<_Views> && ...) && (sizeof...(_Views) > 0)
class zip_view : public view_interface<zip_view<_Views...>> {
   tuple<_Views...> __views_;
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
 ;
template <bool _Const, class... _Views>
struct __zip_view_iterator_category_base ;
template <bool _Const, class... _Views>
  requires __zip_all_forward<_Const, _Views...>
struct __zip_view_iterator_category_base<_Const, _Views...> ;
template <input_range... _Views>
  requires(view<_Views> && ...) && (sizeof...(_Views) > 0)
template <bool _Const>
class zip_view<_Views...>::__iterator : public __zip_view_iterator_category_base<_Const, _Views...> {};
template <input_range... _Views>
  requires(view<_Views> && ...) && (sizeof...(_Views) > 0)
template <bool _Const>
class zip_view<_Views...>::__sentinel {
  tuple<sentinel_t<__maybe_const<_Const, _Views>>...> __end_;
  friend class zip_view;
  template <bool _OtherConst>
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) static constexpr decltype(auto)
  __iter_current(zip_view::__iterator<_OtherConst> const& __it) ;
public:
  template <bool _OtherConst>
    requires(sentinel_for<sentinel_t<__maybe_const<_Const, _Views>>, iterator_t<__maybe_const<_OtherConst, _Views>>> &&
             ...)
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) friend constexpr bool operator==(const __iterator<_OtherConst>& __x, const __sentinel& __y) {}
  template <bool _OtherConst>
    requires(
        sized_sentinel_for<sentinel_t<__maybe_const<_Const, _Views>>, iterator_t<__maybe_const<_OtherConst, _Views>>> &&
        ...)
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) friend constexpr common_type_t<range_difference_t<__maybe_const<_OtherConst, _Views>>...>
  operator-(const __iterator<_OtherConst>& __x, const __sentinel& __y) {
    const auto __diffs = ranges::__tuple_zip_transform(minus(), __iter_current, __y.__end_);
    return std::apply;
  }
  template <bool _OtherConst>
    requires(
        sized_sentinel_for<sentinel_t<__maybe_const<_Const, _Views>>, iterator_t<__maybe_const<_OtherConst, _Views>>> &&
        ...)
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) friend constexpr common_type_t<range_difference_t<__maybe_const<_OtherConst, _Views>>...>
  operator-(const __sentinel& __y, const __iterator<_OtherConst>& __x) {}
};
template <class... _Views>
inline constexpr bool enable_borrowed_range<zip_view<_Views...>> = 0;
namespace views {}
}
template <class _Iterator>
  requires _Iterator::__is_zip_view_iterator
struct __product_iterator_traits<_Iterator> ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Container>
class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
{
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
class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
{
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
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _CharT = char, class _Traits = char_traits<_CharT>, class _Distance = ptrdiff_t>
class istream_iterator
    : public iterator<input_iterator_tag, _Tp, _Distance, const _Tp*, const _Tp&>
{
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
class   basic_streambuf;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using ::mbstate_t __attribute__((__using_if_exists__));
} }
extern "C" 
 namespace __attribute__((__type_visibility__("default"))) std {}
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
class   basic_filebuf;
template <class _CharT, class _Traits>
class   basic_ifstream;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__0)) ios_base;
template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_ios;
using ios = basic_ios<char>;
using wios = basic_ios<wchar_t>;
template <class _CharT, class _Traits>
class   basic_ios;
using streamoff = long long;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits = char_traits<_CharT> >
class basic_ostream;
using ostream = basic_ostream<char>;
using wostream = basic_ostream<wchar_t>;
template <class _CharT, class _Traits>
class   basic_ostream;
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
class   basic_stringbuf;
template <class _CharT, class _Traits, class _Allocator>
class 
     basic_istringstream;
template <class _CharT, class _Traits, class _Allocator>
class 
     basic_ostringstream;
template <class _CharT, class _Traits, class _Allocator>
class 
     basic_stringstream;
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
class __save_flags ;
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
  static inline __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr void
  assign(char_type& __c1, const char_type& __c2) noexcept ;
  static inline __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) size_t constexpr length(const char_type* __s) noexcept {
    return std::__constexpr_strlen(__s);
  }
  static inline __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr char_type*
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
struct char_traits<wchar_t> : __char_traits_base<wchar_t, wint_t, static_cast<wint_t>(0)> {};
template <>
struct char_traits<char8_t> : __char_traits_base<char8_t, unsigned int, static_cast<unsigned int>(0)> {
  static __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr int
  compare(const char_type* __s1, const char_type* __s2, size_t __n) noexcept ;
  static __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr size_t length(const char_type* __str) noexcept ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) static constexpr const char_type*
  find(const char_type* __s, size_t __n, const char_type& __a) noexcept ;
};
template <>
struct char_traits<char16_t> : __char_traits_base<char16_t, uint_least16_t, static_cast<uint_least16_t>(0xFFFF)> {};
template <>
struct char_traits<char32_t> : __char_traits_base<char32_t, uint_least32_t, static_cast<uint_least32_t>(0xFFFFFFFF)> {};
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits>
class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type, _CharT*, _CharT>
{
  typedef _CharT* pointer;
  typedef _CharT reference;
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename _Traits::int_type int_type;
  typedef basic_streambuf<_CharT, _Traits> streambuf_type;
  typedef basic_istream<_CharT, _Traits> istream_type;
private:
  mutable streambuf_type* __sbuf_;
  class __proxy ;
public:
};
 ;
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <class _Tp, class _CharT = char, class _Traits = char_traits<_CharT> >
class ostream_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
{
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
template <class _CharT, class _Traits>
class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
{
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
 __sigset_t;
typedef __sigset_t sigset_t;
struct timespec
;;
typedef __fsfilcnt64_t fsfilcnt64_t;
typedef union
{
  __extension__ unsigned long long int __value64;
  struct
   __value32;
} __atomic_wide_counter;
typedef struct __pthread_internal_list
{
} __pthread_list_t;
typedef struct __pthread_internal_slist
 __pthread_slist_t;
struct __pthread_mutex_s
{
  short __spins;
  short __elision;
  __pthread_list_t __list;
};
struct __pthread_rwlock_arch_t
;;
struct __pthread_cond_s
;;
typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;
typedef struct
 __once_flag;
typedef unsigned long int pthread_t;
typedef union
 pthread_mutexattr_t;
typedef union
 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
;;
typedef union pthread_attr_t pthread_attr_t;
typedef union
{
  struct __pthread_mutex_s __data;
  char __size;
  long int __align;
} pthread_mutex_t;
typedef union
 pthread_cond_t;
typedef union
 pthread_rwlock_t;
typedef union
 pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union
 pthread_barrier_t;
typedef union
 pthread_barrierattr_t;
}
extern "C" 
typedef long unsigned int size_t;
extern "C" 
extern "C++" 
struct libinput;
struct libinput_event_touch;
struct libinput_event_gesture;
struct libinput_event_tablet_tool;
struct libinput_event_tablet_pad;
enum libinput_log_priority {};
enum libinput_device_capability {
 
 
 
 
 
 
 
};
enum libinput_key_state {
 
 
};
enum libinput_led {
 
 
 
 
 
};
enum libinput_button_state {
 
 
};
enum libinput_pointer_axis {
 
 
};
enum libinput_pointer_axis_source {};
enum libinput_tablet_tool_type {};
enum libinput_tablet_tool_proximity_state {};
enum libinput_tablet_tool_tip_state {};
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
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
;
struct _fpreg
;
struct _fpxreg
;;
struct _xmmreg
;;
struct _fpstate
;;
struct sigcontext
;
struct _xsave_hdr
;;
struct _ymmh_state
;;
struct _xstate
;
;
typedef long unsigned int size_t;
typedef long unsigned int size_t;
typedef struct
   stack_t;
__extension__ typedef long long int greg_t;
typedef greg_t gregset_t;
enum
{};
struct _libc_fpxreg
;;
struct _libc_xmmreg
;;
struct _libc_fpstate
;
typedef struct _libc_fpstate *fpregset_t;
typedef struct
   mcontext_t;
typedef struct ucontext_t
  ; ucontext_t;
;
extern "C" ;
enum
{};
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
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
extern "C" 
typedef long unsigned int size_t;
struct timex
;;
extern "C" ;
struct tm
;;
struct itimerspec
  ;
struct sigevent;
extern "C" 
 namespace __attribute__((__type_visibility__("default"))) std {}
extern "C" 
extern "C++" 
typedef long int ptrdiff_t;
typedef long unsigned int size_t;
extern "C" 
extern "C" {
struct wl_object;
struct wl_message ;
struct wl_interface ;;
struct wl_list ;;
;
;
;
;
;
;
struct wl_array ;
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
typedef int ;
typedef void  __attribute__0;
enum wl_iterator_result {
 
 
};
}
extern "C" {
enum {};
typedef int ;
typedef int ;
typedef int ;
typedef void ;
;
;
;
;
;
struct wl_event_source *
wl_event_loop_add_signal;
;
;
;
;
;
;
;
struct wl_listener;
typedef void ;
;
;
;
;
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
typedef void ;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
typedef enum wl_iterator_result ;
;
typedef void ;
;
;
;
struct wl_listener ;;
struct wl_signal ;
;
;
;
;
;
typedef void ;
;
;
;
;
;
;
enum wl_protocol_logger_type {};
struct wl_protocol_logger_message ;
typedef void ;
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
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
typedef void  ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
           ;
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
extern "C" ;
extern "C" ;
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
using __three_way_comp_ref_type  = _Comp&;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Alloc = allocator<_Tp> >
class vector;
template <class _Allocator>
class vector<bool, _Allocator>;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
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
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
;
;
 ;
 ;
struct __copy_impl ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
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
struct __copy {};
inline namespace __cpo {
inline constexpr auto copy = __copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Ip, class _Op>
using copy_n_result = in_out_result<_Ip, _Op>;
struct __copy_n {};
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
template <class _Tp>
using __pointer_member  = typename _Tp::pointer;
template <class _Tp, class _Alloc>
using __pointer  = __detected_or_t<_Tp*, __pointer_member, __libcpp_remove_reference_t<_Alloc> >;
template <class _Alloc, template <class> class _Alias, class _Ptr, class _Tp, class = void>
struct __rebind_or_alias_pointer {
  using type [[__gnu__::__nodebug__]] = typename pointer_traits<_Ptr>::template rebind<_Tp>;
};
template <class _Ptr, class _Alloc, class _Tp, template <class> class _Alias>
struct __rebind_or_alias_pointer<_Alloc, _Alias, _Ptr, _Tp, __void_t<_Alias<_Alloc> > > ;;
template <class _Alloc>
using __const_pointer_member  = typename _Alloc::const_pointer;
template <class _Tp, class _Ptr, class _Alloc>
using __const_pointer_t  =
    typename __rebind_or_alias_pointer<_Alloc, __const_pointer_member, _Ptr, const _Tp>::type;
template <class _Alloc>
using __void_pointer_member  = typename _Alloc::void_pointer;
template <class _Ptr, class _Alloc>
using __void_pointer_t  =
    typename __rebind_or_alias_pointer<_Alloc, __void_pointer_member, _Ptr, void>::type;
template <class _Alloc>
using __const_void_pointer_member  = typename _Alloc::const_void_pointer;
template <class _Ptr, class _Alloc>
using __const_void_pointer_t  =
    typename __rebind_or_alias_pointer<_Alloc, __const_void_pointer_member, _Ptr, const void>::type;
template <class _Tp>
using __size_type_member  = typename _Tp::size_type;
template <class _Alloc, class _DiffType>
using __size_type  = __detected_or_t<__make_unsigned_t<_DiffType>, __size_type_member, _Alloc>;
template <class _Alloc, class _Ptr, class = void>
struct __alloc_traits_difference_type ;
template <class _Alloc, class _Ptr>
struct __alloc_traits_difference_type<_Alloc, _Ptr, __void_t<typename _Alloc::difference_type> > {
  using type [[__gnu__::__nodebug__]] = typename _Alloc::difference_type;
};
template <class _Tp>
using __propagate_on_container_copy_assignment_member  =
    typename _Tp::propagate_on_container_copy_assignment;
template <class _Alloc>
using __propagate_on_container_copy_assignment  =
    __detected_or_t<false_type, __propagate_on_container_copy_assignment_member, _Alloc>;
template <class _Tp>
using __propagate_on_container_move_assignment_member  =
    typename _Tp::propagate_on_container_move_assignment;
template <class _Alloc>
using __propagate_on_container_move_assignment  =
    __detected_or_t<false_type, __propagate_on_container_move_assignment_member, _Alloc>;
template <class _Tp>
using __propagate_on_container_swap_member  = typename _Tp::propagate_on_container_swap;
template <class _Alloc>
using __propagate_on_container_swap  =
    __detected_or_t<false_type, __propagate_on_container_swap_member, _Alloc>;
template <class _Tp>
using __is_always_equal_member  = typename _Tp::is_always_equal;
template <class _Alloc>
using __is_always_equal  =
    __detected_or_t<typename is_empty<_Alloc>::type, __is_always_equal_member, _Alloc>;
template <class _Tp, class _Up, class = void>
inline const bool __has_rebind_other_v = false;
template <class _Tp, class _Up>
inline const bool __has_rebind_other_v<_Tp, _Up, __void_t<typename _Tp::template rebind<_Up>::other> > = true;
template <class _Tp, class _Up, bool = __has_rebind_other_v<_Tp, _Up> >
struct __allocator_traits_rebind ;
template <template <class, class...> class _Alloc, class _Tp, class... _Args, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _Args...>, _Up, true> ;
template <template <class, class...> class _Alloc, class _Tp, class... _Args, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _Args...>, _Up, false> {
  using type [[__gnu__::__nodebug__]] = _Alloc<_Up, _Args...>;
};
template <class _Alloc, class _Tp>
using __allocator_traits_rebind_t  = typename __allocator_traits_rebind<_Alloc, _Tp>::type;
template <class _Alloc, class _SizeType, class _ConstVoidPtr, class = void>
inline const bool __has_allocate_hint_v = false;
template <class _Alloc, class _SizeType, class _ConstVoidPtr>
inline const bool __has_allocate_hint_v<
    _Alloc,
    _SizeType,
    _ConstVoidPtr,
    decltype(std::declval<_Alloc>.allocate)> = true;
template <class, class _Alloc, class... _Args>
inline const bool __has_construct_impl = false;
template <class _Alloc, class... _Args>
inline const bool __has_construct_v = __has_construct_impl<void, _Alloc, _Args...>;
template <class _Alloc, class _Pointer, class = void>
inline const bool __has_destroy_v = false;
template <class _Alloc, class _Pointer>
inline const bool
    __has_destroy_v<_Alloc, _Pointer, decltype(std::declval<_Alloc>.destroy)> = true;
template <class _Alloc, class = void>
inline const bool __has_max_size_v = false;
template <class _Alloc>
inline const bool __has_max_size_v<_Alloc, decltype(std::declval<_Alloc&>.max_size)> = true;
template <class _Alloc, class = void>
inline const bool __has_select_on_container_copy_construction_v = false;
template <class _Alloc>
inline const bool __has_select_on_container_copy_construction_v<
    _Alloc,
    decltype(std::declval<_Alloc>.select_on_container_copy_construction)> = true;
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
  using rebind_traits = allocator_traits;
   ;
   ;
   ;
   ;
  template <class _Ap = _Alloc, __enable_if_t<!__has_max_size_v<const _Ap>, int> = 0>
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr static size_type max_size(const allocator_type&) noexcept {
    return numeric_limits<size_type>::max() / sizeof(value_type);
  }
   ;
   ;
};
template <class _Traits, class _Tp>
using __rebind_alloc [[__gnu__::__nodebug__]] = typename _Traits::template rebind_alloc<_Tp>;
template <class _Alloc>
struct __check_valid_allocator : true_type {
  using _Traits  = std::allocator_traits<_Alloc>;
};
template <class _Tp>
inline const bool __is_std_allocator_v = false;
template <class _Alloc>
inline const bool __is_cpp17_move_insertable_v =
    is_move_constructible<typename _Alloc::value_type>::value ||
    0;
template <class _Alloc>
inline const bool __is_cpp17_copy_insertable_v =
    __is_cpp17_move_insertable_v<_Alloc> &&
    (is_copy_constructible<typename _Alloc::value_type>::value ||
     (!__is_std_allocator_v<_Alloc> &&
      __has_construct_v<_Alloc, typename _Alloc::value_type*, const typename _Alloc::value_type&>));
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
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
class __attribute__((__visibility__0)) bad_alloc : public exception {
public:
};
class __attribute__((__visibility__0)) bad_array_new_length : public bad_alloc {
public:
};
}
 namespace __attribute__((__type_visibility__("default"))) std {
struct __attribute__((__visibility__0)) nothrow_t ;
}
__attribute__((__visibility__0)) void operator delete(void* __p) noexcept;
__attribute__((__visibility__0)) void operator delete(void* __p) noexcept;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <class _Tp>
class allocator;
template <bool _Cond, class _Unique>
struct __non_trivial_if ;;
template <class _Unique>
struct __non_trivial_if<true, _Unique> {
};
template <class _Tp>
class allocator : private __non_trivial_if<!is_void<_Tp>::value, allocator<_Tp> > {
public:
  typedef size_t size_type;
  typedef ptrdiff_t difference_type;
  typedef _Tp value_type;
  typedef true_type propagate_on_container_move_assignment;
   ;
   __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr _Tp* allocate(size_t __n) ;
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
    0 || sizeof(_ToPad) == __datasizeof_v<_ToPad>;
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
                               > {};
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
};
struct __struct_double4 {
};
using __all_types  =
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
  static const size_t __max = _A1 < _A2;
public:
  static const size_t value = _Len < __min;
};
template <class _Head, class... _Tail, size_t _Len>
struct __find_max_align<__type_list<_Head, _Tail...>, _Len>
    : public integral_constant<
          size_t,
          __select_align<_Len, _Head::value, __find_max_align<__type_list<_Tail...>, _Len>::value>::value> {};
template <size_t _Len, size_t _Align = __find_max_align<__all_types, _Len>::value>
struct __attribute__((__deprecated__)) [[_Clang::__no_specializations__]] aligned_storage {
  union alignas(_Align) type {};
};
template <size_t _Len, size_t _Align = __find_max_align<__all_types, _Len>::value>
using aligned_storage_t __attribute__((__deprecated__)) = typename aligned_storage<_Len, _Align>::type;
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
struct  is_unbounded_array : bool_constant<__is_unbounded_array_v<_Tp>> {};
template <class _Tp>
 inline constexpr bool is_unbounded_array_v = __is_unbounded_array_v<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Rollback>
struct __exception_guard_exceptions ;
;
template <class _Rollback>
struct __exception_guard_noexceptions ;
;
template <class _Rollback>
using __exception_guard  = __exception_guard_exceptions<_Rollback>;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _ValueType, class _InputIterator, class _Sentinel1, class _ForwardIterator, class _EndPredicate>
 __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) pair<_InputIterator, _ForwardIterator> __uninitialized_copy ;
 ;
 ;
template <class _Alloc, class _Iter>
class _AllocatorDestroyRangeReverse ;;
template <class _Alloc, class _Type>
inline const bool __allocator_has_trivial_copy_construct_v = !__has_construct_v<_Alloc, _Type*, const _Type&>;

 ;
 ;
template <class _Alloc, class _Type>
inline const bool __allocator_has_trivial_move_construct_v = !__has_construct_v<_Alloc, _Type*, _Type&&>;

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
 namespace __attribute__((__type_visibility__("default"))) std {}
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
  using __self  = vector;
  using value_type = _Tp;
  using allocator_type = _Allocator;
  using __alloc_traits  = allocator_traits<allocator_type>;
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
  using __trivially_relocatable  = __conditional_t<
      __libcpp_is_trivially_relocatable<pointer>::value && __libcpp_is_trivially_relocatable<allocator_type>::value,
      vector,
      void>;
  using __replaceable  =
      __conditional_t<__is_replaceable_v<pointer> && __container_allocator_is_replaceable<__alloc_traits>::value,
                      vector,
                      void>;
    ;
    ;
private:
  class __destroy_vector ;
public:
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
 ;
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
struct __bit_array ;;
template <class _Cp, bool _IsConst, typename _Cp::__storage_type>
class __bit_iterator ;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace pmr {
class __attribute__((__visibility__0)) memory_resource ;
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
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
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
struct __disabled_formatter {};
template <class _Tp, class _CharT>
struct formatter : __disabled_formatter {};
template <class _Tp>
constexpr bool enable_nonlocking_formatter_optimization = false;
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <class _Tp>
struct  is_standard_layout : integral_constant<bool, __is_standard_layout(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_standard_layout_v = __is_standard_layout(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
template <class _CharT, class _Traits>
class basic_string_view ;;
;
template <class _CharT, class _Traits>
inline constexpr bool ranges::enable_view<basic_string_view<_CharT, _Traits>> = true;
template <class _CharT, class _Traits>
inline constexpr bool ranges::enable_borrowed_range<basic_string_view<_CharT, _Traits> > = true;
;
;
 ;
 ;
;
template <class _CharT>
struct __string_view_hash : public __unary_function<basic_string_view<_CharT, char_traits<_CharT> >, size_t> {
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
inline namespace string_view_literals {}
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
using __fmt_iter_for  = _CharT*;
template <class _Tp, class _Context, class _Formatter = typename _Context::template formatter_type<remove_const_t>>
concept __formattable_with =
    semiregular<_Formatter> &&
    requires(_Formatter& __f,
             const _Formatter& __cf,
             _Tp&& __t,
             _Context __fc,
             basic_format_parse_context<typename _Context::char_type> __pc) {
      { __f.parse } -> same_as<typename decltype(__pc)::iterator>;
      { __cf.format } -> same_as<typename _Context::iterator>;
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
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __itoa {}
} }
extern "C"
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum class errc;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __attribute__((__visibility__0)) to_chars_result ;
struct __to_chars_result ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __itoa {
template <typename _Tp, typename = void>
struct __attribute__((__visibility__0)) __traits_base;
template <typename _Tp>
struct __attribute__((__visibility__0)) __traits_base<_Tp, __enable_if_t<sizeof(_Tp) <= sizeof(uint32_t)> > ;
template <typename _Tp>
struct __attribute__((__visibility__0)) __traits_base<_Tp, __enable_if_t<sizeof(_Tp) == sizeof(uint64_t)> > ;
template <typename _Tp>
struct __attribute__((__visibility__0)) __traits_base<_Tp, __enable_if_t<sizeof(_Tp) == sizeof(__uint128_t)> > ;
 ;
 ;
 ;
 ;
template <typename _Tp>
struct __attribute__((__visibility__0)) __traits : __traits_base<_Tp> {};
}
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
  requires(is_signed_v<_Tp> || is_unsigned_v<_Tp> || is_same_v<_Tp, char>)
using __make_32_64_or_128_bit_t  =
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
struct __attribute__((__visibility__0)) __integral;
template <>
struct __attribute__((__visibility__0)) __integral<2> ;
template <>
struct __attribute__((__visibility__0)) __integral<8> ;
template <>
struct __attribute__((__visibility__0)) __integral<16> ;
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
struct __fill_n {};
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
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __format {
class __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) __max_output_size {
public:
private:
  size_t __max_size_;
  size_t __code_units_written_;
};
template <__fmt_char_type _CharT>
class __output_buffer ;;
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
             add_pointer_t<typename _Container::value_type> __last) { __t.insert; };
template <class _It>
struct __back_insert_iterator_container ;
template <__insertable _Container>
struct __back_insert_iterator_container<back_insert_iterator<_Container>> ;;
template <__fmt_char_type _CharT>
class __allocating_buffer : public __output_buffer<_CharT> {
public:
private:
  using _Alloc  = allocator<_CharT>;
  static constexpr size_t __buffer_size_ = 256;
};
template <class _OutIt, __fmt_char_type _CharT>
class __direct_iterator_buffer : public __output_buffer<_CharT> {
public:
};
template <class _OutIt, __fmt_char_type _CharT>
class __container_inserter_buffer : public __output_buffer<_CharT> {
public:
  static constexpr size_t __buffer_size = 256;
  _CharT __small_buffer_;
};
template <class _OutIt, __fmt_char_type _CharT>
class __iterator_buffer : public __allocating_buffer<_CharT> {};
template <class _OutIt, __fmt_char_type _CharT>
class __buffer_selector ;
template <class _OutIt, __fmt_char_type _CharT>
class __format_to_n_buffer : private __buffer_selector<_OutIt, _CharT>::type {
public:
  using _Base  = __buffer_selector<_OutIt, _CharT>::type;
private:
  __max_output_size __max_output_size_;
};
template <__fmt_char_type _CharT>
class __formatted_size_buffer : private __output_buffer<_CharT> {};
template <__fmt_char_type _CharT>
class __retarget_buffer ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __format {
enum class __arg_t : uint8_t ;
}
 ;
 ;
template <class _Context>
class __basic_format_arg_value ;
template <class _Context>
class  basic_format_arg {
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
template <typename _Tp, __enable_if_t = 0>
__attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr _Tp __half_positive ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _AlgPolicy, class _Iter, class _Type, class _Proj, class _Comp>
 __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr _Iter __lower_bound_bisecting ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __upper_bound {};
inline namespace __cpo {
inline constexpr auto upper_bound = __upper_bound{};
}
}
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
namespace __extended_grapheme_custer_property_boundary {
enum class __property : uint8_t ;;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __indic_conjunct_break {
enum class __property : uint8_t ;
__attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) inline constexpr uint32_t __entries = {};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __width_estimation_table {
__attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) inline constexpr uint32_t __entries = {};
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
struct __padding ;
template <>
struct __padding<0> ;;
template <class _CharT, class _Traits, class _Allocator>
class basic_string {
public:
  using __self  = basic_string;
  using __self_view  = basic_string_view<_CharT, _Traits>;
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
  using iterator = __wrap_iter<pointer>;
  using const_iterator = __wrap_iter<const_pointer>;
  using reverse_iterator = std::reverse_iterator<iterator>;
  using const_reverse_iterator = std::reverse_iterator<const_iterator>;
private:
  static const size_type __endian_factor = 2;
  struct __long {
    struct __attribute__((__packed__)) {
    };
    pointer __data_;
  };
  enum { __min_cap = 0 / sizeof(value_type) > 2 ? 0 / sizeof(value_type) : 2 };
  struct __short {
    struct __attribute__((__packed__)) {
      unsigned char __is_long_ : 1;
      unsigned char __size_ : 7;
    };
     
    value_type __data_;
  };
  union __rep {
    __short __s;
    __long __l;
  };
  struct {  __attribute__((__aligned__)) __rep __rep_;  ::std::__compressed_pair_padding<__rep> __padding1_903_; [[__no_unique_address__]] allocator_type __alloc_;  ::std::__compressed_pair_padding<allocator_type> __padding2_903_; };
  struct __annotate_new_size ;;
    ;
public:
  __attribute__((__visibility__0)) static const size_type npos = -1;
  constexpr basic_string(const basic_string& __str)  ;
  constexpr
  basic_string(const basic_string& __str, const allocator_type& __a)  ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr basic_string(basic_string&& __str)  ;
  template <__enable_if_t<__is_allocator<_Allocator>::value, int> = 0>
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr basic_string(const _CharT* _Nonnull __s) {
    ;
    __init(__s, traits_type::length(__s));
  }
    ;
    ;
  constexpr
  basic_string(const basic_string& __str, size_type __pos, size_type __n, const _Allocator& __a = _Allocator())  ;
    ;
    ;
   constexpr ~basic_string() ;
  constexpr basic_string&
  operator=(const basic_string& __str);
   ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr basic_string&
  operator=(basic_string&& __str) noexcept ;
  constexpr basic_string& operator=(value_type __c);
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr size_type max_size() const noexcept {
    if (size_type __m = __alloc_traits::max_size(__alloc_); __m <= std::numeric_limits<size_type>::max() / 2) ; else {
      bool __uses_lsb = __endian_factor == 2;
      return __uses_lsb ? __m - __alignment - 1 : (__m / 2) - __alignment - 1;
    }
  }
  constexpr void resize(size_type __n, value_type __c);
  constexpr void reserve(size_type __requested_capacity);
   ;
  constexpr const_reference at(size_type __n) const;
  constexpr reference at(size_type __n);
   ;
   ;
  constexpr basic_string& append(const basic_string& __str, size_type __pos, size_type __n = npos);
   ;
  constexpr basic_string& append(const value_type* __s, size_type __n);
  constexpr basic_string& append(const value_type* _Nonnull __s);
  constexpr basic_string& append(size_type __n, value_type __c);
   ;
   ;
   ;
  constexpr void push_back(value_type __c);
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
  constexpr basic_string& erase(size_type __pos = 0, size_type __n = npos);
   ;
  constexpr basic_string&
  replace(size_type __pos1, size_type __n1, const basic_string& __str, size_type __pos2, size_type __n2 = npos);
   ;
  constexpr basic_string&
  replace(size_type __pos, size_type __n1, const value_type* __s, size_type __n2);
  constexpr basic_string& replace(size_type __pos, size_type __n1, const value_type* __s);
  constexpr basic_string& replace(size_type __pos, size_type __n1, size_type __n2, value_type __c);
  constexpr size_type copy(value_type* __s, size_type __n, size_type __pos = 0) const;
   ;
  constexpr size_type find(const value_type* __s, size_type __pos, size_type __n) const noexcept ;
  constexpr size_type find(value_type __c, size_type __pos = 0) const noexcept ;
   ;
  constexpr size_type rfind(const value_type* __s, size_type __pos, size_type __n) const noexcept ;
  constexpr size_type rfind(value_type __c, size_type __pos = npos) const noexcept ;
   ;
  constexpr size_type
  find_first_of(const value_type* __s, size_type __pos, size_type __n) const noexcept ;
   ;
  constexpr size_type
  find_last_of(const value_type* __s, size_type __pos, size_type __n) const noexcept ;
  constexpr size_type
  find_first_not_of(const value_type* __s, size_type __pos, size_type __n) const noexcept ;
   ;
  constexpr size_type
  find_last_not_of(const value_type* __s, size_type __pos, size_type __n) const noexcept ;
   ;
   ;
  constexpr int
  compare(size_type __pos1, size_type __n1, const basic_string& __str, size_type __pos2, size_type __n2 = npos) const ;
   ;
  constexpr int compare(const value_type* _Nonnull __s) const noexcept ;
  constexpr int
  compare(size_type __pos1, size_type __n1, const value_type* _Nonnull __s) const ;
  constexpr int
  compare(size_type __pos1, size_type __n1, const value_type* __s, size_type __n2) const;
private:
  constexpr __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static bool __fits_in_sso(size_type __sz) { return __sz < __min_cap; }
  ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) constexpr void __annotate_new(size_type __current_size) const noexcept {}
  enum { __alignment  };
  inline constexpr void __init(const value_type* __s, size_type __sz);
  inline constexpr void __init(size_type __n, value_type __c);
  ;
  template <class _ForwardIterator, __enable_if_t = 0>
  inline constexpr void __init(_ForwardIterator __first, _ForwardIterator __last);
  ;
  ;
  constexpr
  __attribute__((__deprecated__)) void __grow_by(
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
   __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) static void __throw_length_error() ;
  ;
};
extern template __attribute__((__visibility__0)) void basic_string<char>::__init(const value_type*, size_type); extern template __attribute__((__visibility__0)) void basic_string<char>::__init(size_type, value_type); extern template __attribute__((__visibility__0)) basic_string<char>::basic_string(const basic_string&, size_type, size_type, const allocator<char>&); extern template __attribute__0 basic_string<char>::~basic_string(); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::operator=(value_type); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::assign(size_type, value_type); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::assign(const basic_string&, size_type, size_type); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::append(size_type, value_type); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::append(const value_type*); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::append(const value_type*, size_type); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::append(const basic_string&, size_type, size_type); extern template __attribute__((__visibility__0)) void basic_string<char>::push_back(value_type); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::insert(size_type, const value_type*); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::insert(size_type, size_type, value_type); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::insert(size_type, const value_type*, size_type); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::insert(size_type, const basic_string&, size_type, size_type); extern template __attribute__((__visibility__0)) basic_string<char>::iterator basic_string<char>::insert(basic_string::const_iterator, value_type); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::replace(size_type, size_type, const value_type*); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::replace(size_type, size_type, size_type, value_type); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::replace(size_type, size_type, const value_type*, size_type); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::replace(size_type, size_type, const basic_string&, size_type, size_type); extern template __attribute__((__visibility__0)) void basic_string<char>::__grow_by_and_replace(size_type, size_type, size_type, size_type, size_type, size_type, const value_type*); extern template __attribute__((__visibility__0)) void basic_string<char>::resize(size_type, value_type); extern template __attribute__((__visibility__0)) void basic_string<char>::reserve(size_type); extern template __attribute__((__visibility__0)) basic_string<char>::size_type basic_string<char>::copy(value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<char>::size_type basic_string<char>::find(value_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<char>::size_type basic_string<char>::find(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<char>::size_type basic_string<char>::rfind(value_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<char>::size_type basic_string<char>::rfind(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<char>::size_type basic_string<char>::find_first_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<char>::size_type basic_string<char>::find_last_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<char>::size_type basic_string<char>::find_first_not_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<char>::size_type basic_string<char>::find_last_not_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) char& basic_string<char>::at(size_type); extern template __attribute__((__visibility__0)) const char& basic_string<char>::at(size_type) const; extern template __attribute__((__visibility__0)) int basic_string<char>::compare(const value_type*) const; extern template __attribute__((__visibility__0)) int basic_string<char>::compare(size_type, size_type, const value_type*) const; extern template __attribute__((__visibility__0)) int basic_string<char>::compare(size_type, size_type, const value_type*, size_type) const; extern template __attribute__((__visibility__0)) int basic_string<char>::compare(size_type, size_type, const basic_string&, size_type, size_type) const; extern template __attribute__((__visibility__0)) const basic_string<char>::size_type basic_string<char>::npos; extern template __attribute__((__visibility__("default"))) basic_string<char>::basic_string(const basic_string&); extern template __attribute__((__visibility__("default"))) basic_string<char>::basic_string(const basic_string&, const allocator<char>&); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::assign(const value_type*); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::assign(const value_type*, size_type); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::operator=(basic_string const&); extern template __attribute__((__visibility__0)) void basic_string<char>::__grow_by(size_type, size_type, size_type, size_type, size_type, size_type); extern template __attribute__((__visibility__0)) basic_string<char>& basic_string<char>::erase(size_type, size_type);
extern template __attribute__((__visibility__0)) void basic_string<wchar_t>::__init(const value_type*, size_type); extern template __attribute__((__visibility__0)) void basic_string<wchar_t>::__init(size_type, value_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>::basic_string(const basic_string&, size_type, size_type, const allocator<wchar_t>&); extern template __attribute__0 basic_string<wchar_t>::~basic_string(); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::operator=(value_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::assign(size_type, value_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::assign(const basic_string&, size_type, size_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::append(size_type, value_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::append(const value_type*); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::append(const value_type*, size_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::append(const basic_string&, size_type, size_type); extern template __attribute__((__visibility__0)) void basic_string<wchar_t>::push_back(value_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::insert(size_type, const value_type*); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::insert(size_type, size_type, value_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::insert(size_type, const value_type*, size_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::insert(size_type, const basic_string&, size_type, size_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>::iterator basic_string<wchar_t>::insert(basic_string::const_iterator, value_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::replace(size_type, size_type, const value_type*); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::replace(size_type, size_type, size_type, value_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::replace(size_type, size_type, const value_type*, size_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::replace(size_type, size_type, const basic_string&, size_type, size_type); extern template __attribute__((__visibility__0)) void basic_string<wchar_t>::__grow_by_and_replace(size_type, size_type, size_type, size_type, size_type, size_type, const value_type*); extern template __attribute__((__visibility__0)) void basic_string<wchar_t>::resize(size_type, value_type); extern template __attribute__((__visibility__0)) void basic_string<wchar_t>::reserve(size_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>::size_type basic_string<wchar_t>::copy(value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<wchar_t>::size_type basic_string<wchar_t>::find(value_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<wchar_t>::size_type basic_string<wchar_t>::find(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<wchar_t>::size_type basic_string<wchar_t>::rfind(value_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<wchar_t>::size_type basic_string<wchar_t>::rfind(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<wchar_t>::size_type basic_string<wchar_t>::find_first_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<wchar_t>::size_type basic_string<wchar_t>::find_last_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<wchar_t>::size_type basic_string<wchar_t>::find_first_not_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) basic_string<wchar_t>::size_type basic_string<wchar_t>::find_last_not_of(const value_type*, size_type, size_type) const; extern template __attribute__((__visibility__0)) wchar_t& basic_string<wchar_t>::at(size_type); extern template __attribute__((__visibility__0)) const wchar_t& basic_string<wchar_t>::at(size_type) const; extern template __attribute__((__visibility__0)) int basic_string<wchar_t>::compare(const value_type*) const; extern template __attribute__((__visibility__0)) int basic_string<wchar_t>::compare(size_type, size_type, const value_type*) const; extern template __attribute__((__visibility__0)) int basic_string<wchar_t>::compare(size_type, size_type, const value_type*, size_type) const; extern template __attribute__((__visibility__0)) int basic_string<wchar_t>::compare(size_type, size_type, const basic_string&, size_type, size_type) const; extern template __attribute__((__visibility__0)) const basic_string<wchar_t>::size_type basic_string<wchar_t>::npos; extern template __attribute__((__visibility__0)) basic_string<wchar_t>::basic_string(const basic_string&); extern template __attribute__((__visibility__0)) basic_string<wchar_t>::basic_string(const basic_string&, const allocator<wchar_t>&); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::assign(const value_type*); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::assign(const value_type*, size_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::operator=(basic_string const&); extern template __attribute__((__visibility__0)) void basic_string<wchar_t>::__grow_by(size_type, size_type, size_type, size_type, size_type, size_type); extern template __attribute__((__visibility__0)) basic_string<wchar_t>& basic_string<wchar_t>::erase(size_type, size_type);
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
  if (__libcpp_is_constant_evaluated)
    __rep_ = __rep();
  if (__sz > max_size())
    this->__throw_length_error();
  if (__fits_in_sso(__sz)) ; else 
  traits_type::copy;
  traits_type::assign;
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
__attribute__((__visibility__0)) const typename basic_string<_CharT, _Traits, _Allocator>::size_type
    basic_string<_CharT, _Traits, _Allocator>::npos;
template <class _CharT, class _Allocator>
struct __string_hash : public __unary_function<basic_string<_CharT, char_traits<_CharT>, _Allocator>, size_t> {};
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
;
template <class _CharT, class _Traits, class _Allocator, class _Up>
 __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr typename basic_string<_CharT, _Traits, _Allocator>::size_type
erase ;
 ;
inline namespace literals {
inline namespace string_literals {
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __format_spec {
template <contiguous_iterator _Iterator, class _ParseContext>
__attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr __format::__parse_number_result<_Iterator>
__parse_arg_id ;
 ;
struct __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) __fields {
  uint16_t __locale_specific_form_ : 1 ;
  uint16_t __type_ : 1 ;
  uint16_t __use_range_fill_ : 1 ;
  uint16_t __clear_brackets_ : 1 ;
  uint16_t __consume_all_ : 1 ;
};
enum class __alignment : uint8_t ;;
enum class __sign : uint8_t ;;
enum class __type : uint8_t ;
__attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) inline constexpr uint32_t __create_type_mask(__type __t) ;
inline constexpr uint32_t __type_mask_integer =
    0 |
    0;
struct __std ;
struct __chrono ;
template <class _CharT>
struct __code_point;
template <>
struct __code_point<char> {};
template <>
struct __code_point<wchar_t> {};
template <class _CharT>
struct __parsed_specifications {
  union {};
  int32_t __width_;
  int32_t __precision_;
  __code_point<_CharT> __fill_;
};

static_assert(is_trivially_copyable_v<__parsed_specifications<char>>);

static_assert(is_trivially_copyable_v<__parsed_specifications<wchar_t>>);
template <class _CharT>
class __parser ;

 ;
 ;
template <contiguous_iterator _Iterator>
struct __column_width_result ;;
;
enum class __column_width_rounding ;
namespace __detail {}
 ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Iterator, size_t _Size>
struct __static_bounded_iter_storage ;
template <class _Iterator>
struct __static_bounded_iter_storage<_Iterator, 0> ;;
template <class _Iterator, size_t _Size>
struct __static_bounded_iter ;;
template <class _Iterator, size_t _Size>
struct pointer_traits<__static_bounded_iter<_Iterator, _Size> > ;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
extern "C" 
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __locale {
struct __locale_guard ;;
using __locale_t  = ::locale_t;
}
} }
namespace std
{
struct __type_info_implementations ;
class __attribute__((__visibility__0))  type_info ;
class __attribute__((__visibility__0)) bad_cast : public exception {};
class __attribute__((__visibility__0)) bad_typeid : public exception {};
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
class __attribute__((__visibility__0)) __shared_count {
protected:
  long __shared_owners_;
  virtual ~__shared_count();
private:
public:
};
class __attribute__((__visibility__0)) __shared_weak_count : private __shared_count {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct once_flag;
;
struct once_flag ;
template <class _Fp>
class __call_once_param ;;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __private_constructor_tag ;;
} }
typedef long int ptrdiff_t;
typedef long unsigned int size_t;
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
class __attribute__((__visibility__("default"))) locale;
template <class _CharT>
class collate;
;
;
class __attribute__((__visibility__0)) locale {
public:
  using __trivially_relocatable  = locale;
  using __replaceable  = locale;
  class __attribute__((__visibility__0)) facet;
  class __attribute__((__visibility__("default"))) id;
  typedef int category;
  static const category
      none = 0,
      collate = 0, ctype = 0, monetary = 0,
      numeric = 0, time = 0, messages = 0,
      all = collate | ctype | monetary | numeric | time | messages;
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
class __attribute__((__visibility__0)) locale::facet : public __shared_count {
protected:
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) explicit facet(size_t __refs = 0)  ;
private:
};
class __attribute__((__visibility__0)) locale::id {};
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
extern template class __attribute__((__visibility__0)) collate<char>;
extern template class __attribute__((__visibility__0)) collate<wchar_t>;
template <class _CharT>
class collate_byname;
template <>
class __attribute__((__visibility__0)) collate_byname<char> : public collate<char> {
  __locale::__locale_t __l_;
public:
  typedef char char_type;
  typedef basic_string<char_type> string_type;
protected:
};
template <>
class __attribute__((__visibility__0)) collate_byname<wchar_t> : public collate<wchar_t> {
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
};
template <class _CharT>
class ctype;
template <>
class __attribute__((__visibility__0)) ctype<wchar_t> : public locale::facet, public ctype_base {
public:
  typedef wchar_t char_type;
  static locale::id id;
protected:
};
template <>
class __attribute__((__visibility__0)) ctype<char> : public locale::facet, public ctype_base {};
template <class _CharT>
class ctype_byname;
template <>
class __attribute__((__visibility__0)) ctype_byname<char> : public ctype<char> {};
template <>
class __attribute__((__visibility__0)) ctype_byname<wchar_t> : public ctype<wchar_t> {};
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
class __attribute__((__visibility__0)) codecvt_base {
public:
  enum result {};
};
template <class _InternT, class _ExternT, class _StateT>
class codecvt;
template <>
class __attribute__((__visibility__0)) codecvt<char, char, mbstate_t> : public locale::facet, public codecvt_base {};
template <>
class __attribute__((__visibility__0)) codecvt<wchar_t, char, mbstate_t> : public locale::facet, public codecvt_base {
  __locale::__locale_t __l_;
public:
  typedef wchar_t intern_type;
  typedef char extern_type;
  typedef mbstate_t state_type;
  static locale::id id;
protected:
};
template <>
class __attribute__((__deprecated__)) __attribute__((__visibility__0)) codecvt<char16_t, char, mbstate_t>
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
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) explicit codecvt(size_t __refs = 0) : locale::facet(__refs) {}
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) result
  out(state_type& __st,
      const intern_type* __frm,
      const intern_type* __frm_end,
      const intern_type*& __frm_nxt,
      extern_type* __to,
      extern_type* __to_end,
      extern_type*& __to_nxt) const ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) result
  in(state_type& __st,
     const extern_type* __frm,
     const extern_type* __frm_end,
     const extern_type*& __frm_nxt,
     intern_type* __to,
     intern_type* __to_end,
     intern_type*& __to_nxt) const ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) int encoding() const noexcept ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) bool always_noconv() const noexcept ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) int
  length(state_type& __st, const extern_type* __frm, const extern_type* __end, size_t __mx) const ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) int max_length() const noexcept ;
  static locale::id id;
protected:
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) explicit codecvt(const char*, size_t __refs = 0) : locale::facet(__refs) {}
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
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) explicit codecvt(size_t __refs = 0) : locale::facet(__refs) {}
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) result
  out(state_type& __st,
      const intern_type* __frm,
      const intern_type* __frm_end,
      const intern_type*& __frm_nxt,
      extern_type* __to,
      extern_type* __to_end,
      extern_type*& __to_nxt) const ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) result
  in(state_type& __st,
     const extern_type* __frm,
     const extern_type* __frm_end,
     const extern_type*& __frm_nxt,
     intern_type* __to,
     intern_type* __to_end,
     intern_type*& __to_nxt) const ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) int encoding() const noexcept ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) bool always_noconv() const noexcept ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) int
  length(state_type& __st, const extern_type* __frm, const extern_type* __end, size_t __mx) const ;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) int max_length() const noexcept ;
  static locale::id id;
protected:
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) explicit codecvt(const char*, size_t __refs = 0) : locale::facet(__refs) {}
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
class codecvt_byname : public codecvt<_InternT, _ExternT, _StateT> {};
extern template class __attribute__((__visibility__0)) codecvt_byname<char, char, mbstate_t>;
extern template class __attribute__((__visibility__0)) codecvt_byname<wchar_t, char, mbstate_t>;
extern template class __attribute__((__deprecated__))
__attribute__((__visibility__0)) codecvt_byname<char16_t, char, mbstate_t>;
extern template class __attribute__((__deprecated__))
__attribute__((__visibility__0)) codecvt_byname<char32_t, char, mbstate_t>;
extern template class __attribute__((__visibility__0)) codecvt_byname<char16_t, char8_t, mbstate_t>;
extern template class __attribute__((__visibility__0)) codecvt_byname<char32_t, char8_t, mbstate_t>;
template <size_t _Np>
struct __narrow_to_utf8 ;
template <>
struct __narrow_to_utf8<8> ;
template <>
struct __attribute__((__visibility__0)) __narrow_to_utf8<16> : public codecvt<char16_t, char, mbstate_t> {};
template <>
struct __attribute__((__visibility__0)) __narrow_to_utf8<32> : public codecvt<char32_t, char, mbstate_t> {};
template <size_t _Np>
struct __widen_from_utf8 ;;
template <>
struct __widen_from_utf8<8> ;;
template <>
struct __attribute__((__visibility__0)) __widen_from_utf8<16> : public codecvt<char16_t, char, mbstate_t> {};
template <>
struct __attribute__((__visibility__0)) __widen_from_utf8<32> : public codecvt<char32_t, char, mbstate_t> {};
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
class __attribute__((__visibility__0)) numpunct_byname<char> : public numpunct<char> {};
template <>
class __attribute__((__visibility__0)) numpunct_byname<wchar_t> : public numpunct<wchar_t> {
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
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _CharT>
  requires same_as<typename _Tp::__container, vector<bool, typename _Tp::__container::allocator_type>>
struct formatter<_Tp, _CharT> ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum class endian ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
namespace Hyprutils::Memory {
     ;
     ;
     ;
    namespace Math {
        enum eTransform {
            
            
            
            
        };
    }
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <__fmt_char_type _CharT>
__attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr const _CharT* __statically_widen ;
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
struct __packed_format_arg_store<_Context, 0> ;
template <class _Context, size_t _Np>
struct __unpacked_format_arg_store ;
}
template <class _Context, class... _Args>
struct __format_arg_store ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Context>
class basic_format_args ;;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Rp, class _CharT>
concept __const_formattable_range =
    ranges::input_range<const _Rp> && formattable<ranges::range_reference_t<const _Rp>, _CharT>;
template <class _Rp, class _CharT>
using __fmt_maybe_const  = conditional_t<__const_formattable_range<_Rp, _CharT>, const _Rp, _Rp>;
enum class range_format { disabled, map, set, sequence, string, debug_string };
template <class _Rp>
struct __instantiated_the_primary_template_of_format_kind;
template <class _Rp>
constexpr range_format format_kind =  {};
template <ranges::input_range _Rp>
  requires same_as<_Rp, remove_cvref_t<_Rp>>
inline constexpr range_format format_kind<_Rp> = [] {
  if constexpr (same_as<remove_cvref_t<ranges::range_reference_t<_Rp>>, _Rp>)
    return range_format::disabled;
  else if constexpr (requires { typename _Rp::key_type; }) ; else
    return range_format::sequence;
};
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
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
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
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace __escaped_output_table {
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __find_first_of {};
inline namespace __cpo {
inline constexpr auto find_first_of = __find_first_of{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
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
struct __for_each {};
inline namespace __cpo {
inline constexpr auto for_each = __for_each{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <__fmt_char_type _CharT>
struct __formatter_pointer ;
template <__fmt_char_type _CharT>
struct formatter<nullptr_t, _CharT> : public __formatter_pointer<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<void*, _CharT> : public __formatter_pointer<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<const void*, _CharT> : public __formatter_pointer<_CharT> {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <__fmt_char_type _CharT>
struct __formatter_string ;;
template <__fmt_char_type _CharT>
struct formatter<_CharT*, _CharT> : public formatter<const _CharT*, _CharT> {};
template <__fmt_char_type _CharT, size_t _Size>
struct formatter<_CharT[_Size], _CharT> : public __formatter_string<_CharT> {
  using _Base  = __formatter_string<_CharT>;
   ;
};
template <__fmt_char_type _CharT, class _Traits, class _Allocator>
struct formatter<basic_string<_CharT, _Traits, _Allocator>, _CharT> : public __formatter_string<_CharT> {
  using _Base  = __formatter_string<_CharT>;
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
namespace __format {}
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
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
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
namespace Hyprutils {
    namespace Math {
        class Vector2D {
          public:
            constexpr Vector2D(int xx, int yy)  ;
            double x = 0;
            double y = 0;
            constexpr bool operator==(const Vector2D& a) const ;
        };
    }
}
template <typename CharT>
struct std::formatter<Hyprutils::Math::Vector2D, CharT> : std::formatter<CharT> {};
namespace Hyprutils::Math {
    struct SBoxExtents {
        Vector2D topLeft;
        Vector2D bottomRight;
    };
    class CBox ;
}
namespace Hyprutils {
    namespace Math {
        class CRegion ;;
    }
}
 namespace __attribute__((__type_visibility__("default"))) std {
using terminate_handler = void ;
class __attribute__((__visibility__0)) exception_ptr;
}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
 ;
class __attribute__((__visibility__0)) __do_message;
class __attribute__((__visibility__0)) error_category {
public:
  friend class __attribute__((__visibility__0)) __do_message;
};
class __attribute__((__visibility__0)) __do_message : public error_category {
public:
};
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct is_error_code_enum : public false_type {};
template <class _Tp>
inline constexpr bool is_error_code_enum_v = is_error_code_enum<_Tp>::value;
namespace __adl_only {}
class __attribute__((__visibility__0)) error_code {
  int __val_;
  const error_category* __cat_;
public:
   ;
   ;
};
template <>
struct hash<error_code> : public __unary_function<error_code, size_t> {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__0)) system_error : public runtime_error {
  error_code __ec_;
public:
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum __legacy_memory_order {       };
using __memory_order_underlying_t  = __underlying_type_t<__legacy_memory_order>;
enum class memory_order : __memory_order_underlying_t ;
static_assert(is_same<__underlying_type_t<memory_order>, __memory_order_underlying_t>::value,
              "unexpected underlying type for std::memory_order");
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <typename _Tp>
struct __cxx_atomic_base_impl ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
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
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <typename _Tp, typename _Base = __cxx_atomic_base_impl<_Tp> >
struct __cxx_atomic_impl : public _Base {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using __cxx_contention_t  = int32_t;
using __cxx_atomic_contention_t  = __cxx_atomic_impl<__cxx_contention_t>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <intmax_t _Xp, intmax_t _Yp>
inline const intmax_t __static_gcd = __static_gcd<_Yp, _Xp % _Yp>;
template <intmax_t _Xp>
inline const intmax_t __static_gcd<_Xp, 0> = _Xp;
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
class __ll_add<_Xp, _Yp, 0> ;
template <intmax_t _Xp, intmax_t _Yp>
class __ll_add<_Xp, _Yp, -1> ;;
template <intmax_t _Xp, intmax_t _Yp, intmax_t = __static_sign<_Yp> >
class __ll_sub;
template <intmax_t _Xp, intmax_t _Yp>
class __ll_sub<_Xp, _Yp, 1> ;;
template <intmax_t _Xp, intmax_t _Yp>
class __ll_mul {
  static const intmax_t nan = 0;
  static const intmax_t min = nan + 1;
  static const intmax_t max = -min;
  static const intmax_t __a_x = __static_abs<_Xp>;
  static const intmax_t __a_y = __static_abs<_Yp>;
public:
  static const intmax_t value = _Xp * _Yp;
};
template <intmax_t _Yp>
class __ll_mul<0, _Yp> ;
template <intmax_t _Xp>
class __ll_mul<_Xp, 0> ;
template <>
class __ll_mul<0, 0> ;;
template <intmax_t _Xp, intmax_t _Yp>
class __ll_div ;;
template <intmax_t _Num, intmax_t _Den = 1>
class ratio {
  static constexpr const intmax_t __na = __static_abs<_Num>;
  static constexpr const intmax_t __da = __static_abs<_Den>;
  static constexpr const intmax_t __s = __static_sign<_Num> * __static_sign<_Den>;
  static constexpr const intmax_t __gcd = __static_gcd<__na, __da>;
public:
  static inline constexpr const intmax_t num = __s * __na / __gcd;
  static inline constexpr const intmax_t den = __da / __gcd;
  typedef ratio type;
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
public:
  typedef typename ratio< __ll_mul<_R1::num / __gcd_n1_n2, _R2::den / __gcd_d1_d2>::value,
                          __ll_mul<_R2::num / __gcd_n1_n2, _R1::den / __gcd_d1_d2>::value >::type type;
};
template <class _R1, class _R2>
using ratio_divide = typename __ratio_divide<_R1, _R2>::type;
template <class _R1, class _R2>
struct __ratio_add ;;
template <class _R1, class _R2>
using ratio_add = typename __ratio_add<_R1, _R2>::type;
template <class _R1, class _R2>
struct __ratio_subtract ;
template <class _R1, class _R2>
using ratio_subtract = typename __ratio_subtract<_R1, _R2>::type;
template <class _R1, class _R2>
struct ratio_equal : _BoolConstant<0> {};
template <class _R1, class _R2>
struct ratio_not_equal : _BoolConstant<!ratio_equal<_R1, _R2>::value> {};
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
struct __ratio_less<_R1, _R2, -1LL, -1LL> ;
template <class _R1, class _R2>
struct ratio_less : _BoolConstant<__ratio_less<_R1, _R2>::value> {};
template <class _R1, class _R2>
struct ratio_greater : _BoolConstant<ratio_less<_R2, _R1>::value> {};
template <class _R1, class _R2>
struct ratio_greater_equal : _BoolConstant<!ratio_less<_R1, _R2>::value> {
};
template <class _R1, class _R2>
using __ratio_gcd  = ratio<__static_gcd<_R1::num, _R2::num>, __static_lcm<_R1::den, _R2::den> >;
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
struct __duration_cast<_FromDuration, _ToDuration, _Period, true, true> ;
template <class _FromDuration, class _ToDuration, class _Period>
struct __duration_cast<_FromDuration, _ToDuration, _Period, true, false> ;
template <class _FromDuration, class _ToDuration, class _Period>
struct __duration_cast<_FromDuration, _ToDuration, _Period, false, true> ;
template <class _FromDuration, class _ToDuration, class _Period>
struct __duration_cast<_FromDuration, _ToDuration, _Period, false, false> ;;
 ;
template <class _Rep>
struct treat_as_floating_point : is_floating_point<_Rep> {};
 ;
template <class _Rep, class _Period>
class duration {
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
inline namespace chrono_literals {}
}
namespace chrono {
using namespace literals::chrono_literals;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
template <class _Clock, class _Duration = typename _Clock::duration>
class time_point {
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
namespace chrono {}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class __attribute__((__visibility__0)) steady_clock {
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
class __attribute__((__visibility__0)) system_clock {
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
namespace chrono {}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
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
                          __void_t<decltype(__atomic_waitable_traits<__decay_t<_Tp> >::__atomic_load),
                                   decltype(__atomic_waitable_traits<__decay_t<_Tp> >::__atomic_contention_address)> > : true_type {};
template <class _AtomicWaitable, class _Poll>
struct __atomic_wait_backoff_impl ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  remove_volatile ;;
template <class _Tp>
using __remove_volatile_t  = __remove_volatile(_Tp);
template <class _Tp>
using remove_volatile_t = __remove_volatile_t<_Tp>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, bool = is_integral<_Tp>::value && !is_same<_Tp, bool>::value>
struct __atomic_base
{};
template <class _Tp, bool _IsIntegral>
struct __atomic_waitable_traits<__atomic_base<_Tp, _IsIntegral> > ;
template <typename _Tp>
struct __check_atomic_mandates {
  using type  = _Tp;
};
template <class _Tp>
struct atomic : public __atomic_base<typename __check_atomic_mandates<_Tp>::type> {
  using __base  = __atomic_base<_Tp>;
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) constexpr atomic(_Tp __d)  ;
};
template <class _Tp>
struct atomic<_Tp*> : public __atomic_base<_Tp*> {};
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
  using __base  = __atomic_base<_Tp>;
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
  class __attribute__((__visibility__0)) failure;
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
  enum seekdir {    };
  class __attribute__((__visibility__0)) Init;
  enum event {    };
  typedef void (*event_callback);
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
class __attribute__((__visibility__0)) ios_base::failure : public system_error {
public:
};
class __attribute__((__visibility__0)) ios_base::Init {};
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
protected:
private:
  basic_ostream<char_type, traits_type>* __tie_;
  using _FillType  = _SentinelValueFill<traits_type>;
  mutable _FillType __fill_;
};
extern template class __attribute__((__visibility__0)) basic_ios<char>;
extern template class __attribute__((__visibility__0)) basic_ios<wchar_t>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct __has_array_cookie : _Not<is_trivially_destructible<_Tp> > {};
struct __itanium_array_cookie ;
template <class _Tp>
struct  __arm_array_cookie ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct default_delete ;
template <class _Tp>
struct default_delete ;
template <class _Deleter>
inline const bool __is_default_deleter_v = false;

template <class _Deleter>
struct __unique_ptr_deleter_sfinae ;
template <class _Deleter>
struct __unique_ptr_deleter_sfinae ;;
template <class _Tp, class _Dp = default_delete<_Tp> >
class unique_ptr ;
struct __unique_ptr_array_bounds_stateless {};
struct __unique_ptr_array_bounds_stored ;
template <class _Tp, class _Dp>
class unique_ptr {
public:
  typedef _Tp element_type;
  typedef _Dp deleter_type;
  using pointer = __pointer<_Tp, deleter_type>;
  using __trivially_relocatable  = __conditional_t<
      __libcpp_is_trivially_relocatable<pointer>::value && __libcpp_is_trivially_relocatable<deleter_type>::value,
      unique_ptr,
      void>;
  using __replaceable  =
      __conditional_t<__is_replaceable_v<pointer> && __is_replaceable_v<deleter_type>, unique_ptr, void>;
private:
  template <class _Up, class _OtherDeleter>
  friend class unique_ptr;
  using _BoundsChecker  = __unique_ptr_array_bounds_stateless;
  [[__no_unique_address__]] _BoundsChecker __checker_;
  template <class _From>
  struct _CheckArrayPointerConversion : is_same<_From, pointer> {};
  template <class _FromElem>
  struct _CheckArrayPointerConversion<_FromElem*>
      : integral_constant<bool,
                          is_same<_FromElem*, pointer>::value ||
                              0 > {};
  typedef __unique_ptr_deleter_sfinae<_Dp> _DeleterSFINAE;
  template <bool _Dummy>
  using _BadRValRefType  = typename __dependent_type<_DeleterSFINAE, _Dummy>::__bad_rval_ref_type;
  template <bool _Dummy, class _Deleter = typename __dependent_type< __type_identity<deleter_type>, _Dummy>::type>
  using _EnableIfDeleterDefaultConstructible  =
      __enable_if_t<is_default_constructible<_Deleter>::value && !is_pointer<_Deleter>::value>;
  template <class _ArgType>
  using _EnableIfDeleterConstructible  = __enable_if_t<is_constructible<deleter_type, _ArgType>::value>;
  template <class _Pp>
  using _EnableIfPointerConvertible  = __enable_if_t< _CheckArrayPointerConversion<_Pp>::value >;
  template <class _UPtr, class _Up, class _ElemT = typename _UPtr::element_type>
  using _EnableIfMoveConvertible  =
      __enable_if_t< is_array<_Up>::value && is_same<pointer, element_type*>::value &&
                     is_same<typename _UPtr::pointer, _ElemT*>::value &&
                     is_convertible<_ElemT , element_type >::value >;
  template <class _UDel>
  using _EnableIfDeleterConvertible  =
      __enable_if_t< (is_reference<_Dp>::value && is_same<_Dp, _UDel>::value) ||
                     (!is_reference<_Dp>::value && is_convertible<_UDel, _Dp>::value) >;
  template <class _UDel>
  using _EnableIfDeleterAssignable  = __enable_if_t< is_assignable<_Dp&, _UDel&&>::value >;
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
 ;
 ;
 ;
 ;
 ;
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
struct hash;
template <class _Tp, class _Dp>
struct hash<__enable_hash_helper< unique_ptr<_Tp, _Dp>, typename unique_ptr<_Tp, _Dp>::pointer> >
;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits>
class basic_streambuf {
public:
  typedef _CharT char_type;
  typedef _Traits traits_type;
  typedef typename traits_type::int_type int_type;
  typedef typename traits_type::pos_type pos_type;
  typedef typename traits_type::off_type off_type;
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
extern template class __attribute__((__visibility__0)) basic_streambuf<char>;
extern template class __attribute__((__visibility__0)) basic_streambuf<wchar_t>;
} }
 namespace __attribute__((__type_visibility__0)) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT>
using _IsCharLikeType  =
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
class bitset : private __bitset<_Size == 0 /  + 1, _Size> {
public:
  static const unsigned __n_words = _Size == 0 /  + 1;
  typedef __bitset<__n_words, _Size> __base;
  typedef typename __base::reference reference;
  typedef typename __base::__const_reference __const_reference;
   ;
};
 ;
 ;
 ;
template <size_t _Size>
struct hash<bitset<_Size> > : public __unary_function<bitset<_Size>, size_t> {};
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
protected:
public:
  class sentry;
   ;
   ;
protected:
};
template <class _CharT, class _Traits>
class basic_ostream<_CharT, _Traits>::sentry {}
 ;
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
 namespace __attribute__((__type_visibility__("default"))) std {}
namespace Hyprutils {
    namespace Math {
        class CBox;
        class Vector2D;
        class Mat3x3 ;
    }
}
using namespace Hyprutils::Math;
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
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
struct __is_valid_bind_return<_Fp, const tuple<_BoundArgs...>, _TupleUj> ;;
template <class _Fp, class _BoundArgs, class _TupleUj, bool = __is_valid_bind_return<_Fp, _BoundArgs, _TupleUj>::value>
struct __bind_return;
template <class _Fp, class... _BoundArgs, class _TupleUj>
struct __bind_return<_Fp, tuple<_BoundArgs...>, _TupleUj, true> ;
 ;
template <class _Fp, class... _BoundArgs>
class __bind : public __weak_result_type<__decay_t<_Fp> > {
protected:
  using _Fd  = __decay_t<_Fp>;
  typedef tuple<__decay_t<_BoundArgs>...> _Td;
private:
  _Fd __f_;
  _Td __bound_args_;
  typedef typename __make_tuple_indices<sizeof...(_BoundArgs)>::type __indices;
};
template <class _Fp, class... _BoundArgs>
struct is_bind_expression<__bind<_Fp, _BoundArgs...> > : public true_type {};
template <class _Rp, class _Fp, class... _BoundArgs>
class __bind_r : public __bind<_Fp, _BoundArgs...> {};
template <class _Rp, class _Fp, class... _BoundArgs>
struct is_bind_expression<__bind_r<_Rp, _Fp, _BoundArgs...> > : public true_type {};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Fp>
struct __strip_signature;
template <class _Rp, class... _Args>
struct __strip_signature<_Rp (_Args...)> ;
template <class _Rp, class... _Args>
struct __strip_signature<_Rp (_Args...) noexcept> ;;
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
class __attribute__((__visibility__0)) bad_function_call : public exception {};
template <class _Fp>
class function;
namespace __function {
template <class _Rp>
struct __maybe_derive_from_unary_function ;;
template <class _Rp, class _A1>
struct __maybe_derive_from_unary_function<_Rp(_A1)> : public __unary_function<_A1, _Rp> {};
template <class _Rp>
struct __maybe_derive_from_binary_function {};
template <class _Rp, class _A1, class _A2>
struct __maybe_derive_from_binary_function<_Rp(_A1, _A2)> : public __binary_function<_A1, _A2, _Rp> {};
 ;
 ;
 ;
 ;
}
namespace __function {
template <class _Fp>
class __base;
template <class _Rp, class... _ArgTypes>
class __base<_Rp(_ArgTypes...)> ;
template <class _FD, class _FB>
class __func;
template <class _Fp, class _Rp, class... _ArgTypes>
class __func<_Fp, _Rp(_ArgTypes...)> : public __base<_Rp> {};
template <class _Fp>
class __value_func;
template <class _Rp, class... _ArgTypes>
class __value_func<_Rp(_ArgTypes...)> {
  typename aligned_storage<3 * sizeof(void*)>::type __buf_;
  typedef __base<_Rp> __func;
  __func* __f_;
public:
  template <class _Fp, __enable_if_t<!is_same<__decay_t<_Fp>, __value_func>::value, int> = 0>
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne210108"))) explicit __value_func(_Fp&& __f)  ;
   ;
};
union __policy_storage {};
template <typename _Fun>
struct __use_small_storage
    : public integral_constant<
          bool,
          sizeof(_Fun) <= sizeof(__policy_storage)&& alignof(_Fun) <= alignof(__policy_storage) &&
              is_trivially_copy_constructible<_Fun>::value && is_trivially_destructible<_Fun>::value> {};
struct __policy ;
template <typename _Tp>
using __fast_forward  = __conditional_t<is_scalar<_Tp>::value, _Tp, _Tp&&>;
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
  using _EnableIfLValueCallable  = __enable_if_t<__callable<_Fp&>::value>;
public:
  typedef _Rp result_type;
  template <class _Fp, class = _EnableIfLValueCallable<_Fp>>
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) function(_Fp);
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
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Alloc>
class __allocator_destructor ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__0)) bad_weak_ptr : public std::exception {
};
template <class _Tp>
class weak_ptr;
template <class _Tp, class _Dp, class _Alloc>
class __shared_ptr_pointer : public __shared_weak_count {
  struct {};
public:
private:
};
struct __for_overwrite_tag ;
template <class _Tp, class _Alloc>
struct __shared_ptr_emplace : __shared_weak_count {
  using __value_type  = __remove_cv_t<_Tp>;
    ;
    ;
private:
   ;
   ;
  struct _Storage ;
  _Storage __storage_;
};
struct __shared_ptr_dummy_rebind_allocator_type;
template 
class allocator<__shared_ptr_dummy_rebind_allocator_type> ;
template <class _Tp>
class enable_shared_from_this;
template <class _Yp, class _Tp>
struct __bounded_convertible_to_unbounded : false_type {};
template <class _Up, std::size_t _Np, class _Tp>
struct __bounded_convertible_to_unbounded<_Up[_Np], _Tp> : is_same<__remove_cv_t<_Tp>, _Up> {};
template <class _Yp, class _Tp>
struct __compatible_with : _Or< is_convertible<_Yp*, _Tp*>, __bounded_convertible_to_unbounded<_Yp, _Tp> > {};
template <class _Yp, class _Tp, class = void>
struct __raw_pointer_compatible_with : _And< _Not<is_array<_Tp>>, is_convertible<_Yp*, _Tp*> > {};
template <class _Yp, class _Up, std::size_t _Np>
struct __raw_pointer_compatible_with<_Yp, _Up[_Np], __enable_if_t< is_convertible<_Yp , _Up >::value> >
    : true_type {};
template <class _Yp, class _Up>
struct __raw_pointer_compatible_with<_Yp, _Up, __enable_if_t< is_convertible<_Yp , _Up >::value> >
    : true_type {};
template <class _Ptr, class = void>
struct __is_array_deletable : false_type {};
template <class _Ptr>
struct __is_array_deletable<_Ptr, decltype(delete std::declval<_Ptr>)> : true_type {};
template <class _Dp, class _Pt, class = decltype(std::declval<_Dp>)>
true_type __well_formed_deleter_test;
;
template <class _Dp, class _Pt>
struct __well_formed_deleter : decltype(std::__well_formed_deleter_test<_Dp, _Pt>) {};
template <class _Dp, class _Yp, class _Tp>
struct __shared_ptr_deleter_ctor_reqs ;
template <class _Dp>
using __shared_ptr_nullptr_deleter_ctor_reqs  =
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
struct __unbounded_array_control_block : __shared_weak_count {
private:
   _Alloc __alloc_;
  size_t __count_;
  union {};
};
 ;
template <class _Tp, class _Alloc>
struct __bounded_array_control_block;
template <class _Tp, size_t _Count, class _Alloc>
struct __bounded_array_control_block<_Tp[_Count], _Alloc> : __shared_weak_count {};
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
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
struct owner_less : __binary_function<shared_ptr<_Tp>, shared_ptr<_Tp>, bool> {};
template <class _Tp>
struct owner_less<weak_ptr<_Tp> > : __binary_function<weak_ptr<_Tp>, weak_ptr<_Tp>, bool> {};
template 
struct owner_less<void> ;
template <class _Tp>
class enable_shared_from_this ;;
template <class _Tp>
struct hash;
template <class _Tp>
struct hash ;
;
class __attribute__((__visibility__0)) __sp_mut ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
using __remove_const_ref_t  = __remove_const_t<__libcpp_remove_reference_t<_Tp> >;
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
    : __conditional_t<_IsSame<__remove_const_t<_First>, _Key>::value, __extract_key_first_tag, __extract_key_fail_tag> {};
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
  __next_pointer __next_;
};
template <class _Tp>
struct __get_hash_node_value_type ;;
template <class _Key, class _Tp>
struct __get_hash_node_value_type<__hash_value_type<_Key, _Tp> > {
  using type  = pair<const _Key, _Tp>;
};
template <class _Tp>
using __get_hash_node_value_type_t  = typename __get_hash_node_value_type<_Tp>::type;
template <class _Tp, class _VoidPtr>
struct __hash_node : public __hash_node_base< __rebind_pointer_t<_VoidPtr, __hash_node<_Tp, _VoidPtr> > > {};
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
  using __node_value_type  = __get_hash_node_value_type_t<_Tp>;
  typedef __rebind_pointer_t<_VoidPtr, __node_value_type> __node_value_type_pointer;
  typedef __rebind_pointer_t<_VoidPtr, const __node_value_type> __const_node_value_type_pointer;
private:
};
template <class _HashIterator>
struct __hash_node_types_from_iterator;
template <class _NodePtr>
struct __hash_node_types_from_iterator : __hash_node_types<_NodePtr> {};
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
    __attribute__((__aligned__)) size_type __size_;  ::std::__compressed_pair_padding<size_type> __padding1_581_;  allocator_type __alloc_;  ::std::__compressed_pair_padding<allocator_type> __padding2_581_; 
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
private:
  typedef __rebind_alloc<__node_traits, __next_pointer> __pointer_allocator;
  typedef __bucket_list_deallocator<__pointer_allocator> __bucket_list_deleter;
  typedef unique_ptr<__next_pointer[], __bucket_list_deleter> __bucket_list;
  typedef allocator_traits<__pointer_allocator> __pointer_alloc_traits;
  typedef typename __bucket_list_deleter::pointer __node_pointer_pointer;
  __bucket_list __bucket_list_;
  struct {  __attribute__((__aligned__0)) size_type __size_;  ::std::__compressed_pair_padding<size_type> __padding1_744_; [[__no_unique_address__]] hasher __hasher_; [[__no_unique_address__]] ::std::__compressed_pair_padding<hasher> __padding2_744_; };
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
using __range_mapped_type  = typename ranges::range_value_t<_Range>::second_type;
template <ranges::input_range _Range>
using __range_to_alloc_type  =
    pair<const typename ranges::range_value_t<_Range>::first_type, typename ranges::range_value_t<_Range>::second_type>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _NodeType, class _Alloc>
struct __generic_container_node_destructor;
template <class _NodeType, class _Alloc, template <class, class> class _MapOrSetSpecifics>
class __basic_node_handle
    : public _MapOrSetSpecifics< _NodeType, __basic_node_handle<_NodeType, _Alloc, _MapOrSetSpecifics>> {};
template <class _NodeType, class _Derived>
struct __set_node_handle_specifics ;
template <class _NodeType, class _Derived>
struct __map_node_handle_specifics ;
template <class _NodeType, class _Alloc>
using __set_node_handle  = __basic_node_handle< _NodeType, _Alloc, __set_node_handle_specifics>;
template <class _NodeType, class _Alloc>
using __map_node_handle  = __basic_node_handle< _NodeType, _Alloc, __map_node_handle_specifics>;
template <class _Iterator, class _NodeType>
struct __insert_return_type ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Key,
          class _Cp,
          class _Hash,
          class _Pred,
          bool = is_empty<_Hash>::value && !__libcpp_is_final<_Hash>::value>
class __unordered_map_hasher : private _Hash {};
template <class _Key, class _Cp, class _Hash, class _Pred>
class __unordered_map_hasher<_Key, _Cp, _Hash, _Pred, false> ;
 ;
template <class _Key,
          class _Cp,
          class _Pred,
          class _Hash,
          bool = is_empty<_Pred>::value && !__libcpp_is_final<_Pred>::value>
class __unordered_map_equal : private _Pred {};
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
  __attribute__((__visibility__)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__)) unordered_map;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) unordered_map(initializer_list<value_type> __il);
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
struct __container_traits<unordered_multimap<_Key, _Tp, _Hash, _Pred, _Alloc> > ;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class any;
;
;
namespace __any_imp {}
class any {};
namespace __any_imp {}
 ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
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
 namespace __attribute__((__type_visibility__("default"))) std {}
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
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _UIntType, _UIntType _Xp, size_t _Rp>
struct __log2_imp;
template <unsigned long long _Xp, size_t _Rp>
struct __log2_imp<unsigned long long, _Xp, _Rp> ;
template <__uint128_t _Xp, size_t _Rp>
struct __log2_imp<__uint128_t, _Xp, _Rp> ;;
template <class _UIntType, _UIntType _Xp>
struct __log2 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__0)) __libcpp_debug_randomizer ;;
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
struct __radix_sort_traits ;
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
using __unsigned_integer_of_size_t  = typename __unsigned_integer_of_size<_Size>::type;
template <class _Sc>
using __unsigned_representation_for_t  = __unsigned_integer_of_size_t<sizeof(_Sc)>;
 ;
 ;
;
template <class _Tp, class = void>
struct __low_byte_fn ;
 ;
 ;
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
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
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
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
inline namespace __cpo {
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __any_of {};
inline namespace __cpo {
inline constexpr auto any_of = __any_of{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __binary_search {};
inline namespace __cpo {
inline constexpr auto binary_search = __binary_search{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __clamp {};
inline namespace __cpo {
inline constexpr auto clamp = __clamp{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __contains {};
inline namespace __cpo {
inline constexpr auto contains = __contains{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Ip, class _Op>
using copy_backward_result = in_out_result<_Ip, _Op>;
struct __copy_backward {};
inline namespace __cpo {
inline constexpr auto copy_backward = __copy_backward{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Ip, class _Op>
using copy_if_result = in_out_result<_Ip, _Op>;
struct __copy_if {};
inline namespace __cpo {
inline constexpr auto copy_if = __copy_if{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __count {};
inline namespace __cpo {
inline constexpr auto count = __count{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __count_if {};
inline namespace __cpo {
inline constexpr auto count_if = __count_if{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __equal {};
inline namespace __cpo {
inline constexpr auto equal = __equal{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __equal_range {};
inline namespace __cpo {
inline constexpr auto equal_range = __equal_range{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __fill {};
inline namespace __cpo {
inline constexpr auto fill = __fill{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __find_end {};
inline namespace __cpo {
inline constexpr auto find_end = __find_end{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _Iter, class _Func>
using for_each_n_result = in_fun_result<_Iter, _Func>;
struct __for_each_n {};
inline namespace __cpo {
inline constexpr auto for_each_n = __for_each_n{};
}
}
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
namespace ranges {
struct __generate {};
inline namespace __cpo {
inline constexpr auto generate = __generate{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __includes {};
inline namespace __cpo {
inline constexpr auto includes = __includes{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __inplace_merge {};
inline namespace __cpo {
inline constexpr auto inplace_merge = __inplace_merge{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __is_heap {};
inline namespace __cpo {
inline constexpr auto is_heap = __is_heap{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __is_heap_until {};
inline namespace __cpo {
inline constexpr auto is_heap_until = __is_heap_until{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __is_partitioned {};
inline namespace __cpo {
inline constexpr auto is_partitioned = __is_partitioned{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __is_permutation {};
inline namespace __cpo {
inline constexpr auto is_permutation = __is_permutation{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
 ;
struct __is_sorted_until {};
inline namespace __cpo {
inline constexpr auto is_sorted_until = __is_sorted_until{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __is_sorted {};
inline namespace __cpo {
inline constexpr auto is_sorted = __is_sorted{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __lexicographical_compare {};
inline namespace __cpo {
inline constexpr auto lexicographical_compare = __lexicographical_compare{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __lower_bound {};
inline namespace __cpo {
inline constexpr auto lower_bound = __lower_bound{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __make_heap {};
inline namespace __cpo {
inline constexpr auto make_heap = __make_heap{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __max {};
inline namespace __cpo {
inline constexpr auto max = __max{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __max_element {};
inline namespace __cpo {
inline constexpr auto max_element = __max_element{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter1, class _InIter2, class _OutIter>
using merge_result = in_in_out_result<_InIter1, _InIter2, _OutIter>;
struct __merge {};
inline namespace __cpo {
inline constexpr auto merge = __merge{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __min_element {};
inline namespace __cpo {
inline constexpr auto min_element = __min_element{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using move_result = in_out_result<_InIter, _OutIter>;
struct __move ;
inline namespace __cpo {}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using move_backward_result = in_out_result<_InIter, _OutIter>;
struct __move_backward {};
inline namespace __cpo {
inline constexpr auto move_backward = __move_backward{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter>
using next_permutation_result = in_found_result<_InIter>;
struct __next_permutation {};
inline namespace __cpo {
constexpr inline auto next_permutation = __next_permutation{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __none_of {};
inline namespace __cpo {
inline constexpr auto none_of = __none_of{};
}
}
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
namespace ranges {
struct __nth_element {};
inline namespace __cpo {
inline constexpr auto nth_element = __nth_element{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __partial_sort {};
inline namespace __cpo {
inline constexpr auto partial_sort = __partial_sort{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using partial_sort_copy_result = in_out_result<_InIter, _OutIter>;
struct __partial_sort_copy {};
inline namespace __cpo {
inline constexpr auto partial_sort_copy = __partial_sort_copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __partition {};
inline namespace __cpo {
inline constexpr auto partition = __partition{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __partition_point ;
inline namespace __cpo {}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __pop_heap {};
inline namespace __cpo {
inline constexpr auto pop_heap = __pop_heap{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter>
using prev_permutation_result = in_found_result<_InIter>;
struct __prev_permutation {};
inline namespace __cpo {
constexpr inline auto prev_permutation = __prev_permutation{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __push_heap {};
inline namespace __cpo {
inline constexpr auto push_heap = __push_heap{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
 ;
struct __remove_if {};
inline namespace __cpo {
inline constexpr auto remove_if = __remove_if{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __remove {};
inline namespace __cpo {
inline constexpr auto remove = __remove{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using remove_copy_result = in_out_result<_InIter, _OutIter>;
struct __remove_copy {};
inline namespace __cpo {
inline constexpr auto remove_copy = __remove_copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
 ;
struct __replace_if {};
inline namespace __cpo {
inline constexpr auto replace_if = __replace_if{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __replace {};
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
struct __replace_copy_if {};
inline namespace __cpo {
inline constexpr auto replace_copy_if = __replace_copy_if{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using replace_copy_result = in_out_result<_InIter, _OutIter>;
struct __replace_copy {};
inline namespace __cpo {
inline constexpr auto replace_copy = __replace_copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __reverse {};
inline namespace __cpo {
inline constexpr auto reverse = __reverse{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using reverse_copy_result = in_out_result<_InIter, _OutIter>;
struct __reverse_copy {};
inline namespace __cpo {
inline constexpr auto reverse_copy = __reverse_copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __rotate {};
inline namespace __cpo {
inline constexpr auto rotate = __rotate{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using rotate_copy_result = in_out_result<_InIter, _OutIter>;
struct __rotate_copy {};
inline namespace __cpo {
inline constexpr auto rotate_copy = __rotate_copy{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
namespace ranges {
template <class _InIter, class _OutIter>
using set_difference_result = in_out_result<_InIter, _OutIter>;
struct __set_difference ;
inline namespace __cpo {}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _InIter1, class _InIter2, class _OutIter>
using set_intersection_result = in_in_out_result<_InIter1, _InIter2, _OutIter>;
struct __set_intersection ;
inline namespace __cpo {}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __sort_heap {};
inline namespace __cpo {
inline constexpr auto sort_heap = __sort_heap{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __stable_partition {};
inline namespace __cpo {
inline constexpr auto stable_partition = __stable_partition{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __stable_sort {};
inline namespace __cpo {
inline constexpr auto stable_sort = __stable_sort{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
template <class _I1, class _I2>
using swap_ranges_result = in_in_result<_I1, _I2>;
struct __swap_ranges {};
inline namespace __cpo {
inline constexpr auto swap_ranges = __swap_ranges{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __unique {};
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
struct __unique_copy ;
inline namespace __cpo {}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __starts_with {};
inline namespace __cpo {
inline constexpr auto starts_with = __starts_with{};
}
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace ranges {
struct __ends_with {};
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
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
enum eIcons : uint8_t ;;
enum eRenderStage : uint8_t ;
enum eInputType : uint8_t ;
struct SCallbackInfo ;
enum eHyprCtlOutputFormat : uint8_t ;;
struct SHyprCtlCommand ;
struct SDispatchResult ;
using WINDOWID = int64_t;
using MONITORID = int64_t;
using WORKSPACEID = int64_t;
using HOOK_CALLBACK_FN = std::function<void>;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _CharT, class _Traits>
class basic_istream : virtual public basic_ios<_CharT, _Traits> {};
 ;
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
struct __is_istreamable<_Stream, _Tp, decltype(std::declval >> std::declval<_Tp>, void())> : true_type {};
 ;
template <class _CharT, class _Traits>
class basic_iostream : public basic_istream<_CharT, _Traits>, public basic_ostream<_CharT, _Traits> {};
extern template class __attribute__((__visibility__0)) basic_istream<char>;
extern template class __attribute__((__visibility__0)) basic_istream<wchar_t>;
extern template class __attribute__((__visibility__0)) basic_iostream<char>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
extern __attribute__((__visibility__("default"))) ostream clog;
} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
class __attribute__((__visibility__0)) time_base {
public:
  enum dateorder {      };
};
template <class _CharT>
class __time_get_c_storage {
protected:
  typedef basic_string<_CharT> string_type;
};
template <class _CharT, class _InputIterator = istreambuf_iterator<_CharT> >
class time_get : public locale::facet, public time_base, private __time_get_c_storage<_CharT> {
public:
  typedef _CharT char_type;
  typedef _InputIterator iter_type;
  typedef time_base::dateorder dateorder;
  typedef basic_string<char_type> string_type;
  static locale::id id;
protected:
private:
};
template <class _CharT, class _InputIterator>
locale::id time_get<_CharT, _InputIterator>::id;
extern template class __attribute__((__visibility__0)) time_get<char>;
extern template class __attribute__((__visibility__0)) time_get<wchar_t>;
class __attribute__((__visibility__0)) __time_get {
protected:
  __locale::__locale_t __loc_;
};
template <class _CharT>
class __time_get_storage : public __time_get {
protected:
  typedef basic_string<_CharT> string_type;
  string_type __weeks_;
  string_type __months_;
  string_type __am_pm_;
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
template <> __attribute__((__visibility__0)) time_base::dateorder __time_get_storage<char>::__do_date_order() const; template <> __attribute__((__visibility__0)) __time_get_storage<char>::__time_get_storage(const char*); template <> __attribute__((__visibility__0)) __time_get_storage<char>::__time_get_storage(const string&); template <> __attribute__((__visibility__0)) void __time_get_storage<char>::init(const ctype<char>&); template <> __attribute__((__visibility__0)) __time_get_storage<char>::string_type __time_get_storage<char>::__analyze( char, const ctype<char>&); extern template __attribute__((__visibility__)) time_base::dateorder __time_get_storage<char>::__do_date_order() const; extern template __attribute__((__visibility__)) __time_get_storage<char>::__time_get_storage(const char*); extern template __attribute__((__visibility__)) __time_get_storage<char>::__time_get_storage(const string&); extern template __attribute__((__visibility__)) void __time_get_storage<char>::init(const ctype<char>&); extern template __attribute__((__visibility__)) __time_get_storage<char>::string_type __time_get_storage<char>::__analyze(char, const ctype<char>&);
template <> __attribute__((__visibility__0)) time_base::dateorder __time_get_storage<wchar_t>::__do_date_order() const; template <> __attribute__((__visibility__0)) __time_get_storage<wchar_t>::__time_get_storage(const char*); template <> __attribute__((__visibility__0)) __time_get_storage<wchar_t>::__time_get_storage(const string&); template <> __attribute__((__visibility__0)) void __time_get_storage<wchar_t>::init(const ctype<wchar_t>&); template <> __attribute__((__visibility__0)) __time_get_storage<wchar_t>::string_type __time_get_storage<wchar_t>::__analyze( char, const ctype<wchar_t>&); extern template __attribute__((__visibility__)) time_base::dateorder __time_get_storage<wchar_t>::__do_date_order() const; extern template __attribute__((__visibility__)) __time_get_storage<wchar_t>::__time_get_storage(const char*); extern template __attribute__((__visibility__)) __time_get_storage<wchar_t>::__time_get_storage(const string&); extern template __attribute__((__visibility__)) void __time_get_storage<wchar_t>::init(const ctype<wchar_t>&); extern template __attribute__((__visibility__)) __time_get_storage<wchar_t>::string_type __time_get_storage<wchar_t>::__analyze(char, const ctype<wchar_t>&);
template <class _CharT, class _InputIterator = istreambuf_iterator<_CharT> >
class time_get_byname : public time_get<_CharT, _InputIterator>, private __time_get_storage<_CharT> {
public:
  typedef time_base::dateorder dateorder;
  typedef _InputIterator iter_type;
  typedef _CharT char_type;
  typedef basic_string<char_type> string_type;
protected:
private:
};
extern template class __attribute__((__visibility__0)) time_get_byname<char>;
extern template class __attribute__((__visibility__0)) time_get_byname<wchar_t>;
class __attribute__((__visibility__0)) __time_put {
  __locale::__locale_t __loc_;
protected:
};
template <class _CharT, class _OutputIterator = ostreambuf_iterator<_CharT> >
class time_put : public locale::facet, private __time_put {
public:
  typedef _CharT char_type;
  typedef _OutputIterator iter_type;
  static locale::id id;
protected:
};
template <class _CharT, class _OutputIterator>
locale::id time_put<_CharT, _OutputIterator>::id;
extern template class __attribute__((__visibility__0)) time_put<char>;
extern template class __attribute__((__visibility__0)) time_put<wchar_t>;
template <class _CharT, class _OutputIterator = ostreambuf_iterator<_CharT> >
class time_put_byname : public time_put<_CharT, _OutputIterator> {};
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
class __iom_t10 ;
 ;
 ;
 ;
 ;
template <class _CharT, class _Traits>
struct __attribute__((__visibility__0)) __quoted_output_proxy ;;
template <class _CharT, class _Traits, class _Allocator>
struct __attribute__((__visibility__0)) __quoted_proxy ;
template <class _CharT, class _Traits, class _Allocator>
__attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) __quoted_output_proxy<_CharT, _Traits>
__quoted ;
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
struct __can_convert_char<wchar_t> ;;
template <>
struct __can_convert_char<char8_t> ;;
template <>
struct __can_convert_char<char16_t> ;
template <>
struct __can_convert_char<char32_t> ;;
 ;
typedef u8string __u8_string;
struct _NullSentinel ;
template <class _Tp>
using _Void  = void;
template <class _Tp, class = void>
struct __is_pathable_string : public false_type {};
template <class _ECharT, class _Traits, class _Alloc>
struct __is_pathable_string< basic_string<_ECharT, _Traits, _Alloc>,
                             _Void<typename __can_convert_char<_ECharT>::__char_type> >
    : public __can_convert_char<_ECharT> {};
template <class _Source,
          class _DS = __decay_t<_Source>,
          class _UnqualPtrType = __remove_const_t<__remove_pointer_t<_DS> >,
          bool _IsCharPtr = is_pointer<_DS>::value && __can_convert_char<_UnqualPtrType>::value>
struct __is_pathable_char_array : false_type {};
template <class _Source, class _ECharT, class _UPtr>
struct __is_pathable_char_array<_Source, _ECharT*, _UPtr, true> : __can_convert_char<__remove_const_t<_ECharT> > {};
template <class _Iter, bool _IsIt = __has_input_iterator_category<_Iter>::value, class = void>
struct __is_pathable_iter : false_type {};
template <class _Iter>
struct __is_pathable_iter<
    _Iter,
    true,
    _Void<typename __can_convert_char< typename iterator_traits<_Iter>::value_type>::__char_type> >
    : __can_convert_char<typename iterator_traits<_Iter>::value_type> {};
template <class _Tp,
          bool _IsStringT = __is_pathable_string<_Tp>::value,
          bool _IsCharIterT = __is_pathable_char_array<_Tp>::value,
          bool _IsIterT = !_IsCharIterT && __is_pathable_iter<_Tp>::value>
struct __is_pathable : false_type {};
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
class __attribute__((__visibility__0)) path ;;
}} } }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
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
extern template class __attribute__((__visibility__0)) basic_ifstream<char>;
extern template class __attribute__((__visibility__0)) basic_ofstream<char>;
extern template class __attribute__((__visibility__0)) basic_filebuf<char>;
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
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 { inline namespace __fs {} } }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
struct local_t ;
template <class _Duration>
using local_time = time_point<local_t, _Duration>;
using local_seconds = local_time<seconds>;
using local_days = local_time<days>;
struct last_spec {};
inline constexpr last_spec last;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class day ;;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
template <class _Duration>
class hh_mm_ss ;;
;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class year ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class month {
private:
  unsigned char __m_;
public:
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) explicit inline constexpr month(unsigned __val) noexcept
      : __m_(static_cast<unsigned char>(__val)) {}
  ;
  ;
};
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
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) inline explicit constexpr weekday(unsigned __val) noexcept
      : __wd_(static_cast<unsigned char>(__val == 0)) {}
  ;
  ;
  ;
  ;
};
class weekday_indexed ;
class weekday_last ;
inline constexpr weekday Saturday{6};
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class month_weekday ;;
class month_weekday_last ;;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class month_day ;
class month_day_last ;
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
class year_month_day_last ;
}
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
namespace chrono {
class year_month_weekday ;
class year_month_weekday_last ;;
}
template <class _Tp>
concept __is_time_point = __is_specialization_v<_Tp, chrono::time_point>;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {} }
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
inline constexpr __fields __fields_chrono_fractional{};
inline constexpr __fields __fields_chrono{};
enum class __flags ;
template <class _CharT>
class __parser_chrono ;
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
struct __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) __time_zone ;
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
struct formatter<chrono::sys_time<_Duration>, _CharT> : public __formatter_chrono<_CharT> {};
template <class _Duration, __fmt_char_type _CharT>
struct formatter<chrono::file_time<_Duration>, _CharT> : public __formatter_chrono<_CharT> {};
template <class _Duration, __fmt_char_type _CharT>
struct formatter<chrono::local_time<_Duration>, _CharT> : public __formatter_chrono<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<chrono::day, _CharT> : public __formatter_chrono<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<chrono::month, _CharT> : public __formatter_chrono<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<chrono::year, _CharT> : public __formatter_chrono<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<chrono::weekday, _CharT> : public __formatter_chrono<_CharT> {};
template <__fmt_char_type _CharT>
struct formatter<chrono::weekday_indexed, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base  = __formatter_chrono<_CharT>;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::weekday_last, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base  = __formatter_chrono<_CharT>;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::month_day, _CharT> : public __formatter_chrono<_CharT> {
public:
public:
  using _Base  = __formatter_chrono<_CharT>;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::month_weekday, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base  = __formatter_chrono<_CharT>;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::month_weekday_last, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base  = __formatter_chrono<_CharT>;
   ;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::year_month, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base  = __formatter_chrono<_CharT>;
   ;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::year_month_day, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base  = __formatter_chrono<_CharT>;
   ;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::year_month_day_last, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base  = __formatter_chrono<_CharT>;
   ;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::year_month_weekday, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base  = __formatter_chrono<_CharT>;
   ;
};
template <__fmt_char_type _CharT>
struct formatter<chrono::year_month_weekday_last, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base  = __formatter_chrono<_CharT>;
   ;
};
template <class _Duration, __fmt_char_type _CharT>
struct formatter<chrono::hh_mm_ss<_Duration>, _CharT> : public __formatter_chrono<_CharT> {
public:
  using _Base  = __formatter_chrono<_CharT>;
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
typedef struct  __kernel_fd_set;
typedef void ;
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
typedef struct  __kernel_fsid_t;
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
typedef __signed__ __int128 __s128 __attribute__((aligned));
typedef unsigned __int128 __u128 __attribute__((aligned));
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
typedef long int __jmp_buf;
struct __jmp_buf_tag
  ;
enum
{};
enum
{};
enum
{
  
  
  
};
enum
{};
enum
{
  
  
};
enum
{
  
  
};
enum
{
  
  
};
struct _pthread_cleanup_buffer
;
enum
{
  
  
};
enum
{
  
  
};
extern "C" 
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
using __libcpp_timespec_t  = ::timespec;
typedef pthread_mutex_t __libcpp_mutex_t;
typedef pthread_mutex_t __libcpp_recursive_mutex_t;
typedef pthread_cond_t __libcpp_condvar_t;
typedef pthread_once_t __libcpp_exec_once_flag;
typedef pthread_t __libcpp_thread_id;
typedef pthread_t __libcpp_thread_t;
typedef pthread_key_t __libcpp_tls_key;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __attribute__((__visibility__0)) defer_lock_t {};
struct __attribute__((__visibility__0)) try_to_lock_t {};
struct __attribute__((__visibility__0)) adopt_lock_t {};
inline constexpr defer_lock_t defer_lock = defer_lock_t();
inline constexpr try_to_lock_t try_to_lock = try_to_lock_t();
inline constexpr adopt_lock_t adopt_lock = adopt_lock_t();
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
enum class cv_status;
 ;
 ;
class __attribute__((__visibility__0)) condition_variable ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Mutex>
class  lock_guard ;
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class __attribute__((__visibility__0)) recursive_mutex {
  __libcpp_recursive_mutex_t __m_;
public:
   ;
   ;
};
class __attribute__((__visibility__0)) recursive_timed_mutex ;;
 ;
 ;
 ;
 ;
 ;
template <class... _Mutexes>
class scoped_lock;
template <>
class scoped_lock<> ;
template <class _Mutex>
class  scoped_lock<_Mutex> ;
template <class... _MArgs>
class scoped_lock ;
;
} }
enum eLogLevel : int8_t ;
namespace Debug {
    inline int64_t* const* m_disableLogs = nullptr;
    inline int64_t* const* m_disableTime = nullptr;
    
    
    inline int64_t* const* m_coloredLogs = nullptr;
     ;
};
namespace Hyprgraphics {
    class CColor {
      public:
        struct SSRGB ;
        struct SHSL ;
        struct SOkLab {};
        struct xy ;
        struct XYZ ;
      private:
        double r = 0, g = 0, b = 0;
    };
    class CMatrix3 ;
    struct SPCPRimaries {
    };
};
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Smart, class _Pointer, class... _Args>
class out_ptr_t ;;
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
namespace ranges {
struct __uninitialized_default_construct {};
inline namespace __cpo {
inline constexpr auto uninitialized_default_construct = __uninitialized_default_construct{};
}
struct __uninitialized_default_construct_n {};
inline namespace __cpo {
inline constexpr auto uninitialized_default_construct_n = __uninitialized_default_construct_n{};
}
struct __uninitialized_value_construct {};
inline namespace __cpo {
inline constexpr auto uninitialized_value_construct = __uninitialized_value_construct{};
}
struct __uninitialized_value_construct_n {};
inline namespace __cpo {
inline constexpr auto uninitialized_value_construct_n = __uninitialized_value_construct_n{};
}
struct __uninitialized_fill {};
inline namespace __cpo {
inline constexpr auto uninitialized_fill = __uninitialized_fill{};
}
struct __uninitialized_fill_n {};
inline namespace __cpo {
inline constexpr auto uninitialized_fill_n = __uninitialized_fill_n{};
}
template <class _InputIterator, class _OutputIterator>
using uninitialized_copy_result = in_out_result<_InputIterator, _OutputIterator>;
struct __uninitialized_copy {};
inline namespace __cpo {
inline constexpr auto uninitialized_copy = __uninitialized_copy{};
}
template <class _InputIterator, class _OutputIterator>
using uninitialized_move_result = in_out_result<_InputIterator, _OutputIterator>;
struct __uninitialized_move {};
inline namespace __cpo {
inline constexpr auto uninitialized_move = __uninitialized_move{};
}
template <class _InputIterator, class _OutputIterator>
using uninitialized_move_n_result = in_out_result<_InputIterator, _OutputIterator>;
struct __uninitialized_move_n {};
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
decltype(0, true_type()) __convertible_to_const_pair_ref_impl;
;
template <class _Tp>
inline constexpr bool __convertible_to_const_pair_ref =
    decltype(__uses_allocator_detail::__convertible_to_const_pair_ref_impl<_Tp>)::value;
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
            class impl_base {};
        }
    }
}
namespace Hyprutils {
    namespace Memory {
        template <typename T>
        class CSharedPointer {
          public:
            template <typename X>
            using validHierarchy = std::enable_if_t<std::is_assignable_v<CSharedPointer&, X>, CSharedPointer&>;
            template <typename X>
            using isConstructible = std::enable_if_t<std::is_constructible_v<T&, X&>>;
              ;
            CSharedPointer  ;
             ;
             ;
             ;
            T* operator->() const ;
            Impl_::impl_base* impl_ = nullptr;
            void* m_data = nullptr;
          private:
        };
         ;
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
            using validHierarchy = std::enable_if_t<std::is_assignable_v<CUniquePointer&, X>, CUniquePointer&>;
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
            using validHierarchy = std::enable_if_t<std::is_assignable_v<CWeakPointer&, X>, CWeakPointer&>;
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
    CHyprColor;
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
  using type  = _Key;
};
template <class _Tp>
using __get_tree_key_type_t  = typename __get_tree_key_type<_Tp>::type;
template <class _Tp>
struct __get_node_value_type {
  using type  = _Tp;
};
template <class _Tp>
using __get_node_value_type_t  = typename __get_node_value_type<_Tp>::type;
template <class _NodePtr, class _NodeT = typename pointer_traits<_NodePtr>::element_type>
struct __tree_node_types;
template <class _Pointer>
class __tree_end_node {};
template <class _VoidPtr>
class 
__tree_node_base : public __tree_end_node<__rebind_pointer_t<_VoidPtr, __tree_node_base<_VoidPtr> > > {
public:
  using pointer = __rebind_pointer_t<_VoidPtr, __tree_node_base>;
  using __end_node_pointer  = __rebind_pointer_t<_VoidPtr, __tree_end_node<pointer> >;
  pointer __right_;
  __end_node_pointer __parent_;
  bool __is_black_;
};
template <class _Tp, class _VoidPtr>
class  __tree_node : public __tree_node_base<_VoidPtr> {
public:
  using __node_value_type  = __get_node_value_type_t<_Tp>;
  __node_value_type __value_;
};
template <class _Allocator>
class __tree_node_destructor ;
template <class _Tp, class _NodePtr, class _DiffType>
class __tree_iterator ;;
template <class _Tp, class _NodePtr, class _DiffType>
class __tree_const_iterator ;
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
  using __void_pointer  = typename __alloc_traits::void_pointer;
  using __node  = __tree_node<_Tp, __void_pointer>;
  using __node_pointer = __rebind_pointer_t<__void_pointer, __node>;
  using __node_base  = __tree_node_base<__void_pointer>;
  using __node_base_pointer  = __rebind_pointer_t<__void_pointer, __node_base>;
  using __end_node_t  = __tree_end_node<__node_base_pointer>;
  using __end_node_pointer  = __rebind_pointer_t<__void_pointer, __end_node_t>;
  using __parent_pointer  = __end_node_pointer;
  typedef __rebind_alloc<__alloc_traits, __node> __node_allocator;
  typedef allocator_traits<__node_allocator> __node_traits;
private:
  __end_node_pointer __begin_node_;
    __attribute__((__aligned__0)) __end_node_t __end_node_;  ::std::__compressed_pair_padding<__end_node_t> __padding1_854_;  __node_allocator __node_alloc_;  ::std::__compressed_pair_padding<__node_allocator> __padding2_854_; 
    __attribute__((__aligned__)) size_type __size_;  ::std::__compressed_pair_padding<size_type> __padding1_855_;  value_compare __value_comp_;  ::std::__compressed_pair_padding<value_compare> __padding2_855_; 
public:
public:
public:
  typedef __tree_iterator<_Tp, __node_pointer, difference_type> iterator;
  typedef __tree_const_iterator<_Tp, __node_pointer, difference_type> const_iterator;
   ;
   ;
   ;
   ;
   ;
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
private:
};
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
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
enum xkb_rmlvo_builder_flags {};
;
;
;
;
;
struct xkb_rule_names ;;
struct xkb_component_names ;;
;
;
enum xkb_keysym_flags {};
;
;
;
;
;
;
;
enum xkb_log_level {};
;
;
;
;
;
enum xkb_keymap_compile_flags {};
;
;
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
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
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
    
    
    
    
    
};
;
;
;
;
;
enum xkb_state_match {};
;
;
enum xkb_consumed_mode {
    
    
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
struct __static_max<_I0> ;;
template <size_t _I0, size_t _I1, size_t... _In>
struct __static_max<_I0, _I1, _In...> ;;
template <size_t _Len, class _Type0, class... _Types>
struct __attribute__((__deprecated__))  aligned_union ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  has_unique_object_representations
    : integral_constant<bool, __has_unique_object_representations(_Tp)> {};
template <class _Tp>
 inline constexpr bool has_unique_object_representations_v =
    __has_unique_object_representations(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  is_aggregate : integral_constant<bool, __is_aggregate(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_aggregate_v = __is_aggregate(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp>
struct  is_implicit_lifetime : bool_constant<__builtin_is_implicit_lifetime(_Tp)> {};
template <class _Tp>
 inline constexpr bool is_implicit_lifetime_v = __builtin_is_implicit_lifetime(_Tp);
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Tp, class _Up>
struct  reference_converts_from_temporary
    : public bool_constant<__reference_converts_from_temporary(_Tp, _Up)> {};
template <class _Tp, class _Up>
 inline constexpr bool reference_converts_from_temporary_v =
    __reference_converts_from_temporary(_Tp, _Up);
} }
namespace Hyprutils {
    namespace Signal {
        class CSignalBase;
        class CSignalListener ;;
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
enum eHIDType : uint8_t ;
class IHID {
  public:
    struct  m_events;
    std::string m_deviceName;
    std::string m_hlName;
};
namespace Aquamarine { class IPointer; };
class IPointer : public IHID {
  public:
    struct SMotionEvent ;
    struct SMotionAbsoluteEvent ;;
    struct SButtonEvent ;
    struct SAxisEvent ;;
    struct SSwipeBeginEvent ;
    struct SSwipeUpdateEvent ;
    struct SSwipeEndEvent ;
    struct SPinchBeginEvent ;;
    struct SPinchUpdateEvent ;
    struct SPinchEndEvent ;;
    struct SHoldBeginEvent ;
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
    std::optional<float> m_scrollFactor ;
    WP<IPointer> m_self;
};
namespace Time {
    using steady_tp = std::chrono::steady_clock::time_point;
    using system_tp = std::chrono::system_clock::time_point;
    using steady_dur = std::chrono::steady_clock::duration;
    using system_dur = std::chrono::system_clock::duration;
    steady_tp steadyNow();
};
class CEventLoopTimer ;
class CTimer ;
class CInputManager;
class CConfigManager;
class CPluginSystem;
class IKeyboard;
enum eMouseBindMode : int8_t;
struct SSubmap {
    std::string name = "";
    std::string reset = "";
};
struct SKeybind ;
enum eFocusWindowMode : uint8_t ;
struct SPressedKeyWithMods ;
enum eMultiKeyCase : uint8_t ;
class CKeybindManager {
  public:
    std::unordered_map<std::string, std::function<SDispatchResult>> m_dispatchers;
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
struct SSessionLockSurface ;;
struct SSessionLock ;
class CSessionLockManager ;
namespace Hyprutils {
    namespace String {
        class CVarList ;;
    }
}
using namespace Hyprutils::String;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Key,
          class _CP,
          class _Compare,
          bool = is_empty<_Compare>::value && !__libcpp_is_final<_Compare>::value>
class __map_value_compare : private _Compare {};
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
class __map_const_iterator ;
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
  class value_compare : public __binary_function<value_type, value_type, bool> {};
private:
  typedef std::__value_type<key_type, mapped_type> __value_type;
  typedef __map_value_compare<key_type, value_type, key_compare> __vc;
  typedef __tree<__value_type, __vc, allocator_type> __base;
  typedef typename __base::__node_traits __node_traits;
  typedef allocator_traits<allocator_type> __alloc_traits;
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
enum eConfigValueDataTypes : int8_t ;
class ICustomConfigValueData {
  public:
};
class CGradientValueData : public ICustomConfigValueData {
  public:
    CGradientValueData ;;
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
        class CBezierCurve ;
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
        class CGenericAnimatedVariable : public CBaseAnimatedVariable {};
    }
}
enum eAVarDamagePolicy : int8_t ;;
enum eAnimatedVarType : int8_t ;
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
enum eDecorationPositioningPolicy : uint8_t ;
enum eDecorationEdges : uint8_t ;
struct SDecorationPositioningInfo ;
struct SDecorationPositioningReply ;;
class CDecorationPositioner ;

class IHyprWindowDecoration ;
namespace Aquamarine {
    struct SGLFormat ;
    struct SDRMFormat ;;
};
using DRMFormat = uint32_t;
using SHMFormat = uint32_t;
struct SPixelFormat ;
using SDRMFormat = Aquamarine::SDRMFormat;
namespace NFormatUtils {};
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
class type_index ;
template <class _Tp>
struct hash;
template <>
struct hash<type_index> : public __unary_function<type_index, size_t> {};
} }
namespace Aquamarine {
    class IAttachment ;
    template <typename T>
    class CAttachmentManager ;
};
namespace Aquamarine {};
class IHLBuffer;
namespace Hyprutils { namespace Math { class CRegion; } };
enum eTextureType : int8_t ;
class CTexture ;
class CFramebuffer ;
class IPassElement {};
class CWLSurfaceResource;
class CTexture;
class CSyncTimeline;
class CSurfacePassElement : public IPassElement {};
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
class CPopup ;
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct unexpect_t ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Err>
class unexpected;
template <class _Tp>
struct __is_std_unexpected : false_type {};
template <class _Err>
struct __is_std_unexpected<unexpected<_Err>> : true_type {};
template <class _Tp>
using __valid_std_unexpected  = _BoolConstant<
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
inline constexpr bool __fits_in_tail_padding =  {};
template <class _Tp, class _Err>
class __expected_base ;
template <class _Tp, class _Err>
class expected : private __expected_base<_Tp, _Err> {
  template <class _Up, class _OtherErr>
  friend class expected;
  using __base  = __expected_base<_Tp, _Err>;
public:
  using value_type = _Tp;
  using error_type = _Err;
  using unexpected_type = unexpected<_Err>;
  using __trivially_relocatable  =
      __conditional_t<__libcpp_is_trivially_relocatable<_Tp>::value && __libcpp_is_trivially_relocatable<_Err>::value,
                      expected,
                      void>;
  using __replaceable  =
      __conditional_t<__is_replaceable_v<_Tp> && __is_replaceable_v<_Err>, expected, void>;
  template <class _Up>
  using rebind = expected;
private:
  template <class _Up, class _OtherErr, class _UfQual, class _OtherErrQual>
  using __can_convert  = _And<
      is_constructible<_Tp, _UfQual>,
      is_constructible<_Err, _OtherErrQual>,
      _If<_Not<is_same<remove_cv_t<_Tp>, bool>>::value,
          _And< _Not<_And<is_same<_Tp, _Up>, is_same<_Err, _OtherErr>>>,
                _Not<is_constructible<_Tp, expected&>>,
                _Not<is_constructible<_Tp, expected>>,
                _Not<is_constructible<_Tp, const expected&>>,
                _Not<is_constructible<_Tp, const expected>>,
                _Not<is_convertible<expected&, _Tp>>,
                _Not<is_convertible<expected&&, _Tp>>,
                _Not<is_convertible<const expected&, _Tp>>,
                _Not<is_convertible<const expected&&, _Tp>>>,
          true_type>,
      _Not<is_constructible<unexpected<_Err>, expected&>>,
      _Not<is_constructible<unexpected<_Err>, expected>>,
      _Not<is_constructible<unexpected<_Err>, const expected&>>,
      _Not<is_constructible<unexpected<_Err>, const expected>> >;
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
   ;
   ;
   ;
public:
   ;
   ;
   ;
   ;
   ;
   ;
   ;
   ;
   ;
   ;
   ;
   ;
  template <class _T2, class _E2>
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) friend constexpr bool operator==(const expected& __x, const expected& __y)
    requires(!is_void_v<_T2>)
            && requires {
                 { *__x == *__y } -> __core_convertible_to<bool>;
                 { __x.error0 == __y.error } -> __core_convertible_to<bool>;
               }
  {}
  template <class _T2>
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) friend constexpr bool operator==(const expected& __x, const _T2& __v)
    requires(!__is_std_expected<_T2>::value) && requires {
      { *__x == __v } -> __core_convertible_to<bool>;
    }
  {}
  template <class _E2>
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) friend constexpr bool operator==(const expected& __x, const unexpected<_E2>& __e)
    requires requires {
      { __x.error0 == __e.error } -> __core_convertible_to<bool>;
    }
  {}
};
template <class _Err>
class __expected_void_base ;;
template <class _Tp, class _Err>
  requires is_void_v<_Tp>
class expected<_Tp, _Err> : private __expected_void_base<_Err> {
  static_assert(__valid_std_unexpected<_Err>::value,
                " A program that instantiates expected with a E that is not a "
                "valid argument for unexpected is ill-formed");
  template <class, class>
  friend class expected;
  template <class _Up, class _OtherErr, class _OtherErrQual>
  using __can_convert  =
      _And< is_void<_Up>,
            is_constructible<_Err, _OtherErrQual>,
            _Not<is_constructible<unexpected<_Err>, expected&>>,
            _Not<is_constructible<unexpected<_Err>, expected>>,
            _Not<is_constructible<unexpected<_Err>, const expected&>>,
            _Not<is_constructible<unexpected<_Err>, const expected>>>;
  using __base  = __expected_void_base<_Err>;
   ;
  template <class _T2, class _E2>
    requires is_void_v<_T2>
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) friend constexpr bool operator==(const expected& __x, const expected& __y)
    requires requires {
      { __x.error == __y.error } -> __core_convertible_to<bool>;
    }
  {}
  template <class _E2>
  __attribute__((__visibility__0)) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__0)) friend constexpr bool operator==(const expected& __x, const unexpected<_E2>& __y)
    requires requires {
      { __x.error == __y.error } -> __core_convertible_to<bool>;
    }
  {}
};
} }
extern "C" ;
namespace Hyprutils {
    namespace OS {
        class CFileDescriptor ;
    };
};
struct SCallstackFrameInfo ;;
struct SWorkspaceIDName ;
 ;
enum eFullscreenMode : int8_t ;;
class CWindow;
class CWorkspace ;;
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
    typedef CParseResult ;
    typedef CParseResult ;
    typedef void ;
    class CConfigCustomValueType ;
    class CConfig ;
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
struct CWpContentTypeManagerV1DestroyWrapper ;
class CWpContentTypeManagerV1 ;
struct CWpContentTypeV1DestroyWrapper ;
class CWpContentTypeV1 ;
namespace NContentType {
    enum eContentType : uint8_t ;
}
class CXDGSurfaceResource;
class CXWaylandSurface;
enum eIdleInhibitMode : uint8_t {
    IDLEINHIBIT_NONE ,
    
    
    
};
enum eGroupRules : uint8_t {
    GROUP_NONE ,
    
    
    
    
    
    
    
};
enum eGetWindowProperties : uint8_t ;
enum eSuppressEvents : uint8_t {
    SUPPRESS_NONE ,
    
    
    
    
    
};
class IWindowTransformer;
struct SAlphaValue {
    bool overridden;
    ;
};
struct SWindowData {
    CWindowOverridableVar<SAlphaValue> alphaFullscreen = SAlphaValue{};
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
    CWindowOverridableVar<Hyprlang::INT> rounding ;
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
    struct  m_events;
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
extern const wl_interface wp_image_description_creator_params_v1_interface;
extern const wl_interface wp_image_description_v1_interface;
extern const wl_interface wp_image_description_info_v1_interface;
struct CWpColorManagerV1DestroyWrapper ;
class CWpColorManagerV1 ;;
struct CWpColorManagementOutputV1DestroyWrapper ;
class CWpColorManagementOutputV1 ;
struct CWpColorManagementSurfaceV1DestroyWrapper ;
class CWpColorManagementSurfaceV1 ;;
struct CWpColorManagementSurfaceFeedbackV1DestroyWrapper ;;
class CWpColorManagementSurfaceFeedbackV1 ;;
struct CWpImageDescriptionCreatorIccV1DestroyWrapper ;
class CWpImageDescriptionCreatorIccV1 ;
struct CWpImageDescriptionCreatorParamsV1DestroyWrapper ;
class CWpImageDescriptionCreatorParamsV1 ;
struct CWpImageDescriptionV1DestroyWrapper ;;
class CWpImageDescriptionV1 ;;
struct CWpImageDescriptionInfoV1DestroyWrapper ;
class CWpImageDescriptionInfoV1 ;;
namespace NColorManagement {
    enum eNoShader : uint8_t ;;
    enum ePrimaries : uint8_t ;;
    using SPCPRimaries = Hyprgraphics::SPCPRimaries;
    namespace NColorPrimaries {
        static const auto BT709 = SPCPRimaries{};
        static const auto GENERIC_FILM = SPCPRimaries{};
        static const auto DISPLAY_P3 = SPCPRimaries{};
        static const auto ADOBE_RGB = SPCPRimaries{};
    }
    struct SImageDescription ;
}
namespace Hyprutils::CLI {
    class CLoggerImpl;
    enum eLogLevel : uint8_t ;;
    class CLogger ;;
    class CLoggerConnection ;;
};
 namespace __attribute__((__type_visibility__0)) std { inline namespace __1 {
template <class _Tp>
struct __intrusive_shared_ptr_traits;
template <class _Tp>
struct __intrusive_shared_ptr {
private:
};
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct atomic_flag ;
template <>
struct __atomic_waitable_traits<atomic_flag> ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
 ;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <size_t _Alignment>
struct __alignment_checker_type ;
template <size_t _Alignment>
struct __get_aligner_instance ;
template <class _Tp>
struct __atomic_ref_base ;;
template <class _Tp>
struct __atomic_waitable_traits<__atomic_ref_base<_Tp>> ;
template <class _Tp>
struct atomic_ref : public __atomic_ref_base<_Tp> {
  using __base  = __atomic_ref_base<_Tp>;
};
template <class _Tp>
  requires(std::integral<_Tp> && !std::same_as<bool, _Tp>)
struct atomic_ref<_Tp> : public __atomic_ref_base<_Tp> {
  using __base  = __atomic_ref_base<_Tp>;
  using difference_type = __base::value_type;
};
template <class _Tp>
  requires std::floating_point<_Tp>
struct atomic_ref<_Tp> : public __atomic_ref_base<_Tp> {
  using __base  = __atomic_ref_base<_Tp>;
  using difference_type = __base::value_type;
};
template <class _Tp>
struct atomic_ref<_Tp*> : public __atomic_ref_base<_Tp*> {
  using __base  = __atomic_ref_base<_Tp*>;
  using difference_type = ptrdiff_t;
};
;
} }
 namespace __attribute__((__type_visibility__("default"))) std {}
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Derived>
struct __intrusive_node_base {
  _Derived* __next_ = nullptr;
  _Derived* __prev_ = nullptr;
};
template <class _Node>
struct __intrusive_list_view ;;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
struct __stop_callback_base : __intrusive_node_base<__stop_callback_base> {
  using __callback_fn_t  = void(__stop_callback_base*) noexcept;
  atomic<bool> __completed_ = false;
  bool* __destroyed_ = nullptr;
};
class __stop_state ;;
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
public:
  using callback_type = _Callback;
    ;
    ;
private:
   _Callback __callback_;
  __intrusive_shared_ptr<__stop_state> __state_;
  friend __stop_callback_base;
    ;
};
;
} }
 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {
template <class _Lock>
struct __unlock_guard ;
class __attribute__((__visibility__0)) condition_variable_any ;
} }
typedef unsigned int drm_handle_t;
extern "C" 
extern "C" 
extern "C" ;
namespace Aquamarine {
    class CBackend;
    class CSwapchain;
    struct SAllocatorBufferParams ;;
    enum eAllocatorType {
        
        
    };
    class IAllocator ;
};
struct libinput_device;
namespace Aquamarine {
    class ITabletTool;
    class IKeyboard {};
    class IPointer {};
    class ITouch {
      public:
        Hyprutils::Math::Vector2D physicalSize;
        struct SDownEvent ;;
        struct SUpEvent ;
        struct SMotionEvent ;;
        struct SCancelEvent ;
        struct  events;
    };
    class ISwitch {
      public:
        enum eSwitchType : uint32_t ;
        struct SFireEvent ;
        struct  events;
    };
    enum eTabletToolAxes : uint32_t ;
    class ITablet {
      public:
        uint16_t usbVendorID = 0, usbProductID = 0;
        Hyprutils::Math::Vector2D physicalSize;
        std::vector<std::string> paths;
        struct SAxisEvent ;;
        struct SProximityEvent ;;
        struct STipEvent ;
        struct SButtonEvent ;
        struct  events;
    };
    class ITabletTool {
      public:
        enum eTabletToolType : uint32_t {
            AQ_TABLET_TOOL_TYPE_INVALID ,
            
            
            
            
            
            
            
            
        };
        eTabletToolType type = AQ_TABLET_TOOL_TYPE_INVALID;
        uint64_t serial = 0, id = 0;
        enum eTabletToolCapabilities : uint32_t ;
        uint32_t capabilities = 0;
        struct  events;
    };
    class ITabletPad {
      public:
        struct STabletPadGroup ;
        uint16_t buttons = 0, rings = 0, strips = 0;
        std::vector<std::string> paths;
        std::vector<Hyprutils::Memory::CSharedPointer<STabletPadGroup>> groups;
        struct SButtonEvent ;
        enum eTabletPadRingSource : uint16_t ;;
        enum eTabletPadStripSource : uint16_t ;
        struct SRingEvent ;;
        struct SStripEvent ;;
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
    class CSessionDevice ;
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
    class CLibinputSwitch : public ISwitch {};
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
    class CLibinputDevice ;
    class CSession ;;
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
    struct SBackendOptions ;
    struct SPollFD ;
    class IBackendImplementation ;;
    class CBackend ;;
};
extern "C" 
namespace Aquamarine {
    class IBackendImplementation;
    class IOutput;
    struct SSwapchainOptions ;;
    class CSwapchain ;
};
namespace Aquamarine {
    class IBackendImplementation;
    struct SOutputMode ;;
    enum eOutputPresentationMode : uint32_t ;
    enum eSubpixelMode : uint32_t ;;
    class IOutput;
    class COutputState ;
    class IOutput ;
}
class CWLSurfaceResource;
struct SWorkspaceRule;
enum eManagersInitStage : uint8_t ;
class CCompositor ;;

export module example;
