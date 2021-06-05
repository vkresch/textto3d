cc_library(
    name = "qt_core",
    hdrs = glob(["QtCore/**"]),
    includes = ["."],
    linkopts = [
        "-lQt5Core",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "qt_widgets",
    hdrs = glob(["QtWidgets/**"]),
    includes = ["."],
    deps = [":qt_core"],
    linkopts = [
        "-lQt5Widgets",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "qt_gui",
    hdrs = glob(["QtGui/**"]),
    includes = ["."],
    deps = [":qt_core"],
    linkopts = [
        "-lQt5Gui",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "qt_opengl",
    hdrs = glob(["QtOpenGL/**"]),
    includes = ["."],
    deps = [":qt_core"],
    linkopts = [
        "-lQt5OpenGL",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "glu",
    hdrs = glob(["usr/include/GL/**"]),
    includes = ["."],
    linkopts = [
        "-lGL -lGLU -lglut",
    ],
    visibility = ["//visibility:public"],
)