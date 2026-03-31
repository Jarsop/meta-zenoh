# check src/llvm-project/cmake/modules/LLVMVersion.cmake for llvm version in use
#
LLVM_RELEASE = "21.1.8"
require rust-source-${PV}.inc
require recipes-devtools/rust/rust-llvm.inc
