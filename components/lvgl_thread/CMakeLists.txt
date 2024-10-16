# file(GLOB_RECURSE IMAGE_SOURCES images/*.c)
# idf_component_register(SRCS "i80_controller_example_main.c" "lvgl_demo_ui.c" ${IMAGE_SOURCES}
#                        INCLUDE_DIRS ".")
file(GLOB_RECURSE SOURCES "./*.c" )

idf_component_register(SRCS "${SOURCES}"
                       INCLUDE_DIRS "./"
                       PRIV_INCLUDE_DIRS ""
                       PRIV_REQUIRES "driver lvgl lvgl_exp_ui"
                       REQUIRES "")