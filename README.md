### LLVM/clang [#170099](https://github.com/llvm/llvm-project/issues/170099)

Some commits have different stack traces. The latest one looks like this:

```
PLEASE submit a bug report to https://github.com/llvm/llvm-project/issues/ and include the crash backtrace, preprocessed source, and associated run script.
Stack dump:
0.      Program arguments: /usr/bin/clang-21 -cc1 -triple x86_64-redhat-linux-gnu -O3 -emit-obj -disable-free -clear-ast-before-backend -disable-llvm-verifier -discard-value-names -main-file-name Foo.cppm -mrelocation-model static -mframe-pointer=none -menable-no-infs -menable-no-nans -fapprox-func 
-funsafe-math-optimizations -fno-signed-zeros -mreassociate -freciprocal-math -ffp-contract=fast -fno-rounding-math -ffast-math -ffinite-math-only -complex-range=basic -mconstructor-aliases -funwind-tables=2 -target-cpu alderlake -target-feature +prfchw -target-feature -cldemote -target-feature +avx
 -target-feature +aes -target-feature +sahf -target-feature +pclmul -target-feature -xop -target-feature +crc32 -target-feature -amx-fp8 -target-feature +xsaves -target-feature -avx512fp16 -target-feature -usermsr -target-feature -sm4 -target-feature -egpr -target-feature +sse4.1 -target-feature -av
x512ifma -target-feature +xsave -target-feature +sse4.2 -target-feature -tsxldtrk -target-feature -sm3 -target-feature +ptwrite -target-feature +widekl -target-feature -movrs -target-feature +invpcid -target-feature +64bit -target-feature +xsavec -target-feature -avx10.1-512 -target-feature -avx512v
popcntdq -target-feature +cmov -target-feature -avx512vp2intersect -target-feature -avx512cd -target-feature +movbe -target-feature -avxvnniint8 -target-feature -ccmp -target-feature -amx-int8 -target-feature +kl -target-feature -avx10.1-256 -target-feature -sha512 -target-feature +avxvnni -target-f
eature -rtm -target-feature +adx -target-feature +avx2 -target-feature +hreset -target-feature +movdiri -target-feature +serialize -target-feature +vpclmulqdq -target-feature -avx512vl -target-feature -uintr -target-feature -cf -target-feature +clflushopt -target-feature -raoint -target-feature -cmp
ccxadd -target-feature +bmi -target-feature -amx-tile -target-feature +sse -target-feature -avx10.2-256 -target-feature +gfni -target-feature -avxvnniint16 -target-feature -amx-fp16 -target-feature -zu -target-feature -ndd -target-feature +xsaveopt -target-feature +rdrnd -target-feature -avx512f -ta
rget-feature -amx-bf16 -target-feature -avx512bf16 -target-feature -avx512vnni -target-feature -push2pop2 -target-feature +cx8 -target-feature -avx512bw -target-feature +sse3 -target-feature +pku -target-feature -nf -target-feature -amx-tf32 -target-feature -amx-avx512 -target-feature +fsgsbase -tar
get-feature -clzero -target-feature -mwaitx -target-feature -lwp -target-feature +lzcnt -target-feature +sha -target-feature +movdir64b -target-feature -ppx -target-feature -wbnoinvd -target-feature -enqcmd -target-feature -amx-transpose -target-feature -avx10.2-512 -target-feature -avxneconvert -ta
rget-feature -tbm -target-feature -pconfig -target-feature -amx-complex -target-feature +ssse3 -target-feature +cx16 -target-feature +bmi2 -target-feature +fma -target-feature +popcnt -target-feature -avxifma -target-feature +f16c -target-feature -avx512bitalg -target-feature -rdpru -target-feature 
+clwb -target-feature +mmx -target-feature +sse2 -target-feature +rdseed -target-feature -avx512vbmi2 -target-feature -prefetchi -target-feature -amx-movrs -target-feature +rdpid -target-feature -fma4 -target-feature -avx512vbmi -target-feature +shstk -target-feature +vaes -target-feature +waitpkg -
target-feature -sgx -target-feature +fxsr -target-feature -avx512dq -target-feature -sse4a -debugger-tuning=gdb -fdebug-compilation-dir=/home/aditya/Playground/cpp/compiler-crash -fcoverage-compilation-dir=/home/aditya/Playground/cpp/compiler-crash -resource-dir /usr/bin/../lib/clang/21 -w -std=c++2
6 -fdeprecated-macro -ferror-limit 19 -fmessage-length=115 -fgnuc-version=4.2.1 -fno-implicit-modules -fskip-odr-check-in-gmf -fcxx-exceptions -fexceptions -fcolor-diagnostics -vectorize-loops -vectorize-slp -faddrsig -D__GCC_HAVE_DWARF2_CFI_ASM=1 -o /dev/null -x pcm /tmp/Foo-c83148.pcm
1.      <eof> parser at end of file
2.      Code generation
 #0 0x00007ff4ca4cc569 llvm::sys::PrintStackTrace(llvm::raw_ostream&, int) (/lib64/libLLVM.so.21.1+0x50cc569)
 #1 0x00007ff4ca4ccfad (/lib64/libLLVM.so.21.1+0x50ccfad)
 #2 0x00007ff4c4e27290 __restore_rt (/lib64/libc.so.6+0x1a290)
 #3 0x00007ff4c94c3292 llvm::Value::stripPointerCasts() const (/lib64/libLLVM.so.21.1+0x40c3292)
 #4 0x00007ff4caa035ba llvm::AsmPrinter::preprocessXXStructorList(llvm::DataLayout const&, llvm::Constant const*, llvm::SmallVector<llvm::AsmPrinter::Structor, 8u>&) (/lib64/libLLVM.so.21.1+0x56035ba)
 #5 0x00007ff4caa0371f llvm::AsmPrinter::emitXXStructorList(llvm::DataLayout const&, llvm::Constant const*, bool) (/lib64/libLLVM.so.21.1+0x560371f)
 #6 0x00007ff4c9c0d31f llvm::AsmPrinter::emitSpecialLLVMGlobal(llvm::GlobalVariable const*) (/lib64/libLLVM.so.21.1+0x480d31f)
 #7 0x00007ff4c9c0dd03 llvm::AsmPrinter::emitGlobalVariable(llvm::GlobalVariable const*) (/lib64/libLLVM.so.21.1+0x480dd03)
 #8 0x00007ff4c9c14b8b llvm::AsmPrinter::doFinalization(llvm::Module&) (/lib64/libLLVM.so.21.1+0x4814b8b)
 #9 0x00007ff4ca5a2c7e llvm::FPPassManager::doFinalization(llvm::Module&) (/lib64/libLLVM.so.21.1+0x51a2c7e)
#10 0x00007ff4c9a3deee llvm::legacy::PassManagerImpl::run(llvm::Module&) (/lib64/libLLVM.so.21.1+0x463deee)
#11 0x00007ff4cfc56119 clang::emitBackendOutput(clang::CompilerInstance&, clang::CodeGenOptions&, llvm::StringRef, llvm::Module*, clang::BackendAction, llvm::IntrusiveRefCntPtr<llvm::vfs::FileSystem>, std::unique_ptr<llvm::raw_pwrite_stream, std::default_delete<llvm::raw_pwrite_stream>>, clang::Back
endConsumer*) (/lib64/libclang-cpp.so.21.1+0x1e56119)
#12 0x00007ff4cfc53e76 clang::BackendConsumer::HandleTranslationUnit(clang::ASTContext&) (/lib64/libclang-cpp.so.21.1+0x1e53e76)
#13 0x00007ff4cf30cbb2 clang::ParseAST(clang::Sema&, bool, bool) (/lib64/libclang-cpp.so.21.1+0x150cbb2)
#14 0x00007ff4cfbc85bf clang::FrontendAction::Execute() (/lib64/libclang-cpp.so.21.1+0x1dc85bf)
#15 0x00007ff4cfbc80d0 clang::CompilerInstance::ExecuteAction(clang::FrontendAction&) (/lib64/libclang-cpp.so.21.1+0x1dc80d0)
#16 0x00007ff4cfbc7a75 clang::ExecuteCompilerInvocation(clang::CompilerInstance*) (/lib64/libclang-cpp.so.21.1+0x1dc7a75)
#17 0x00005636e535a8d6 cc1_main(llvm::ArrayRef<char const*>, char const*, void*) (/usr/bin/clang-21+0x198d6)
#18 0x00005636e5351a4e (/usr/bin/clang-21+0x10a4e)
#19 0x00005636e5353534 clang_main(int, char**, llvm::ToolContext const&) (/usr/bin/clang-21+0x12534)
#20 0x00005636e5352782 main (/usr/bin/clang-21+0x11782)
#21 0x00007ff4c4e105b5 __libc_start_call_main (/lib64/libc.so.6+0x35b5)
#22 0x00007ff4c4e10668 __libc_start_main@GLIBC_2.2.5 (/lib64/libc.so.6+0x3668)
#23 0x00005636e535cf85 _start (/usr/bin/clang-21+0x1bf85)
clang++: error: unable to execute command: Segmentation fault (core dumped)
clang++: error: clang frontend command failed due to signal (use -v to see invocation)
```

The initial ~130k line file led to this:

```
PLEASE submit a bug report to https://github.com/llvm/llvm-project/issues/ and include the crash backtrace, preprocessed source, and associated run script.
Stack dump:
0.      Program arguments: /usr/bin/clang-21 -cc1 -triple x86_64-redhat-linux-gnu -O3 -emit-obj -disable-free -clear-ast-before-backend -disable-llvm-verifier -discard-value-names -main-file-name Foo.cppm -mrelocation-model static -mframe-pointer=none -menable-no-infs -menable-no-nans -fapprox-func 
-funsafe-math-optimizations -fno-signed-zeros -mreassociate -freciprocal-math -ffp-contract=fast -fno-rounding-math -ffast-math -ffinite-math-only -complex-range=basic -mconstructor-aliases -funwind-tables=2 -target-cpu alderlake -target-feature +prfchw -target-feature -cldemote -target-feature +avx
 -target-feature +aes -target-feature +sahf -target-feature +pclmul -target-feature -xop -target-feature +crc32 -target-feature -amx-fp8 -target-feature +xsaves -target-feature -avx512fp16 -target-feature -usermsr -target-feature -sm4 -target-feature -egpr -target-feature +sse4.1 -target-feature -av
x512ifma -target-feature +xsave -target-feature +sse4.2 -target-feature -tsxldtrk -target-feature -sm3 -target-feature +ptwrite -target-feature +widekl -target-feature -movrs -target-feature +invpcid -target-feature +64bit -target-feature +xsavec -target-feature -avx10.1-512 -target-feature -avx512v
popcntdq -target-feature +cmov -target-feature -avx512vp2intersect -target-feature -avx512cd -target-feature +movbe -target-feature -avxvnniint8 -target-feature -ccmp -target-feature -amx-int8 -target-feature +kl -target-feature -avx10.1-256 -target-feature -sha512 -target-feature +avxvnni -target-f
eature -rtm -target-feature +adx -target-feature +avx2 -target-feature +hreset -target-feature +movdiri -target-feature +serialize -target-feature +vpclmulqdq -target-feature -avx512vl -target-feature -uintr -target-feature -cf -target-feature +clflushopt -target-feature -raoint -target-feature -cmp
ccxadd -target-feature +bmi -target-feature -amx-tile -target-feature +sse -target-feature -avx10.2-256 -target-feature +gfni -target-feature -avxvnniint16 -target-feature -amx-fp16 -target-feature -zu -target-feature -ndd -target-feature +xsaveopt -target-feature +rdrnd -target-feature -avx512f -ta
rget-feature -amx-bf16 -target-feature -avx512bf16 -target-feature -avx512vnni -target-feature -push2pop2 -target-feature +cx8 -target-feature -avx512bw -target-feature +sse3 -target-feature +pku -target-feature -nf -target-feature -amx-tf32 -target-feature -amx-avx512 -target-feature +fsgsbase -tar
get-feature -clzero -target-feature -mwaitx -target-feature -lwp -target-feature +lzcnt -target-feature +sha -target-feature +movdir64b -target-feature -ppx -target-feature -wbnoinvd -target-feature -enqcmd -target-feature -amx-transpose -target-feature -avx10.2-512 -target-feature -avxneconvert -ta
rget-feature -tbm -target-feature -pconfig -target-feature -amx-complex -target-feature +ssse3 -target-feature +cx16 -target-feature +bmi2 -target-feature +fma -target-feature +popcnt -target-feature -avxifma -target-feature +f16c -target-feature -avx512bitalg -target-feature -rdpru -target-feature 
+clwb -target-feature +mmx -target-feature +sse2 -target-feature +rdseed -target-feature -avx512vbmi2 -target-feature -prefetchi -target-feature -amx-movrs -target-feature +rdpid -target-feature -fma4 -target-feature -avx512vbmi -target-feature +shstk -target-feature +vaes -target-feature +waitpkg -
target-feature -sgx -target-feature +fxsr -target-feature -avx512dq -target-feature -sse4a -debugger-tuning=gdb -fdebug-compilation-dir=/home/aditya/Playground/cpp/compiler-crash -fcoverage-compilation-dir=/home/aditya/Playground/cpp/compiler-crash -resource-dir /usr/bin/../lib/clang/21 -w -std=c++2
6 -fdeprecated-macro -ferror-limit 19 -fmessage-length=115 -fgnuc-version=4.2.1 -fno-implicit-modules -fskip-odr-check-in-gmf -fcxx-exceptions -fexceptions -fcolor-diagnostics -vectorize-loops -vectorize-slp -faddrsig -D__GCC_HAVE_DWARF2_CFI_ASM=1 -o /dev/null -x pcm /tmp/Foo-7101c2.pcm
1.      <eof> parser at end of file
2.      Optimizer
3.      Running pass "rpo-function-attrs" on module "/tmp/Foo-7101c2.pcm"
 #0 0x00007f0f6d4cc569 llvm::sys::PrintStackTrace(llvm::raw_ostream&, int) (/lib64/libLLVM.so.21.1+0x50cc569)
 #1 0x00007f0f6d4ccfad (/lib64/libLLVM.so.21.1+0x50ccfad)
 #2 0x00007f0f67e27290 __restore_rt (/lib64/libc.so.6+0x1a290)
 #3 0x00007f0f6c80e672 llvm::LazyCallGraph::visitReferences(llvm::SmallVectorImpl<llvm::Constant*>&, llvm::SmallPtrSetImpl<llvm::Constant*>&, llvm::function_ref<void (llvm::Function&)>) (/lib64/libLLVM.so.21.1+0x440e672)
 #4 0x00007f0f6c80d904 llvm::LazyCallGraph::LazyCallGraph(llvm::Module&, llvm::function_ref<llvm::TargetLibraryInfo& (llvm::Function&)>) (/lib64/libLLVM.so.21.1+0x440d904)
 #5 0x00007f0f6d1afaf5 (/lib64/libLLVM.so.21.1+0x4dafaf5)
 #6 0x00007f0f6d1ae31e llvm::AnalysisManager<llvm::Module>::getResultImpl(llvm::AnalysisKey*, llvm::Module&) (/lib64/libLLVM.so.21.1+0x4dae31e)
 #7 0x00007f0f6d1aebda llvm::ReversePostOrderFunctionAttrsPass::run(llvm::Module&, llvm::AnalysisManager<llvm::Module>&) (/lib64/libLLVM.so.21.1+0x4daebda)
 #8 0x00007f0f6d1aeb91 (/lib64/libLLVM.so.21.1+0x4daeb91)
 #9 0x00007f0f6c5aa757 llvm::PassManager<llvm::Module, llvm::AnalysisManager<llvm::Module>>::run(llvm::Module&, llvm::AnalysisManager<llvm::Module>&) (/lib64/libLLVM.so.21.1+0x41aa757)
#10 0x00007f0f72c5aadd (/lib64/libclang-cpp.so.21.1+0x1e5aadd)
#11 0x00007f0f72c55eda clang::emitBackendOutput(clang::CompilerInstance&, clang::CodeGenOptions&, llvm::StringRef, llvm::Module*, clang::BackendAction, llvm::IntrusiveRefCntPtr<llvm::vfs::FileSystem>, std::unique_ptr<llvm::raw_pwrite_stream, std::default_delete<llvm::raw_pwrite_stream>>, clang::Back
endConsumer*) (/lib64/libclang-cpp.so.21.1+0x1e55eda)
#12 0x00007f0f72c53e76 clang::BackendConsumer::HandleTranslationUnit(clang::ASTContext&) (/lib64/libclang-cpp.so.21.1+0x1e53e76)
#13 0x00007f0f7230cbb2 clang::ParseAST(clang::Sema&, bool, bool) (/lib64/libclang-cpp.so.21.1+0x150cbb2)
#14 0x00007f0f72bc85bf clang::FrontendAction::Execute() (/lib64/libclang-cpp.so.21.1+0x1dc85bf)
#15 0x00007f0f72bc80d0 clang::CompilerInstance::ExecuteAction(clang::FrontendAction&) (/lib64/libclang-cpp.so.21.1+0x1dc80d0)
#16 0x00007f0f72bc7a75 clang::ExecuteCompilerInvocation(clang::CompilerInstance*) (/lib64/libclang-cpp.so.21.1+0x1dc7a75)
#17 0x000055cd55b098d6 cc1_main(llvm::ArrayRef<char const*>, char const*, void*) (/usr/bin/clang-21+0x198d6)
#18 0x000055cd55b00a4e (/usr/bin/clang-21+0x10a4e)
#19 0x000055cd55b02534 clang_main(int, char**, llvm::ToolContext const&) (/usr/bin/clang-21+0x12534)
#20 0x000055cd55b01782 main (/usr/bin/clang-21+0x11782)
#21 0x00007f0f67e105b5 __libc_start_call_main (/lib64/libc.so.6+0x35b5)
#22 0x00007f0f67e10668 __libc_start_main@GLIBC_2.2.5 (/lib64/libc.so.6+0x3668)
#23 0x000055cd55b0bf85 _start (/usr/bin/clang-21+0x1bf85)
clang++: error: unable to execute command: Segmentation fault (core dumped)
clang++: error: clang frontend command failed due to signal (use -v to see invocation)
clang version 21.1.8 (Fedora 21.1.8-4.fc43)
Target: x86_64-redhat-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
Configuration file: /etc/clang/x86_64-redhat-linux-gnu-clang++.cfg
clang++: note: diagnostic msg: 
********************

PLEASE ATTACH THE FOLLOWING FILES TO THE BUG REPORT:
Preprocessed source(s) and associated run script(s) are located at:
clang++: note: diagnostic msg: /tmp/Foo-bacbb0.cppm
clang++: note: diagnostic msg: /tmp/Foo-bacbb0.sh
clang++: note: diagnostic msg: 

********************
```
