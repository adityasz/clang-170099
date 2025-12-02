### LLVM/clang [#170099](https://github.com/llvm/llvm-project/issues/170099)

See
`https://github.com/Kitware/CMake/blob/v${cmake_version}/Help/dev/experimental.rst`
and update
[this](https://github.com/adityasz/clang-170099/blob/master/CMakeLists.txt#L5)
line in the root `CMakeLists.txt` accordingly.

Run the [`script`](script) (`./script <JOBS>` runs `JOBS` independent builds in
parallel in a `while true` until a crash):

```console
-- The CXX compiler identification is Clang 21.1.6
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/clang++ - skipped
-- Detecting CXX compile features
CMake Warning (dev) at /usr/share/cmake/Modules/Compiler/CMakeCommonCompilerMacros.cmake:248 (cmake_language):
  CMake's support for `import std;` in C++23 and newer is experimental.  It
  is meant only for experimentation and feedback to CMake developers.
Call Stack (most recent call first):
  /usr/share/cmake/Modules/CMakeDetermineCompilerSupport.cmake:113 (cmake_create_cxx_import_std)
  /usr/share/cmake/Modules/CMakeTestCXXCompiler.cmake:83 (CMAKE_DETERMINE_COMPILER_SUPPORT)
  CMakeLists.txt:26 (project)
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Detecting CXX compile features - done
-- Found PkgConfig: /usr/bin/pkg-config (found version "2.3.0")
-- Checking for modules 'hyprland;libdrm;libinput;libudev;pangocairo;pixman-1;wayland-server;xkbcommon'
--   Found hyprland, version 0.52.1
--   Found libdrm, version 2.4.128
--   Found libinput, version 1.30.0
--   Found libudev, version 258
--   Found pangocairo, version 1.57.0
--   Found pixman-1, version 0.46.2
--   Found wayland-server, version 1.24.0
--   Found xkbcommon, version 1.11.0
-- Configuring done (0.7s)
-- Generating done (0.0s)
-- Build files have been written to: /home/aditya/Playground/cpp/compiler-crash/build/1
```
```
PLEASE submit a bug report to https://github.com/llvm/llvm-project/issues/ and include the crash backtrace, preprocessed source, and associated run script.
Stack dump:
0.	Program arguments: /usr/bin/clang-21 -cc1 -triple x86_64-redhat-linux-gnu -O3 -emit-llvm-bc -flto=full -flto-unit -disable-free -clear-ast-before-backend -disable-llvm-verifier -discard-value-names -main-file-name Foo.ixx -mrelocation-model pic -pic-level 2 -fhalf-no-semantic-interposition -mframe-pointer=none -menable-no-infs -menable-no-nans -fapprox-func -funsafe-math-optimizations -fno-signed-zeros -mreassociate -freciprocal-math -ffp-contract=fast -fno-rounding-math -ffast-math -ffinite-math-only -complex-range=basic -mconstructor-aliases -funwind-tables=2 -target-cpu alderlake -target-feature +prfchw -target-feature -cldemote -target-feature +avx -target-feature +aes -target-feature +sahf -target-feature +pclmul -target-feature -xop -target-feature +crc32 -target-feature -amx-fp8 -target-feature +xsaves -target-feature -avx512fp16 -target-feature -usermsr -target-feature -sm4 -target-feature -egpr -target-feature +sse4.1 -target-feature -avx512ifma -target-feature +xsave -target-feature +sse4.2 -target-feature -tsxldtrk -target-feature -sm3 -target-feature +ptwrite -target-feature +widekl -target-feature -movrs -target-feature +invpcid -target-feature +64bit -target-feature +xsavec -target-feature -avx10.1-512 -target-feature -avx512vpopcntdq -target-feature +cmov -target-feature -avx512vp2intersect -target-feature -avx512cd -target-feature +movbe -target-feature -avxvnniint8 -target-feature -ccmp -target-feature -amx-int8 -target-feature +kl -target-feature -avx10.1-256 -target-feature -sha512 -target-feature +avxvnni -target-feature -rtm -target-feature +adx -target-feature +avx2 -target-feature +hreset -target-feature +movdiri -target-feature +serialize -target-feature +vpclmulqdq -target-feature -avx512vl -target-feature -uintr -target-feature -cf -target-feature +clflushopt -target-feature -raoint -target-feature -cmpccxadd -target-feature +bmi -target-feature -amx-tile -target-feature +sse -target-feature -avx10.2-256 -target-feature +gfni -target-feature -avxvnniint16 -target-feature -amx-fp16 -target-feature -zu -target-feature -ndd -target-feature +xsaveopt -target-feature +rdrnd -target-feature -avx512f -target-feature -amx-bf16 -target-feature -avx512bf16 -target-feature -avx512vnni -target-feature -push2pop2 -target-feature +cx8 -target-feature -avx512bw -target-feature +sse3 -target-feature +pku -target-feature -nf -target-feature -amx-tf32 -target-feature -amx-avx512 -target-feature +fsgsbase -target-feature -clzero -target-feature -mwaitx -target-feature -lwp -target-feature +lzcnt -target-feature +sha -target-feature +movdir64b -target-feature -ppx -target-feature -wbnoinvd -target-feature -enqcmd -target-feature -amx-transpose -target-feature -avx10.2-512 -target-feature -avxneconvert -target-feature -tbm -target-feature -pconfig -target-feature -amx-complex -target-feature +ssse3 -target-feature +cx16 -target-feature +bmi2 -target-feature +fma -target-feature +popcnt -target-feature -avxifma -target-feature +f16c -target-feature -avx512bitalg -target-feature -rdpru -target-feature +clwb -target-feature +mmx -target-feature +sse2 -target-feature +rdseed -target-feature -avx512vbmi2 -target-feature -prefetchi -target-feature -amx-movrs -target-feature +rdpid -target-feature -fma4 -target-feature -avx512vbmi -target-feature +shstk -target-feature +vaes -target-feature +waitpkg -target-feature -sgx -target-feature +fxsr -target-feature -avx512dq -target-feature -sse4a -debugger-tuning=gdb -fdebug-compilation-dir=/home/aditya/Playground/cpp/compiler-crash/build/9 -fcoverage-compilation-dir=/home/aditya/Playground/cpp/compiler-crash/build/9 -resource-dir /usr/bin/../lib/clang/21 -Wall -Wpedantic -Wextra -std=gnu++26 -fdeprecated-macro -ferror-limit 19 -pthread -fgnuc-version=4.2.1 -fno-implicit-modules -fskip-odr-check-in-gmf -fcxx-exceptions -fexceptions -vectorize-loops -vectorize-slp -faddrsig -D__GCC_HAVE_DWARF2_CFI_ASM=1 -o CMakeFiles/Foo.dir/Foo.ixx.o -x pcm CMakeFiles/Foo.dir/example.pcm
1.	<eof> parser at end of file
2.	Optimizer
3.	Running pass "rpo-function-attrs" on module "CMakeFiles/Foo.dir/example.pcm"
 #0 0x00007feaec2cc869 llvm::sys::PrintStackTrace(llvm::raw_ostream&, int) (/lib64/libLLVM.so.21.1+0x50cc869)
 #1 0x00007feaec2cd2ad (/lib64/libLLVM.so.21.1+0x50cd2ad)
 #2 0x00007feae6c262c0 __restore_rt (/lib64/libc.so.6+0x1a2c0)
 #3 0x00007feaeb5b6012 llvm::LazyCallGraph::visitReferences(llvm::SmallVectorImpl<llvm::Constant*>&, llvm::SmallPtrSetImpl<llvm::Constant*>&, llvm::function_ref<void (llvm::Function&)>) (/lib64/libLLVM.so.21.1+0x43b6012)
 #4 0x00007feaeb5b52a4 llvm::LazyCallGraph::LazyCallGraph(llvm::Module&, llvm::function_ref<llvm::TargetLibraryInfo& (llvm::Function&)>) (/lib64/libLLVM.so.21.1+0x43b52a4)
 #5 0x00007feaebf7e6a5 (/lib64/libLLVM.so.21.1+0x4d7e6a5)
 #6 0x00007feaebf7cf01 llvm::AnalysisManager<llvm::Module>::getResultImpl(llvm::AnalysisKey*, llvm::Module&) (/lib64/libLLVM.so.21.1+0x4d7cf01)
 #7 0x00007feaebf7d78a llvm::ReversePostOrderFunctionAttrsPass::run(llvm::Module&, llvm::AnalysisManager<llvm::Module>&) (/lib64/libLLVM.so.21.1+0x4d7d78a)
 #8 0x00007feaebf7d741 (/lib64/libLLVM.so.21.1+0x4d7d741)
 #9 0x00007feaeb3808e7 llvm::PassManager<llvm::Module, llvm::AnalysisManager<llvm::Module>>::run(llvm::Module&, llvm::AnalysisManager<llvm::Module>&) (/lib64/libLLVM.so.21.1+0x41808e7)
#10 0x00007feaf1a5b1fd (/lib64/libclang-cpp.so.21.1+0x1e5b1fd)
#11 0x00007feaf1a565fa clang::emitBackendOutput(clang::CompilerInstance&, clang::CodeGenOptions&, llvm::StringRef, llvm::Module*, clang::BackendAction, llvm::IntrusiveRefCntPtr<llvm::vfs::FileSystem>, std::unique_ptr<llvm::raw_pwrite_stream, std::default_delete<llvm::raw_pwrite_stream>>, clang::BackendConsumer*) (/lib64/libclang-cpp.so.21.1+0x1e565fa)
#12 0x00007feaf1a545a6 clang::BackendConsumer::HandleTranslationUnit(clang::ASTContext&) (/lib64/libclang-cpp.so.21.1+0x1e545a6)
#13 0x00007feaf110c712 clang::ParseAST(clang::Sema&, bool, bool) (/lib64/libclang-cpp.so.21.1+0x150c712)
#14 0x00007feaf19c8fff clang::FrontendAction::Execute() (/lib64/libclang-cpp.so.21.1+0x1dc8fff)
#15 0x00007feaf19c8b10 clang::CompilerInstance::ExecuteAction(clang::FrontendAction&) (/lib64/libclang-cpp.so.21.1+0x1dc8b10)
#16 0x00007feaf19c84b5 clang::ExecuteCompilerInvocation(clang::CompilerInstance*) (/lib64/libclang-cpp.so.21.1+0x1dc84b5)
#17 0x000055acdca848d6 cc1_main(llvm::ArrayRef<char const*>, char const*, void*) (/usr/bin/clang-21+0x198d6)
#18 0x000055acdca7ba4e (/usr/bin/clang-21+0x10a4e)
#19 0x000055acdca7d534 clang_main(int, char**, llvm::ToolContext const&) (/usr/bin/clang-21+0x12534)
#20 0x000055acdca7c782 main (/usr/bin/clang-21+0x11782)
#21 0x00007feae6c0f5b5 __libc_start_call_main (/lib64/libc.so.6+0x35b5)
#22 0x00007feae6c0f668 __libc_start_main@GLIBC_2.2.5 (/lib64/libc.so.6+0x3668)
#23 0x000055acdca86f85 _start (/usr/bin/clang-21+0x1bf85)
clang++: error: unable to execute command: Segmentation fault (core dumped)
clang++: error: clang frontend command failed due to signal (use -v to see invocation)
clang version 21.1.6 (Fedora 21.1.6-1.fc43)
Target: x86_64-redhat-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
Configuration file: /etc/clang/x86_64-redhat-linux-gnu-clang++.cfg
clang++: note: diagnostic msg: 
********************

PLEASE ATTACH THE FOLLOWING FILES TO THE BUG REPORT:
Preprocessed source(s) and associated run script(s) are located at:
clang++: note: diagnostic msg: /tmp/Foo-19fd1b.cppm
clang++: note: diagnostic msg: /tmp/Foo-19fd1b.sh
clang++: note: diagnostic msg: 

********************
```
