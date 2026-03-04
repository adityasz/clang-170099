module;
namespace __attribute__(()) std {
  inline namespace __1 {
  template <class _Tp, _Tp __v> struct integral_constant {
    static inline constexpr const _Tp value = __v;
  };
  template <bool _Val> using _BoolConstant = integral_constant<bool, _Val>;
  template <class...> using __void_t = void;
  template <class _Tp>
  struct is_void : _BoolConstant<__is_same(__remove_cv(_Tp), void)> {};
  template <class _Tp>
  using __libcpp_remove_reference_t = __remove_reference_t(_Tp);
  template <bool, class _Tp = void> struct enable_if;
  template <class _Tp> struct enable_if<true, _Tp> {
    typedef _Tp type;
  };
  template <bool _Bp, class _Tp = void>
  using __enable_if_t = typename enable_if<_Bp, _Tp>::type;
  template <class _Default, class _Void, template <class...> class _Op,
            class... _Args>
  struct __detector {
    using type = _Default;
  };
  template <class _Default, template <class...> class _Op, class... _Args>
  using __detected_or_t =
      typename __detector<_Default, void, _Op, _Args...>::type;
  template <class _Tp> using __make_unsigned_t = __make_unsigned(_Tp);
  template <class _Tp> class allocator;
  template <class _CharT> struct char_traits;
  template <class _CharT, class _Traits = char_traits<_CharT>,
            class _Allocator = allocator<_CharT>>
  class basic_string;
  using string = basic_string<char>;
  template <class _Tp> struct _FirstPaddingByte {
    _Tp __v_;
    char __first_padding_byte_;
  };
  template <class _Tp>
  inline const decltype(sizeof(int)) __datasizeof_v =
      __builtin_offsetof(_FirstPaddingByte<_Tp>, __first_padding_byte_);
  template <class _Tp> using __pointer_member = typename _Tp::pointer;
  template <class _Tp, class _Alloc>
  using __pointer = __detected_or_t<_Tp *, __pointer_member,
                                    __libcpp_remove_reference_t<_Alloc>>;
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
  template <class _Alloc> struct allocator_traits {
    using allocator_type = _Alloc;
    using value_type = typename allocator_type::value_type;
    using pointer = __pointer<value_type, allocator_type>;
    using difference_type =
        typename __alloc_traits_difference_type<allocator_type, pointer>::type;
    using size_type = __size_type<allocator_type, difference_type>;
  };
  template <bool _Cond, class _Unique> struct __non_trivial_if;
  template <class _Unique> struct __non_trivial_if<true, _Unique> {};
  template <class _Tp>
  class allocator
      : private __non_trivial_if<!is_void<_Tp>::value, allocator<_Tp>> {
  public:
    typedef decltype(static_cast<int *>(nullptr) -
                     static_cast<int *>(nullptr)) difference_type;
    typedef _Tp value_type;
  };
  template <class _ToPad>
  inline const bool __is_reference_or_unpadded_object =
      0 || sizeof(_ToPad) == __datasizeof_v<_ToPad>;
  template <class _ToPad,
            bool _Empty = __is_reference_or_unpadded_object<_ToPad>>
  class __compressed_pair_padding;
  template <class _ToPad> class __compressed_pair_padding<_ToPad, true> {};
  template <typename _Alloc, typename = void, typename = void>
  struct __is_allocator : integral_constant<bool, false> {};
  template <typename _Alloc>
  struct __is_allocator<_Alloc, __void_t<typename _Alloc::value_type>,
                        __void_t<decltype(0)>> : integral_constant<bool, true> {
  };
  template <class _CharT, class _Traits, class _Allocator> class basic_string {
  public:
    using __self = basic_string;
    using value_type = _CharT;
    using allocator_type = _Allocator;
    using __alloc_traits = allocator_traits<allocator_type>;
    using size_type = typename __alloc_traits::size_type;
    using pointer = typename __alloc_traits::pointer;
    struct __long {
      pointer __data_;
    };
    struct __short {};
    struct __rep {
      __short __s;
      __long __l;
    };
    struct {
      __attribute__((__aligned__)) __rep __rep_;
      [[__no_unique_address__]] allocator_type __alloc_;
      ::std::__compressed_pair_padding<allocator_type> __padding2_903_;
    };
    template <__enable_if_t<__is_allocator<_Allocator>::value, int> = 0>
    __attribute__(()) __attribute__(())
    __attribute__(()) constexpr basic_string(const _CharT *_Nonnull __s) {
      __init(__s, 0);
    };
    constexpr ~basic_string();
    constexpr void __init(const value_type *__s, size_type __sz) {
      __rep_ = __rep();
    }
  };
  } 
} 
struct SSubmap {
  std::string reset = "";
};
class CKeybindManager {
  inline static SSubmap m_currentSelectedSubmap = {};
};
export module example;
