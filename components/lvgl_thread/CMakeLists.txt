file(GLOB_RECURSE SOURCES "./*.c" )

idf_component_register(SRCS "${SOURCES}"
                       INCLUDE_DIRS "./"
                       PRIV_INCLUDE_DIRS ""
                       PRIV_REQUIRES "driver lvgl lvgl_exp_ui"
                       REQUIRES "")