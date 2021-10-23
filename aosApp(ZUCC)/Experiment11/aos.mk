NAME := Experiment11

$(NAME)_MBINS_TYPE := app
$(NAME)_VERSION := 1.0.2
$(NAME)_SUMMARY := Hello World
$(NAME)_SOURCES := helloworld.c

$(NAME)_COMPONENTS += osal_aos

GLOBAL_DEFINES += AOS_NO_WIFI

$(NAME)_INCLUDES += ./

# components added by include c header file in the source code. DO NOT EDIT!
$(NAME)_COMPONENTS_CUSTOMIZED := rhino

# add components name manually here if you want to import some components
$(NAME)_COMPONENTS_CUSTOMIZED +=

# tell build system to add components above. DO NOT EDIT!
$(NAME)_COMPONENTS += $($(NAME)_COMPONENTS_CUSTOMIZED)

