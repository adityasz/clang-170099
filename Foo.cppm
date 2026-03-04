module;
typedef struct __fsid_t;
typedef void *__timer_t;
extern "C";
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp, _Tp __v> struct integral_constant {
    static inline constexpr const _Tp value = __v;
    typedef _Tp value_type;
    typedef integral_constant type;
  };
  template <bool _Val> using _BoolConstant = integral_constant<bool, _Val>;
  template <bool __b> using bool_constant = integral_constant<bool, __b>;
  } // namespace __1
} // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_class : integral_constant<bool, __is_class(_Tp)> {};
  template <class _Tp> inline constexpr bool is_class_v = __is_class(_Tp);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_enum : integral_constant<bool, __is_enum(_Tp)> {};
  template <class _Tp> inline constexpr bool is_enum_v = __is_enum(_Tp);
  template <class _Tp>
  struct is_scoped_enum : bool_constant<__is_scoped_enum(_Tp)> {};
  template <class _Tp>
  inline constexpr bool is_scoped_enum_v = __is_scoped_enum(_Tp);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_union : integral_constant<bool, __is_union(_Tp)> {};
  template <class _Tp> inline constexpr bool is_union_v = __is_union(_Tp);
  } // namespace __1
} // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp>
  concept __class_or_enum =
      is_class_v<_Tp> || is_union_v<_Tp> || is_enum_v<_Tp>;
  }
} // namespace std
  // namespace std
// namespace std
// namespace std
// namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp> struct remove_cv;
  template <class _Tp> using __remove_cv_t = __remove_cv(_Tp);
  template <class _Tp> using remove_cv_t = __remove_cv_t<_Tp>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp>
  struct __libcpp_is_floating_point : integral_constant<bool, false> {};
  template <>
  struct __libcpp_is_floating_point<float> : integral_constant<bool, true> {};
  template <>
  struct __libcpp_is_floating_point<double> : integral_constant<bool, true> {};
  template <>
  struct __libcpp_is_floating_point<long double>
      : integral_constant<bool, true> {};
  template <class _Tp>
  struct is_floating_point : __libcpp_is_floating_point<__remove_cv_t<_Tp>> {};
  template <class _Tp>
  inline constexpr bool is_floating_point_v = is_floating_point<_Tp>::value;
  } // namespace __1
} // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_integral : _BoolConstant<__is_integral(_Tp)> {};
  template <class _Tp> inline constexpr bool is_integral_v = __is_integral(_Tp);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_arithmetic
      : integral_constant<bool, is_integral<_Tp>::value ||
                                    is_floating_point<_Tp>::value> {};
  template <class _Tp>
  inline constexpr bool is_arithmetic_v = is_arithmetic<_Tp>::value;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp> struct is_signed : _BoolConstant<__is_signed(_Tp)> {};
  template <class _Tp> inline constexpr bool is_signed_v = __is_signed(_Tp);
  } // namespace __1
} // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp>
  concept integral = is_integral_v<_Tp>;
  template <class _Tp>
  concept signed_integral = integral<_Tp> && is_signed_v<_Tp>;
  template <class _Tp>
  concept unsigned_integral = integral<_Tp> && !signed_integral<_Tp>;
  template <class _Tp>
  concept floating_point = is_floating_point_v<_Tp>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _T1, class _T2>
  struct is_convertible : integral_constant<bool, __is_convertible(_T1, _T2)> {
  };
  template <class _From, class _To>
  inline constexpr bool is_convertible_v = __is_convertible(_From, _To);
  template <class _Tp, class _Up>
  struct is_nothrow_convertible
      : bool_constant<__is_nothrow_convertible(_Tp, _Up)> {};
  template <class _Tp, class _Up>
  inline constexpr bool is_nothrow_convertible_v =
      __is_nothrow_convertible(_Tp, _Up);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  ;
  ;
  template <class _Tp>
  __attribute__(()) __attribute__(()) __attribute__(()) void declval() noexcept;
  } // namespace __1
} // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _From, class _To>
  concept convertible_to = is_convertible_v<_From, _To> &&
                           requires { static_cast<_To>(std::declval); };
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp, class _Up>
  struct is_same : _BoolConstant<__is_same(_Tp, _Up)> {};
  template <class _Tp, class _Up>
  inline constexpr bool is_same_v = __is_same(_Tp, _Up);
  template <class _Tp, class _Up>
  using _IsSame = _BoolConstant<__is_same(_Tp, _Up)>;
  template <class _Tp, class _Up>
  using _IsNotSame = _BoolConstant<!__is_same(_Tp, _Up)>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp, class _Up>
  concept __same_as_impl = _IsSame<_Tp, _Up>::value;
  template <class _Tp, class _Up>
  concept same_as = __same_as_impl<_Tp, _Up> && __same_as_impl<_Up, _Tp>;
  } // namespace __1
} // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class...> using void_t = void;
  template <class...> using __void_t = void;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp, class = void>
  inline const bool __is_referenceable_v = false;
  template <class _Tp>
  concept __referenceable = __is_referenceable_v<_Tp>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_void : _BoolConstant<__is_same(__remove_cv(_Tp), void)> {};
  template <class _Tp>
  inline constexpr bool is_void_v = __is_same(__remove_cv(_Tp), void);
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _Tp> struct remove_reference;
  ;
  template <class _Tp>
  using __libcpp_remove_reference_t = __remove_reference_t(_Tp);
  template <class _Tp>
  using remove_reference_t = __libcpp_remove_reference_t<_Tp>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _Tp> struct add_pointer;
  ;
  template <class _Tp> using __add_pointer_t = __add_pointer(_Tp);
  template <class _Tp> using add_pointer_t = __add_pointer_t<_Tp>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <bool> struct _IfImpl;
  template <> struct _IfImpl<true>;
  template <> struct _IfImpl<false>;
  template <bool _Cond, class _IfRes, class _ElseRes>
  using _If = typename _IfImpl<_Cond>::template _Select<>;
  template <bool _Bp, class _If, class _Then> struct conditional {
    using type = _If;
  };
  template <class _If, class _Then> struct conditional<false, _If, _Then>;
  template <bool _Bp, class _IfRes, class _ElseRes>
  using conditional_t = typename conditional<_Bp, _IfRes, _ElseRes>::type;
  template <bool _Bp, class _If, class _Then>
  using __conditional_t = typename conditional<_Bp, _If, _Then>::type;
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _Tp> struct decay;
  template <class _Tp> using __decay_t = __decay(_Tp);
  template <class _Tp> using decay_t = __decay_t<_Tp>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _Tp> using __remove_cvref_t = __remove_cvref(_Tp);
  template <class _Tp> struct remove_cvref;
  ;
  template <class _Tp> using remove_cvref_t = __remove_cvref_t<_Tp>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _Tp> struct __type_identity {
    typedef _Tp type;
  };
  template <class _Tp>
  using __type_identity_t = typename __type_identity<_Tp>::type;
  template <class _Tp> struct type_identity;
  ;
  template <class _Tp>
  using type_identity_t = typename type_identity<_Tp>::type;
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  struct __empty;
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class... _Args> struct common_type;
  template <class... _Args>
  using __common_type_t = typename common_type<_Args...>::type;
  template <class... _Args>
  struct common_type : __builtin_common_type<__common_type_t, __type_identity,
                                             __empty, _Args...> {};
  template <class... _Tp>
  using common_type_t = typename common_type<_Tp...>::type;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _From> struct __copy_cv;
  ;
  template <class _From> struct __copy_cv;
  ;
  template <class _From> struct __copy_cv;
  ;
  template <class _From> struct __copy_cv;
  ;
  template <class _From, class _To>
  using __copy_cv_t = typename __copy_cv<_From>::template __apply<>;
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp> struct add_lvalue_reference;
  ;
  template <class _Tp>
  using __add_lvalue_reference_t = __add_lvalue_reference(_Tp);
  template <class _Tp>
  using add_lvalue_reference_t = __add_lvalue_reference_t<_Tp>;
  template <class _Tp> struct add_rvalue_reference;
  ;
  template <class _Tp>
  using __add_rvalue_reference_t = __add_rvalue_reference(_Tp);
  template <class _Tp>
  using add_rvalue_reference_t = __add_rvalue_reference_t<_Tp>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _From> struct __copy_cvref;
  template <class _From> struct __copy_cvref;
  template <class _From> struct __copy_cvref;
  template <class _From, class _To>
  using __copy_cvref_t = typename __copy_cvref<_From>::template __apply<>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_reference : _BoolConstant<__is_reference(_Tp)> {};
  template <class _Tp>
  inline constexpr bool is_reference_v = __is_reference(_Tp);
  template <class _Tp>
  struct is_lvalue_reference : _BoolConstant<__is_lvalue_reference(_Tp)> {};
  template <class _Tp>
  struct is_rvalue_reference : _BoolConstant<__is_rvalue_reference(_Tp)> {};
  template <class _Tp>
  inline constexpr bool is_lvalue_reference_v = __is_lvalue_reference(_Tp);
  template <class _Tp>
  inline constexpr bool is_rvalue_reference_v = __is_rvalue_reference(_Tp);
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Xp, class _Yp>
  using __cond_res = decltype(false ? std::declval<_Xp> : std::declval<_Yp>);
  template <class _Tp> struct __xref;
  ;
  template <class _Ap, class _Bp, class _Xp = remove_reference_t<_Ap>,
            class _Yp = remove_reference_t<_Bp>>
  struct __common_ref;
  template <class _Xp, class _Yp>
  using __common_ref_t = typename __common_ref<_Xp, _Yp>::__type;
  template <class _Xp, class _Yp>
  using __cv_cond_res =
      __cond_res<__copy_cv_t<_Xp, _Yp> &, __copy_cv_t<_Yp, _Xp> &>;
  template <class _Ap, class _Bp, class _Xp, class _Yp>
    requires requires { typename __cv_cond_res<_Xp, _Yp>; } &&
             is_reference_v<__cv_cond_res<_Xp, _Yp>>
  struct __common_ref<_Ap &, _Bp &, _Xp, _Yp>;
  template <class _Xp, class _Yp>
  using __common_ref_C = remove_reference_t<__common_ref_t<_Xp &, _Yp &>> &&;
  template <class _Ap, class _Bp, class _Xp, class _Yp> struct __common_ref;
  template <class _Ap, class _Bp, class _Xp, class _Yp>
  struct __common_ref : __common_ref<_Bp &&, _Ap &> {};
  template <class _Tp, class _Up>
  using __common_ref_D = __common_ref_t<const _Tp &, _Up &>;
  template <class _Ap, class _Bp, class _Xp, class _Yp>
    requires requires { typename __common_ref_D<_Xp, _Yp>; } &&
             is_convertible_v<_Ap &&, __common_ref_D<_Xp, _Yp>>
  struct __common_ref<_Ap &&, _Bp &, _Xp, _Yp>;
  ;
  template <class _Ap, class _Bp, class _Xp, class _Yp> struct __common_ref;
  ;
  template <class...> struct common_reference;
  template <class... _Types>
  using common_reference_t = typename common_reference<_Types...>::type;
  template <class, class, template <class> class, template <class> class>
  struct basic_common_reference;
  ;
  template <> struct common_reference<>;
  ;
  template <class _Tp> struct common_reference<_Tp>;
  ;
  template <class _Tp, class _Up> struct __common_reference_sub_bullet3;
  template <class _Tp, class _Up>
  struct __common_reference_sub_bullet3 : common_type<_Tp, _Up> {};
  template <class _Tp, class _Up>
  struct __common_reference_sub_bullet2
      : __common_reference_sub_bullet3<_Tp, _Up> {};
  template <class _Tp, class _Up>
  struct __common_reference_sub_bullet1
      : __common_reference_sub_bullet2<_Tp, _Up> {};
  template <class _Tp, class _Up>
  struct common_reference<_Tp, _Up> : __common_reference_sub_bullet1<_Tp, _Up> {
  };
  template <class _Tp, class _Up>
    requires is_reference_v<_Tp> && is_reference_v<_Up> &&
             requires { typename __common_ref_t<_Tp, _Up>; } &&
             is_convertible_v<add_pointer_t<_Tp>,
                              add_pointer_t<__common_ref_t<_Tp, _Up>>> &&
             is_convertible_v<add_pointer_t<_Up>,
                              add_pointer_t<__common_ref_t<_Tp, _Up>>>
  struct __common_reference_sub_bullet1<_Tp, _Up>;
  template <class _Tp, class _Up>
  using __basic_common_reference_t =
      typename basic_common_reference<remove_cvref_t<_Tp>, remove_cvref_t<_Up>,
                                      __xref<_Tp>::template __apply,
                                      __xref<_Up>::template __apply>::type;
  template <class _Tp, class _Up>
    requires requires { typename __basic_common_reference_t<_Tp, _Up>; }
  struct __common_reference_sub_bullet2<_Tp, _Up>;
  template <class _Tp, class _Up>
    requires requires { typename __cond_res<_Tp, _Up>; }
  struct __common_reference_sub_bullet3<_Tp, _Up>;
  ;
  template <class _Tp, class _Up, class _Vp, class... _Rest>
    requires requires { typename common_reference_t<_Tp, _Up>; }
  struct common_reference<_Tp, _Up, _Vp, _Rest...>
      : common_reference<common_reference_t<_Tp, _Up>, _Vp, _Rest...> {};
  template <class...> struct common_reference;
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, class _Up>
  concept common_reference_with =
      same_as<common_reference_t<_Tp, _Up>, common_reference_t<_Up, _Tp>> &&
      convertible_to<_Tp, common_reference_t<_Tp, _Up>> &&
      convertible_to<_Up, common_reference_t<_Tp, _Up>>;
  }
} // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp>
  using __make_const_lvalue_ref = const __libcpp_remove_reference_t<_Tp> &;
  }
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  __attribute__(()) __attribute__(()) __attribute__(()) constexpr void
  forward() noexcept;
  ;
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Lhs, class _Rhs>
  concept assignable_from =
      is_lvalue_reference_v<_Lhs> &&
      common_reference_with<__make_const_lvalue_ref<_Lhs>,
                            __make_const_lvalue_ref<_Rhs>> &&
      requires(_Lhs __lhs, _Rhs &&__rhs) {
        { __lhs = std::forward } -> same_as<_Lhs>;
      };
  } // namespace __1
} // namespace std
// namespace std
namespace __attribute__((__type_visibility__0)) std {}
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_nothrow_destructible
      : integral_constant<bool, __is_nothrow_destructible(_Tp)> {};
  template <class _Tp>
  inline constexpr bool is_nothrow_destructible_v =
      is_nothrow_destructible<_Tp>::value;
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  concept destructible = is_nothrow_destructible_v<_Tp>;
  }
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, class... _Args>
  struct is_constructible
      : integral_constant<bool, __is_constructible(_Tp, _Args...)> {};
  template <class _Tp, class... _Args>
  inline constexpr bool is_constructible_v = __is_constructible(_Tp, _Args...);
  template <class _Tp>
  struct is_copy_constructible
      : integral_constant<bool, __is_constructible(
                                    _Tp, __add_lvalue_reference_t<const _Tp>)> {
  };
  template <class _Tp>
  inline constexpr bool is_copy_constructible_v =
      is_copy_constructible<_Tp>::value;
  template <class _Tp>
  struct is_move_constructible
      : integral_constant<bool, __is_constructible(
                                    _Tp, __add_rvalue_reference_t<_Tp>)> {};
  template <class _Tp>
  inline constexpr bool is_move_constructible_v =
      is_move_constructible<_Tp>::value;
  template <class _Tp>
  struct is_default_constructible
      : integral_constant<bool, __is_constructible(_Tp)> {};
  template <class _Tp>
  inline constexpr bool is_default_constructible_v = __is_constructible(_Tp);
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, class... _Args>
  concept constructible_from =
      destructible<_Tp> && is_constructible_v<_Tp, _Args...>;
  template <class _Tp>
  concept __default_initializable = requires { ::new _Tp; };
  template <class _Tp>
  concept default_initializable = constructible_from<_Tp> && requires {
    _Tp{};
  } && __default_initializable<_Tp>;
  template <class _Tp>
  concept move_constructible =
      constructible_from<_Tp, _Tp> && convertible_to<_Tp, _Tp>;
  template <class _Tp>
  concept copy_constructible =
      move_constructible<_Tp> && constructible_from<_Tp, _Tp &> &&
      convertible_to<_Tp &, _Tp> && constructible_from<_Tp, const _Tp &> &&
      convertible_to<const _Tp &, _Tp> && constructible_from<_Tp, const _Tp> &&
      convertible_to<const _Tp, _Tp>;
  template <class _Tp, unsigned _Ip = 0>
  inline constexpr decltype(sizeof(int)) extent_v = __array_extent(_Tp, _Ip);
  } // namespace __1
} // namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, class... _Args>
  struct is_nothrow_constructible
      : integral_constant<bool, __is_nothrow_constructible(_Tp, _Args...)> {};
  template <class _Tp, class... _Args>
  inline constexpr bool is_nothrow_constructible_v =
      is_nothrow_constructible<_Tp, _Args...>::value;
  template <class _Tp>
  struct is_nothrow_copy_constructible
      : integral_constant<bool, __is_nothrow_constructible(
                                    _Tp, __add_lvalue_reference_t<const _Tp>)> {
  };
  template <class _Tp>
  inline constexpr bool is_nothrow_copy_constructible_v =
      is_nothrow_copy_constructible<_Tp>::value;
  template <class _Tp>
  struct is_nothrow_move_constructible
      : integral_constant<bool, __is_nothrow_constructible(
                                    _Tp, __add_rvalue_reference_t<_Tp>)> {};
  template <class _Tp>
  inline constexpr bool is_nothrow_move_constructible_v =
      is_nothrow_move_constructible<_Tp>::value;
  template <class _Tp>
  struct is_nothrow_default_constructible
      : integral_constant<bool, __is_nothrow_constructible(_Tp)> {};
  template <class _Tp>
  inline constexpr bool is_nothrow_default_constructible_v =
      __is_nothrow_constructible(_Tp);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  ;
  template <class _Tp>
  using __move_if_noexcept_result_t =
      __conditional_t<!is_nothrow_move_constructible<_Tp>::value &&
                          is_copy_constructible<_Tp>::value,
                      const _Tp &, _Tp &&>;
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__(()) std {
  inline namespace __1 {
  namespace ranges {
  namespace __swap {
  template <class _Tp> void swap() = delete;
  template <class _Tp, class _Up>
  concept __unqualified_swappable_with =
      (__class_or_enum<remove_cvref_t<_Tp>> ||
       __class_or_enum<remove_cvref_t<_Up>>) &&
      requires { swap; };
  struct __fn;
  struct __fn {};
  template <class _Tp, class _Up, decltype(sizeof(int)) _Size>
  concept __swappable_arrays =
      !__unqualified_swappable_with<_Tp, _Up> &&
      extent_v<_Tp> == extent_v<_Up> &&
      requires(_Tp, _Up, const __fn &__swap) { __swap; };
  template <class _Tp>
  concept __exchangeable =
      !__unqualified_swappable_with<_Tp &, _Tp &> && move_constructible<_Tp> &&
      assignable_from<_Tp &, _Tp>;
  } // namespace __swap
  inline namespace __cpo {
  inline constexpr auto swap = __swap::__fn{};
  }
  } // namespace ranges
  template <class _Tp>
  concept swappable = requires { ranges::swap; };
  template <class _Tp, class _Up>
  concept swappable_with = common_reference_with<_Tp, _Up> && requires {
    ranges::swap;
    ranges::swap;
    ranges::swap;
    ranges::swap;
  };
  } // namespace __1
} // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp> struct is_object : _BoolConstant<__is_object(_Tp)> {};
  template <class _Tp> inline constexpr bool is_object_v = __is_object(_Tp);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp>
  concept movable = is_object_v<_Tp> && move_constructible<_Tp> &&
                    assignable_from<_Tp &, _Tp> && swappable<_Tp>;
  }
} // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp>
  concept copyable =
      copy_constructible<_Tp> && movable<_Tp> &&
      assignable_from<_Tp &, _Tp &> && assignable_from<_Tp &, const _Tp &> &&
      assignable_from<_Tp &, const _Tp>;
  }
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Bp, class _Dp>
  struct is_base_of : integral_constant<bool, __is_base_of(_Bp, _Dp)> {};
  template <class _Bp, class _Dp>
  inline constexpr bool is_base_of_v = __is_base_of(_Bp, _Dp);
  template <class _Base, class _Derived>
  struct is_virtual_base_of
      : bool_constant<__builtin_is_virtual_base_of(_Base, _Derived)> {};
  template <class _Base, class _Derived>
  inline constexpr bool is_virtual_base_of_v =
      __builtin_is_virtual_base_of(_Base, _Derived);
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Dp, class _Bp>
  concept derived_from =
      is_base_of_v<_Bp, _Dp> &&
      is_convertible_v<const volatile _Dp *, const volatile _Bp *>;
  }
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  concept __boolean_testable_impl = convertible_to<_Tp, bool>;
  template <class _Tp>
  concept __boolean_testable = __boolean_testable_impl<_Tp> && requires {
    !std::forward<_Tp>->__boolean_testable_impl;
  };
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, class _Up>
  concept __weakly_equality_comparable_with = requires(
      __make_const_lvalue_ref<_Tp> __t, __make_const_lvalue_ref<_Up> __u) {
    __t == __u->__boolean_testable;
    __t != __u->__boolean_testable;
    __u == __t->__boolean_testable;
    __u != __t->__boolean_testable;
  };
  template <class _Tp>
  concept equality_comparable = __weakly_equality_comparable_with<_Tp, _Tp>;
  template <class _Tp, class _Up>
  concept equality_comparable_with =
      equality_comparable<_Tp> && equality_comparable<_Up> &&
      common_reference_with<__make_const_lvalue_ref<_Tp>,
                            __make_const_lvalue_ref<_Up>> &&
      equality_comparable<common_reference_t<__make_const_lvalue_ref<_Tp>,
                                             __make_const_lvalue_ref<_Up>>> &&
      __weakly_equality_comparable_with<_Tp, _Up>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <bool, class _Tp = void> struct enable_if;
  template <class _Tp> struct enable_if<true, _Tp> {
    typedef _Tp type;
  };
  template <bool _Bp, class _Tp = void>
  using __enable_if_t = typename enable_if<_Bp, _Tp>::type;
  template <bool _Bp, class _Tp = void>
  using enable_if_t = typename enable_if<_Bp, _Tp>::type;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, class _Up, class = void>
  inline const bool __is_core_convertible_v = false;
  template <class _Tp, class _Up>
  inline const bool __is_core_convertible_v<
      _Tp, _Up, decltype(static_cast<void (*)(_Up)>(0)(0))> = true;
  template <class _Tp, class _Up>
  using __is_core_convertible =
      integral_constant<bool, __is_core_convertible_v<_Tp, _Up>>;
  template <class _Tp, class _Up>
  concept __core_convertible_to = __is_core_convertible_v<_Tp, _Up>;
  template <class _Tp, class _Up, bool = __is_core_convertible_v<_Tp, _Up>>
  inline const bool __is_nothrow_core_convertible_v = false;
  template <class _Tp, class _Up>
  inline const bool __is_nothrow_core_convertible_v<_Tp, _Up, true> =
      noexcept(static_cast<void() noexcept>(static_cast<_Tp() noexcept>(0)));
  } // namespace __1
} // namespace std
namespace __attribute__(()) std {}
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp = void> struct less;
  template <class> struct hash;
  template <class> class reference_wrapper;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  struct __nat;
  }
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class, class... _Args> struct __invoke_result_impl;
  template <class... _Args> struct __invoke_result_impl<__void_t<>, _Args...> {
    using type = decltype(0);
  };
  template <class... _Args>
  using __invoke_result = __invoke_result_impl<void, _Args...>;
  template <class... _Args>
  using __invoke_result_t = typename __invoke_result<_Args...>::type;
  ;
  template <class _Void, class... _Args>
  inline const bool __is_invocable_impl = false;
  template <class... _Args>
  inline const bool __is_invocable_impl<__void_t<>, _Args...> = true;
  template <class... _Args>
  inline const bool __is_invocable_v = __is_invocable_impl<void, _Args...>;
  template <class... _Args>
  struct __is_invocable : integral_constant<bool, __is_invocable_v<_Args...>> {
  };
  template <class _Ret, bool, class... _Args>
  inline const bool __is_invocable_r_impl = false;
  template <class _Ret, class... _Args>
  inline const bool __is_invocable_r_impl<_Ret, true, _Args...> =
      __is_core_convertible<__invoke_result_t<>, _Ret>::value ||
      is_void<_Ret>::value;
  template <class _Ret, class... _Args>
  inline const bool __is_invocable_r_v =
      __is_invocable_r_impl<_Ret, __is_invocable_v<>, _Args...>;
  template <bool __is_invocable, class... _Args>
  inline const bool __is_nothrow_invocable_impl = false;
  template <class... _Args>
  inline const bool __is_nothrow_invocable_v =
      __is_nothrow_invocable_impl<__is_invocable_impl<void, _Args...>,
                                  _Args...>;
  template <bool __is_invocable, class _Ret, class... _Args>
  inline const bool __is_nothrow_invocable_r_impl = false;
  template <class _Ret, class... _Args>
  inline const bool __is_nothrow_invocable_r_impl<true, _Ret, _Args...> =
      __is_nothrow_core_convertible_v<__invoke_result_t<>, _Ret> ||
      is_void<_Ret>::value;
  template <class _Ret, class... _Args>
  inline const bool __is_nothrow_invocable_r_v =
      __is_nothrow_invocable_r_impl<__is_nothrow_invocable_v<>, _Ret, _Args...>;
  template <class _Ret, bool = is_void<_Ret>::value>
  struct __invoke_void_return_wrapper;
  template <class _Ret> struct __invoke_void_return_wrapper<_Ret, true>;
  ;
  template <class _Fn, class... _Args>
  struct is_invocable : bool_constant<__is_invocable_impl<void, _Args...>> {};
  template <class _Ret, class _Fn, class... _Args>
  struct is_nothrow_invocable_r
      : bool_constant<__is_nothrow_invocable_r_v<_Ret, _Fn, _Args...>> {};
  template <class _Fn, class... _Args>
  inline constexpr bool is_nothrow_invocable_v =
      __is_nothrow_invocable_impl<__is_invocable_impl<void, _Args...>,
                                  _Args...>;
  template <class _Ret, class _Fn, class... _Args>
  inline constexpr bool is_nothrow_invocable_r_v =
      __is_nothrow_invocable_r_v<_Ret, _Fn, _Args...>;
  template <class _Fn, class... _Args>
  struct invoke_result : __invoke_result<> {};
  template <class _Fn, class... _Args>
  using invoke_result_t = __invoke_result_t<_Fn, _Args...>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Fn, class... _Args>
  __attribute__(()) __attribute__(()) __attribute__(()) constexpr void
  invoke() noexcept;
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Fn, class... _Args>
  concept invocable = requires { std::invoke; };
  template <class _Fn, class... _Args>
  concept regular_invocable = invocable<_Fn, _Args...>;
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Fn, class... _Args>
  concept predicate = regular_invocable<_Fn, _Args...> &&
                      __boolean_testable<invoke_result_t<_Fn, _Args...>>;
  }
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  concept semiregular = copyable<_Tp> && default_initializable<_Tp>;
  }
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  concept regular = semiregular<_Tp> && equality_comparable<_Tp>;
  }
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Rp, class _Tp, class _Up>
  concept relation = predicate<_Rp, _Tp, _Tp> && predicate<_Rp, _Up, _Up> &&
                     predicate<_Rp, _Tp, _Up> && predicate<_Rp, _Up, _Tp>;
  template <class _Rp, class _Tp, class _Up>
  concept equivalence_relation = relation<_Rp, _Tp, _Up>;
  template <class _Rp, class _Tp, class _Up>
  concept strict_weak_order = relation<_Rp, _Tp, _Up>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, class _Up>
  concept __partially_ordered_with = requires(
      __make_const_lvalue_ref<_Tp> __t, __make_const_lvalue_ref<_Up> __u) {
    __t < __u->__boolean_testable;
    __t > __u->__boolean_testable;
    __u <= __t->__boolean_testable;
    __u >= __t->__boolean_testable;
  };
  template <class _Tp>
  concept totally_ordered =
      equality_comparable<_Tp> && __partially_ordered_with<_Tp, _Tp>;
  template <class _Tp, class _Up>
  concept totally_ordered_with =
      totally_ordered<_Tp> && totally_ordered<_Up> &&
      equality_comparable_with<_Tp, _Up> &&
      totally_ordered<common_reference_t<__make_const_lvalue_ref<_Tp>,
                                         __make_const_lvalue_ref<_Up>>> &&
      __partially_ordered_with<_Tp, _Up>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <template <class...> class _Templ, class... _Args, class = _Templ<>>
  void __sfinae_test_impl();
  ;
  template <template <class...> class _Templ, class... _Args>
  using _IsValidExpansion = decltype(std::__sfinae_test_impl<_Templ, _Args...>);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  using __test_for_primary_template =
      __enable_if_t<_IsSame<_Tp, typename _Tp::__primary_template>::value>;
  template <class _Tp>
  using __is_primary_template =
      _IsValidExpansion<__test_for_primary_template, _Tp>;
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class... _Types> struct __type_list;
  template <class> struct __type_list_head;
  template <class _Head, class... _Tail>
  struct __type_list_head<__type_list<_Head, _Tail...>>;
  ;
  template <class _TypeList, decltype(sizeof(int)) _Size,
            bool = _Size <= sizeof(typename __type_list_head<_TypeList>::type)>
  struct __find_first;
  template <class _Head, class... _Tail, decltype(sizeof(int)) _Size>
  struct __find_first<__type_list<_Head, _Tail...>, _Size, true>;
  ;
  template <class _Head, class... _Tail, decltype(sizeof(int)) _Size>
  struct __find_first<__type_list<_Head, _Tail...>, _Size, false>;
  } // namespace __1
} // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class> struct incrementable_traits;
  template <class _Tp>
    requires is_object_v<_Tp>
  struct incrementable_traits<_Tp *>;
  template <class _Ip>
  struct incrementable_traits<const _Ip> : incrementable_traits<_Ip> {};
  template <class _Tp>
  concept __has_member_difference_type =
      requires { typename _Tp::difference_type; };
  template <__has_member_difference_type _Tp> struct incrementable_traits<_Tp>;
  ;
  template <class _Tp>
  concept __has_integral_minus =
      requires(const _Tp &__x, const _Tp &__y) { __x - __y->integral; };
  template <__has_integral_minus _Tp>
    requires(!__has_member_difference_type<_Tp>)
  struct incrementable_traits_Tp;
  ;
  template <class> struct iterator_traits;
  template <class _Ip>
  using iter_difference_t = typename conditional_t<
      __is_primary_template<iterator_traits<remove_cvref_t<_Ip>>>::value,
      incrementable_traits<remove_cvref_t<_Ip>>,
      iterator_traits<remove_cvref_t<_Ip>>>::difference_type;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <decltype(sizeof(int)), class> struct tuple_element;
  template <class...> class tuple;
  template <class> struct tuple_size;
  ;
  ;
  ;
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class, class> struct pair;
  template <class _Type> inline const bool __is_pair_v = false;
  template <class _Type1, class _Type2>
  inline const bool __is_pair_v<pair<_Type1, _Type2>> = true;
  ;
  ;
  ;
  ;
  } // namespace __1
} // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp> struct is_array : _BoolConstant<__is_array(_Tp)> {};
  template <class _Tp> inline constexpr bool is_array_v = __is_array(_Tp);
  } // namespace __1
} // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class> struct __cond_value_type;
  ;
  template <class _Tp>
    requires is_object_v<_Tp>
  struct __cond_value_type_Tp;
  ;
  template <class _Tp>
  concept __has_member_value_type = requires { typename _Tp::value_type; };
  template <class _Tp>
  concept __has_member_element_type = requires { typename _Tp::element_type; };
  template <class> struct indirectly_readable_traits;
  template <class _Ip>
    requires is_array_v<_Ip>
  struct indirectly_readable_traits<_Ip>;
  ;
  template <class _Ip>
  struct indirectly_readable_traits<const _Ip>
      : indirectly_readable_traits<_Ip> {};
  template <__has_member_element_type _Tp>
  struct indirectly_readable_traits<_Tp>
      : __cond_value_type<typename _Tp::element_type> {};
  template <__has_member_value_type _Tp>
    requires __has_member_element_type<_Tp>
  struct indirectly_readable_traits<_Tp>;
  template <__has_member_value_type _Tp>
    requires __has_member_element_type<_Tp> &&
             same_as<remove_cv_t<typename _Tp::element_type>,
                     remove_cv_t<typename _Tp::value_type>>
  struct indirectly_readable_traits<_Tp>
      : __cond_value_type<typename _Tp::value_type> {};
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <decltype(sizeof(int))...> struct __tuple_indices;
  template <decltype(sizeof(int)) _Ep, decltype(sizeof(int)) _Sp = 0>
  struct __make_tuple_indices;
  ;
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class... _Tp> struct __tuple_types;
  }
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <decltype(sizeof(int)) _Ip, class _Tp> struct tuple_element;
  template <decltype(sizeof(int)) _Ip, class _Tp> struct tuple_element;
  ;
  template <decltype(sizeof(int)) _Ip, class... _Types>
  struct tuple_element<_Ip, __tuple_types<_Types...>>;
  ;
  template <decltype(sizeof(int)) _Ip, class... _Tp>
  using tuple_element_t = typename tuple_element<_Ip, _Tp...>::type;
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Default, class _Void, template <class...> class _Op,
            class... _Args>
  struct __detector {
    using type = _Default;
  };
  template <class _Default, template <class...> class _Op, class... _Args>
  struct __detector<_Default, __void_t<_Op<>>, _Op, _Args...>;
  template <class _Default, template <class...> class _Op, class... _Args>
  using __detected_or_t =
      typename __detector<_Default, void, _Op, _Args...>::type;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <bool> struct _OrImpl;
  template <> struct _OrImpl<true> {
    template <class _Res, class _First, class... _Rest>
    using _Result = typename _OrImpl<!bool(_First::value) &&
                                     sizeof...(_Rest) != 0>::template _Result<>;
  };
  template <> struct _OrImpl<false>;
  template <class... _Args>
  using _Or = typename _OrImpl<sizeof...(_Args) != 0>::template _Result<
      integral_constant<bool, false>, _Args...>;
  template <class... _Args> struct disjunction : _Or<_Args...> {};
  template <class... _Args>
  inline constexpr bool disjunction_v = _Or<_Args...>::value;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp> struct remove_const;
  ;
  template <class _Tp> using __remove_const_t = __remove_const(_Tp);
  template <class _Tp> using remove_const_t = __remove_const_t<_Tp>;
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  concept __dereferenceable = requires(_Tp &__t) { *__t->__referenceable; };
  template <__dereferenceable _Tp>
  using iter_reference_t = decltype(*std::declval<_Tp &>);
  template <class _Iter> struct iterator_traits;
  struct input_iterator_tag {};
  struct output_iterator_tag;
  ;
  struct forward_iterator_tag : public input_iterator_tag {};
  struct bidirectional_iterator_tag : public forward_iterator_tag {};
  struct random_access_iterator_tag : public bidirectional_iterator_tag {};
  struct contiguous_iterator_tag : public random_access_iterator_tag {};
  namespace __iterator_traits_detail {
  template <class _Ip>
  concept __cpp17_iterator = requires(_Ip __i) {
    *__i->__referenceable;
    ++__i->same_as<_Ip &>;
    *__i++->__referenceable;
  } && copyable<_Ip>;
  template <class _Ip>
  concept __cpp17_input_iterator =
      __cpp17_iterator<_Ip> && equality_comparable<_Ip> && requires {
        requires signed_integral<
            typename incrementable_traits<_Ip>::difference_type>;
      };
  template <class _Ip>
  concept __cpp17_forward_iterator =
      __cpp17_input_iterator<_Ip> && constructible_from<_Ip> &&
      is_reference_v<iter_reference_t<_Ip>> &&
      same_as<remove_cvref_t<iter_reference_t<_Ip>>,
              typename indirectly_readable_traits<_Ip>::value_type> &&
      requires(_Ip __i) {
        { __i++ } -> convertible_to<_Ip const &>;
        *__i++->same_as<iter_reference_t<_Ip>>;
      };
  template <class _Ip>
  concept __cpp17_bidirectional_iterator =
      __cpp17_forward_iterator<_Ip> && requires(_Ip __i) {
        { --__i } -> same_as<_Ip &>;
        { __i-- } -> convertible_to<_Ip const &>;
        *__i--->same_as<iter_reference_t<_Ip>>;
      };
  template <class _Ip>
  concept __cpp17_random_access_iterator =
      __cpp17_bidirectional_iterator<_Ip> && totally_ordered<_Ip> &&
      requires(_Ip __i,
               typename incrementable_traits<_Ip>::difference_type __n) {
        __i += __n->same_as<_Ip &>;
        __i -= __n->same_as<_Ip &>;
        __i + __n->same_as_Ip;
        __n + __i->same_as_Ip;
        __i - __n->same_as_Ip;
        __i - __i->same_asdecltype0;
        __i->convertible_to<iter_reference_t<_Ip>>;
      };
  } // namespace __iterator_traits_detail
  template <class _Ip>
  concept __has_member_reference = requires { typename _Ip::reference; };
  template <class _Ip>
  concept __has_member_pointer = requires { typename _Ip::pointer; };
  template <class _Ip>
  concept __has_member_iterator_category =
      requires { typename _Ip::iterator_category; };
  template <class _Ip>
  concept __specifies_members = requires {
    typename _Ip::value_type;
    typename _Ip::difference_type;
    requires __has_member_reference<_Ip>;
    requires __has_member_iterator_category<_Ip>;
  };
  template <class _Tp>
  concept __cpp17_iterator_missing_members =
      !__specifies_members<_Tp> &&
      __iterator_traits_detail::__cpp17_iterator<_Tp>;
  template <class _Tp>
  concept __cpp17_input_iterator_missing_members =
      __cpp17_iterator_missing_members<_Tp> &&
      __iterator_traits_detail::__cpp17_input_iterator<_Tp>;
  template <class> struct __iterator_traits_member_pointer_or_arrow_or_void;
  template <__has_member_pointer _Ip>
  struct __iterator_traits_member_pointer_or_arrow_or_void<_Ip>;
  template <class _Ip>
    requires requires(_Ip &__i) { __i.operator->; } &&
             (!__has_member_pointer<_Ip>)
  struct __iterator_traits_member_pointer_or_arrow_or_void<_Ip>;
  ;
  template <class _Ip> struct __iterator_traits_member_reference;
  template <__has_member_reference _Ip>
  struct __iterator_traits_member_reference<_Ip>;
  template <class _Ip> struct __deduce_iterator_category;
  template <__iterator_traits_detail::__cpp17_forward_iterator _Ip>
  struct __deduce_iterator_category<_Ip>;
  template <class _Ip>
  struct __iterator_traits_iterator_category : __deduce_iterator_category<_Ip> {
  };
  template <__has_member_iterator_category _Ip>
  struct __iterator_traits_iterator_category<_Ip>;
  ;
  template <class> struct __iterator_traits_difference_type;
  template <class _Ip>
    requires requires { typename incrementable_traits<_Ip>::difference_type; }
  struct __iterator_traits_difference_type<_Ip>;
  template <class> struct __iterator_traits;
  template <class _Tp> using __pointer_member = typename _Tp::pointer;
  template <__specifies_members _Ip> struct __iterator_traits<_Ip>;
  ;
  template <__cpp17_input_iterator_missing_members _Ip>
  struct __iterator_traits<_Ip>;
  ;
  template <__cpp17_iterator_missing_members _Ip> struct __iterator_traits<_Ip>;
  template <class _Ip> struct iterator_traits : __iterator_traits<_Ip> {};
  template <class _Tp>
    requires is_object_v<_Tp>
  struct iterator_traits<_Tp *>;
  template <class _Tp>
  using __iterator_category = typename _Tp::iterator_category;
  template <class _Tp>
  using __iterator_concept = typename _Tp::iterator_concept;
  template <class _Tp, class _Up>
  using __has_iterator_category_convertible_to = is_convertible<
      __detected_or_t<__nat, __iterator_category, iterator_traits<_Tp>>, _Up>;
  template <class _Tp, class _Up>
  using __has_iterator_concept_convertible_to =
      is_convertible<__detected_or_t<__nat, __iterator_concept, _Tp>, _Up>;
  template <class _Tp>
  using __has_input_iterator_category =
      __has_iterator_category_convertible_to<_Tp, input_iterator_tag>;
  template <class _Tp>
  using __has_forward_iterator_category =
      __has_iterator_category_convertible_to<_Tp, forward_iterator_tag>;
  template <class _Tp>
  using __has_bidirectional_iterator_category =
      __has_iterator_category_convertible_to<_Tp, bidirectional_iterator_tag>;
  template <class _Tp>
  using __has_random_access_iterator_category =
      __has_iterator_category_convertible_to<_Tp, random_access_iterator_tag>;
  template <class _Tp>
  struct __libcpp_is_contiguous_iterator
      : _Or<__has_iterator_category_convertible_to<_Tp,
                                                   contiguous_iterator_tag>,
            __has_iterator_concept_convertible_to<_Tp,
                                                  contiguous_iterator_tag>> {};
  template <class _Up>
  struct __libcpp_is_contiguous_iterator<_Up *>
      : integral_constant<bool, true> {};
  template <class _Iter> class __wrap_iter;
  template <class _Tp>
  using __has_exactly_input_iterator_category = integral_constant<
      bool,
      __has_iterator_category_convertible_to<_Tp, input_iterator_tag>::value &&
          !__has_iterator_category_convertible_to<_Tp,
                                                  forward_iterator_tag>::value>;
  template <class _Tp>
  using __has_exactly_forward_iterator_category =
      integral_constant<bool, __has_iterator_category_convertible_to<
                                  _Tp, forward_iterator_tag>::value &&
                                  !__has_iterator_category_convertible_to<
                                      _Tp, bidirectional_iterator_tag>::value>;
  template <class _Tp>
  using __has_exactly_bidirectional_iterator_category =
      integral_constant<bool, __has_iterator_category_convertible_to<
                                  _Tp, bidirectional_iterator_tag>::value &&
                                  !__has_iterator_category_convertible_to<
                                      _Tp, random_access_iterator_tag>::value>;
  template <class _InputIterator>
  using __iter_value_type =
      typename iterator_traits<_InputIterator>::value_type;
  template <class _InputIterator>
  using __iter_key_type =
      remove_const_t<tuple_element_t<0, __iter_value_type<_InputIterator>>>;
  template <class _InputIterator>
  using __iter_mapped_type =
      tuple_element_t<1, __iter_value_type<_InputIterator>>;
  template <class _InputIterator>
  using __iter_to_alloc_type =
      pair<const tuple_element_t<0, __iter_value_type<_InputIterator>>,
           tuple_element_t<1, __iter_value_type<_InputIterator>>>;
  template <class _Iter>
  using __iter_diff_t = typename iterator_traits<_Iter>::difference_type;
  template <class _Iter>
  using __iter_reference = typename iterator_traits<_Iter>::reference;
  template <class _Ip>
  using iter_value_t = typename conditional_t<
      __is_primary_template<iterator_traits<remove_cvref_t<_Ip>>>::value,
      indirectly_readable_traits<remove_cvref_t<_Ip>>,
      iterator_traits<remove_cvref_t<_Ip>>>::value_type;
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  namespace ranges {
  namespace __iter_move {
  template <class _Tp>
  concept __unqualified_iter_move = __class_or_enum<remove_cvref_t<_Tp>> &&
                                    requires { iter_move(std::forward<_Tp>); };
  template <class _Tp>
  concept __move_deref = !__unqualified_iter_move<_Tp> && requires(_Tp &&__t) {
    *__t;
    requires is_lvalue_reference_vdecltype(*__t);
  };
  template <class _Tp>
  concept __just_deref = !__unqualified_iter_move<_Tp> && !__move_deref<_Tp> &&
                         requires(_Tp &&__t) {
                           *__t;
                           requires(!is_lvalue_reference_vdecltype(*__t));
                         };
  struct __fn {};
  } // namespace __iter_move
  inline namespace __cpo {
  inline constexpr auto iter_move = __iter_move::__fn{};
  }
  } // namespace ranges
  template <__dereferenceable _Tp>
    requires requires {
      { ranges::iter_move } -> __referenceable;
    }
  using iter_rvalue_reference_t = decltype(ranges::iter_move);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class...> using __expand_to_true = integral_constant<bool, true>;
  template <class... _Pred>
  __expand_to_true<__enable_if_t<_Pred::value>...> __and_helper(int);
  template <class...> integral_constant<bool, false> __and_helper0;
  template <class... _Pred>
  using _And = decltype(std::__and_helper<_Pred...>(0));
  template <bool... _Preds> struct __all_dummy;
  template <bool... _Pred>
  struct __all : _IsSame<__all_dummy<>, __all_dummy<>> {};
  template <class...> struct conjunction : integral_constant<bool, true> {};
  template <class _Arg> struct conjunction<_Arg> : _Arg {};
  template <class _Arg, class... _Args>
  struct conjunction<_Arg, _Args...>
      : conditional_t<!bool(), _Arg, conjunction<>> {};
  template <class... _Args>
  inline constexpr bool conjunction_v = conjunction<>::value;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Ptr> struct __pointer_traits_element_type_impl;
  ;
  template <template <class, class...> class _Sp, class _Tp, class... _Args>
  struct __pointer_traits_element_type_impl<_Sp<_Tp, _Args...>>;
  template <class _Ptr, class = void>
  struct __pointer_traits_element_type
      : __pointer_traits_element_type_impl<_Ptr> {};
  template <class _Ptr> struct __pointer_traits_element_type<_Ptr, __void_t<>>;
  template <class _Tp, class _Up> struct __pointer_traits_rebind_impl;
  template <template <class, class...> class _Sp, class _Tp, class... _Args,
            class _Up>
  struct __pointer_traits_rebind_impl<_Sp<_Tp, _Args...>, _Up>;
  template <class _Tp, class _Up, class = void>
  struct __pointer_traits_rebind : __pointer_traits_rebind_impl<_Tp, _Up> {};
  template <class _Tp, class _Up>
  struct __pointer_traits_rebind<_Tp, _Up, __void_t<>>;
  template <class _Tp>
  using __difference_type_member = typename _Tp::difference_type;
  template <class _Ptr, class = void> struct __pointer_traits_impl;
  template <class _Ptr> struct __pointer_traits_impl<_Ptr, __void_t<>>;
  ;
  template <class _Ptr> struct pointer_traits : __pointer_traits_impl<_Ptr> {};
  template <class _Tp> struct pointer_traits<_Tp *> {
    typedef _Tp *pointer;
    typedef _Tp element_type;
    template <class _Up> using rebind = _Up *;

  public:
  };
  template <class _From, class _To>
  using __rebind_pointer_t =
      typename pointer_traits<_From>::template rebind<_To>;
  template <class _Pointer, class = void> struct __to_address_helper;
  ;
  template <class _Pointer, class = void>
  struct _HasToAddress : integral_constant<bool, false> {};
  template <class _Pointer>
  struct _HasToAddress<_Pointer, decltype(pointer_traits<_Pointer>::to_address)>
      : integral_constant<bool, true> {};
  template <class _Pointer, class = void>
  struct _HasArrow : integral_constant<bool, false> {};
  template <class _Pointer>
  struct _HasArrow<_Pointer,
                   decltype(std::declval<const _Pointer &>.operator->)>
      : integral_constant<bool, true> {};
  template <class _Pointer> struct _IsFancyPointer;
  ;
  template <class _Pointer, class> struct __to_address_helper;
  template <class _Pointer>
  struct __to_address_helper<_Pointer,
                             decltype(pointer_traits<_Pointer>::to_address)>;
  ;
  template <class _Pointer>
  __attribute__(()) __attribute__(()) __attribute__(()) constexpr auto
  to_address() noexcept -> decltype(0);
  template <class _Tp> struct __pointer_of;
  template <class _Tp>
  concept __has_pointer_member = requires { typename _Tp::pointer; };
  template <class _Tp>
  concept __has_element_type_member = requires { typename _Tp::element_type; };
  template <class _Tp>
    requires __has_pointer_member<_Tp>
  struct __pointer_of<_Tp>;
  template <class _Tp>
    requires(!__has_pointer_member<_Tp> && __has_element_type_member<_Tp>)
  struct __pointer_of<_Tp>;
  ;
  template <class _Tp>
    requires(!__has_pointer_member<_Tp> && !__has_element_type_member<_Tp> &&
             __has_element_type_member<pointer_traits<_Tp>>)
  struct __pointer_of<_Tp>;
  template <typename _Tp>
  using __pointer_of_t = typename __pointer_of<_Tp>::type;
  template <typename _Tp, typename _Up>
  using __pointer_of_or_t = __detected_or_t<_Up, __pointer_of_t, _Tp>;
  template <class _Smart>
  concept __resettable_smart_pointer = requires(_Smart __s) { __s.reset; };
  template <class _Smart, class _Pointer, class... _Args>
  concept __resettable_smart_pointer_with_args =
      requires(_Smart __s, _Pointer __p, _Args... __args) { __s.reset; };
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp> struct is_pointer : _BoolConstant<__is_pointer(_Tp)> {};
  template <class _Tp> inline constexpr bool is_pointer_v = __is_pointer(_Tp);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _In>
  concept __indirectly_readable_impl =
      requires(const _In __i) {
        typename iter_value_t<_In>;
        typename iter_reference_t<_In>;
        typename iter_rvalue_reference_t<_In>;
        { *__i } -> same_as<iter_reference_t<_In>>;
        { ranges::iter_move } -> same_as<iter_rvalue_reference_t<_In>>;
      } &&
      common_reference_with<iter_reference_t<_In> &&, iter_value_t<_In> &> &&
      common_reference_with<iter_reference_t<_In> &&,
                            iter_rvalue_reference_t<_In> &&> &&
      common_reference_with<iter_rvalue_reference_t<_In> &&,
                            const iter_value_t<_In> &>;
  template <class _In>
  concept indirectly_readable = __indirectly_readable_impl<remove_cvref_t<_In>>;
  template <class _Tp>
  using __projected_iterator_t = typename _Tp::__projected_iterator;
  template <class _Tp>
  using __projected_projection_t = typename _Tp::__projected_projection;
  template <class _Tp>
  concept __specialization_of_projected = requires {
    typename __projected_iterator_t<_Tp>;
    typename __projected_projection_t<_Tp>;
  } && __is_primary_template<_Tp>::value;
  template <class _Tp> struct __indirect_value_t_impl;
  template <__specialization_of_projected _Tp>
  struct __indirect_value_t_impl<_Tp>;
  ;
  template <indirectly_readable _Tp>
  using __indirect_value_t = typename __indirect_value_t_impl<_Tp>::type;
  template <indirectly_readable _Tp>
  using iter_common_reference_t =
      common_reference_t<iter_reference_t<_Tp>, __indirect_value_t<_Tp>>;
  template <class _Out, class _Tp>
  concept indirectly_writable = requires { std::forward; };
  template <class _Tp>
  concept __integer_like = integral<_Tp> && !same_as<_Tp, bool>;
  template <class _Tp>
  concept __signed_integer_like = signed_integral<_Tp>;
  template <class _Ip>
  concept weakly_incrementable =
      !same_as<_Ip, bool> && movable<_Ip> && requires(_Ip __i) {
        typename iter_difference_t<_Ip>;
        requires __signed_integer_like<iter_difference_t<_Ip>>;
        ++__i->same_as<_Ip &>;
        __i++;
      };
  template <class _Ip>
  concept incrementable = regular<_Ip> && weakly_incrementable<_Ip> &&
                          requires(_Ip __i) { __i++->same_as_Ip; };
  template <class _Ip>
  concept input_or_output_iterator =
      requires(_Ip __i) { *__i->__referenceable; } && weakly_incrementable<_Ip>;
  template <class _Sp, class _Ip>
  concept sentinel_for = semiregular<_Sp> && input_or_output_iterator<_Ip> &&
                         __weakly_equality_comparable_with<_Sp, _Ip>;
  template <class, class>
  inline constexpr bool disable_sized_sentinel_for = false;
  template <class _Sp, class _Ip>
  concept sized_sentinel_for =
      sentinel_for<_Sp, _Ip> &&
      !disable_sized_sentinel_for<remove_cv_t<_Sp>, remove_cv_t<_Ip>> &&
      requires(const _Ip &__i, const _Sp &__s) {
        __s - __i->same_as<iter_difference_t<_Ip>>;
        __i - __s->same_as<iter_difference_t<_Ip>>;
      };
  template <class _Iter> struct __iter_traits_cache;
  template <class _Iter>
  using _ITER_TRAITS = typename __iter_traits_cache<_Iter>::type;
  struct __iter_concept_concept_test;
  struct __iter_concept_category_test;
  struct __iter_concept_random_fallback;
  template <class _Iter, class _Tester>
  struct __test_iter_concept
      : _IsValidExpansion<_Tester::template _Apply, _Iter>,
        _Tester {};
  template <class _Iter> struct __iter_concept_cache;
  template <class _Iter>
  using _ITER_CONCEPT =
      typename __iter_concept_cache<_Iter>::type::template _Apply<>;
  template <class _Ip>
  concept input_iterator =
      input_or_output_iterator<_Ip> && indirectly_readable<_Ip> && requires {
        typename _ITER_CONCEPT<_Ip>;
      } && derived_from<_ITER_CONCEPT<_Ip>, input_iterator_tag>;
  template <class _Ip, class _Tp>
  concept output_iterator =
      input_or_output_iterator<_Ip> && indirectly_writable<_Ip, _Tp> &&
      requires(_Ip __it, _Tp &&__t) { *__it++ = std::forward; };
  template <class _Ip>
  concept forward_iterator =
      input_iterator<_Ip> &&
      derived_from<_ITER_CONCEPT<_Ip>, forward_iterator_tag> &&
      incrementable<_Ip> && sentinel_for<_Ip, _Ip>;
  template <class _Ip>
  concept bidirectional_iterator =
      forward_iterator<_Ip> &&
      derived_from<_ITER_CONCEPT<_Ip>, bidirectional_iterator_tag> &&
      requires(_Ip __i) {
        --__i->same_as<_Ip &>;
        __i--->same_as_Ip;
      };
  template <class _Ip>
  concept random_access_iterator =
      bidirectional_iterator<_Ip> &&
      derived_from<_ITER_CONCEPT<_Ip>, random_access_iterator_tag> &&
      totally_ordered<_Ip> && sized_sentinel_for<_Ip, _Ip> &&
      requires(_Ip __i, const _Ip __j, const iter_difference_t<_Ip> __n) {
        __i += __n->same_as<_Ip &>;
        __j + __n->same_as_Ip;
        __n + __j->same_as_Ip;
        __i -= __n->same_as<_Ip &>;
        __j - __n->same_as_Ip;
        __j->same_as<iter_reference_t<_Ip>>;
      };
  template <class _Ip>
  concept contiguous_iterator =
      random_access_iterator<_Ip> &&
      derived_from<_ITER_CONCEPT<_Ip>, contiguous_iterator_tag> &&
      is_lvalue_reference_v<iter_reference_t<_Ip>> &&
      same_as<iter_value_t<_Ip>, remove_cvref_t<iter_reference_t<_Ip>>> &&
      requires {
        { std::to_address } -> same_as<add_pointer_t<iter_reference_t<_Ip>>>;
      };
  template <class _Ip>
  concept __has_arrow =
      input_iterator<_Ip> &&
      (is_pointer_v<_Ip> || requires(_Ip __i) { __i.operator->; });
  template <class _Fp, class _It>
  concept indirectly_unary_invocable =
      indirectly_readable<_It> && copy_constructible<_Fp> &&
      invocable<_Fp &, __indirect_value_t<_It>> &&
      invocable<_Fp &, iter_reference_t<_It>> &&
      common_reference_with<invoke_result_t<_Fp &, __indirect_value_t<_It>>,
                            invoke_result_t<_Fp &, iter_reference_t<_It>>>;
  template <class _Fp, class _It>
  concept indirectly_regular_unary_invocable =
      indirectly_readable<_It> && copy_constructible<_Fp> &&
      regular_invocable<_Fp &, __indirect_value_t<_It>> &&
      regular_invocable<_Fp &, iter_reference_t<_It>> &&
      common_reference_with<invoke_result_t<_Fp &, __indirect_value_t<_It>>,
                            invoke_result_t<_Fp &, iter_reference_t<_It>>>;
  template <class _Fp, class _It>
  concept indirect_unary_predicate =
      indirectly_readable<_It> && copy_constructible<_Fp> &&
      predicate<_Fp &, __indirect_value_t<_It>> &&
      predicate<_Fp &, iter_reference_t<_It>>;
  template <class _Fp, class _It1, class _It2>
  concept indirect_binary_predicate =
      indirectly_readable<_It1> && indirectly_readable<_It2> &&
      copy_constructible<_Fp> &&
      predicate<_Fp &, __indirect_value_t<_It1>, __indirect_value_t<_It2>> &&
      predicate<_Fp &, __indirect_value_t<_It1>, iter_reference_t<_It2>> &&
      predicate<_Fp &, iter_reference_t<_It1>, __indirect_value_t<_It2>> &&
      predicate<_Fp &, iter_reference_t<_It1>, iter_reference_t<_It2>>;
  template <class _Fp, class _It1, class _It2 = _It1>
  concept indirect_equivalence_relation =
      indirectly_readable<_It1> && indirectly_readable<_It2> &&
      copy_constructible<_Fp> &&
      equivalence_relation<_Fp &, __indirect_value_t<_It1>,
                           __indirect_value_t<_It2>> &&
      equivalence_relation<_Fp &, __indirect_value_t<_It1>,
                           iter_reference_t<_It2>> &&
      equivalence_relation<_Fp &, iter_reference_t<_It1>,
                           __indirect_value_t<_It2>> &&
      equivalence_relation<_Fp &, iter_reference_t<_It1>,
                           iter_reference_t<_It2>>;
  template <class _Fp, class _It1, class _It2 = _It1>
  concept indirect_strict_weak_order =
      indirectly_readable<_It1> && indirectly_readable<_It2> &&
      copy_constructible<_Fp> &&
      strict_weak_order<_Fp &, __indirect_value_t<_It1>,
                        __indirect_value_t<_It2>> &&
      strict_weak_order<_Fp &, __indirect_value_t<_It1>,
                        iter_reference_t<_It2>> &&
      strict_weak_order<_Fp &, iter_reference_t<_It1>,
                        __indirect_value_t<_It2>> &&
      strict_weak_order<_Fp &, iter_reference_t<_It1>, iter_reference_t<_It2>>;
  template <class _Fp, class... _Its>
    requires(indirectly_readable<_Its> && ...) &&
                invocable<_Fp, iter_reference_t<_Its>...>
  using indirect_result_t = invoke_result_t<_Fp, iter_reference_t<_Its>...>;
  template <class _In, class _Out>
  concept indirectly_movable =
      indirectly_readable<_In> &&
      indirectly_writable<_Out, iter_rvalue_reference_t<_In>>;
  template <class _In, class _Out>
  concept indirectly_movable_storable =
      indirectly_movable<_In, _Out> &&
      indirectly_writable<_Out, iter_value_t<_In>> &&
      movable<iter_value_t<_In>> &&
      constructible_from<iter_value_t<_In>, iter_rvalue_reference_t<_In>> &&
      assignable_from<iter_value_t<_In> &, iter_rvalue_reference_t<_In>>;
  template <class _In, class _Out>
  concept indirectly_copyable =
      indirectly_readable<_In> &&
      indirectly_writable<_Out, iter_reference_t<_In>>;
  template <class _In, class _Out>
  concept indirectly_copyable_storable =
      indirectly_copyable<_In, _Out> &&
      indirectly_writable<_Out, iter_value_t<_In> &> &&
      indirectly_writable<_Out, const iter_value_t<_In> &> &&
      indirectly_writable<_Out, iter_value_t<_In> &&> &&
      indirectly_writable<_Out, const iter_value_t<_In> &&> &&
      copyable<iter_value_t<_In>> &&
      constructible_from<iter_value_t<_In>, iter_reference_t<_In>> &&
      assignable_from<iter_value_t<_In> &, iter_reference_t<_In>>;
  template <class _Tp>
  using __has_random_access_iterator_category_or_concept =
      integral_constant<bool, random_access_iterator<_Tp>>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  namespace ranges {
  template <class> inline constexpr bool enable_borrowed_range = false;
  }
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  namespace ranges {
  template <class _Tp>
  concept __can_borrow =
      is_lvalue_reference_v<_Tp> || enable_borrowed_range<remove_cvref_t<_Tp>>;
  }
  namespace ranges {
  namespace __begin {
  template <class _Tp>
  concept __member_begin = __can_borrow<_Tp> && requires(_Tp &&__t) {
    {
      static_cast<::std::__decay_t<decltype(0)>>(__t.begin)
    } -> input_or_output_iterator;
  };
  template <class _Tp>
  concept __unqualified_begin =
      !__member_begin<_Tp> && __can_borrow<_Tp> &&
      __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp &&__t) {
        {
          static_cast<::std::__decay_t<decltype(0)>>(begin(__t))
        } -> input_or_output_iterator;
      };
  struct __fn {};
  } // namespace __begin
  inline namespace __cpo {
  inline constexpr auto begin = __begin::__fn{};
  }
  } // namespace ranges
  namespace ranges {
  template <class _Tp>
  using iterator_t = decltype(ranges::begin(std::declval<_Tp &>));
  }
  namespace ranges {
  namespace __end {
  template <class _Tp>
  concept __member_end = __can_borrow<_Tp> && requires(_Tp &&__t) {
    typename iterator_t<_Tp>;
    {
      static_cast<::std::__decay_t<decltype(0)>>(__t.end)
    } -> sentinel_for<iterator_t<_Tp>>;
  };
  template <class _Tp>
  concept __unqualified_end =
      !__member_end<_Tp> && __can_borrow<_Tp> &&
      __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp &&__t) {
        typename iterator_t<_Tp>;
        {
          static_cast<::std::__decay_t<decltype(0)>>(end(__t))
        } -> sentinel_for<iterator_t<_Tp>>;
      };
  struct __fn {};
  } // namespace __end
  inline namespace __cpo {
  inline constexpr auto end = __end::__fn{};
  }
  } // namespace ranges
  namespace ranges {}
  namespace ranges {}
  } // namespace __1
} // namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, decltype(sizeof(int)) _Size> struct array;
  ;
  ;
  ;
  template <decltype(sizeof(int)) _Ip, class _Tp, decltype(sizeof(int)) _Size>
  __attribute__(()) __attribute__(()) __attribute__(()) constexpr void
  get() noexcept;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _TupleTypes, class _TupleIndices>
  struct __make_tuple_types_flat;
  template <template <class...> class _Tuple, class... _Types,
            decltype(sizeof(int))... _Idx>
  struct __make_tuple_types_flat<_Tuple<_Types...>, __tuple_indices<_Idx...>>;
  template <class _Vt, decltype(sizeof(int)) _Np, decltype(sizeof(int))... _Idx>
  struct __make_tuple_types_flat<array<_Vt, _Np>, __tuple_indices<_Idx...>>;
  template <class _Tp,
            decltype(sizeof(int)) _Ep =
                tuple_size<__libcpp_remove_reference_t<_Tp>>::value,
            decltype(sizeof(int)) _Sp = 0, bool _SameSize = 0>
  struct __make_tuple_types;
  ;
  template <class... _Types, decltype(sizeof(int)) _Ep>
  struct __make_tuple_types<tuple<_Types...>, _Ep, 0, true>;
  template <class... _Types, decltype(sizeof(int)) _Ep>
  struct __make_tuple_types<__tuple_types<_Types...>, _Ep, 0, true>;
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  struct __tuple_like_ext : integral_constant<bool, false> {};
  template <class _Tp>
  struct __tuple_like_ext<const _Tp> : public __tuple_like_ext<_Tp> {};
  template <class _Tp>
  struct __tuple_like_ext<volatile _Tp> : public __tuple_like_ext<_Tp> {};
  template <class _Tp>
  struct __tuple_like_ext<const volatile _Tp> : public __tuple_like_ext<_Tp> {};
  template <class _Tp, decltype(sizeof(int)) _Size>
  struct __tuple_like_ext<array<_Tp, _Size>> : integral_constant<bool, true> {};
  template <class... _Tp>
  struct __tuple_like_ext<__tuple_types<_Tp...>>
      : integral_constant<bool, true> {};
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  struct __tuple_sfinae_base {
    ;
    ;
    template <class _FromArgs, class _ToArgs>
    using __constructible = decltype(__do_test(_ToArgs{}, _FromArgs{}));
  };
  template <class _Tp, class _Up,
            bool = __tuple_like_ext<__libcpp_remove_reference_t<_Tp>>::value,
            bool = __tuple_like_ext<_Up>::value>
  struct __tuple_constructible : public integral_constant<bool, false> {};
  template <class _Tp, class _Up>
  struct __tuple_constructible<_Tp, _Up, true, true>
      : public __tuple_sfinae_base::__constructible<
            typename __make_tuple_types<_Tp>::type,
            typename __make_tuple_types<_Up>::type> {};
  template <decltype(sizeof(int)) _Ip, class... _Tp>
  struct tuple_element<_Ip, tuple<_Tp...>>;
  ;
  struct __attribute__(()) __check_tuple_constructor_fail;
  template <bool _CanCopy, bool _CanMove> struct __sfinae_ctor_base {};
  template struct __sfinae_ctor_base<false, false>;
  template struct __sfinae_ctor_base<true, false>;
  template struct __sfinae_ctor_base<false, true>;
  template <bool _CanCopy, bool _CanMove> struct __sfinae_assign_base {};
  template struct __sfinae_assign_base<false, false>;
  template struct __sfinae_assign_base<true, false>;
  template struct __sfinae_assign_base<false, true>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, class _Up>
  struct is_assignable : _BoolConstant<__is_assignable(_Tp, _Up)> {};
  template <class _Tp, class _Arg>
  inline constexpr bool is_assignable_v = __is_assignable(_Tp, _Arg);
  template <class _Tp>
  struct is_copy_assignable
      : integral_constant<bool, __is_assignable(
                                    __add_lvalue_reference_t<_Tp>,
                                    __add_lvalue_reference_t<const _Tp>)> {};
  template <class _Tp>
  inline constexpr bool is_copy_assignable_v = is_copy_assignable<_Tp>::value;
  template <class _Tp>
  struct is_move_assignable
      : integral_constant<bool,
                          __is_assignable(__add_lvalue_reference_t<_Tp>,
                                          __add_rvalue_reference_t<_Tp>)> {};
  template <class _Tp>
  inline constexpr bool is_move_assignable_v = is_move_assignable<_Tp>::value;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_empty : integral_constant<bool, __is_empty(_Tp)> {};
  template <class _Tp> inline constexpr bool is_empty_v = __is_empty(_Tp);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  struct __libcpp_is_final : integral_constant<bool, __is_final(_Tp)> {};
  template <class _Tp>
  struct is_final : integral_constant<bool, __is_final(_Tp)> {};
  template <class _Tp> inline constexpr bool is_final_v = __is_final(_Tp);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {}
} // namespace std
  // namespace std
// namespace std
// namespace std
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef signed char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef long intmax_t;
typedef unsigned long uintmax_t;
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
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
  using ::intmax_t __attribute__(());
  using ::uintmax_t __attribute__(());
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_trivially_copyable
      : integral_constant<bool, __is_trivially_copyable(_Tp)> {};
  template <class _Tp>
  inline constexpr bool is_trivially_copyable_v = __is_trivially_copyable(_Tp);
  template <class _Tp>
  inline const bool __is_cheap_to_copy =
      __is_trivially_copyable(_Tp) && sizeof(_Tp) <= sizeof(std::intmax_t);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _Tp, class = void>
  struct __is_replaceable : is_trivially_copyable<_Tp> {};
  template <class _Tp>
  struct __is_replaceable<
      _Tp, __enable_if_t<is_same<_Tp, typename _Tp::__replaceable>::value>>
      : integral_constant<bool, true> {};
  template <class _Tp>
  inline const bool __is_replaceable_v = __is_replaceable<_Tp>::value;
  template <class _AllocatorTraits>
  struct __container_allocator_is_replaceable
      : integral_constant<
            bool,
            __is_replaceable_v<typename _AllocatorTraits::allocator_type> &&
                0> {};
  } // namespace __1
} // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp, class = void>
  struct __libcpp_is_trivially_relocatable : is_trivially_copyable<_Tp> {};
  template <class _Tp>
  struct __libcpp_is_trivially_relocatable<
      _Tp,
      __enable_if_t<is_same<_Tp, typename _Tp::__trivially_relocatable>::value>>
      : integral_constant<bool, true> {};
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <template <class...> class _Func, class... _Args>
  struct _Lazy : _Func<> {};
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <bool _Const, class _Tp>
  using __maybe_const = __conditional_t<_Const, const _Tp, _Tp>;
  }
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Pred> struct _Not : _BoolConstant<!_Pred::value> {};
  template <class _Tp> struct negation : _Not<_Tp> {};
  template <class _Tp> inline constexpr bool negation_v = !_Tp::value;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
// namespace std
namespace __attribute__(()) std {}
namespace __attribute__(()) std {}
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  enum float_round_style {
    round_toward_zero,
  };
  enum __attribute__((__deprecated__)) float_denorm_style {
    denorm_absent,
  };
  template <class _Tp, bool = is_arithmetic<_Tp>::value>
  class __libcpp_numeric_limits;
  template <class _Tp> class __libcpp_numeric_limits<_Tp, true> {
  protected:
    typedef _Tp type;
    static constexpr const bool is_specialized = true;
    static constexpr const bool is_signed = type() < type();
    static constexpr const int digits =
        static_cast<int>(sizeof(type) * 8 - is_signed);
    static constexpr const int digits10 = digits * 3 / 10;
    static constexpr const int max_digits10 = 0;
    static constexpr const type __min = is_signed ? _Tp() : 0;
    static constexpr const type __max = is_signed ? type() : type(~0);
    __attribute__(()) __attribute__((__exclude_from_explicit_instantiation__))
    __attribute__(()) static constexpr type
    max() noexcept {
      return __max;
    }
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
    static __attribute__((
        __deprecated__)) constexpr const float_denorm_style has_denorm =
        denorm_absent;
    static
        __attribute__((__deprecated__)) constexpr const bool has_denorm_loss =
            false;
    static constexpr const bool is_iec559 = false;
    static constexpr const bool is_bounded = true;
    static constexpr const bool is_modulo = !std::is_signed<_Tp>::value;
    static constexpr const bool traps = true;
    static constexpr const bool tinyness_before = false;
    static constexpr const float_round_style round_style = round_toward_zero;
  };
  template class __libcpp_numeric_limits<bool, true>;
  ;
  template <> class __libcpp_numeric_limits<float, true>;
  template <> class __libcpp_numeric_limits<double, true>;
  template <> class __libcpp_numeric_limits<long double, true>;
  template <class _Tp>
  class numeric_limits : private __libcpp_numeric_limits<_Tp> {
    typedef __libcpp_numeric_limits<_Tp> __base;
    typedef typename __base::type type;

  public:
    static inline constexpr const bool is_specialized = __base::is_specialized;
    __attribute__(()) __attribute__(()) __attribute__(()) static constexpr type
    max() noexcept {
      return __base::max();
    }
    static inline constexpr const int digits = __base::digits;
    static inline constexpr const int digits10 = __base::digits10;
    static inline constexpr const int max_digits10 = __base::max_digits10;
    static inline constexpr const bool is_signed = __base::is_signed;
    static inline constexpr const bool is_integer = __base::is_integer;
    static inline constexpr const bool is_exact = __base::is_exact;
    static inline constexpr const int radix = __base::radix;
    static inline constexpr const int min_exponent = __base::min_exponent;
    static inline constexpr const int min_exponent10 = __base::min_exponent10;
    static inline constexpr const float_round_style round_style =
        __base::round_style;
  };
  template <class _Tp>
  class numeric_limits<const _Tp> : public numeric_limits<_Tp> {};
  template <class _Tp>
  class numeric_limits<volatile _Tp> : public numeric_limits<_Tp> {};
  template <class _Tp>
  class numeric_limits<const volatile _Tp> : public numeric_limits<_Tp> {};
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {}
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp> struct remove_pointer;
  template <class _Tp> using __remove_pointer_t = __remove_pointer(_Tp);
  template <class _Tp> using remove_pointer_t = __remove_pointer_t<_Tp>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  namespace ranges {
  namespace __data {
  template <class _Tp>
  concept __ptr_to_object =
      is_pointer_v<_Tp> && is_object_v<remove_pointer_t<_Tp>>;
  template <class _Tp>
  concept __member_data = __can_borrow<_Tp> && requires(_Tp &&__t) {
    { static_cast<::std::__decay_t<decltype(0)>>(__t.data) } -> __ptr_to_object;
  };
  template <class _Tp>
  concept __ranges_begin_invocable =
      !__member_data<_Tp> && __can_borrow<_Tp> && requires {
        { ranges::begin } -> contiguous_iterator;
      };
  struct __fn {};
  } // namespace __data
  inline namespace __cpo {
  inline constexpr auto data = __data::__fn{};
  }
  } // namespace ranges
  namespace ranges {}
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  namespace ranges {
  struct view_base;
  ;
  template <class _Derived>
    requires is_class_v<_Derived> && same_as<_Derived, remove_cv_t<_Derived>>
  class view_interface;
  template <class _Op, class _Yp>
    requires(!same_as<_Op, view_interface<_Yp>>)
  void __is_derived_from_view_interface(view_interface<_Yp> *);
  template <class _Tp>
  inline constexpr bool enable_view = derived_from<_Tp, view_base> || requires {
    ranges::__is_derived_from_view_interface;
  };
  } // namespace ranges
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_unsigned : _BoolConstant<__is_unsigned(_Tp)> {};
  template <class _Tp> inline constexpr bool is_unsigned_v = __is_unsigned(_Tp);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp> using __make_unsigned_t = __make_unsigned(_Tp);
  template <class _Tp> struct make_unsigned;
  template <class _Tp> using make_unsigned_t = __make_unsigned_t<_Tp>;
  ;
  template <class _Tp, class _Up>
  using __copy_unsigned_t =
      __conditional_t<is_unsigned<_Tp>::value, __make_unsigned_t<_Up>, _Up>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  namespace ranges {
  template <class> inline constexpr bool disable_sized_range = false;
  }
  namespace ranges {
  namespace __size {
  template <class _Tp>
  concept __size_enabled = !disable_sized_range<remove_cvref_t<_Tp>>;
  template <class _Tp>
  concept __member_size = __size_enabled<_Tp> && requires(_Tp &&__t) {
    { static_cast<::std::__decay_t<decltype(0)>>(__t.size) } -> __integer_like;
  };
  template <class _Tp>
  concept __unqualified_size =
      __size_enabled<_Tp> && !__member_size<_Tp> &&
      __class_or_enum<remove_cvref_t<_Tp>> && requires(_Tp &&__t) {
        {
          static_cast<::std::__decay_t<decltype(0)>>(size(__t))
        } -> __integer_like;
      };
  template <class _Tp>
  concept __difference = !__member_size<_Tp> && !__unqualified_size<_Tp> &&
                         __class_or_enum<remove_cvref_t<_Tp>> && requires {
                           { ranges::begin } -> forward_iterator;
                           {
                             ranges::end
                           } -> sized_sentinel_for<decltype(ranges::begin)>;
                         };
  struct __fn {};
  } // namespace __size
  inline namespace __cpo {
  inline constexpr auto size = __size::__fn{};
  }
  } // namespace ranges
  namespace ranges {}
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace std {
template <class _Ep> class initializer_list {
  const _Ep *__begin_;
  decltype(sizeof(int)) __size_;

public:
  typedef _Ep value_type;
  typedef const _Ep &reference;
};
;
;
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
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
      range<_Range> && (is_lvalue_reference_v<_Range> ||
                        enable_borrowed_range<remove_cvref_t<_Range>>);
  template <range _Rp> using sentinel_t = decltype(ranges::end);
  template <range _Rp>
  using range_difference_t = iter_difference_t<iterator_t<_Rp>>;
  template <range _Rp> using range_value_t = iter_value_t<iterator_t<_Rp>>;
  template <range _Rp>
  using range_reference_t = iter_reference_t<iterator_t<_Rp>>;
  template <range _Rp>
  using range_rvalue_reference_t = iter_rvalue_reference_t<iterator_t<_Rp>>;
  template <range _Rp>
  using range_common_reference_t = iter_common_reference_t<iterator_t<_Rp>>;
  template <class _Tp>
  concept sized_range = range<_Tp> && requires { ranges::size; };
  template <sized_range _Rp> using range_size_t = decltype(ranges::size);
  template <class _Tp>
  concept view = range<_Tp> && movable<_Tp> && enable_view<_Tp>;
  template <class _Range>
  concept __simple_view =
      view<_Range> && range<const _Range> &&
      same_as<iterator_t<_Range>, iterator_t<const _Range>> &&
      same_as<sentinel_t<_Range>, sentinel_t<const _Range>>;
  template <class _Rp, class _Tp>
  concept output_range = range<_Rp> && output_iterator<iterator_t<_Rp>, _Tp>;
  template <class _Tp>
  concept forward_range = input_range<_Tp> && forward_iterator<iterator_t<_Tp>>;
  template <class _Tp>
  concept bidirectional_range =
      forward_range<_Tp> && bidirectional_iterator<iterator_t<_Tp>>;
  template <class _Tp>
  concept random_access_range =
      bidirectional_range<_Tp> && random_access_iterator<iterator_t<_Tp>>;
  template <class _Tp>
  concept contiguous_range =
      random_access_range<_Tp> && contiguous_iterator<iterator_t<_Tp>> &&
      requires {
        { ranges::data } -> same_as<add_pointer_t<range_reference_t<_Tp>>>;
      };
  template <class _Tp>
  concept common_range =
      range<_Tp> && same_as<iterator_t<_Tp>, sentinel_t<_Tp>>;
  template <class _Tp> inline constexpr bool __is_std_initializer_list = false;
  template <class _Tp>
  concept viewable_range =
      range<_Tp> && ((view<remove_cvref_t<_Tp>> &&
                      constructible_from<remove_cvref_t<_Tp>, _Tp>) ||
                     (!view<remove_cvref_t<_Tp>> &&
                      (is_lvalue_reference_v<_Tp> ||
                       (movable<remove_reference_t<_Tp>> &&
                        !__is_std_initializer_list<remove_cvref_t<_Tp>>))));
  template <class... _Rs>
  using __concat_reference_t = common_reference_t<range_reference_t<_Rs>...>;
  template <class... _Rs>
  using __concat_value_t = common_type_t<range_value_t<_Rs>...>;
  template <class... _Rs>
  using __concat_rvalue_reference_t =
      common_reference_t<range_rvalue_reference_t<_Rs>...>;
  template <class _Ref, class _RRef, class _It>
  concept __concat_indirectly_readable_impl = requires(const _It __it) {
    *__it->convertible_to_Ref;
    { ranges::iter_move } -> convertible_to<_RRef>;
  };
  template <class... _Rs>
  concept __concat_indirectly_readable =
      common_reference_with<__concat_reference_t<_Rs...> &&,
                            __concat_value_t<_Rs...> &> &&
      common_reference_with<__concat_reference_t<_Rs...> &&,
                            __concat_rvalue_reference_t<_Rs...> &&> &&
      common_reference_with<__concat_rvalue_reference_t<_Rs...> &&,
                            const __concat_value_t<_Rs...> &> &&
      (__concat_indirectly_readable_impl<__concat_reference_t<_Rs...>,
                                         __concat_rvalue_reference_t<_Rs...>,
                                         iterator_t<_Rs>> &&
       ...);
  template <class... _Rs>
  concept __concatable = requires {
    typename __concat_reference_t<_Rs...>;
    typename __concat_value_t<_Rs...>;
    typename __concat_rvalue_reference_t<_Rs...>;
  } && __concat_indirectly_readable<>;
  } // namespace ranges
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, bool> struct __underlying_type_impl;
  template <class _Tp> struct __underlying_type_impl<_Tp, false>;
  template <class _Tp>
  struct underlying_type : __underlying_type_impl<_Tp, is_enum<_Tp>::value> {};
  template <class _Tp> using __underlying_type_t = __underlying_type(_Tp);
  template <class _Tp> using underlying_type_t = __underlying_type_t<_Tp>;
  } // namespace __1
} // namespace std
  // namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  namespace ranges {
  namespace __iter_swap {
  ;
  template <class _T1, class _T2>
  concept __unqualified_iter_swap =
      (__class_or_enum<remove_cvref_t<_T1>> ||
       __class_or_enum<remove_cvref_t<_T2>>) &&
      requires { iter_swap(std::forward, std::forward<_T2>); };
  template <class _T1, class _T2>
  concept __readable_swappable =
      indirectly_readable<_T1> && indirectly_readable<_T2> &&
      swappable_with<iter_reference_t<_T1>, iter_reference_t<_T2>>;
  struct __fn {};
  } // namespace __iter_swap
  inline namespace __cpo {
  inline constexpr auto iter_swap = __iter_swap::__fn{};
  }
  } // namespace ranges
  template <class _I1, class _I2 = _I1>
  concept indirectly_swappable =
      indirectly_readable<_I1> && indirectly_readable<_I2> && requires {
        ranges::iter_swap;
        ranges::iter_swap;
        ranges::iter_swap;
        ranges::iter_swap;
      };
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  class __attribute__(()) exception {};
  class __attribute__(()) bad_exception : public exception {};
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {}
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Arg, class _Result>
  struct __unary_function_keep_layout_base {};
  template <class _Arg, class _Result>
  using __unary_function = __unary_function_keep_layout_base<_Arg, _Result>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  inline const bool __is_unqualified_v = __is_same(_Tp, __remove_cvref(_Tp));
  }
} // namespace std
  // namespace std
// namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  __attribute__(()) __attribute__((__exclude_from_explicit_instantiation__))
  __attribute__(()) inline constexpr void
  __libcpp_is_constant_evaluated() noexcept;
  }
} // namespace std
  // namespace std
// namespace std
// namespace std
extern "C";
;
;
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
;
;
;
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  ;
  template <class _Size, decltype(sizeof(int)) = sizeof(_Size) * 8>
  struct __murmur2_or_cityhash;
  template <class _Size> struct __murmur2_or_cityhash<_Size, 32>;
  template <class _Size> struct __murmur2_or_cityhash<_Size, 64>;
  ;
  template <class _Tp,
            decltype(sizeof(int)) = sizeof(_Tp) / sizeof(decltype(sizeof(int)))>
  struct __scalar_hash;
  template <class _Tp>
  struct __scalar_hash<_Tp, 0>
      : public __unary_function<_Tp, decltype(sizeof(int))> {};
  template <class _Tp>
  struct __scalar_hash<_Tp, 1>
      : public __unary_function<_Tp, decltype(sizeof(int))> {};
  template <class _Tp>
  struct __scalar_hash<_Tp, 2>
      : public __unary_function<_Tp, decltype(sizeof(int))> {};
  template <class _Tp>
  struct hash<_Tp *> : public __unary_function<_Tp *, decltype(sizeof(int))> {};
  template <class _Tp, class = void> struct __hash_impl;
  ;
  template <class _Tp>
  struct __hash_impl<
      _Tp, __enable_if_t<is_enum<_Tp>::value && __is_unqualified_v<_Tp>>>
      : __unary_function<_Tp, decltype(sizeof(int))> {};
  template <class _Tp>
  struct __hash_impl<_Tp, __enable_if_t<is_integral<_Tp>::value &&
                                        __is_unqualified_v<_Tp> && 0>>
      : __unary_function<_Tp, decltype(sizeof(int))> {};
  template <class _Tp>
  struct __hash_impl<
      _Tp, __enable_if_t<is_integral<_Tp>::value && __is_unqualified_v<_Tp> &&
                         (sizeof(_Tp) > sizeof(decltype(sizeof(int))))>>
      : __scalar_hash<_Tp> {};
  template <class _Tp>
  struct __hash_impl<_Tp, __enable_if_t<is_floating_point<_Tp>::value &&
                                        __is_unqualified_v<_Tp>>>
      : __scalar_hash<_Tp> {};
  template <> struct __hash_impl<long double> : __scalar_hash<long double> {};
  template <class _Tp> struct hash : public __hash_impl<_Tp> {};
  template <>
  struct hash<decltype(nullptr)>
      : public __unary_function<decltype(nullptr), decltype(sizeof(int))> {};
  template <class _Key, class _Hash>
  using __check_hash_requirements = integral_constant<
      bool, is_copy_constructible<_Hash>::value &&
                is_move_constructible<_Hash>::value &&
                __is_invocable_r_v<decltype(sizeof(int)), _Hash, _Key const &>>;
  template <class _Key, class _Hash = hash<_Key>>
  using __has_enabled_hash =
      integral_constant<bool, __check_hash_requirements<_Key, _Hash>::value &&
                                  is_default_constructible<_Hash>::value>;
  template <class _Type, class> using __enable_hash_helper_imp = _Type;
  template <class _Type, class... _Keys>
  using __enable_hash_helper =
      __enable_hash_helper_imp<_Type, __enable_if_t<__all<>::value>>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Arg1, class _Arg2, class _Result>
  struct __binary_function_keep_layout_base {};
  template <class _Arg1, class _Arg2, class _Result>
  using __binary_function =
      __binary_function_keep_layout_base<_Arg1, _Arg2, _Result>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  struct __equal_tag;
  ;
  struct __plus_tag;
  ;
  struct __less_tag;
  ;
  struct __greater_tag;
  ;
  struct __totally_ordered_less_tag;
  ;
  template <class _CanonicalTag, class _Operation, class... _Args>
  inline const bool __desugars_to_v = false;
  template <class _CanonicalTag, class _Operation, class... _Args>
  inline const bool __desugars_to_v<_CanonicalTag, _Operation const, _Args...> =
      __desugars_to_v<_CanonicalTag, _Operation, _Args...>;
  template <class _CanonicalTag, class _Operation, class... _Args>
  inline const bool __desugars_to_v<_CanonicalTag, _Operation &, _Args...> =
      __desugars_to_v<_CanonicalTag, _Operation, _Args...>;
  template <class _CanonicalTag, class _Operation, class... _Args>
  inline const bool __desugars_to_v<_CanonicalTag, _Operation &&, _Args...> =
      __desugars_to_v<_CanonicalTag, _Operation, _Args...>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp = void> struct plus : __binary_function<_Tp, _Tp, _Tp> {};
  ;
  template <class _Tp, class _Up>
  inline const bool __desugars_to_v<__plus_tag, plus<>, _Tp, _Up> = true;
  template struct plus<>;
  template <class _Tp = void>
  struct minus : __binary_function<_Tp, _Tp, _Tp> {};
  ;
  template struct minus<>;
  ;
  template <class _Tp = void>
  struct multiplies : __binary_function<_Tp, _Tp, _Tp> {};
  ;
  template struct multiplies<>;
  template <class _Tp = void>
  struct divides : __binary_function<_Tp, _Tp, _Tp> {};
  ;
  template struct divides<>;
  template <class _Tp = void>
  struct modulus : __binary_function<_Tp, _Tp, _Tp> {};
  ;
  template struct modulus<>;
  template <class _Tp = void> struct negate : __unary_function<_Tp, _Tp> {};
  ;
  template struct negate<>;
  template <class _Tp = void>
  struct bit_and : __binary_function<_Tp, _Tp, _Tp> {};
  ;
  template struct bit_and<>;
  template <class _Tp = void> struct bit_not : __unary_function<_Tp, _Tp> {};
  ;
  template struct bit_not<>;
  template <class _Tp = void>
  struct bit_or : __binary_function<_Tp, _Tp, _Tp> {};
  ;
  template struct bit_or<>;
  template <class _Tp = void>
  struct bit_xor : __binary_function<_Tp, _Tp, _Tp> {};
  ;
  template struct bit_xor<>;
  template <class _Tp = void>
  struct equal_to : __binary_function<_Tp, _Tp, bool> {};
  ;
  template struct equal_to<>;
  template <class _Tp, class _Up>
  inline const bool __desugars_to_v<__equal_tag, equal_to<>, _Tp, _Up> = true;
  template <class _Tp = void>
  struct not_equal_to : __binary_function<_Tp, _Tp, bool> {};
  ;
  template struct not_equal_to<>;
  template <class _Tp> struct less : __binary_function<_Tp, _Tp, bool> {};
  ;
  template struct less<>;
  template <class _Tp, class _Up>
  inline const bool __desugars_to_v<__less_tag, less<>, _Tp, _Up> = true;
  template <class _Tp = void>
  struct less_equal : __binary_function<_Tp, _Tp, bool> {};
  ;
  template struct less_equal<>;
  template <class _Tp = void>
  struct greater_equal : __binary_function<_Tp, _Tp, bool> {};
  ;
  template struct greater_equal<>;
  ;
  template <class _Tp = void>
  struct greater : __binary_function<_Tp, _Tp, bool> {};
  ;
  template struct greater<>;
  ;
  template <class _Tp, class _Up>
  inline const bool __desugars_to_v<__greater_tag, greater<>, _Tp, _Up> = true;
  template <class _Tp = void>
  struct logical_and : __binary_function<_Tp, _Tp, bool> {};
  ;
  template struct logical_and<>;
  template <class _Tp = void>
  struct logical_not : __unary_function<_Tp, bool> {};
  ;
  template struct logical_not<>;
  ;
  template <class _Tp = void>
  struct logical_or : __binary_function<_Tp, _Tp, bool> {};
  ;
  template struct logical_or<>;
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, bool> struct __dependent_type : public _Tp {};
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, class... _Args>
  struct is_trivially_constructible
      : integral_constant<bool, __is_trivially_constructible(_Tp, _Args...)> {};
  template <class _Tp, class... _Args>
  inline constexpr bool is_trivially_constructible_v =
      __is_trivially_constructible(_Tp, _Args...);
  template <class _Tp>
  struct is_trivially_copy_constructible
      : integral_constant<bool, __is_trivially_constructible(
                                    _Tp, __add_lvalue_reference_t<const _Tp>)> {
  };
  template <class _Tp>
  inline constexpr bool is_trivially_copy_constructible_v =
      is_trivially_copy_constructible<_Tp>::value;
  template <class _Tp>
  struct is_trivially_move_constructible
      : integral_constant<bool, __is_trivially_constructible(
                                    _Tp, __add_rvalue_reference_t<_Tp>)> {};
  template <class _Tp>
  inline constexpr bool is_trivially_move_constructible_v =
      is_trivially_move_constructible<_Tp>::value;
  template <class _Tp>
  struct is_trivially_default_constructible
      : integral_constant<bool, __is_trivially_constructible(_Tp)> {};
  template <class _Tp>
  inline constexpr bool is_trivially_default_constructible_v =
      __is_trivially_constructible(_Tp);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_trivially_destructible
      : integral_constant<bool, __is_trivially_destructible(_Tp)> {};
  template <class _Tp>
  inline constexpr bool is_trivially_destructible_v =
      is_trivially_destructible<_Tp>::value;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Iter, bool = __libcpp_is_contiguous_iterator<_Iter>::value>
  struct __unwrap_iter_impl;
  template <class _Iter> struct __unwrap_iter_impl<_Iter, true>;
  ;
  ;
  ;
  template <class _Category, class _Tp,
            class _Distance = decltype(static_cast<int *>(nullptr) -
                                       static_cast<int *>(nullptr)),
            class _Pointer = _Tp *, class _Reference = _Tp &>
  struct __attribute__(()) iterator {};
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Iterator> struct __segmented_iterator_traits;
  template <class _Tp, decltype(sizeof(int)) = 0>
  struct __has_specialization : integral_constant<bool, false> {};
  template <class _Tp>
  struct __has_specialization<_Tp, sizeof(_Tp) * 0>
      : integral_constant<bool, true> {};
  template <class _Iterator>
  using __is_segmented_iterator =
      __has_specialization<__segmented_iterator_traits<_Iterator>>;
  template <class _SegmentedIterator>
  struct __has_random_access_local_iterator
      : __has_random_access_iterator_category<
            typename __segmented_iterator_traits<
                _SegmentedIterator>::__local_iterator> {};
  template <class _Iter>
  class reverse_iterator
      : public iterator<typename iterator_traits<_Iter>::iterator_category,
                        typename iterator_traits<_Iter>::value_type,
                        typename iterator_traits<_Iter>::difference_type,
                        typename iterator_traits<_Iter>::pointer,
                        typename iterator_traits<_Iter>::reference> {
  private:
    _Iter __t_;

  protected:
    _Iter current;

  public:
    using iterator_type = _Iter;
    using iterator_category = _Iter;
    using pointer = _Iter;
    using iterator_concept = _Iter;
    using value_type = _Iter;
    using difference_type = _Iter;
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
  template <class _Iter, bool __b> struct __unwrap_iter_impl;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Iter> class __wrap_iter;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  template <class _It> struct pointer_traits;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp> class allocator;
  template <class _Tp> class shared_ptr;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _CharT> struct char_traits;
  template <> struct char_traits<char>;
  template <> struct char_traits<char8_t>;
  template <> struct char_traits<char16_t>;
  template <> struct char_traits<char32_t>;
  template <> struct char_traits<wchar_t>;
  template <class _CharT, class _Traits = char_traits<_CharT>,
            class _Allocator = allocator<_CharT>>
  class basic_string;
  using string = basic_string<char>;
  using u8string = basic_string<char8_t>;
  namespace pmr {}
  template <class _CharT, class _Traits, class _Allocator> class basic_string;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {}
namespace std {
class __attribute__(()) logic_error : public exception {};
class __attribute__(()) runtime_error : public exception {};
class __attribute__(()) domain_error : public logic_error {};
class __attribute__(()) invalid_argument : public logic_error {};
class __attribute__(()) length_error : public logic_error {};
class __attribute__(()) out_of_range : public logic_error {};
class __attribute__(()) range_error : public runtime_error {};
class __attribute__(()) overflow_error : public runtime_error {};
class __attribute__(()) underflow_error : public runtime_error {};
} // namespace std
// namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  struct unreachable_sentinel_t {};
  inline constexpr unreachable_sentinel_t unreachable_sentinel;
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  inline const bool __is_null_pointer_v =
      __is_same(__remove_cv(_Tp), decltype(nullptr));
  template <class _Tp>
  struct is_null_pointer : integral_constant<bool, __is_null_pointer_v<_Tp>> {};
  template <class _Tp> struct is_scalar : _BoolConstant<__is_scalar(_Tp)> {};
  template <class _Tp> inline constexpr bool is_scalar_v = __is_scalar(_Tp);
  } // namespace __1
} // namespace std
  // namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {}
} // namespace std
  // namespace std
// namespace std
namespace __attribute__(()) std {}
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp> struct _FirstPaddingByte {
    _Tp __v_;
    char __first_padding_byte_;
  };
  template <class _Tp>
  inline const decltype(sizeof(int)) __datasizeof_v =
      __builtin_offsetof(_FirstPaddingByte<_Tp>, __first_padding_byte_);
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
typedef struct __mbstate_t mbstate_t;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _CharT, class _Traits = char_traits<_CharT>>
  class basic_istream;
  template <class _CharT, class _Traits = char_traits<_CharT>>
  class basic_iostream;
  template <class _CharT, class _Traits> class basic_istream;
  template <class _CharT, class _Traits> class basic_iostream;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <semiregular _Sent> class move_sentinel;
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Iter, class = void> struct __move_iter_category_base;
  template <class _Iter>
    requires requires { typename iterator_traits<_Iter>::iterator_category; }
  struct __move_iter_category_base<_Iter>;
  template <class _Iter, class _Sent>
  concept __move_iter_comparable = requires {
    { std::declval == std::declval<_Sent> } -> convertible_to<bool>;
  };
  template <class _Iter>
  class move_iterator : public __move_iter_category_base<_Iter> {
  private:
    __attribute__(()) __attribute__(()) __attribute__(()) static constexpr void
    __get_iter_concept();

  public:
    using iterator_type = _Iter;
    using iterator_concept = decltype(__get_iter_concept);
    using value_type = _Iter;
    using difference_type = _Iter;
    using pointer = _Iter;
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
  inline constexpr bool
      disable_sized_sentinel_for<move_iterator<_Iter1>, move_iterator<_Iter2>> =
          true;
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__(()) std {
  inline namespace __1 {
  namespace ranges {
  struct __adjacent_find {};
  inline namespace __cpo {
  inline constexpr auto adjacent_find = __adjacent_find{};
  }
  } // namespace ranges
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {}
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _CharT, class _Traits = char_traits<_CharT>>
  class basic_streambuf;
  template <class _CharT, class _Traits> class basic_streambuf;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  class __attribute__(()) ios_base;
  template <class _CharT, class _Traits = char_traits<_CharT>> class basic_ios;
  template <class _CharT, class _Traits> class basic_ios;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _CharT, class _Traits = char_traits<_CharT>>
  class basic_ostream;
  template <class _CharT, class _Traits> class basic_ostream;
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
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _CharT, class _Traits = char_traits<_CharT>,
            class _Allocator = allocator<_CharT>>
  class basic_stringbuf;
  template <class _CharT, class _Traits = char_traits<_CharT>,
            class _Allocator = allocator<_CharT>>
  class basic_istringstream;
  template <class _CharT, class _Traits = char_traits<_CharT>,
            class _Allocator = allocator<_CharT>>
  class basic_ostringstream;
  template <class _CharT, class _Traits = char_traits<_CharT>,
            class _Allocator = allocator<_CharT>>
  class basic_stringstream;
  template <class _CharT, class _Traits, class _Allocator>
  class basic_stringbuf;
  template <class _CharT, class _Traits, class _Allocator>
  class basic_istringstream;
  template <class _CharT, class _Traits, class _Allocator>
  class basic_ostringstream;
  template <class _CharT, class _Traits, class _Allocator>
  class basic_stringstream;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _CharT, class _Traits = char_traits<_CharT>>
  class istreambuf_iterator;
  template <class _CharT, class _Traits = char_traits<_CharT>>
  class ostreambuf_iterator;
  template <class _State> class fpos;
  template <class _CharT, class _Traits> class __save_flags;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _CharT> struct char_traits;
  template <> struct char_traits<char> {
    using int_type = int;
    using off_type = long long;
    using pos_type = fpos<mbstate_t>;
    static inline __attribute__(()) __attribute__(())
    __attribute__(()) constexpr void
    assign() noexcept;
    static inline __attribute__(()) __attribute__(())
    __attribute__(()) constexpr void
    copy(char *__s1, const char *__s2, decltype(sizeof(int)) __n) noexcept;
  };
  template <class _CharT, class _IntT, _IntT _EOFVal>
  struct __char_traits_base {
    using char_type = _CharT;
    using int_type = _IntT;
    using off_type = long long;
    using pos_type = fpos<mbstate_t>;
  };
  template <>
  struct char_traits<wchar_t>
      : __char_traits_base<wchar_t, unsigned int,
                           static_cast<unsigned int>(0)> {};
  template <>
  struct char_traits<char8_t>
      : __char_traits_base<char8_t, unsigned int,
                           static_cast<unsigned int>(0)> {};
  template <>
  struct char_traits<char16_t>
      : __char_traits_base<char16_t, uint_least16_t,
                           static_cast<uint_least16_t>(0xFFFF)> {};
  template <>
  struct char_traits<char32_t>
      : __char_traits_base<char32_t, uint_least32_t,
                           static_cast<uint_least32_t>(0xFFFFFFFF)> {};
  ;
  ;
  ;
  ;
  ;
  } // namespace __1
} // namespace std
// namespace std
extern "C" extern "C" {
  struct wl_object;
  struct wl_message;
  struct wl_interface;
  ;
  struct wl_list;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  struct wl_array;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  struct wl_argument;
  typedef int;
  typedef void __attribute__0;
  enum wl_iterator_result {};
}
extern "C" typedef long unsigned int size_t;
extern "C";
extern "C";
extern "C";
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__0)) std {}
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, class _Alloc = allocator<_Tp>> class vector;
  template <class _Tp, class _Allocator> class vector {};
  template <class _Allocator> class vector<bool, _Allocator>;
  } // namespace __1
} // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  namespace __format {
  template <class _Container> inline constexpr bool __enable_insertable = false;
  }
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp> using __pointer_member = typename _Tp::pointer;
  template <class _Tp, class _Alloc>
  using __pointer = __detected_or_t<_Tp *, __pointer_member,
                                    __libcpp_remove_reference_t<_Alloc>>;
  template <class _Alloc, template <class> class _Alias, class _Ptr, class _Tp,
            class = void>
  struct __rebind_or_alias_pointer {
    using type = typename pointer_traits<_Ptr>::template rebind<_Tp>;
  };
  template <class _Ptr, class _Alloc, class _Tp, template <class> class _Alias>
  struct __rebind_or_alias_pointer<_Alloc, _Alias, _Ptr, _Tp,
                                   __void_t<_Alias<_Alloc>>>;
  ;
  template <class _Alloc>
  using __const_pointer_member = typename _Alloc::const_pointer;
  template <class _Tp, class _Ptr, class _Alloc>
  using __const_pointer_t =
      typename __rebind_or_alias_pointer<_Alloc, __const_pointer_member, _Ptr,
                                         const _Tp>::type;
  template <class _Alloc>
  using __void_pointer_member = typename _Alloc::void_pointer;
  template <class _Ptr, class _Alloc>
  using __void_pointer_t =
      typename __rebind_or_alias_pointer<_Alloc, __void_pointer_member, _Ptr,
                                         void>::type;
  template <class _Alloc>
  using __const_void_pointer_member = typename _Alloc::const_void_pointer;
  template <class _Ptr, class _Alloc>
  using __const_void_pointer_t =
      typename __rebind_or_alias_pointer<_Alloc, __const_void_pointer_member,
                                         _Ptr, const void>::type;
  template <class _Tp> using __size_type_member = typename _Tp::size_type;
  template <class _Alloc, class _DiffType>
  using __size_type =
      __detected_or_t<__make_unsigned_t<_DiffType>, __size_type_member, _Alloc>;
  template <class _Alloc, class _Ptr, class = void>
  struct __alloc_traits_difference_type;
  template <class _Alloc, class _Ptr>
  struct __alloc_traits_difference_type<_Alloc, _Ptr, __void_t<>> {
    using type[[]] = typename _Alloc::difference_type;
  };
  template <class _Tp>
  using __propagate_on_container_copy_assignment_member =
      typename _Tp::propagate_on_container_copy_assignment;
  template <class _Alloc>
  using __propagate_on_container_copy_assignment =
      __detected_or_t<integral_constant<bool, false>,
                      __propagate_on_container_copy_assignment_member, _Alloc>;
  template <class _Tp>
  using __propagate_on_container_move_assignment_member =
      typename _Tp::propagate_on_container_move_assignment;
  template <class _Alloc>
  using __propagate_on_container_move_assignment =
      __detected_or_t<integral_constant<bool, false>,
                      __propagate_on_container_move_assignment_member, _Alloc>;
  template <class _Tp>
  using __propagate_on_container_swap_member =
      typename _Tp::propagate_on_container_swap;
  template <class _Alloc>
  using __propagate_on_container_swap =
      __detected_or_t<integral_constant<bool, false>,
                      __propagate_on_container_swap_member, _Alloc>;
  template <class _Tp>
  using __is_always_equal_member = typename _Tp::is_always_equal;
  template <class _Alloc>
  using __is_always_equal = __detected_or_t<typename is_empty<_Alloc>::type,
                                            __is_always_equal_member, _Alloc>;
  template <class _Tp, class _Up, class = void>
  inline const bool __has_rebind_other_v = false;
  template <class _Tp, class _Up>
  inline const bool __has_rebind_other_v<
      _Tp, _Up, __void_t<typename _Tp::template rebind<>::other>> = true;
  template <class _Tp, class _Up, bool = __has_rebind_other_v<_Tp, _Up>>
  struct __allocator_traits_rebind;
  template <template <class, class...> class _Alloc, class _Tp, class... _Args,
            class _Up>
  struct __allocator_traits_rebind<_Alloc<_Tp, _Args...>, _Up, true>;
  template <template <class, class...> class _Alloc, class _Tp, class... _Args,
            class _Up>
  struct __allocator_traits_rebind<_Alloc<_Tp, _Args...>, _Up, false> {
    using type [[__gnu__::__nodebug__]] = _Alloc<_Up, _Args...>;
  };
  template <class _Alloc, class _Tp>
  using __allocator_traits_rebind_t =
      typename __allocator_traits_rebind<_Alloc, _Tp>::type;
  template <class _Alloc, class _SizeType, class _ConstVoidPtr, class = void>
  inline const bool __has_allocate_hint_v = false;
  template <class _Alloc, class _SizeType, class _ConstVoidPtr>
  inline const bool
      __has_allocate_hint_v<_Alloc, _SizeType, _ConstVoidPtr,
                            decltype(std::declval<_Alloc>.allocate)> = true;
  template <class, class _Alloc, class... _Args>
  inline const bool __has_construct_impl = false;
  template <class _Alloc, class... _Args>
  inline const bool __has_construct_v =
      __has_construct_impl<void, _Alloc, _Args...>;
  template <class _Alloc, class _Pointer, class = void>
  inline const bool __has_destroy_v = false;
  template <class _Alloc, class _Pointer>
  inline const bool __has_destroy_v<_Alloc, _Pointer,
                                    decltype(std::declval<_Alloc>.destroy)> =
      true;
  template <class _Alloc, class = void>
  inline const bool __has_max_size_v = false;
  template <class _Alloc>
  inline const bool
      __has_max_size_v<_Alloc, decltype(std::declval<_Alloc &>.max_size)> =
          true;
  template <class _Alloc, class = void>
  inline const bool __has_select_on_container_copy_construction_v = false;
  template <class _Alloc>
  inline const bool __has_select_on_container_copy_construction_v<
      _Alloc,
      decltype(std::declval<_Alloc>.select_on_container_copy_construction)> =
      true;
  template <class _Pointer, class _SizeType = decltype(sizeof(int))>
  struct allocation_result;
  ;
  ;
  template <class _Alloc> struct allocator_traits {
    using allocator_type = _Alloc;
    using value_type = typename allocator_type::value_type;
    using pointer = __pointer<value_type, allocator_type>;
    using const_pointer =
        __const_pointer_t<value_type, pointer, allocator_type>;
    using void_pointer = __void_pointer_t<pointer, allocator_type>;
    using const_void_pointer = __const_void_pointer_t<pointer, allocator_type>;
    using difference_type =
        typename __alloc_traits_difference_type<allocator_type, pointer>::type;
    using size_type = __size_type<allocator_type, difference_type>;
    using propagate_on_container_copy_assignment =
        __propagate_on_container_copy_assignment<allocator_type>;
    using propagate_on_container_move_assignment =
        __propagate_on_container_move_assignment<allocator_type>;
    using propagate_on_container_swap =
        __propagate_on_container_swap<allocator_type>;
    using is_always_equal = __is_always_equal<allocator_type>;
    template <class _Tp>
    using rebind_alloc = __allocator_traits_rebind_t<allocator_type, _Tp>;
    template <class _Tp> using rebind_traits = allocator_traits;
    ;
    ;
    ;
    ;
    template <class _Ap = _Alloc,
              __enable_if_t<!__has_max_size_v<const _Ap>, int> = 0>
    __attribute__(()) __attribute__((__exclude_from_explicit_instantiation__))
    __attribute__(()) constexpr static size_type
    max_size(const allocator_type &) noexcept {
      return numeric_limits<size_type>::max() / sizeof(value_type);
    };
    ;
  };
  template <class _Traits, class _Tp>
  using __rebind_alloc = typename _Traits::template rebind_alloc<_Tp>;
  template <class _Alloc>
  struct __check_valid_allocator : integral_constant<bool, true> {};
  template <class _Tp> inline const bool __is_std_allocator_v = false;
  template <class _Alloc>
  inline const bool __is_cpp17_move_insertable_v =
      is_move_constructible<typename _Alloc::value_type>::value || 0;
  template <class _Alloc>
  inline const bool __is_cpp17_copy_insertable_v =
      __is_cpp17_move_insertable_v<_Alloc> && 0;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {}
typedef long unsigned int size_t;
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp> class allocator;
  template <bool _Cond, class _Unique> struct __non_trivial_if;
  ;
  template <class _Unique> struct __non_trivial_if<true, _Unique> {};
  template <class _Tp>
  class allocator
      : private __non_trivial_if<!is_void<_Tp>::value, allocator<_Tp>> {
  public:
    typedef decltype(static_cast<int *>(nullptr) -
                     static_cast<int *>(nullptr)) difference_type;
    typedef _Tp value_type;
    typedef integral_constant<bool, true>
        propagate_on_container_move_assignment;
    ;
  };
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  inline const decltype(sizeof(int)) __compressed_pair_alignment = alignof(_Tp);
  template <class _Tp>
  inline const decltype(sizeof(int)) __compressed_pair_alignment<_Tp &> =
      alignof(void *);
  template <class _ToPad>
  inline const bool __is_reference_or_unpadded_object =
      0 || sizeof(_ToPad) == __datasizeof_v<_ToPad>;
  template <class _ToPad,
            bool _Empty = __is_reference_or_unpadded_object<_ToPad>>
  class __compressed_pair_padding;
  template <class _ToPad> class __compressed_pair_padding<_ToPad, true> {};
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp> struct __align_type {
    static const decltype(sizeof(int)) value = __alignof(_Tp);
    typedef _Tp type;
  };
  struct __struct_double {};
  struct __struct_double4 {};
  using __all_types =
      __type_list<__align_type<unsigned char>, __align_type<unsigned short>,
                  __align_type<unsigned int>, __align_type<unsigned long>,
                  __align_type<unsigned long long>, __align_type<double>,
                  __align_type<long double>, __align_type<__struct_double>,
                  __align_type<__struct_double4>, __align_type<int *>>;
  template <class _TL, decltype(sizeof(int)) _Len> struct __find_max_align;
  template <class _Head, decltype(sizeof(int)) _Len>
  struct __find_max_align<__type_list<_Head>, _Len>
      : public integral_constant<decltype(sizeof(int)), _Head::value> {};
  template <decltype(sizeof(int)) _Len, decltype(sizeof(int)) _A1,
            decltype(sizeof(int)) _A2>
  struct __select_align {
  private:
    static const decltype(sizeof(int)) __min = _A2 < _A2;
    static const decltype(sizeof(int)) __max = _A1 < _A2;

  public:
    static const decltype(sizeof(int)) value = _Len < __min;
  };
  template <class _Head, class... _Tail, decltype(sizeof(int)) _Len>
  struct __find_max_align<__type_list<_Head, _Tail...>, _Len>
      : public integral_constant<
            decltype(sizeof(int)),
            __select_align<
                _Len, _Head::value,
                __find_max_align<__type_list<_Tail...>, _Len>::value>::value> {
  };
  template <decltype(sizeof(int)) _Len,
            decltype(sizeof(int)) _Align =
                __find_max_align<__all_types, _Len>::value>
  struct __attribute__((__deprecated__)) aligned_storage {
    struct alignas(_Align) type {};
  };
  template <decltype(sizeof(int)) _Len,
            decltype(sizeof(int)) _Align =
                __find_max_align<__all_types, _Len>::value>
  using aligned_storage_t __attribute__(()) =
      typename aligned_storage<_Len, _Align>::type;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <typename _Alloc, typename = void, typename = void>
  struct __is_allocator : integral_constant<bool, false> {};
  template <typename _Alloc>
  struct __is_allocator<_Alloc, __void_t<typename _Alloc::value_type>,
                        __void_t<decltype(0)>> : integral_constant<bool, true> {
  };
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Container> struct __container_traits;
  }
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp, class _Allocator>
  struct __container_traits<vector<_Tp, _Allocator>>;
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  ;
  ;
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
extern "C";
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Cp> class __bit_const_reference;
  template <class _Tp> struct __has_storage_type;
  template <class, class> struct __size_difference_type_traits;
  template <class _Cp> struct __size_difference_type_traits<_Cp, __void_t<>>;
  ;
  ;
  ;
  ;
  ;
  template <class _Cp, bool = __has_storage_type<_Cp>::value>
  class __bit_reference;
  template <class _Cp> class __bit_reference<_Cp, false>;
  ;
  ;
  ;
  ;
  template <class _Cp> class __bit_const_reference;
  template <class _Cp> struct __bit_array;
  ;
  template <class _Cp, bool _IsConst, typename _Cp::__storage_type>
  class __bit_iterator;
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {}
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Context> class basic_format_arg;
  template <class _Context> class basic_format_arg {
  public:
    class handle;
  };
  template <class _OutIt, class _CharT>
    requires output_iterator<_OutIt, const _CharT &>
  class basic_format_context;
  template <class _Tp, class _CharT = char> struct formatter;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  ;
  template <class _CharT, class _Traits> class basic_string_view;
  ;
  ;
  template <class _CharT, class _Traits>
  inline constexpr bool
      ranges::enable_view<basic_string_view<_CharT, _Traits>> = true;
  template <class _CharT, class _Traits>
  inline constexpr bool
      ranges::enable_borrowed_range<basic_string_view<_CharT, _Traits>> = true;
  ;
  ;
  ;
  ;
  ;
  template <class _CharT>
  struct __string_view_hash
      : public __unary_function<basic_string_view<_CharT, char_traits<_CharT>>,
                                decltype(sizeof(int))> {};
  template <>
  struct hash<basic_string_view<char, char_traits<char>>>
      : __string_view_hash<char> {};
  template <>
  struct hash<basic_string_view<char8_t, char_traits<char8_t>>>
      : __string_view_hash<char8_t> {};
  template <>
  struct hash<basic_string_view<char16_t, char_traits<char16_t>>>
      : __string_view_hash<char16_t> {};
  template <>
  struct hash<basic_string_view<char32_t, char_traits<char32_t>>>
      : __string_view_hash<char32_t> {};
  template <>
  struct hash<basic_string_view<wchar_t, char_traits<wchar_t>>>
      : __string_view_hash<wchar_t> {};
  inline namespace literals {}
  } // namespace __1
} // namespace std
  // namespace std
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  ;
  template <class _Iter>
  struct __string_is_trivial_iterator : public integral_constant<bool, false> {
  };
  template <class _Tp>
  struct __string_is_trivial_iterator<_Tp *> : public is_arithmetic<_Tp> {};
  template <class _Iter>
  struct __string_is_trivial_iterator<__wrap_iter<_Iter>>
      : public __string_is_trivial_iterator<_Iter> {};
  template <class _CharT, class _Traits, class _Tp>
  struct __can_be_converted_to_string_view
      : public _BoolConstant<
            is_convertible<const _Tp &,
                           basic_string_view<_CharT, _Traits>>::value &&
            !is_convertible<const _Tp &, const _CharT *>::value> {};
  struct __uninitialized_size_tag;
  struct __init_with_sentinel_tag;
  template <decltype(sizeof(int)) _PaddingSize> struct __padding;
  template <> struct __padding<0>;
  ;
  template <class _CharT, class _Traits, class _Allocator> class basic_string {
  public:
    using __self = basic_string;
    using __self_view = _CharT;
    using traits_type = _Traits;
    using value_type = _CharT;
    using allocator_type = _Allocator;
    using __alloc_traits = allocator_traits<allocator_type>;
    using size_type = typename __alloc_traits::size_type;
    using difference_type = typename __alloc_traits::difference_type;
    using reference = value_type &;
    using const_reference = const value_type &;
    using pointer = typename __alloc_traits::pointer;
    using const_pointer = typename __alloc_traits::const_pointer;
    using iterator = __wrap_iter<pointer>;
    using const_iterator = __wrap_iter<const_pointer>;
    using reverse_iterator = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

  private:
    static const size_type __endian_factor = 2;
    struct __long {
      struct __attribute__0 {};
      pointer __data_;
    };
    enum { __min_cap };
    struct __short {
      struct __attribute__0 {
        unsigned char __is_long_ : 1;
        unsigned char __size_ : 7;
      };
      value_type __data_;
    };
    struct __rep {
      __short __s;
      __long __l;
    };
    struct {
      __attribute__((__aligned__)) __rep __rep_;
      ::std::__compressed_pair_padding<__rep> __padding1_903_;
      [[__no_unique_address__]] allocator_type __alloc_;
      ::std::__compressed_pair_padding<allocator_type> __padding2_903_;
    };
    struct __annotate_new_size;
    ;
    ;

  public:
    __attribute__(()) static const size_type npos = -1;
    constexpr basic_string(const basic_string &__str);
    constexpr basic_string(const basic_string &__str,
                           const allocator_type &__a);
    __attribute__(()) __attribute__((__exclude_from_explicit_instantiation__))
    __attribute__(()) constexpr basic_string(basic_string &&__str);
    template <__enable_if_t<__is_allocator<_Allocator>::value, int> = 0>
    __attribute__(()) __attribute__(())
    __attribute__(()) constexpr basic_string(const _CharT *_Nonnull __s) {
      ;
      __init(__s, 0);
    };
    ;
    constexpr basic_string(const basic_string &__str, size_type __pos,
                           size_type __n, const _Allocator &__a = _Allocator());
    ;
    ;
    constexpr ~basic_string();
    constexpr basic_string &operator=(const basic_string &__str);
    ;
    __attribute__(()) __attribute__(()) __attribute__(()) constexpr void
    operator=(basic_string &&__str) noexcept;
    constexpr basic_string &operator=(value_type __c);
    constexpr void resize(size_type __n, value_type __c);
    constexpr void reserve(size_type __requested_capacity);
    ;
    constexpr const_reference at(size_type __n) const;
    constexpr reference at(size_type __n);
    ;
    ;
    constexpr basic_string &append(const basic_string &__str, size_type __pos,
                                   size_type __n = npos);
    ;
    constexpr basic_string &append(const value_type *__s, size_type __n);
    constexpr basic_string &append(const value_type *_Nonnull __s);
    constexpr basic_string &append(size_type __n, value_type __c);
    ;
    ;
    ;
    constexpr void push_back(value_type __c);
    ;
    constexpr basic_string &assign(const basic_string &__str, size_type __pos,
                                   size_type __n = npos);
    ;
    constexpr basic_string &assign(const value_type *__s, size_type __n);
    constexpr basic_string &assign(const value_type *__s);
    constexpr basic_string &assign(size_type __n, value_type __c);
    ;
    constexpr basic_string &insert(size_type __pos1, const basic_string &__str,
                                   size_type __pos2, size_type __n = npos);
    constexpr basic_string &insert(size_type __pos, const value_type *__s,
                                   size_type __n);
    constexpr basic_string &insert(size_type __pos,
                                   const value_type *_Nonnull __s);
    constexpr basic_string &insert(size_type __pos, size_type __n,
                                   value_type __c);
    constexpr iterator insert(const_iterator __pos, value_type __c);
    ;
    ;
    ;
    constexpr basic_string &erase(size_type __pos = 0, size_type __n = npos);
    ;
    constexpr basic_string &replace(size_type __pos1, size_type __n1,
                                    const basic_string &__str, size_type __pos2,
                                    size_type __n2 = npos);
    ;
    constexpr basic_string &replace(size_type __pos, size_type __n1,
                                    const value_type *__s, size_type __n2);
    constexpr basic_string &replace(size_type __pos, size_type __n1,
                                    const value_type *__s);
    constexpr basic_string &replace(size_type __pos, size_type __n1,
                                    size_type __n2, value_type __c);
    constexpr size_type copy(value_type *__s, size_type __n,
                             size_type __pos = 0) const;
    ;
    constexpr size_type find(const value_type *__s, size_type __pos,
                             size_type __n) const noexcept;
    constexpr size_type find(value_type __c,
                             size_type __pos = 0) const noexcept;
    ;
    constexpr size_type rfind(const value_type *__s, size_type __pos,
                              size_type __n) const noexcept;
    constexpr size_type rfind(value_type __c,
                              size_type __pos = npos) const noexcept;
    ;
    constexpr size_type find_first_of(const value_type *__s, size_type __pos,
                                      size_type __n) const noexcept;
    ;
    constexpr size_type find_last_of(const value_type *__s, size_type __pos,
                                     size_type __n) const noexcept;
    constexpr size_type find_first_not_of(const value_type *__s,
                                          size_type __pos,
                                          size_type __n) const noexcept;
    ;
    constexpr size_type find_last_not_of(const value_type *__s, size_type __pos,
                                         size_type __n) const noexcept;
    ;
    ;
    constexpr int compare(size_type __pos1, size_type __n1,
                          const basic_string &__str, size_type __pos2,
                          size_type __n2 = npos) const;
    ;
    constexpr int compare(const value_type *_Nonnull __s) const noexcept;
    constexpr int compare(size_type __pos1, size_type __n1,
                          const value_type *_Nonnull __s) const;
    constexpr int compare(size_type __pos1, size_type __n1,
                          const value_type *__s, size_type __n2) const;

  private:
    ;
    enum { __alignment };
    constexpr void __init(const value_type *__s, size_type __sz) {
      bool __trans_tmp_2;
      size_type __trans_tmp_1;
      __libcpp_is_constant_evaluated;
      __rep_ = __rep();
      {
        if (size_type __m = __alloc_traits::max_size(__alloc_); __m <= 0 / 2)
          ;
        else {
          bool __uses_lsb = 2 == 2;
          __trans_tmp_1 = __uses_lsb ? __m - __alignment - 1 : -__alignment - 1;
        }
      }
      __sz > __trans_tmp_1;
      this->__throw_length_error;
      __trans_tmp_2;
      ;
      traits_type::copy;
      traits_type::assign;
      ;
    }
    inline constexpr void __init(size_type __n, value_type __c);
    ;
    ;
    ;
    ;
    constexpr __attribute__(()) void
    __grow_by(size_type __old_cap, size_type __delta_cap, size_type __old_sz,
              size_type __n_copy, size_type __n_del, size_type __n_add = 0);
    constexpr void __grow_by_and_replace(size_type __old_cap,
                                         size_type __delta_cap,
                                         size_type __old_sz, size_type __n_copy,
                                         size_type __n_del, size_type __n_add,
                                         const value_type *__p_new_stuff);
    ;
    ;
    ;
    __attribute__(()) __attribute__((__exclude_from_explicit_instantiation__))
    __attribute__((__abi_tag__0)) static void
    __throw_length_error();
    ;
  };
  extern template __attribute__(()) void
  basic_string<char>::__init(const value_type *, size_type);
  extern template
      __attribute__(()) void basic_string<char>::__init(size_type, value_type);
  extern template __attribute__(())
  basic_string<char>::basic_string(const basic_string &, size_type, size_type,
                                   const allocator<char> &);
  extern template __attribute__0 basic_string<char>::~basic_string();
  extern template __attribute__(()) basic_string<char> &
      basic_string<char>::operator=(value_type);
  extern template __attribute__(()) basic_string<char> &
      basic_string<char>::assign(size_type, value_type);
  extern template __attribute__(()) basic_string<char> &
  basic_string<char>::assign(const basic_string &, size_type, size_type);
  extern template __attribute__(()) basic_string<char> &
      basic_string<char>::append(size_type, value_type);
  extern template __attribute__(()) basic_string<char> &
  basic_string<char>::append(const value_type *);
  extern template __attribute__(()) basic_string<char> &
  basic_string<char>::append(const value_type *, size_type);
  extern template __attribute__(()) basic_string<char> &
  basic_string<char>::append(const basic_string &, size_type, size_type);
  extern template
      __attribute__(()) void basic_string<char>::push_back(value_type);
  extern template __attribute__(()) basic_string<char> &
  basic_string<char>::insert(size_type, const value_type *);
  extern template __attribute__(()) basic_string<char> &
      basic_string<char>::insert(size_type, size_type, value_type);
  extern template __attribute__(()) basic_string<char> &
  basic_string<char>::insert(size_type, const value_type *, size_type);
  extern template __attribute__(()) basic_string<char> &
  basic_string<char>::insert(size_type, const basic_string &, size_type,
                             size_type);
  extern template __attribute__(()) basic_string<char>::iterator
      basic_string<char>::insert(basic_string::const_iterator, value_type);
  extern template __attribute__(()) basic_string<char> &
  basic_string<char>::replace(size_type, size_type, const value_type *);
  extern template __attribute__(()) basic_string<char> &
      basic_string<char>::replace(size_type, size_type, size_type, value_type);
  extern template __attribute__(()) basic_string<char> &
  basic_string<char>::replace(size_type, size_type, const value_type *,
                              size_type);
  extern template __attribute__(()) basic_string<char> &
  basic_string<char>::replace(size_type, size_type, const basic_string &,
                              size_type, size_type);
  extern template __attribute__(()) void
  basic_string<char>::__grow_by_and_replace(size_type, size_type, size_type,
                                            size_type, size_type, size_type,
                                            const value_type *);
  extern template
      __attribute__(()) void basic_string<char>::resize(size_type, value_type);
  extern template __attribute__(()) void basic_string<char>::reserve(size_type);
  extern template __attribute__(()) basic_string<char>::size_type
  basic_string<char>::copy(value_type *, size_type, size_type) const;
  extern template __attribute__(()) basic_string<char>::size_type
      basic_string<char>::find(value_type, size_type) const;
  extern template __attribute__(()) basic_string<char>::size_type
  basic_string<char>::find(const value_type *, size_type, size_type) const;
  extern template __attribute__(()) basic_string<char>::size_type
      basic_string<char>::rfind(value_type, size_type) const;
  extern template __attribute__(()) basic_string<char>::size_type
  basic_string<char>::rfind(const value_type *, size_type, size_type) const;
  extern template __attribute__(()) basic_string<char>::size_type
  basic_string<char>::find_first_of(const value_type *, size_type,
                                    size_type) const;
  extern template __attribute__(()) basic_string<char>::size_type
  basic_string<char>::find_last_of(const value_type *, size_type,
                                   size_type) const;
  extern template __attribute__(()) basic_string<char>::size_type
  basic_string<char>::find_first_not_of(const value_type *, size_type,
                                        size_type) const;
  extern template __attribute__(()) basic_string<char>::size_type
  basic_string<char>::find_last_not_of(const value_type *, size_type,
                                       size_type) const;
  extern template __attribute__(()) char &basic_string<char>::at(size_type);
  extern template __attribute__(())
  const char &basic_string<char>::at(size_type) const;
  extern template __attribute__(()) int
  basic_string<char>::compare(const value_type *) const;
  extern template __attribute__(()) int
  basic_string<char>::compare(size_type, size_type, const value_type *) const;
  extern template __attribute__(()) int
  basic_string<char>::compare(size_type, size_type, const value_type *,
                              size_type) const;
  extern template __attribute__(()) int
  basic_string<char>::compare(size_type, size_type, const basic_string &,
                              size_type, size_type) const;
  extern template __attribute__(())
  const basic_string<char>::size_type basic_string<char>::npos;
  extern template __attribute__(())
  basic_string<char>::basic_string(const basic_string &);
  extern template __attribute__(())
  basic_string<char>::basic_string(const basic_string &,
                                   const allocator<char> &);
  extern template __attribute__(()) basic_string<char> &
  basic_string<char>::assign(const value_type *);
  extern template __attribute__(()) basic_string<char> &
  basic_string<char>::assign(const value_type *, size_type);
  extern template __attribute__(()) basic_string<char> &
  basic_string<char>::operator=(basic_string const &);
  extern template __attribute__(()) void
      basic_string<char>::__grow_by(size_type, size_type, size_type, size_type,
                                    size_type, size_type);
  extern template __attribute__(()) basic_string<char> &
      basic_string<char>::erase(size_type, size_type);
  extern template __attribute__(()) void
  basic_string<wchar_t>::__init(const value_type *, size_type);
  extern template
      __attribute__(()) void basic_string<wchar_t>::__init(size_type,
                                                           value_type);
  extern template __attribute__(())
  basic_string<wchar_t>::basic_string(const basic_string &, size_type,
                                      size_type, const allocator<wchar_t> &);
  extern template __attribute__0 basic_string<wchar_t>::~basic_string();
  extern template __attribute__(()) basic_string<wchar_t> &
      basic_string<wchar_t>::operator=(value_type);
  extern template __attribute__(()) basic_string<wchar_t> &
      basic_string<wchar_t>::assign(size_type, value_type);
  extern template __attribute__(()) basic_string<wchar_t> &
  basic_string<wchar_t>::assign(const basic_string &, size_type, size_type);
  extern template __attribute__(()) basic_string<wchar_t> &
      basic_string<wchar_t>::append(size_type, value_type);
  extern template __attribute__(()) basic_string<wchar_t> &
  basic_string<wchar_t>::append(const value_type *);
  extern template __attribute__(()) basic_string<wchar_t> &
  basic_string<wchar_t>::append(const value_type *, size_type);
  extern template __attribute__(()) basic_string<wchar_t> &
  basic_string<wchar_t>::append(const basic_string &, size_type, size_type);
  extern template
      __attribute__(()) void basic_string<wchar_t>::push_back(value_type);
  extern template __attribute__(()) basic_string<wchar_t> &
  basic_string<wchar_t>::insert(size_type, const value_type *);
  extern template __attribute__(()) basic_string<wchar_t> &
      basic_string<wchar_t>::insert(size_type, size_type, value_type);
  extern template __attribute__(()) basic_string<wchar_t> &
  basic_string<wchar_t>::insert(size_type, const value_type *, size_type);
  extern template __attribute__(()) basic_string<wchar_t> &
  basic_string<wchar_t>::insert(size_type, const basic_string &, size_type,
                                size_type);
  extern template __attribute__(()) basic_string<wchar_t>::iterator
      basic_string<wchar_t>::insert(basic_string::const_iterator, value_type);
  extern template __attribute__(()) basic_string<wchar_t> &
  basic_string<wchar_t>::replace(size_type, size_type, const value_type *);
  extern template __attribute__(()) basic_string<wchar_t> &
      basic_string<wchar_t>::replace(size_type, size_type, size_type,
                                     value_type);
  extern template __attribute__(()) basic_string<wchar_t> &
  basic_string<wchar_t>::replace(size_type, size_type, const value_type *,
                                 size_type);
  extern template __attribute__(()) basic_string<wchar_t> &
  basic_string<wchar_t>::replace(size_type, size_type, const basic_string &,
                                 size_type, size_type);
  extern template __attribute__(()) void
  basic_string<wchar_t>::__grow_by_and_replace(size_type, size_type, size_type,
                                               size_type, size_type, size_type,
                                               const value_type *);
  extern template
      __attribute__(()) void basic_string<wchar_t>::resize(size_type,
                                                           value_type);
  extern template
      __attribute__(()) void basic_string<wchar_t>::reserve(size_type);
  extern template __attribute__(()) basic_string<wchar_t>::size_type
  basic_string<wchar_t>::copy(value_type *, size_type, size_type) const;
  extern template __attribute__(()) basic_string<wchar_t>::size_type
      basic_string<wchar_t>::find(value_type, size_type) const;
  extern template __attribute__(()) basic_string<wchar_t>::size_type
  basic_string<wchar_t>::find(const value_type *, size_type, size_type) const;
  extern template __attribute__(()) basic_string<wchar_t>::size_type
      basic_string<wchar_t>::rfind(value_type, size_type) const;
  extern template __attribute__(()) basic_string<wchar_t>::size_type
  basic_string<wchar_t>::rfind(const value_type *, size_type, size_type) const;
  extern template __attribute__(()) basic_string<wchar_t>::size_type
  basic_string<wchar_t>::find_first_of(const value_type *, size_type,
                                       size_type) const;
  extern template __attribute__(()) basic_string<wchar_t>::size_type
  basic_string<wchar_t>::find_last_of(const value_type *, size_type,
                                      size_type) const;
  extern template __attribute__(()) basic_string<wchar_t>::size_type
  basic_string<wchar_t>::find_first_not_of(const value_type *, size_type,
                                           size_type) const;
  extern template __attribute__(()) basic_string<wchar_t>::size_type
  basic_string<wchar_t>::find_last_not_of(const value_type *, size_type,
                                          size_type) const;
  extern template __attribute__(())
  wchar_t &basic_string<wchar_t>::at(size_type);
  extern template __attribute__(())
  const wchar_t &basic_string<wchar_t>::at(size_type) const;
  extern template __attribute__(()) int
  basic_string<wchar_t>::compare(const value_type *) const;
  extern template __attribute__(()) int
  basic_string<wchar_t>::compare(size_type, size_type,
                                 const value_type *) const;
  extern template __attribute__(()) int
  basic_string<wchar_t>::compare(size_type, size_type, const value_type *,
                                 size_type) const;
  extern template __attribute__(()) int
  basic_string<wchar_t>::compare(size_type, size_type, const basic_string &,
                                 size_type, size_type) const;
  extern template __attribute__(())
  const basic_string<wchar_t>::size_type basic_string<wchar_t>::npos;
  extern template __attribute__(())
  basic_string<wchar_t>::basic_string(const basic_string &);
  extern template __attribute__(())
  basic_string<wchar_t>::basic_string(const basic_string &,
                                      const allocator<wchar_t> &);
  extern template __attribute__(()) basic_string<wchar_t> &
  basic_string<wchar_t>::assign(const value_type *);
  extern template __attribute__(()) basic_string<wchar_t> &
  basic_string<wchar_t>::assign(const value_type *, size_type);
  extern template __attribute__(()) basic_string<wchar_t> &
  basic_string<wchar_t>::operator=(basic_string const &);
  extern template __attribute__(()) void
      basic_string<wchar_t>::__grow_by(size_type, size_type, size_type,
                                       size_type, size_type, size_type);
  extern template __attribute__(()) basic_string<wchar_t> &
      basic_string<wchar_t>::erase(size_type, size_type);
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
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
  __attribute__(())
  const typename basic_string<_CharT, _Traits, _Allocator>::size_type
      basic_string<_CharT, _Traits, _Allocator>::npos;
  template <class _CharT, class _Allocator>
  struct __string_hash
      : public __unary_function<
            basic_string<_CharT, char_traits<_CharT>, _Allocator>,
            decltype(sizeof(int))> {};
  template <class _Allocator>
  struct hash<basic_string<char, char_traits<char>, _Allocator>>
      : __string_hash<char, _Allocator> {};
  template <class _Allocator>
  struct hash<basic_string<char8_t, char_traits<char8_t>, _Allocator>>
      : __string_hash<char8_t, _Allocator> {};
  template <class _Allocator>
  struct hash<basic_string<char16_t, char_traits<char16_t>, _Allocator>>
      : __string_hash<char16_t, _Allocator> {};
  template <class _Allocator>
  struct hash<basic_string<char32_t, char_traits<char32_t>, _Allocator>>
      : __string_hash<char32_t, _Allocator> {};
  template <class _Allocator>
  struct hash<basic_string<wchar_t, char_traits<wchar_t>, _Allocator>>
      : __string_hash<wchar_t, _Allocator> {};
  ;
  ;
  ;
  ;
  ;
  ;
  template <class _CharT, class _Traits, class _Allocator, class _Up>
  __attribute__(()) __attribute__(()) __attribute__(()) constexpr
      typename basic_string<_CharT, _Traits, _Allocator>::size_type erase;
  ;
  inline namespace literals {}
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__(()) std {}
extern "C" namespace __attribute__((__type_visibility__0)) std {}
namespace __attribute__(()) std {
  inline namespace __1 {
  namespace __locale {
  struct __locale_guard;
  ;
  using __locale_t = ::locale_t;
  } // namespace __locale
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace std {}
namespace __attribute__(()) std {
  inline namespace __1 {
  ;
  class __attribute__(()) __shared_count {
  protected:
    long __shared_owners_;
    virtual ~__shared_count();

  private:
  public:
  };
  class __attribute__(()) __shared_weak_count : private __shared_count {};
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  struct once_flag;
  ;
  struct once_flag;
  template <class _Fp> class __call_once_param;
  ;
  ;
  ;
  } // namespace __1
} // namespace std
namespace __attribute__(()) std {
  inline namespace __1 {
  class __attribute__(()) locale;
  class __attribute__(()) locale {
  public:
    using __trivially_relocatable = locale;
    using __replaceable = locale;
    class __attribute__(()) facet;
    class __attribute__(()) id;
    typedef int category;
    static const category none = 0, collate = 0, ctype = 0, monetary = 0,
                          numeric = 0, time = 0, messages = 0,
                          all = 0 | 0 | 0 | 0 | 0 | 0;
    ;
    ;

  private:
    class __imp;
    __imp *__locale_;
    template <class> friend struct __no_destroy;
    ;
    ;
  };
  template <class _CharT> class collate;
  ;
  ;
  class __attribute__(()) locale::facet : public __shared_count {};
  class __attribute__(()) locale::id {};
  ;
  ;
  template <class _CharT> class collate : public locale::facet {
  public:
    typedef _CharT char_type;
    typedef basic_string<char_type> string_type;
    static locale::id id;

  protected:
  };
  template <class _CharT> locale::id collate<_CharT>::id;
  extern template class __attribute__(()) collate<char>;
  extern template class __attribute__(()) collate<wchar_t>;
  template <class _CharT> class collate_byname;
  template <>
  class __attribute__(()) collate_byname<char> : public collate<char> {};
  template <>
  class __attribute__(()) collate_byname<wchar_t> : public collate<wchar_t> {};
  class __attribute__(()) ctype_base {};
  template <class _CharT> class ctype;
  template <>
  class __attribute__(()) ctype<wchar_t> : public locale::facet,
                                           public ctype_base {};
  template <>
  class __attribute__(()) ctype<char> : public locale::facet,
                                        public ctype_base {};
  template <class _CharT> class ctype_byname;
  template <>
  class __attribute__(()) ctype_byname<char> : public ctype<char> {};
  template <>
  class __attribute__(()) ctype_byname<wchar_t> : public ctype<wchar_t> {};
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  class __attribute__(()) codecvt_base {
  public:
    enum result {};
  };
  template <class _InternT, class _ExternT, class _StateT> class codecvt;
  template <>
  class __attribute__(()) codecvt<char, char, mbstate_t>
      : public locale::facet, public codecvt_base {};
  template <>
  class __attribute__(()) codecvt<wchar_t, char, mbstate_t>
      : public locale::facet, public codecvt_base {
    __locale::__locale_t __l_;

  public:
    typedef wchar_t intern_type;
    typedef char extern_type;
    typedef mbstate_t state_type;
    static locale::id id;

  protected:
  };
  template <>
  class __attribute__(()) __attribute__(()) codecvt<char16_t, char, mbstate_t>
      : public locale::facet, public codecvt_base {};
  template <>
  class __attribute__(()) codecvt<char16_t, char8_t, mbstate_t>
      : public locale::facet, public codecvt_base {};
  template <>
  class __attribute__(()) __attribute__(()) codecvt<char32_t, char, mbstate_t>
      : public locale::facet, public codecvt_base {};
  template <>
  class __attribute__((__visibility__0)) codecvt<char32_t, char8_t, mbstate_t>
      : public locale::facet, public codecvt_base {
  public:
    typedef char32_t intern_type;
    typedef char8_t extern_type;
    typedef mbstate_t state_type;
    __attribute__(()) __attribute__(()) __attribute__(()) explicit codecvt()
        : locale::facet() {}
    __attribute__(()) __attribute__(()) __attribute__(()) result out() const;
    __attribute__(()) __attribute__(()) __attribute__(()) result in() const;
    __attribute__(()) __attribute__(()) __attribute__(()) int
    encoding() const noexcept;
    __attribute__(()) __attribute__(()) __attribute__(()) bool
    always_noconv() const noexcept;
    __attribute__(()) __attribute__(()) __attribute__(()) int length() const;
    __attribute__(()) __attribute__(()) __attribute__(()) int
    max_length() const noexcept;
    static locale::id id;

  protected:
    __attribute__(()) __attribute__(())
    __attribute__(()) explicit codecvt(const char *, size_t __refs = 0)
        : locale::facet() {}
    ~codecvt() override;
    virtual result do_out() const;
    virtual result do_in() const;
    virtual result do_unshift() const;
    virtual int do_encoding() const noexcept;
    virtual bool do_always_noconv() const noexcept;
    virtual int do_length() const;
    virtual int do_max_length() const noexcept;
  };
  template <class _InternT, class _ExternT, class _StateT>
  class codecvt_byname : public codecvt<_InternT, _ExternT, _StateT> {};
  extern template class __attribute__(()) codecvt_byname<char, char, mbstate_t>;
  extern template class __attribute__(())
  codecvt_byname<wchar_t, char, mbstate_t>;
  extern template class __attribute__(())
  __attribute__(()) codecvt_byname<char16_t, char, mbstate_t>;
  extern template class __attribute__(())
  __attribute__(()) codecvt_byname<char32_t, char, mbstate_t>;
  extern template class __attribute__(())
  codecvt_byname<char16_t, char8_t, mbstate_t>;
  extern template class __attribute__(())
  codecvt_byname<char32_t, char8_t, mbstate_t>;
  template <decltype(sizeof(int)) _Np> struct __narrow_to_utf8;
  template <> struct __narrow_to_utf8<8>;
  template <>
  struct __attribute__(())
  __narrow_to_utf8<16> : public codecvt<char16_t, char, mbstate_t> {};
  template <>
  struct __attribute__(())
  __narrow_to_utf8<32> : public codecvt<char32_t, char, mbstate_t> {};
  template <decltype(sizeof(int)) _Np> struct __widen_from_utf8;
  ;
  template <> struct __widen_from_utf8<8>;
  ;
  template <>
  struct __attribute__(())
  __widen_from_utf8<16> : public codecvt<char16_t, char, mbstate_t> {};
  template <>
  struct __attribute__(())
  __widen_from_utf8<32> : public codecvt<char32_t, char, mbstate_t> {};
  template <class _CharT> class numpunct;
  template <>
  class __attribute__((__visibility__0)) numpunct<char> : public locale::facet {
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
  class __attribute__((__visibility__0))
  numpunct<wchar_t> : public locale::facet {
  public:
    typedef wchar_t char_type;
    typedef basic_string<char_type> string_type;
    static locale::id id;

  protected:
    char_type __decimal_point_;
    char_type __thousands_sep_;
    string __grouping_;
  };
  template <class _CharT> class numpunct_byname;
  template <>
  class __attribute__(()) numpunct_byname<char> : public numpunct<char> {};
  template <>
  class __attribute__(()) numpunct_byname<wchar_t> : public numpunct<wchar_t> {
  };
  } // namespace __1
} // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {}
} // namespace std
  // namespace std
// namespace std
// namespace std
namespace Hyprutils {
namespace Math {
class Vector2D {
public:
  constexpr Vector2D(void);
  double x = 0;
  double y = 0;
  constexpr bool operator==(const Vector2D &a) const;
};
} // namespace Math
} // namespace Hyprutils
namespace __attribute__((__type_visibility__0)) std {}
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_error_code_enum : public integral_constant<bool, false> {};
  template <class _Tp>
  inline constexpr bool is_error_code_enum_v = is_error_code_enum<_Tp>::value;
  namespace __adl_only {}
  class __attribute__(()) error_code;
  template <>
  struct hash<error_code>
      : public __unary_function<error_code, decltype(sizeof(int))> {};
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  class __attribute__(()) system_error : public runtime_error {};
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {}
} // namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  typedef decltype(static_cast<int *>(nullptr) -
                   static_cast<int *>(nullptr)) streamsize;
  class __attribute__(()) ios_base {
  public:
    class __attribute__(()) failure;
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
    enum seekdir {};
    class __attribute__(()) Init;
    enum event {};
    typedef void(*event_callback);

  protected:
  private:
    fmtflags __fmtflags_;
    streamsize __precision_;
    streamsize __width_;
    iostate __rdstate_;
    iostate __exceptions_;
    void *__rdbuf_;
    void *__loc_;
    event_callback __fn_;
    decltype(sizeof(int)) __parray_size_;
    decltype(sizeof(int)) __parray_cap_;
  };
  enum class io_errc;
  template <>
  struct is_error_code_enum<io_errc> : public integral_constant<bool, true> {};
  class __attribute__(()) ios_base::failure : public system_error {};
  class __attribute__(()) ios_base::Init {};
  template <class _Traits> struct __attribute__(()) _SentinelValueFill {
    typename _Traits::int_type __fill_val_;
  };
  template <class _CharT, class _Traits> class basic_ios : public ios_base {
  public:
    typedef _CharT char_type;
    typedef _Traits traits_type;
    typedef typename traits_type::int_type int_type;
    typedef typename traits_type::pos_type pos_type;
    typedef typename traits_type::off_type off_type;

  protected:
  private:
    basic_ostream<char_type, traits_type> *__tie_;
    using _FillType = _SentinelValueFill<traits_type>;
    mutable _FillType __fill_;
  };
  extern template class __attribute__(()) basic_ios<char>;
  extern template class __attribute__(()) basic_ios<wchar_t>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {}
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _Tp> struct default_delete;
  template <class _Tp> struct default_delete;
  template <class _Deleter> inline const bool __is_default_deleter_v = false;
  template <class _Deleter> struct __unique_ptr_deleter_sfinae;
  template <class _Deleter> struct __unique_ptr_deleter_sfinae;
  ;
  template <class _Tp, class _Dp = default_delete<_Tp>> class unique_ptr;
  struct __unique_ptr_array_bounds_stateless {};
  struct __unique_ptr_array_bounds_stored;
  template <class _Tp, class _Dp> class unique_ptr {
  public:
    typedef _Tp element_type;
    typedef _Dp deleter_type;
    using pointer = _Tp;
    using __trivially_relocatable = __conditional_t<
        __libcpp_is_trivially_relocatable<pointer>::value &&
            __libcpp_is_trivially_relocatable<deleter_type>::value,
        unique_ptr, void>;
    using __replaceable = __conditional_t<__is_replaceable_v<pointer> &&
                                              __is_replaceable_v<deleter_type>,
                                          unique_ptr, void>;

  private:
    template <class _Up, class _OtherDeleter> friend class unique_ptr;
    using _BoundsChecker = __unique_ptr_array_bounds_stateless;
    _BoundsChecker __checker_;
    template <class _From>
    struct _CheckArrayPointerConversion : is_same<_From, pointer> {};
    template <class _FromElem>
    struct _CheckArrayPointerConversion<_FromElem *>
        : integral_constant<bool, is_same<_FromElem *, pointer>::value || 0> {};
    typedef _Tp _DeleterSFINAE;
    template <bool _Dummy>
    using _BadRValRefType =
        typename __dependent_type<_DeleterSFINAE, _Dummy>::__bad_rval_ref_type;
    template <bool _Dummy, class _Deleter = typename __dependent_type<
                               __type_identity<deleter_type>, _Dummy>::type>
    using _EnableIfDeleterDefaultConstructible =
        __enable_if_t<is_default_constructible<_Deleter>::value &&
                      !is_pointer<_Deleter>::value>;
    template <class _ArgType>
    using _EnableIfDeleterConstructible =
        __enable_if_t<is_constructible<deleter_type, _ArgType>::value>;
    template <class _Pp>
    using _EnableIfPointerConvertible =
        __enable_if_t<_CheckArrayPointerConversion<_Pp>::value>;
    template <class _UPtr, class _Up,
              class _ElemT = typename _UPtr::element_type>
    using _EnableIfMoveConvertible =
        __enable_if_t<is_array<_Up>::value &&
                      is_same<pointer, element_type *>::value &&
                      is_same<typename _UPtr::pointer, _ElemT *>::value &&
                      is_convertible<_ElemT, element_type>::value>;
    template <class _UDel> using _EnableIfDeleterConvertible = _Tp;
    template <class _UDel> using _EnableIfDeleterAssignable = _Tp;

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
  template <class _Tp> struct hash;
  template <class _Tp, class _Dp>
  struct hash<__enable_hash_helper<unique_ptr<_Tp, _Dp>,
                                   typename unique_ptr<_Tp, _Dp>::pointer>>;
  } // namespace __1
} // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _Fp> struct __strip_signature;
  template <class _Rp, class... _Args> struct __strip_signature<_Rp(_Args...)>;
  template <class _Rp, class... _Args>
  struct __strip_signature<_Rp(_Args...) noexcept>;
  ;
  template <class _Rp, class _Gp, class... _Ap>
  struct __strip_signature<_Rp (_Gp::*)(_Ap...)>;
  ;
  template <class _Rp, class _Gp, class... _Ap>
  struct __strip_signature<_Rp (_Gp::*)(_Ap...) const volatile &>;
  ;
  template <class _Rp, class _Gp, class... _Ap>
  struct __strip_signature<_Rp (_Gp::*)(_Ap...) noexcept>;
  ;
  template <class _Rp, class _Gp, class... _Ap>
  struct __strip_signature<_Rp (_Gp::*)(_Ap...) const noexcept>;
  ;
  template <class _Rp, class _Gp, class... _Ap>
  struct __strip_signature<_Rp (_Gp::*)(_Ap...) volatile noexcept>;
  ;
  template <class _Rp, class _Gp, class... _Ap>
  struct __strip_signature<_Rp (_Gp::*)(_Ap...) const volatile noexcept>;
  ;
  template <class _Rp, class _Gp, class... _Ap>
  struct __strip_signature<_Rp (_Gp::*)(_Ap...) & noexcept>;
  ;
  template <class _Rp, class _Gp, class... _Ap>
  struct __strip_signature<_Rp (_Gp::*)(_Ap...) const & noexcept>;
  ;
  template <class _Rp, class _Gp, class... _Ap>
  struct __strip_signature<_Rp (_Gp::*)(_Ap...) volatile & noexcept>;
  ;
  class __attribute__(()) bad_function_call : public exception {};
  template <class _Fp> class function;
  namespace __function {
  template <class _Rp> struct __maybe_derive_from_unary_function;
  ;
  template <class _Rp, class _A1>
  struct __maybe_derive_from_unary_function<_Rp(_A1)>
      : public __unary_function<_A1, _Rp> {};
  template <class _Rp> struct __maybe_derive_from_binary_function {};
  template <class _Rp, class _A1, class _A2>
  struct __maybe_derive_from_binary_function<_Rp(_A1, _A2)>
      : public __binary_function<_A1, _A2, _Rp> {};
  ;
  ;
  ;
  ;
  } // namespace __function
  namespace __function {
  template <class _Fp> class __base;
  template <class _Rp, class... _ArgTypes> class __base<_Rp(_ArgTypes...)>;
  template <class _FD, class _FB> class __func;
  template <class _Fp, class _Rp, class... _ArgTypes>
  class __func<_Fp, _Rp(_ArgTypes...)> : public __base<_Rp> {};
  template <class _Fp> class __value_func;
  template <class _Rp, class... _ArgTypes>
  class __value_func<_Rp(_ArgTypes...)> {
    typename aligned_storage<3 * sizeof(void *)>::type __buf_;
    typedef __base<_Rp> __func;
    __func *__f_;

  public:
    template <
        class _Fp,
        __enable_if_t<!is_same<__decay_t<_Fp>, __value_func>::value, int> = 0>
    __attribute__(()) __attribute__((__exclude_from_explicit_instantiation__))
    __attribute__(()) explicit __value_func(_Fp &&__f);
    ;
  };
  struct __policy_storage {};
  template <typename _Fun>
  struct __use_small_storage
      : public integral_constant<
            bool, sizeof(_Fun) <= sizeof(__policy_storage) &&
                      alignof(_Fun) <= alignof(__policy_storage) &&
                      is_trivially_copy_constructible<_Fun>::value &&
                      is_trivially_destructible<_Fun>::value> {};
  struct __policy;
  template <typename _Tp>
  using __fast_forward = __conditional_t<is_scalar<_Tp>::value, _Tp, _Tp &&>;
  template <class _Fp> class __policy_func;
  template <class _Rp, class... _ArgTypes>
  class __policy_func<_Rp(_ArgTypes...)>;
  } // namespace __function
  template <class _Rp, class... _ArgTypes>
  class function<_Rp(_ArgTypes...)>
      : public __function::__maybe_derive_from_unary_function<_Rp(
            _ArgTypes...)>,
        public __function::__maybe_derive_from_binary_function<_Rp()> {
    typedef __function::__value_func<_Rp()> __func;
    __func __f_;
    template <class _Fp,
              bool = _And<_IsNotSame<__remove_cvref_t<_Fp>, function>,
                          __is_invocable<_Fp, _ArgTypes...>>::value>
    struct __callable;
    template <class _Fp> struct __callable<_Fp, true> {
      static const bool value =
          is_void<_Rp>::value ||
          __is_core_convertible<__invoke_result_t<>, _Rp>::value;
    };
    template <class _Fp> struct __callable<_Fp, false>;
    template <class _Fp>
    using _EnableIfLValueCallable = __enable_if_t<__callable<_Fp &>::value>;

  public:
    typedef _Rp result_type;
    template <class _Fp, class = _EnableIfLValueCallable<_Fp>>
    __attribute__(()) __attribute__((__exclude_from_explicit_instantiation__))
    __attribute__(()) function(_Fp);

  public:
    ;
    ;
  };
  ;
  ;
  template <class _Rp, class... _ArgTypes>
  template <class _Fp, class>
  function<_Rp(_ArgTypes...)>::function(_Fp __f) : __f_(0){};
  ;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
// namespace std
// namespace std
// namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _Key, class _Tp> struct __hash_value_type;
  template <class _Tp>
  struct __is_hash_value_type_imp : integral_constant<bool, false> {};
  template <class _Key, class _Value>
  struct __is_hash_value_type_imp<__hash_value_type<_Key, _Value>>
      : integral_constant<bool, true> {};
  template <class... _Args>
  struct __is_hash_value_type : integral_constant<bool, false> {};
  template <class _One>
  struct __is_hash_value_type<_One>
      : __is_hash_value_type_imp<__remove_cvref_t<_One>> {};
  template <class _NodePtr> struct __hash_node_base {
    typedef _NodePtr __node_type;
    typedef __hash_node_base __first_node;
    typedef _NodePtr __node_base_pointer;
    typedef _NodePtr __node_pointer;
    typedef __node_base_pointer __next_pointer;
    __next_pointer __next_;
  };
  template <class _Tp> struct __get_hash_node_value_type;
  ;
  template <class _Key, class _Tp>
  struct __get_hash_node_value_type<__hash_value_type<_Key, _Tp>> {
    using type = pair<const _Key, _Tp>;
  };
  template <class _Tp>
  using __get_hash_node_value_type_t =
      typename __get_hash_node_value_type<_Tp>::type;
  template <class _Tp, class _VoidPtr>
  struct __hash_node
      : public __hash_node_base<
            __rebind_pointer_t<_VoidPtr, __hash_node<_Tp, _VoidPtr>>> {};
  template <class _Tp, class _Hash, class _Equal, class _Alloc>
  class __hash_table;
  template <class _NodePtr> class __hash_iterator;
  template <class _ConstNodePtr> class __hash_const_iterator;
  template <class _NodePtr> class __hash_local_iterator;
  template <class _ConstNodePtr> class __hash_const_local_iterator;
  template <class _HashIterator> class __hash_map_iterator;
  template <class _HashIterator> class __hash_map_const_iterator;
  template <class _Tp> struct __hash_key_value_types;
  ;
  template <class _Key, class _Tp>
  struct __hash_key_value_types<__hash_value_type<_Key, _Tp>> {
    typedef _Key key_type;
    typedef _Tp mapped_type;
    typedef __hash_value_type<_Key, _Tp> __node_value_type;
    typedef pair<const _Key, _Tp> __container_value_type;
    typedef __container_value_type __map_value_type;
    static const bool __is_map = true;
    ;
    ;
  };
  template <class _Tp, class _AllocPtr,
            class _KVTypes = __hash_key_value_types<_Tp>,
            bool = _KVTypes::__is_map>
  struct __hash_map_pointer_types;
  ;
  template <class _Tp, class _AllocPtr, class _KVTypes>
  struct __hash_map_pointer_types<_Tp, _AllocPtr, _KVTypes, true> {
    typedef typename _KVTypes::__map_value_type _Mv;
    typedef __rebind_pointer_t<_AllocPtr, _Mv> __map_value_type_pointer;
    typedef __rebind_pointer_t<_AllocPtr, const _Mv>
        __const_map_value_type_pointer;
  };
  template <class _NodePtr,
            class _NodeT = typename pointer_traits<_NodePtr>::element_type>
  struct __hash_node_types;
  template <class _NodePtr, class _Tp, class _VoidPtr>
  struct __hash_node_types<_NodePtr, __hash_node<_Tp, _VoidPtr>>
      : public __hash_key_value_types<_Tp>,
        __hash_map_pointer_types<_Tp, _VoidPtr> {
    typedef __hash_key_value_types<_Tp> __base;

  public:
    typedef decltype(static_cast<int *>(nullptr) -
                     static_cast<int *>(nullptr)) difference_type;
    typedef decltype(sizeof(int)) size_type;
    typedef __rebind_pointer_t<_NodePtr, void> __void_pointer;
    typedef typename pointer_traits<_NodePtr>::element_type __node_type;
    typedef _NodePtr __node_pointer;
    typedef __hash_node_base<__node_pointer> __node_base_type;
    typedef __rebind_pointer_t<_NodePtr, __node_base_type> __node_base_pointer;
    typedef typename __node_base_type::__next_pointer __next_pointer;
    using __node_value_type = __get_hash_node_value_type_t<_Tp>;
    typedef __rebind_pointer_t<_VoidPtr, __node_value_type>
        __node_value_type_pointer;
    typedef __rebind_pointer_t<_VoidPtr, const __node_value_type>
        __const_node_value_type_pointer;

  private:
  };
  template <class _HashIterator> struct __hash_node_types_from_iterator;
  template <class _NodePtr>
  struct __hash_node_types_from_iterator : __hash_node_types<_NodePtr> {};
  template <class _NodePtr>
  struct __hash_node_types_from_iterator<__hash_const_iterator<_NodePtr>>
      : __hash_node_types<_NodePtr> {};
  template <class _NodePtr>
  struct __hash_node_types_from_iterator<__hash_local_iterator<_NodePtr>>
      : __hash_node_types<_NodePtr> {};
  template <class _NodePtr>
  struct __hash_node_types_from_iterator<__hash_const_local_iterator<_NodePtr>>
      : __hash_node_types<_NodePtr> {};
  template <class _NodeValueTp, class _VoidPtr> struct __make_hash_node_types {
    typedef __hash_node<_NodeValueTp, _VoidPtr> _NodeTp;
    typedef __rebind_pointer_t<_VoidPtr, _NodeTp> _NodePtr;
    typedef __hash_node_types<_NodePtr> type;
  };
  template <class _NodePtr> class __hash_iterator;
  ;
  template <class _NodePtr> class __hash_const_iterator;
  template <class _ConstNodePtr> class __hash_const_local_iterator;
  ;
  template <class _Alloc> class __bucket_list_deallocator {
    typedef _Alloc allocator_type;
    typedef allocator_traits<allocator_type> __alloc_traits;
    typedef typename __alloc_traits::size_type size_type;
    __attribute__(()) size_type __size_;
    ::std::__compressed_pair_padding<size_type> __padding1_581_;
    allocator_type __alloc_;
    ::std::__compressed_pair_padding<allocator_type> __padding2_581_;

  public:
    typedef typename __alloc_traits::pointer pointer;
  };
  template <class _Alloc> class __hash_map_node_destructor;
  template <class _Alloc> class __hash_node_destructor;
  template <class _NodeType, class _Alloc>
  struct __generic_container_node_destructor;
  template <class _Tp, class _VoidPtr, class _Alloc>
  struct __enforce_unordered_container_requirements;
  ;
  ;
  template <class _Tp, class _Hash, class _Equal, class _Alloc>
  class __hash_table {
  public:
    using value_type = _Tp;
    typedef _Hash hasher;
    typedef _Equal key_equal;
    typedef _Alloc allocator_type;

  private:
    typedef allocator_traits<allocator_type> __alloc_traits;
    typedef typename __make_hash_node_types<
        _Tp, typename __alloc_traits::void_pointer>::type _NodeTypes;

  public:
    typedef typename _NodeTypes::__node_value_type __node_value_type;
    typedef typename _NodeTypes::__container_value_type __container_value_type;
    typedef typename _NodeTypes::key_type key_type;
    typedef value_type &reference;
    typedef const value_type &const_reference;
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
    typedef __bucket_list_deallocator<__pointer_allocator>
        __bucket_list_deleter;
    typedef unique_ptr<__next_pointer, __bucket_list_deleter> __bucket_list;
    typedef allocator_traits<__pointer_allocator> __pointer_alloc_traits;
    typedef typename __bucket_list_deleter::pointer __node_pointer_pointer;
    __bucket_list __bucket_list_;
    struct {
      __attribute__(()) size_type __size_;
      ::std::__compressed_pair_padding<size_type> __padding1_744_;
      hasher __hasher_;
      ::std::__compressed_pair_padding<hasher> __padding2_744_;
    };

  public:
  public:
    typedef __hash_iterator<__node_pointer> iterator;
    typedef __hash_const_iterator<__node_pointer> const_iterator;
    typedef __hash_local_iterator<__node_pointer> local_iterator;
    typedef __hash_const_local_iterator<__node_pointer> const_local_iterator;
    ;
    ;
    template <class, class, class, class, class> friend class unordered_map;
    template <class, class, class, class, class>
    friend class unordered_multimap;
  };
  ;
  template <ranges::input_range _Range>
  using __range_mapped_type =
      typename ranges::range_value_t<_Range>::second_type;
  template <ranges::input_range _Range>
  using __range_to_alloc_type =
      pair<const typename ranges::range_value_t<_Range>::first_type,
           typename ranges::range_value_t<_Range>::second_type>;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _NodeType, class _Alloc>
  struct __generic_container_node_destructor;
  template <class _NodeType, class _Alloc,
            template <class, class> class _MapOrSetSpecifics>
  class __basic_node_handle
      : public _MapOrSetSpecifics<
            _NodeType,
            __basic_node_handle<_NodeType, _Alloc, _MapOrSetSpecifics>> {};
  template <class _NodeType, class _Derived> struct __set_node_handle_specifics;
  template <class _NodeType, class _Derived> struct __map_node_handle_specifics;
  template <class _NodeType, class _Alloc>
  using __set_node_handle =
      __basic_node_handle<_NodeType, _Alloc, __set_node_handle_specifics>;
  template <class _NodeType, class _Alloc>
  using __map_node_handle =
      __basic_node_handle<_NodeType, _Alloc, __map_node_handle_specifics>;
  template <class _Iterator, class _NodeType> struct __insert_return_type;
  } // namespace __1
} // namespace std
  // namespace std
  // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _Key, class _Cp, class _Hash, class _Pred,
            bool = is_empty<_Hash>::value && !__libcpp_is_final<_Hash>::value>
  class __unordered_map_hasher : private _Hash {};
  template <class _Key, class _Cp, class _Hash, class _Pred>
  class __unordered_map_hasher<_Key, _Cp, _Hash, _Pred, false>;
  ;
  template <class _Key, class _Cp, class _Pred, class _Hash,
            bool = is_empty<_Pred>::value && !__libcpp_is_final<_Pred>::value>
  class __unordered_map_equal : private _Pred {};
  ;
  template <class _Alloc> class __hash_map_node_destructor;
  ;
  template <class _Key, class _Tp> struct __hash_value_type;
  template <class _HashIterator> class __hash_map_iterator;
  template <class _HashIterator> class __hash_map_const_iterator;
  ;
  template <class _Key, class _Tp, class _Hash, class _Pred, class _Alloc>
  class unordered_multimap;
  template <class _Key, class _Tp, class _Hash = hash<_Key>,
            class _Pred = equal_to<>,
            class _Alloc = allocator<pair<const _Key, _Tp>>>
  class unordered_map {
  public:
    typedef _Key key_type;
    typedef _Tp mapped_type;
    typedef __type_identity_t<_Hash> hasher;
    typedef _Key key_equal;
    typedef __type_identity_t<_Alloc> allocator_type;
    typedef pair<const key_type, mapped_type> value_type;
    typedef value_type &reference;
    typedef const value_type &const_reference;

  private:
    typedef __hash_value_type<key_type, mapped_type> __value_type;
    typedef __unordered_map_hasher<key_type, value_type, hasher, key_equal>
        __hasher;
    typedef __unordered_map_equal<key_type, value_type, key_equal, hasher>
        __key_equal;
    typedef __hash_table<__value_type, __hasher, __key_equal, allocator_type>
        __table;
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
    typedef __hash_map_const_iterator<typename __table::const_iterator>
        const_iterator;
    typedef __hash_map_iterator<typename __table::local_iterator>
        local_iterator;
    typedef __hash_map_const_iterator<typename __table::const_local_iterator>
        const_local_iterator;
    typedef __map_node_handle<__node, allocator_type> node_type;
    typedef __insert_return_type<iterator, node_type> insert_return_type;
    template <class _Key2, class _Tp2, class _Hash2, class _Pred2,
              class _Alloc2>
    friend class unordered_map;
    template <class _Key2, class _Tp2, class _Hash2, class _Pred2,
              class _Alloc2>
    friend class unordered_multimap;
    __attribute__(()) __attribute__(()) __attribute__(()) unordered_map;
    __attribute__((__visibility__0)) __attribute__(()) __attribute__(())
    unordered_map(initializer_list<value_type> __il);
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
  struct __container_traits<unordered_map<_Key, _Tp, _Hash, _Pred, _Alloc>>;
  ;
  template <class _Key, class _Tp, class _Hash = hash<_Key>,
            class _Pred = equal_to<>,
            class _Alloc = allocator<pair<const _Key, _Tp>>>
  class unordered_multimap;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
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
  struct __container_traits<
      unordered_multimap<_Key, _Tp, _Hash, _Pred, _Alloc>>;
  } // namespace __1
} // namespace std
  // namespace std
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {}
} // namespace std
  // namespace std
// namespace std
struct SHyprCtlCommand;
struct SDispatchResult;
using WINDOWID = int64_t;
using MONITORID = int64_t;
using WORKSPACEID = int64_t;
// namespace std
// namespace std
enum eLogLevel : int8_t;
;
namespace Hyprgraphics {
class CColor {
public:
  struct SSRGB;
  struct SHSL;
  struct SOkLab {};
  struct xy;
  struct XYZ;

private:
  double r = 0, g = 0, b = 0;
};
class CMatrix3;
struct SPCPRimaries;
}; // namespace Hyprgraphics
   // namespace Hyprgraphics
namespace Hyprutils {
namespace Memory {
class impl_base;
}
} // namespace Hyprutils
  // namespace Hyprutils
// namespace Hyprutils
// namespace Hyprutils
namespace Hyprutils {
namespace Memory {
template <typename T> class CSharedPointer {
public:
  template <typename X>
  using validHierarchy =
      std::enable_if_t<std::is_assignable_v<CSharedPointer &, X>,
                       CSharedPointer &>;
  template <typename X> using isConstructible = T;
  ;
  CSharedPointer;
  ;
  ;
  ;
  T *operator->() const;
  impl_base *impl_ = nullptr;
  void *m_data = nullptr;

private:
};
;
;
;
} // namespace Memory
} // namespace Hyprutils
  // namespace Hyprutils
  // namespace Hyprutils
  // namespace Hyprutils
template <typename T> struct std::hash<Hyprutils::Memory::CSharedPointer<T>>;
namespace Hyprutils {
namespace Memory {
template <typename T> class CUniquePointer {};
;
} // namespace Memory
} // namespace Hyprutils
  // namespace Hyprutils
  // namespace Hyprutils
  // namespace Hyprutils
template <typename T> struct std::hash<Hyprutils::Memory::CUniquePointer<T>>;
namespace Hyprutils {
namespace Memory {
template <typename T> class CWeakPointer {};
;
} // namespace Memory
} // namespace Hyprutils
  // namespace Hyprutils
  // namespace Hyprutils
  // namespace Hyprutils
template <typename T> struct std::hash<Hyprutils::Memory::CWeakPointer<T>>;
;
namespace Hyprutils::Memory {
template <typename T> class CAtomicWeakPointer;
template <typename T> class CAtomicSharedPointer;
;
template <typename T> class CAtomicWeakPointer;
;
;
;
} // namespace Hyprutils::Memory
  // namespace Hyprutils::Memory
// namespace Hyprutils::Memory
// namespace Hyprutils::Memory
using namespace Hyprutils::Memory;
template <typename T> using SP = Hyprutils::Memory::CSharedPointer<T>;
template <typename T> using WP = Hyprutils::Memory::CWeakPointer<T>;
// namespace Colors
class CWorkspace;
class CWindow;
class CLayerSurface;
class CMonitor;
using PHLWORKSPACE = SP<CWorkspace>;
using PHLWORKSPACEREF = WP<CWorkspace>;
using PHLWINDOW = SP<CWindow>;
using PHLWINDOWREF = WP<CWindow>;
// namespace std
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
struct xkb_rule_names;
;
struct xkb_component_names;
;
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
typedef void;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
enum xkb_key_direction {};
;
;
;
;
;
enum xkb_state_match {};
;
;
enum xkb_consumed_mode {};
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
struct SSubmap {
  std::string name = "";
  std::string reset = "";
};
struct SKeybind;
enum eFocusWindowMode : uint8_t;
struct SPressedKeyWithMods;
enum eMultiKeyCase : uint8_t;
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
// namespace Hyprutils
// namespace Hyprutils
namespace Hyprutils {
namespace Animation {
class CBaseAnimatedVariable;
class CBaseAnimatedVariable {};
class CAnimationManager;
} // namespace Animation
} // namespace Hyprutils
// namespace Hyprutils
// namespace Hyprutils
struct SWorkspaceIDName;
;
export module example;
