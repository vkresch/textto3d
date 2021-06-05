load("//tools/build_rules:qt.bzl", "qt_cc_library")

cc_binary(
    name = "main",
    srcs = ["src/main.cpp"],
    copts = [
        '-fpic',
    ],
    deps = [
        ":mainwindow",
        "@qt//:qt_widgets",
    ],
)

qt_cc_library(
    name = "mainwindow",
    src = "src/mainwindow.cpp",
    hdr = "include/mainwindow.h",
    copts = [
        '-fpic',
    ],
    deps = [
        "@qt//:qt_core",
        "@qt//:qt_widgets",
        "@qt//:qt_gui",
        "@qt//:qt_opengl",
        "@qt//:glu"        
    ]
)