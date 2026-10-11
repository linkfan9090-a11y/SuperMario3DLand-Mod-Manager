
# Super Mario 3D Land Mod Manager
# Nintendo 3DS homebrew build configuration

TARGET := sm3dland_mod_manager
BUILD := build
SOURCES := source
INCLUDES := include

APP_TITLE := SM3D Land Mod Manager
APP_DESCRIPTION := Super Mario 3D Land Mod Manager
APP_AUTHOR := Homebrew Community
APP_VERSION := 1.0.0

CFLAGS := -Wall -Wextra -O2
CXXFLAGS := $(CFLAGS) -std=gnu++17

include $(DEVKITPRO)/libctru/3ds_rules
