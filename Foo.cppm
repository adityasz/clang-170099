module;
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp, _Tp __v> struct integral_constant {
    static inline constexpr const _Tp value = __v;
    typedef _Tp value_type;
    typedef integral_constant type;
  };
  template <bool _Val> using _BoolConstant = integral_constant<bool, _Val>;
  template <class _Tp> inline constexpr bool is_class_v = __is_class(_Tp);
  template <class _Tp> inline constexpr bool is_enum_v = __is_enum(_Tp);
  template <class _Tp> inline constexpr bool is_union_v = __is_union(_Tp);
  template <class _Tp>
  concept __class_or_enum =
      is_class_v<_Tp> || is_union_v<_Tp> || is_enum_v<_Tp>;
  } 
  inline namespace __1 {
  template <class _Tp> using __remove_cv_t = __remove_cv(_Tp);
  template <class _Tp> using remove_cv_t = __remove_cv_t<_Tp>;
  template <class _Tp>
  struct __libcpp_is_floating_point : integral_constant<bool, false> {};
  template <class _Tp>
  struct is_floating_point : __libcpp_is_floating_point<__remove_cv_t<_Tp>> {};
  template <class _Tp>
  struct is_integral : _BoolConstant<__is_integral(_Tp)> {};
  template <class _Tp> inline constexpr bool is_integral_v = __is_integral(_Tp);
  template <class _Tp>
  struct is_arithmetic
      : integral_constant<bool, is_integral<_Tp>::value ||
                                    is_floating_point<_Tp>::value> {};
  template <class _Tp> struct is_signed : _BoolConstant<__is_signed(_Tp)> {};
  template <class _Tp> inline constexpr bool is_signed_v = __is_signed(_Tp);
  template <class _Tp>
  concept integral = is_integral_v<_Tp>;
  template <class _Tp>
  concept signed_integral = integral<_Tp> && is_signed_v<_Tp>;
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
  using _IsSame = _BoolConstant<__is_same(_Tp, _Up)>;
  template <class _Tp, class _Up>
  concept __same_as_impl = _IsSame<_Tp, _Up>::value;
  template <class _Tp, class _Up>
  concept same_as = __same_as_impl<_Tp, _Up> && __same_as_impl<_Up, _Tp>;
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
  using __libcpp_remove_reference_t = __remove_reference_t(_Tp);
  template <class _Tp>
  using remove_reference_t = __libcpp_remove_reference_t<_Tp>;
  template <bool _Bp, class _If, class _Then> struct conditional {
    using type = _If;
  };
  template <bool _Bp, class _IfRes, class _ElseRes>
  using conditional_t = typename conditional<_Bp, _IfRes, _ElseRes>::type;
  template <bool _Bp, class _If, class _Then>
  using __conditional_t = typename conditional<_Bp, _If, _Then>::type;
  template <class _Tp> using __decay_t = __decay(_Tp);
  } 
  inline namespace __1 {
  template <class _Tp> using __remove_cvref_t = __remove_cvref(_Tp);
  template <class _Tp> using remove_cvref_t = __remove_cvref_t<_Tp>;
  } 
  inline namespace __1 {
  template <class... _Args> struct common_type;
  }
  inline namespace __1 {
  template <class _From> struct __copy_cv;
  template <class _Tp>
  using __add_lvalue_reference_t = __add_lvalue_reference(_Tp);
  template <class _Tp>
  using __add_rvalue_reference_t = __add_rvalue_reference(_Tp);
  template <class _Tp>
  inline constexpr bool is_reference_v = __is_reference(_Tp);
  template <class _Tp>
  inline constexpr bool is_lvalue_reference_v = __is_lvalue_reference(_Tp);
  template <class _Ap, class _Bp, class _Xp = remove_reference_t<_Ap>,
            class _Yp = remove_reference_t<_Bp>>
  struct __common_ref;
  template <class...> struct common_reference;
  template <class... _Types>
  using common_reference_t = typename common_reference<_Types...>::type;
  template <class _Tp, class _Up>
  concept common_reference_with =
      same_as<common_reference_t<_Tp, _Up>, common_reference_t<_Up, _Tp>> &&
      convertible_to<_Tp, common_reference_t<_Tp, _Up>> &&
      convertible_to<_Up, common_reference_t<_Tp, _Up>>;
  template <class _Tp>
  using __make_const_lvalue_ref = const __libcpp_remove_reference_t<_Tp> &;
  template <class _Tp>
  __attribute__(()) __attribute__(()) __attribute__(()) constexpr void
  forward() noexcept;
  template <class _Lhs, class _Rhs>
  concept assignable_from =
      is_lvalue_reference_v<_Lhs> &&
      common_reference_with<__make_const_lvalue_ref<_Lhs>,
                            __make_const_lvalue_ref<_Rhs>> &&
      requires(_Lhs __lhs, _Rhs &&__rhs) {
        { __lhs = std::forward } -> same_as<_Lhs>;
      };
  } 
  inline namespace __1 {
  template <class _Tp>
  struct is_nothrow_destructible
      : integral_constant<bool, __is_nothrow_destructible(_Tp)> {};
  template <class _Tp>
  inline constexpr bool is_nothrow_destructible_v =
      is_nothrow_destructible<_Tp>::value;
  template <class _Tp>
  concept destructible = is_nothrow_destructible_v<_Tp>;
  template <class _Tp, class... _Args>
  inline constexpr bool is_constructible_v = __is_constructible(_Tp, _Args...);
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
  template <class _Tp> inline constexpr bool is_object_v = __is_object(_Tp);
  template <class _Tp>
  concept movable = is_object_v<_Tp> && move_constructible<_Tp> &&
                    assignable_from<_Tp &, _Tp> && swappable<_Tp>;
  template <class _Tp>
  concept copyable =
      copy_constructible<_Tp> && movable<_Tp> &&
      assignable_from<_Tp &, _Tp &> && assignable_from<_Tp &, const _Tp &> &&
      assignable_from<_Tp &, const _Tp>;
  template <class _Bp, class _Dp>
  inline constexpr bool is_base_of_v = __is_base_of(_Bp, _Dp);
  template <class _Dp, class _Bp>
  concept derived_from =
      is_base_of_v<_Bp, _Dp> &&
      is_convertible_v<const volatile _Dp *, const volatile _Bp *>;
  } 
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
  template <bool, class _Tp = void> struct enable_if;
  template <class _Tp> struct enable_if<true, _Tp> {
    typedef _Tp type;
  };
  template <bool _Bp, class _Tp = void>
  using __enable_if_t = typename enable_if<_Bp, _Tp>::type;
  template <class _Tp, class _Up, class = void>
  inline const bool __is_core_convertible_v = false;
  template <class _Tp, class _Up>
  using __is_core_convertible =
      integral_constant<bool, __is_core_convertible_v<_Tp, _Up>>;
  template <class _Tp, class _Up, bool = __is_core_convertible_v<_Tp, _Up>>
  inline const bool __is_nothrow_core_convertible_v = false;
  struct __nat;
  template <class, class... _Args> struct __invoke_result_impl;
  template <class... _Args> struct __invoke_result_impl<__void_t<>, _Args...> {
    using type = decltype(0);
  };
  template <class... _Args>
  using __invoke_result = __invoke_result_impl<void, _Args...>;
  template <class... _Args>
  using __invoke_result_t = typename __invoke_result<_Args...>::type;
  template <class _Void, class... _Args>
  inline const bool __is_invocable_impl = false;
  template <class... _Args>
  inline const bool __is_invocable_v = __is_invocable_impl<void, _Args...>;
  template <class _Ret, bool, class... _Args>
  inline const bool __is_invocable_r_impl = false;
  template <bool __is_invocable, class... _Args>
  inline const bool __is_nothrow_invocable_impl = false;
  template <class _Fn, class... _Args>
  using invoke_result_t = __invoke_result_t<_Fn, _Args...>;
  template <class _Fn, class... _Args>
  __attribute__(()) __attribute__(()) __attribute__(()) constexpr void
  invoke() noexcept;
  template <class _Fn, class... _Args>
  concept invocable = requires { std::invoke; };
  template <class _Fn, class... _Args>
  concept regular_invocable = invocable<_Fn, _Args...>;
  } 
  inline namespace __1 {
  template <class _Tp>
  concept semiregular = copyable<_Tp> && default_initializable<_Tp>;
  template <class _Tp>
  concept regular = semiregular<_Tp> && equality_comparable<_Tp>;
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
  template <template <class...> class _Templ, class... _Args, class = _Templ<>>
  void __sfinae_test_impl();
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
  template <class _TypeList, decltype(sizeof(int)) _Size,
            bool = _Size <= sizeof(typename __type_list_head<_TypeList>::type)>
  struct __find_first;
  } 
  inline namespace __1 {
  template <class> struct incrementable_traits;
  template <class> struct iterator_traits;
  template <class _Ip>
  using iter_difference_t = typename conditional_t<
      __is_primary_template<iterator_traits<remove_cvref_t<_Ip>>>::value,
      incrementable_traits<remove_cvref_t<_Ip>>,
      iterator_traits<remove_cvref_t<_Ip>>>::difference_type;
  template <class _Tp> inline constexpr bool is_array_v = __is_array(_Tp);
  } 
} 
namespace __attribute__((__type_visibility__("default"))) std {
  inline namespace __1 {
  template <class> struct indirectly_readable_traits;
  template <class _Default, class _Void, template <class...> class _Op,
            class... _Args>
  struct __detector {
    using type = _Default;
  };
  template <class _Default, template <class...> class _Op, class... _Args>
  using __detected_or_t =
      typename __detector<_Default, void, _Op, _Args...>::type;
  } 
  inline namespace __1 {
  template <bool> struct _OrImpl;
  template <class... _Args>
  using _Or = typename _OrImpl<sizeof...(_Args) != 0>::template _Result<
      integral_constant<bool, false>, _Args...>;
  template <class _Tp>
  concept __dereferenceable = requires(_Tp &__t) { *__t->__referenceable; };
  template <__dereferenceable _Tp>
  using iter_reference_t = decltype(*std::declval<_Tp &>);
  struct input_iterator_tag {};
  struct forward_iterator_tag : public input_iterator_tag {};
  struct bidirectional_iterator_tag : public forward_iterator_tag {};
  struct random_access_iterator_tag : public bidirectional_iterator_tag {};
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
  template <class _Ptr> struct __pointer_traits_element_type_impl;
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
  template <class _Tp>
  struct is_copy_assignable
      : integral_constant<bool, __is_assignable(
                                    __add_lvalue_reference_t<_Tp>,
                                    __add_lvalue_reference_t<const _Tp>)> {};
  template <class _Tp>
  struct is_empty : integral_constant<bool, __is_empty(_Tp)> {};
  template <class _Tp> inline constexpr bool is_empty_v = __is_empty(_Tp);
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
  template <class _Tp>
  struct is_unsigned : _BoolConstant<__is_unsigned(_Tp)> {};
  template <class _Tp> inline constexpr bool is_unsigned_v = __is_unsigned(_Tp);
  template <class _Tp> using __make_unsigned_t = __make_unsigned(_Tp);
  template <class _Tp> struct make_unsigned;
  template <class _Tp, class _Up>
  using __copy_unsigned_t =
      __conditional_t<is_unsigned<_Tp>::value, __make_unsigned_t<_Up>, _Up>;
  } 
  inline namespace __1 {
  __attribute__(()) __attribute__((__exclude_from_explicit_instantiation__))
  __attribute__(()) inline constexpr void
  __libcpp_is_constant_evaluated() noexcept;
  ;
  template <class _Category, class _Tp,
            class _Distance = decltype(static_cast<int *>(nullptr) -
                                       static_cast<int *>(nullptr)),
            class _Pointer = _Tp *, class _Reference = _Tp &>
  struct __attribute__(()) iterator {};
  template <class _Iterator> struct __segmented_iterator_traits;
  template <class _Tp, decltype(sizeof(int)) = 0>
  struct __has_specialization : integral_constant<bool, false> {};
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
  template <> struct char_traits<wchar_t>;
  template <class _CharT, class _Traits = char_traits<_CharT>,
            class _Allocator = allocator<_CharT>>
  class basic_string;
  using string = basic_string<char>;
  template <class _Tp>
  inline const bool __is_null_pointer_v =
      __is_same(__remove_cv(_Tp), decltype(nullptr));
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
  template <class _State> class fpos;
  template <class _CharT, class _Traits> class __save_flags;
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
  ;
  } 
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
  template <class _ToPad>
  inline const bool __is_reference_or_unpadded_object =
      0 || sizeof(_ToPad) == __datasizeof_v<_ToPad>;
  template <class _ToPad,
            bool _Empty = __is_reference_or_unpadded_object<_ToPad>>
  class __compressed_pair_padding;
  template <class _ToPad> class __compressed_pair_padding<_ToPad, true> {};
  } 
  inline namespace __1 {
  template <typename _Alloc, typename = void, typename = void>
  struct __is_allocator : integral_constant<bool, false> {};
  template <typename _Alloc>
  struct __is_allocator<_Alloc, __void_t<typename _Alloc::value_type>,
                        __void_t<decltype(0)>> : integral_constant<bool, true> {
  };
  } 
  inline namespace __1 {
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
  inline namespace literals {}
  } 
} 
struct SSubmap {
  std::string reset = "";
};
class CKeybindManager {
  inline static SSubmap m_currentSelectedSubmap = {};
};
export module example;
