
file(GLOB_RECURSE SOURCES "./*.c" )



idf_component_register(SRCS "${SOURCES}"
                       INCLUDE_DIRS "."
                       PRIV_INCLUDE_DIRS ""
                       PRIV_REQUIRES "lvgl"
                       REQUIRES "")