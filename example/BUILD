cc_binary(
    name = "example",
    srcs = glob([
    "cmd/main.cpp",
    "src/*.cpp",
    "src/*.h"
    ]),
    includes=glob([
    "src/*.h"
    ]),
    deps = [],
    copts = ["-std=c++11"],  
)

cc_test(
    name = "example_test",
    srcs = glob([
    "test/*.cpp",
    "src/*.cpp",
    "src/*.h"
    ]),
    includes=glob([
    "src/*.h"
    ]),
    deps = [
        #":my_library",
        "@gtest//:gtest_main",
    ],
    copts = ["-std=c++11"], 
)
