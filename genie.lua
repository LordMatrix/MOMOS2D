-- GENIe solution to build the project.

PROJ_DIR = path.getabsolute("")

solution "Momos2D"
  configurations {
    "Release",
    "Debug",
  }
  

project "Momos2D"
	kind "ConsoleApp"
	language "C++"
	platforms { "x32", "x64", "universal" }

	includedirs {
		path.join(PROJ_DIR, "include/"),
		
		path.join(PROJ_DIR, "src/"),
		path.join(PROJ_DIR, "src/deps/glfw3_2_1/include/"),
		path.join(PROJ_DIR, "src/deps/glfw3_2_1/src/"),
		path.join(PROJ_DIR, "src/deps/glew2_0_0/include/"),
		path.join(PROJ_DIR, "src/deps/glew2_0_0/src/"),
		path.join(PROJ_DIR, "src/deps/glm-0_9_8_1/"),
		
		path.join(PROJ_DIR, "src/deps/chipmunk-7.0.1/include/"),
		path.join(PROJ_DIR, "src/deps/SOIL/src/"),
		path.join(PROJ_DIR, "src/deps/sqlite3/"),
	}

	files {
		path.join(PROJ_DIR, "src/*.cc"),
		path.join(PROJ_DIR, "src/MOMOS/*.cc"),
		
		path.join(PROJ_DIR, "src/deps/glfw3_2_1/include/GLFW/*.h"),
		path.join(PROJ_DIR, "src/deps/glfw3_2_1/src/*.c"),
		path.join(PROJ_DIR, "src/deps/glfw3_2_1/src/*.h"),
		path.join(PROJ_DIR, "src/deps/glew2_0_0/include/GL/*.h"),
		path.join(PROJ_DIR, "src/deps/glew2_0_0/src/*.c"),
		
		path.join(PROJ_DIR, "include/*.h"),
		
		path.join(PROJ_DIR, "include/MOMOS/*.h"),
		path.join(PROJ_DIR, "include/MOMOS_extra/*.h"),
		path.join(PROJ_DIR, "src/deps/chipmunk-7.0.1/include/chipmunk/*.h"),
		path.join(PROJ_DIR, "src/deps/chipmunk-7.0.1/src/*.h"),
		path.join(PROJ_DIR, "src/deps/chipmunk-7.0.1/src/*.c"),
		path.join(PROJ_DIR, "include/fontstash/*.h"),
		
		path.join(PROJ_DIR, "src/deps/SOIL/src/*.c"),
		path.join(PROJ_DIR, "src/deps/SOIL/src/*.h"),
		
		path.join(PROJ_DIR, "src/deps/sqlite3/*.c"),
		path.join(PROJ_DIR, "src/deps/sqlite3/*.h"),
		
		--[[
		path.join(PROJ_DIR, "src/TweenLib/Action/*.cc"),
		path.join(PROJ_DIR, "src/TweenLib/Action/*.h"),
		path.join(PROJ_DIR, "src/TweenLib/Misc/*.cc"),
		path.join(PROJ_DIR, "src/TweenLib/Misc/*.h"),
		path.join(PROJ_DIR, "src/TweenLib/Object/*.cc"),
		path.join(PROJ_DIR, "src/TweenLib/Object/*.h"),
		]]
		
		--[[
		path.join(PROJ_DIR, "src/WinsockArena/*.h"),
		path.join(PROJ_DIR, "src/WinsockArena/*.cc"),
		]]
		
		path.join(PROJ_DIR, "src/Gravity/include/*.h"),
		path.join(PROJ_DIR, "src/Gravity/include/Pieces/*.h"),
		path.join(PROJ_DIR, "src/Gravity/Include/Screens/*.h"),
		path.join(PROJ_DIR, "src/Gravity/src/*.cc"),
		path.join(PROJ_DIR, "src/Gravity/src/Pieces/*.cc"),
		path.join(PROJ_DIR, "src/Gravity/src/Screens/*.cc"),
	}
  
  
	
	configuration { "windows" }
	   excludes{"src/deps/glfw3_2_1/src/cocoa**.c",
		   "src/deps/glfw3_2_1/src/glx_context.c",
		   "src/deps/glfw3_2_1/src/linux_joystick.c",
		   "src/deps/glfw3_2_1/src/mach_time.c",
		   "src/deps/glfw3_2_1/src/mir_init.c",
		   "src/deps/glfw3_2_1/src/mir_monitor.c",
		   "src/deps/glfw3_2_1/src/mir_window.c",
		   "src/deps/glfw3_2_1/src/posix_time.c",
		   "src/deps/glfw3_2_1/src/posix_tls.c",
		   "src/deps/glfw3_2_1/src/xkb_unicode.c",
		   "src/deps/glfw3_2_1/src/x11_window.c",
		   "src/deps/glfw3_2_1/src/x11_monitor.c",
		   "src/deps/glfw3_2_1/src/x11_init.c",
		   "src/deps/glfw3_2_1/src/wl_init.c",
		   "src/deps/glfw3_2_1/src/wl_monitor.c",
		   "src/deps/glfw3_2_1/src/wl_window.c",
		   
		   "src/deps/glew2_0_0/src/glewinfo.c",
		   "src/deps/glew2_0_0/src/visualinfo.c",
		   
		   "src/deps/chipmunk-7.0.1/src/cpHastySpace.c",
		   "src/deps/chipmunk-7.0.1/src/cpPolyline.c",
		}
		links { "opengl32", "kernel32", "user32", "gdi32", "winspool", "shell32", 
						"ole32", "oleaut32", "uuid", "comdlg32", "advapi32", "winmm", "ws2_32" }
		defines {
			"_GLFW_WIN32",
			"_GLFW_USE_OPENGL",
			"LUA_COMPAT_MODULE",
			"TINYOBJLOADER_IMPLEMENTATION",
			"WIN32",
			"_WIN32",
			"_WINDOWS",
			"_CONSOLE",
			"_WIN32_WINNT=0x0502",
			"AL_BUILD_LIBRARY",
			"AL_ALEXT_PROTOTYPES",
			"_LARGEFILE_SOURCE",
			"_LARGE_FILES",
			"restrict=",
			"_CRT_SECURE_NO_WARNINGS",
			"_CRT_NONSTDC_NO_DEPRECATE",
			"strcasecmp=_stricmp",
			"strncasecmp=_strnicmp",
			"AL_LIBTYPE_STATIC",
			"DYNLOAD=1",
			"HAVE_CONFIG_H",
			"ALURE_BUILD_LIBRARY",
			"_DEBUG",
			"GLEW_STATIC",
			"CMAKE_USE_WIN32_THREADS_INIT",
		}

	configuration { "windows", "Debug" }
		targetdir "build/windows/debug/"
		flags { "Symbols" }
		defines {
		  "_DEBUG",
		}

  configuration { "windows", "Release" }
		targetdir "build/windows/release/"
		flags { "OptimizeSize" }
		defines {
		  "NDEBUG",
		}
	
	
	configuration { "gmake" }
		defines {"GLFW_USE_CHDIR", "GLFW_USE_MENUBAR", "GLFW_USE_RETINA", "_GLFW_COCOA","_GLFW_USE_OPENGL",
		  "LUA_COMPAT_MODULE", "__APPLE__"}

		buildoptions_cpp {
	      "-g -m32 -std=c++11",
	      "-framework OpenGL", "-framework Cocoa", "-framework Corevideo", "-framework IOKit",
	      "-framework AppKit", "-framework CoreFoundation"
	    }

	    buildoptions_c
	    { "-I include -std=gnu99 -m32" }

		excludes{
			"src/deps/glfw3_2_1/src/egl_context.c",
			"src/deps/glfw3_2_1/src/glx_context.c",
			"src/deps/glfw3_2_1/src/linux_joystick.c",
			"src/deps/glfw3_2_1/src/mir_init.c",
			"src/deps/glfw3_2_1/src/mir_monitor.c",
			"src/deps/glfw3_2_1/src/mir_platform.c",
			"src/deps/glfw3_2_1/src/mir_window.c",
			"src/deps/glfw3_2_1/src/posix_time.c",
			"src/deps/glfw3_2_1/src/wgl_context.c",
			"src/deps/glfw3_2_1/src/win32_init.c",
			"src/deps/glfw3_2_1/src/win32_joystick.c",
			"src/deps/glfw3_2_1/src/win32_monitor.c",
			"src/deps/glfw3_2_1/src/win32_platform.c",
			"src/deps/glfw3_2_1/src/win32_time.c",
			"src/deps/glfw3_2_1/src/win32_tls.c",
			"src/deps/glfw3_2_1/src/win32_window.c",
			"src/deps/glfw3_2_1/src/wl_init.c",
			"src/deps/glfw3_2_1/src/wl_monitor.c",
			"src/deps/glfw3_2_1/src/wl_window.c",
			"src/deps/glfw3_2_1/src/x11_init.c",
			"src/deps/glfw3_2_1/src/x11_monitor.c",
			"src/deps/glfw3_2_1/src/x11_window.c",
		}
	
  
