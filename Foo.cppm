module;
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp, _Tp __v> struct integral_constant {
    static inline constexpr const _Tp value = __v;
    typedef _Tp value_type;
    typedef integral_constant type;
  };
  template <bool _Val> using _BoolConstant = integral_constant<bool, _Val>;
  template <bool __b> using bool_constant = integral_constant<bool, __b>;
  template <class _Tp>
  struct is_class : integral_constant<bool, __is_class(_Tp)> {};
  template <class _Tp> inline constexpr bool is_class_v = __is_class(_Tp);
  template <class _Tp>
  struct is_enum : integral_constant<bool, __is_enum(_Tp)> {};
  template <class _Tp> inline constexpr bool is_enum_v = __is_enum(_Tp);
  template <class _Tp>
  struct is_union : integral_constant<bool, __is_union(_Tp)> {};
  template <class _Tp> inline constexpr bool is_union_v = __is_union(_Tp);
  template <class _Tp>
  concept __class_or_enum =
      is_class_v<_Tp> || is_union_v<_Tp> || is_enum_v<_Tp>;
  } 
  inline namespace __1 {
  template <class _Tp> struct remove_cv;
  template <class _Tp> using __remove_cv_t = __remove_cv(_Tp);
  template <class _Tp> using remove_cv_t = __remove_cv_t<_Tp>;
  template <class _Tp>
  struct __libcpp_is_floating_point : integral_constant<bool, false> {};
  template <>
  struct __libcpp_is_floating_point<float> : integral_constant<bool, true> {};
  template <class _Tp>
  struct is_floating_point : __libcpp_is_floating_point<__remove_cv_t<_Tp>> {};
  template <class _Tp>
  inline constexpr bool is_floating_point_v = is_floating_point<_Tp>::value;
  } 
} 
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_integral : _BoolConstant<__is_integral(_Tp)> {};
  template <class _Tp> inline constexpr bool is_integral_v = __is_integral(_Tp);
  template <class _Tp>
  struct is_arithmetic
      : integral_constant<bool, is_integral<_Tp>::value ||
                                    is_floating_point<_Tp>::value> {};
  template <class _Tp>
  inline constexpr bool is_arithmetic_v = is_arithmetic<_Tp>::value;
  } 
} 
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp> struct is_signed : _BoolConstant<__is_signed(_Tp)> {};
  template <class _Tp> inline constexpr bool is_signed_v = __is_signed(_Tp);
  template <class _Tp>
  concept integral = is_integral_v<_Tp>;
  template <class _Tp>
  concept signed_integral = integral<_Tp> && is_signed_v<_Tp>;
  } 
} 
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _T1, class _T2>
  struct is_convertible : integral_constant<bool, __is_convertible(_T1, _T2)> {
  };
  template <class _From, class _To>
  inline constexpr bool is_convertible_v = __is_convertible(_From, _To);
  template <class _Tp>
  __attribute__(()) __attribute__(()) __attribute__(()) void declval() noexcept;
  } 
  inline namespace __1 {
  template <class _From, class _To>
  concept convertible_to = is_convertible_v<_From, _To> &&
                           requires { static_cast<_To>(std::declval); };
  template <class _Tp, class _Up>
  struct is_same : _BoolConstant<__is_same(_Tp, _Up)> {};
  template <class _Tp, class _Up>
  inline constexpr bool is_same_v = __is_same(_Tp, _Up);
  template <class _Tp, class _Up>
  using _IsSame = _BoolConstant<__is_same(_Tp, _Up)>;
  template <class _Tp, class _Up>
  using _IsNotSame = _BoolConstant<!__is_same(_Tp, _Up)>;
  } 
} 
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp, class _Up>
  concept __same_as_impl = _IsSame<_Tp, _Up>::value;
  template <class _Tp, class _Up>
  concept same_as = __same_as_impl<_Tp, _Up> && __same_as_impl<_Up, _Tp>;
  template <class...> using void_t = void;
  template <class...> using __void_t = void;
  } 
} 
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp, class = void>
  inline const bool __is_referenceable_v = false;
  template <class _Tp>
  concept __referenceable = __is_referenceable_v<_Tp>;
  template <class _Tp>
  struct is_void : _BoolConstant<__is_same(__remove_cv(_Tp), void)> {};
  template <class _Tp>
  inline constexpr bool is_void_v = __is_same(__remove_cv(_Tp), void);
  } 
} 
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <class _Tp>
  using __libcpp_remove_reference_t = __remove_reference_t(_Tp);
  template <class _Tp>
  using remove_reference_t = __libcpp_remove_reference_t<_Tp>;
  template <class _Tp> using __add_pointer_t = __add_pointer(_Tp);
  template <class _Tp> using add_pointer_t = __add_pointer_t<_Tp>;
  } 
} 
namespace __attribute__((__type_visibility__0)) std {
  inline namespace __1 {
  template <bool> struct _IfImpl;
  template <> struct _IfImpl<true>;
  template <bool _Bp, class _If, class _Then> struct conditional {
    using type = _If;
  };
  template <class _If, class _Then> struct conditional<false, _If, _Then>;
  template <bool _Bp, class _IfRes, class _ElseRes>
  using conditional_t = typename conditional<_Bp, _IfRes, _ElseRes>::type;
  template <bool _Bp, class _If, class _Then>
  using __conditional_t = typename conditional<_Bp, _If, _Then>::type;
  template <class _Tp> struct decay;
  template <class _Tp> using __decay_t = __decay(_Tp);
  template <class _Tp> using decay_t = __decay_t<_Tp>;
  } 
  inline namespace __1 {
  template <class _Tp> using __remove_cvref_t = __remove_cvref(_Tp);
  template <class _Tp> using remove_cvref_t = __remove_cvref_t<_Tp>;
  } 
  inline namespace __1 {
  template <class _Tp> struct __type_identity {
    typedef _Tp type;
  };
  template <class _Tp>
  using __type_identity_t = typename __type_identity<_Tp>::type;
  template <class _Tp> struct type_identity;
  } 
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  struct __empty;
  ;
  template <class... _Args> struct common_type;
  template <class... _Args>
  using __common_type_t = typename common_type<_Args...>::type;
  } 
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _From> struct __copy_cv;
  ;
  template <class _From, class _To>
  using __copy_cv_t = typename __copy_cv<_From>::template __apply<>;
  } 
  inline namespace __1 {
  template <class _Tp> struct add_lvalue_reference;
  ;
  template <class _Tp>
  using __add_lvalue_reference_t = __add_lvalue_reference(_Tp);
  ;
  template <class _Tp>
  using __add_rvalue_reference_t = __add_rvalue_reference(_Tp);
  template <class _Tp>
  using add_rvalue_reference_t = __add_rvalue_reference_t<_Tp>;
  template <class _Tp>
  inline constexpr bool is_reference_v = __is_reference(_Tp);
  template <class _Tp>
  inline constexpr bool is_lvalue_reference_v = __is_lvalue_reference(_Tp);
  template <class _Tp>
  inline constexpr bool is_rvalue_reference_v = __is_rvalue_reference(_Tp);
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
  struct __common_ref : __common_ref<_Bp &&, _Ap &> {};
  template <class _Tp, class _Up>
  using __common_ref_D = __common_ref_t<const _Tp &, _Up &>;
  ;
  template <class...> struct common_reference;
  template <class... _Types>
  using common_reference_t = typename common_reference<_Types...>::type;
  template <class, class, template <class> class, template <class> class>
  struct basic_common_reference;
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
  using __basic_common_reference_t =
      typename basic_common_reference<remove_cvref_t<_Tp>, remove_cvref_t<_Up>,
                                      __xref<_Tp>::template __apply,
                                      __xref<_Up>::template __apply>::type;
  template <class _Tp, class _Up, class _Vp, class... _Rest>
    requires requires { typename common_reference_t<_Tp, _Up>; }
  struct common_reference<_Tp, _Up, _Vp, _Rest...>
      : common_reference<common_reference_t<_Tp, _Up>, _Vp, _Rest...> {};
  template <class...> struct common_reference;
  ;
  } 
  inline namespace __1 {
  template <class _Tp, class _Up>
  concept common_reference_with =
      same_as<common_reference_t<_Tp, _Up>, common_reference_t<_Up, _Tp>> &&
      convertible_to<_Tp, common_reference_t<_Tp, _Up>> &&
      convertible_to<_Up, common_reference_t<_Tp, _Up>>;
  template <class _Tp>
  using __make_const_lvalue_ref = const __libcpp_remove_reference_t<_Tp> &;
  } 
  inline namespace __1 {
  template <class _Tp>
  __attribute__(()) __attribute__(()) __attribute__(()) constexpr void
  forward() noexcept;
  ;
  } 
  inline namespace __1 {
  template <class _Lhs, class _Rhs>
  concept assignable_from =
      is_lvalue_reference_v<_Lhs> &&
      common_reference_with<__make_const_lvalue_ref<_Lhs>,
                            __make_const_lvalue_ref<_Rhs>> &&
      requires(_Lhs __lhs, _Rhs &&__rhs) {
        { __lhs = std::forward } -> same_as<_Lhs>;
      };
  } 
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_nothrow_destructible
      : integral_constant<bool, __is_nothrow_destructible(_Tp)> {};
  template <class _Tp>
  inline constexpr bool is_nothrow_destructible_v =
      is_nothrow_destructible<_Tp>::value;
  template <class _Tp>
  concept destructible = is_nothrow_destructible_v<_Tp>;
  } 
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
  } 
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
  } 
  inline namespace __1 {
  template <class _Tp> struct is_object : _BoolConstant<__is_object(_Tp)> {};
  template <class _Tp> inline constexpr bool is_object_v = __is_object(_Tp);
  } 
  inline namespace __1 {
  template <class _Tp>
  concept movable = is_object_v<_Tp> && move_constructible<_Tp> &&
                    assignable_from<_Tp &, _Tp> && swappable<_Tp>;
  template <class _Tp>
  concept copyable =
      copy_constructible<_Tp> && movable<_Tp> &&
      assignable_from<_Tp &, _Tp &> && assignable_from<_Tp &, const _Tp &> &&
      assignable_from<_Tp &, const _Tp>;
  } 
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
  } 
  inline namespace __1 {
  template <class _Dp, class _Bp>
  concept derived_from =
      is_base_of_v<_Bp, _Dp> &&
      is_convertible_v<const volatile _Dp *, const volatile _Bp *>;
  }
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  concept __boolean_testable_impl = convertible_to<_Tp, bool>;
  template <class _Tp>
  concept __boolean_testable = __boolean_testable_impl<_Tp> && requires {
    !std::forward<_Tp>->__boolean_testable_impl;
  };
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
  } 
  inline namespace __1 {
  template <bool, class _Tp = void> struct enable_if;
  template <class _Tp> struct enable_if<true, _Tp> {
    typedef _Tp type;
  };
  template <bool _Bp, class _Tp = void>
  using __enable_if_t = typename enable_if<_Bp, _Tp>::type;
  template <bool _Bp, class _Tp = void>
  using enable_if_t = typename enable_if<_Bp, _Tp>::type;
  } 
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
  template <class> struct hash;
  template <class> class reference_wrapper;
  } 
  inline namespace __1 {
  struct __nat;
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
  template <class _Fn, class... _Args>
  using invoke_result_t = __invoke_result_t<_Fn, _Args...>;
  } 
  inline namespace __1 {
  template <class _Fn, class... _Args>
  __attribute__(()) __attribute__(()) __attribute__(()) constexpr void
  invoke() noexcept;
  ;
  } 
  inline namespace __1 {
  template <class _Fn, class... _Args>
  concept invocable = requires { std::invoke; };
  template <class _Fn, class... _Args>
  concept regular_invocable = invocable<_Fn, _Args...>;
  } 
  inline namespace __1 {
  template <class _Fn, class... _Args>
  concept predicate = regular_invocable<_Fn, _Args...> &&
                      __boolean_testable<invoke_result_t<_Fn, _Args...>>;
  }
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  concept semiregular = copyable<_Tp> && default_initializable<_Tp>;
  }
  inline namespace __1 {
  template <class _Tp>
  concept regular = semiregular<_Tp> && equality_comparable<_Tp>;
  }
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Rp, class _Tp, class _Up>
  concept relation = predicate<_Rp, _Tp, _Tp> && predicate<_Rp, _Up, _Up> &&
                     predicate<_Rp, _Tp, _Up> && predicate<_Rp, _Up, _Tp>;
  template <class _Rp, class _Tp, class _Up>
  concept equivalence_relation = relation<_Rp, _Tp, _Up>;
  template <class _Rp, class _Tp, class _Up>
  concept strict_weak_order = relation<_Rp, _Tp, _Up>;
  } 
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
  } 
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <template <class...> class _Templ, class... _Args, class = _Templ<>>
  void __sfinae_test_impl();
  ;
  template <template <class...> class _Templ, class... _Args>
  using _IsValidExpansion = decltype(std::__sfinae_test_impl<_Templ, _Args...>);
  } 
  inline namespace __1 {
  template <class _Tp>
  using __test_for_primary_template =
      __enable_if_t<_IsSame<_Tp, typename _Tp::__primary_template>::value>;
  template <class _Tp>
  using __is_primary_template =
      _IsValidExpansion<__test_for_primary_template, _Tp>;
  } 
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
  struct __find_first<__type_list<_Head, _Tail...>, _Size, false>;
  } 
  inline namespace __1 {
  template <class> struct incrementable_traits;
  template <class _Tp>
  concept __has_member_difference_type =
      requires { typename _Tp::difference_type; };
  template <__has_member_difference_type _Tp> struct incrementable_traits<_Tp>;
  ;
  template <class _Tp>
  concept __has_integral_minus =
      requires(const _Tp &__x, const _Tp &__y) { __x - __y->integral; };
  template <class> struct iterator_traits;
  template <class _Ip>
  using iter_difference_t = typename conditional_t<
      __is_primary_template<iterator_traits<remove_cvref_t<_Ip>>>::value,
      incrementable_traits<remove_cvref_t<_Ip>>,
      iterator_traits<remove_cvref_t<_Ip>>>::difference_type;
  } 
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class, class> struct pair;
  ;
  template <class _Tp> struct is_array : _BoolConstant<__is_array(_Tp)> {};
  template <class _Tp> inline constexpr bool is_array_v = __is_array(_Tp);
  } 
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class> struct __cond_value_type;
  ;
  template <class _Tp>
  concept __has_member_value_type = requires { typename _Tp::value_type; };
  template <class _Tp>
  concept __has_member_element_type = requires { typename _Tp::element_type; };
  template <class> struct indirectly_readable_traits;
  template <class _Ip>
    requires is_array_v<_Ip>
  struct indirectly_readable_traits<_Ip>;
  template <__has_member_value_type _Tp>
    requires __has_member_element_type<_Tp> &&
             same_as<remove_cv_t<typename _Tp::element_type>,
                     remove_cv_t<typename _Tp::value_type>>
  struct indirectly_readable_traits<_Tp>
      : __cond_value_type<typename _Tp::value_type> {};
  } 
  inline namespace __1 {
  template <class... _Tp> struct __tuple_types;
  template <decltype(sizeof(int)) _Ip, class _Tp> struct tuple_element;
  template <decltype(sizeof(int)) _Ip, class _Tp> struct tuple_element;
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
  } 
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
  template <class _Tp>
  concept __dereferenceable = requires(_Tp &__t) { *__t->__referenceable; };
  template <__dereferenceable _Tp>
  using iter_reference_t = decltype(*std::declval<_Tp &>);
  template <class _Iter> struct iterator_traits;
  struct input_iterator_tag {};
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
  } 
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
  template <class _Ip> struct __deduce_iterator_category;
  template <__iterator_traits_detail::__cpp17_forward_iterator _Ip>
  struct __deduce_iterator_category<_Ip>;
  ;
  template <class> struct __iterator_traits_difference_type;
  template <class> struct __iterator_traits;
  template <class _Tp> using __pointer_member = typename _Tp::pointer;
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
  template <class _InputIterator>
  using __iter_value_type =
      typename iterator_traits<_InputIterator>::value_type;
  template <class _Ip>
  using iter_value_t = typename conditional_t<
      __is_primary_template<iterator_traits<remove_cvref_t<_Ip>>>::value,
      indirectly_readable_traits<remove_cvref_t<_Ip>>,
      iterator_traits<remove_cvref_t<_Ip>>>::value_type;
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
  } 
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
  template <class... _Args>
  inline constexpr bool conjunction_v = conjunction<>::value;
  } 
  inline namespace __1 {
  template <class _Ptr> struct __pointer_traits_element_type_impl;
  template <class _Tp, class _Up> struct __pointer_traits_rebind_impl;
  template <template <class, class...> class _Sp, class _Tp, class... _Args,
            class _Up>
  struct __pointer_traits_rebind_impl<_Sp<_Tp, _Args...>, _Up>;
  template <class _Tp>
  using __difference_type_member = typename _Tp::difference_type;
  template <class _Ptr, class = void> struct __pointer_traits_impl;
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
  template <class _Pointer>
  __attribute__(()) __attribute__(()) __attribute__(()) constexpr auto
  to_address() noexcept -> decltype(0);
  template <class _Tp> struct is_pointer : _BoolConstant<__is_pointer(_Tp)> {};
  template <class _Tp> inline constexpr bool is_pointer_v = __is_pointer(_Tp);
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
  } 
  inline namespace __1 {
  namespace ranges {
  template <class> inline constexpr bool enable_borrowed_range = false;
  }
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
  } 
  inline namespace __cpo {
  inline constexpr auto begin = __begin::__fn{};
  }
  } 
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
  } 
  inline namespace __cpo {
  inline constexpr auto end = __end::__fn{};
  }
  } 
  } 
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp>
  struct is_copy_assignable
      : integral_constant<bool, __is_assignable(
                                    __add_lvalue_reference_t<_Tp>,
                                    __add_lvalue_reference_t<const _Tp>)> {};
  template <class _Tp>
  struct is_empty : integral_constant<bool, __is_empty(_Tp)> {};
  template <class _Tp> inline constexpr bool is_empty_v = __is_empty(_Tp);
  } 
} 
typedef unsigned char uint8_t;
typedef unsigned long int uintptr_t;
typedef long intmax_t;
typedef unsigned long uintmax_t;
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  using ::intmax_t __attribute__(());
  using ::uintmax_t __attribute__(());
  } 
  inline namespace __1 {
  template <class _Tp>
  struct is_trivially_copyable
      : integral_constant<bool, __is_trivially_copyable(_Tp)> {};
  template <class _Tp, class = void>
  struct __is_replaceable : is_trivially_copyable<_Tp> {};
  template <class _Tp>
  struct __is_replaceable<
      _Tp, __enable_if_t<is_same<_Tp, typename _Tp::__replaceable>::value>>
      : integral_constant<bool, true> {};
  template <class _Tp>
  inline const bool __is_replaceable_v = __is_replaceable<_Tp>::value;
  template <class _Tp, class = void>
  struct __libcpp_is_trivially_relocatable : is_trivially_copyable<_Tp> {};
  template <class _Tp>
  struct __libcpp_is_trivially_relocatable<
      _Tp,
      __enable_if_t<is_same<_Tp, typename _Tp::__trivially_relocatable>::value>>
      : integral_constant<bool, true> {};
  } 
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
  } 
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class _Tp> struct remove_pointer;
  template <class _Tp> using __remove_pointer_t = __remove_pointer(_Tp);
  template <class _Tp> using remove_pointer_t = __remove_pointer_t<_Tp>;
  } 
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
  } 
  inline namespace __cpo {
  inline constexpr auto data = __data::__fn{};
  }
  } 
  namespace ranges {}
  } 
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
  } 
  template <class _Tp>
  struct is_unsigned : _BoolConstant<__is_unsigned(_Tp)> {};
  template <class _Tp> inline constexpr bool is_unsigned_v = __is_unsigned(_Tp);
  } 
  inline namespace __1 {
  template <class _Tp> using __make_unsigned_t = __make_unsigned(_Tp);
  template <class _Tp> struct make_unsigned;
  template <class _Tp> using make_unsigned_t = __make_unsigned_t<_Tp>;
  ;
  template <class _Tp, class _Up>
  using __copy_unsigned_t =
      __conditional_t<is_unsigned<_Tp>::value, __make_unsigned_t<_Up>, _Up>;
  } 
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
  } 
  inline namespace __cpo {
  inline constexpr auto size = __size::__fn{};
  }
  } 
  namespace ranges {}
  } 
  template <class _Ep> class initializer_list {
    const _Ep *__begin_;
    decltype(sizeof(int)) __size_;

  public:
    typedef _Ep value_type;
    typedef const _Ep &reference;
  };
  inline namespace __1 {
  template <class _Arg, class _Result>
  struct __unary_function_keep_layout_base {};
  template <class _Arg, class _Result>
  using __unary_function = __unary_function_keep_layout_base<_Arg, _Result>;
  } 
  inline namespace __1 {
  template <class _Tp>
  inline const bool __is_unqualified_v = __is_same(_Tp, __remove_cvref(_Tp));
  }
  inline namespace __1 {
  __attribute__(()) __attribute__((__exclude_from_explicit_instantiation__))
  __attribute__(()) inline constexpr void
  __libcpp_is_constant_evaluated() noexcept;
  }
  inline namespace __1 {
  ;
  template <class _Size, decltype(sizeof(int)) = sizeof(_Size) * 8>
  struct __murmur2_or_cityhash;
  template <class _Size> struct __murmur2_or_cityhash<_Size, 32>;
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
  } 
  inline namespace __1 {
  template <class _Arg1, class _Arg2, class _Result>
  struct __binary_function_keep_layout_base {};
  template <class _Arg1, class _Arg2, class _Result>
  using __binary_function =
      __binary_function_keep_layout_base<_Arg1, _Arg2, _Result>;
  } 
  inline namespace __1 {
  template <class _CanonicalTag, class _Operation, class... _Args>
  inline const bool __desugars_to_v = false;
  template <class _CanonicalTag, class _Operation, class... _Args>
  inline const bool __desugars_to_v<_CanonicalTag, _Operation const, _Args...> =
      __desugars_to_v<_CanonicalTag, _Operation, _Args...>;
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
  template <class _Tp = void>
  struct logical_or : __binary_function<_Tp, _Tp, bool> {};
  ;
  template struct logical_or<>;
  ;
  } 
  inline namespace __1 {
  template <class _Tp, bool> struct __dependent_type : public _Tp {};
  } 
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
  } 
  inline namespace __1 {
  template <class _Tp>
  struct is_trivially_destructible
      : integral_constant<bool, __is_trivially_destructible(_Tp)> {};
  template <class _Tp>
  inline constexpr bool is_trivially_destructible_v =
      is_trivially_destructible<_Tp>::value;
  } 
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
  } 
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
  template <class _Iter, bool __b> struct __unwrap_iter_impl;
  } 
  inline namespace __1 {
  template <class _Tp> class allocator;
  template <class _Tp> class shared_ptr;
  } 
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
  template <class _Tp>
  inline const bool __is_null_pointer_v =
      __is_same(__remove_cv(_Tp), decltype(nullptr));
  template <class _Tp>
  struct is_null_pointer : integral_constant<bool, __is_null_pointer_v<_Tp>> {};
  template <class _Tp> struct is_scalar : _BoolConstant<__is_scalar(_Tp)> {};
  template <class _Tp> inline constexpr bool is_scalar_v = __is_scalar(_Tp);
  } 
  inline namespace __1 {
  template <class _Tp> struct _FirstPaddingByte {
    _Tp __v_;
    char __first_padding_byte_;
  };
  template <class _Tp>
  inline const decltype(sizeof(int)) __datasizeof_v =
      __builtin_offsetof(_FirstPaddingByte<_Tp>, __first_padding_byte_);
  } 
} 
typedef struct __mbstate_t mbstate_t;
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _CharT, class _Traits = char_traits<_CharT>>
  class istreambuf_iterator;
  template <class _CharT, class _Traits = char_traits<_CharT>>
  class ostreambuf_iterator;
  template <class _State> class fpos;
  template <class _CharT, class _Traits> class __save_flags;
  } 
} 
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
  ;
  ;
  ;
  } 
  typedef void __attribute__0;
} 
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
  } 
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
  } 
} 
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
  } 
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
  } 
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <typename _Alloc, typename = void, typename = void>
  struct __is_allocator : integral_constant<bool, false> {};
  template <typename _Alloc>
  struct __is_allocator<_Alloc, __void_t<typename _Alloc::value_type>,
                        __void_t<decltype(0)>> : integral_constant<bool, true> {
  };
  } 
  inline namespace __1 {
  template <class _Container> struct __container_traits;
  }
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  ;
  template <class _CharT, class _Traits> class basic_string_view;
  ;
  ;
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
  ;
  ;
  ;
  inline namespace literals {}
  } 
} 
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
  } 
} 
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
  template <class _Tp, class _VoidPtr, class _Alloc>
  struct __enforce_unordered_container_requirements;
  ;
  } 
} 
extern "C" {}
struct SSubmap {
  std::string reset = "";
};
struct SPressedKeyWithMods;
class CKeybindManager {
  inline static SSubmap m_currentSelectedSubmap = {};
};
export module example;
