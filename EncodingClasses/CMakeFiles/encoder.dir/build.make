# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses

# Include any dependencies generated for this target.
include CMakeFiles/encoder.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/encoder.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/encoder.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/encoder.dir/flags.make

CMakeFiles/encoder.dir/encoder.cpp.o: CMakeFiles/encoder.dir/flags.make
CMakeFiles/encoder.dir/encoder.cpp.o: encoder.cpp
CMakeFiles/encoder.dir/encoder.cpp.o: CMakeFiles/encoder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/encoder.dir/encoder.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/encoder.dir/encoder.cpp.o -MF CMakeFiles/encoder.dir/encoder.cpp.o.d -o CMakeFiles/encoder.dir/encoder.cpp.o -c /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/encoder.cpp

CMakeFiles/encoder.dir/encoder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/encoder.dir/encoder.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/encoder.cpp > CMakeFiles/encoder.dir/encoder.cpp.i

CMakeFiles/encoder.dir/encoder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/encoder.dir/encoder.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/encoder.cpp -o CMakeFiles/encoder.dir/encoder.cpp.s

CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.o: CMakeFiles/encoder.dir/flags.make
CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.o: LzwClasses/LZWEncodingProcess.cpp
CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.o: CMakeFiles/encoder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.o -MF CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.o.d -o CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.o -c /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/LzwClasses/LZWEncodingProcess.cpp

CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/LzwClasses/LZWEncodingProcess.cpp > CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.i

CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/LzwClasses/LZWEncodingProcess.cpp -o CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.s

CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.o: CMakeFiles/encoder.dir/flags.make
CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.o: Encodings/GammaEncoding.cpp
CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.o: CMakeFiles/encoder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.o -MF CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.o.d -o CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.o -c /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/Encodings/GammaEncoding.cpp

CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/Encodings/GammaEncoding.cpp > CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.i

CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/Encodings/GammaEncoding.cpp -o CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.s

CMakeFiles/encoder.dir/Encodings/Encoding.cpp.o: CMakeFiles/encoder.dir/flags.make
CMakeFiles/encoder.dir/Encodings/Encoding.cpp.o: Encodings/Encoding.cpp
CMakeFiles/encoder.dir/Encodings/Encoding.cpp.o: CMakeFiles/encoder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/encoder.dir/Encodings/Encoding.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/encoder.dir/Encodings/Encoding.cpp.o -MF CMakeFiles/encoder.dir/Encodings/Encoding.cpp.o.d -o CMakeFiles/encoder.dir/Encodings/Encoding.cpp.o -c /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/Encodings/Encoding.cpp

CMakeFiles/encoder.dir/Encodings/Encoding.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/encoder.dir/Encodings/Encoding.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/Encodings/Encoding.cpp > CMakeFiles/encoder.dir/Encodings/Encoding.cpp.i

CMakeFiles/encoder.dir/Encodings/Encoding.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/encoder.dir/Encodings/Encoding.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/Encodings/Encoding.cpp -o CMakeFiles/encoder.dir/Encodings/Encoding.cpp.s

CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.o: CMakeFiles/encoder.dir/flags.make
CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.o: LzwClasses/LzwEncoder.cpp
CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.o: CMakeFiles/encoder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.o -MF CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.o.d -o CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.o -c /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/LzwClasses/LzwEncoder.cpp

CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/LzwClasses/LzwEncoder.cpp > CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.i

CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/LzwClasses/LzwEncoder.cpp -o CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.s

CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.o: CMakeFiles/encoder.dir/flags.make
CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.o: BitBuffers/BitWriter.cpp
CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.o: CMakeFiles/encoder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.o -MF CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.o.d -o CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.o -c /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/BitBuffers/BitWriter.cpp

CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/BitBuffers/BitWriter.cpp > CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.i

CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/BitBuffers/BitWriter.cpp -o CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.s

CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.o: CMakeFiles/encoder.dir/flags.make
CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.o: Encodings/DeltaEncoding.cpp
CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.o: CMakeFiles/encoder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.o -MF CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.o.d -o CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.o -c /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/Encodings/DeltaEncoding.cpp

CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/Encodings/DeltaEncoding.cpp > CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.i

CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/Encodings/DeltaEncoding.cpp -o CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.s

# Object files for target encoder
encoder_OBJECTS = \
"CMakeFiles/encoder.dir/encoder.cpp.o" \
"CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.o" \
"CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.o" \
"CMakeFiles/encoder.dir/Encodings/Encoding.cpp.o" \
"CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.o" \
"CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.o" \
"CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.o"

# External object files for target encoder
encoder_EXTERNAL_OBJECTS =

encoder: CMakeFiles/encoder.dir/encoder.cpp.o
encoder: CMakeFiles/encoder.dir/LzwClasses/LZWEncodingProcess.cpp.o
encoder: CMakeFiles/encoder.dir/Encodings/GammaEncoding.cpp.o
encoder: CMakeFiles/encoder.dir/Encodings/Encoding.cpp.o
encoder: CMakeFiles/encoder.dir/LzwClasses/LzwEncoder.cpp.o
encoder: CMakeFiles/encoder.dir/BitBuffers/BitWriter.cpp.o
encoder: CMakeFiles/encoder.dir/Encodings/DeltaEncoding.cpp.o
encoder: CMakeFiles/encoder.dir/build.make
encoder: CMakeFiles/encoder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable encoder"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/encoder.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/encoder.dir/build: encoder
.PHONY : CMakeFiles/encoder.dir/build

CMakeFiles/encoder.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/encoder.dir/cmake_clean.cmake
.PHONY : CMakeFiles/encoder.dir/clean

CMakeFiles/encoder.dir/depend:
	cd /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses /home/norbert/Dokumenty/wppt/semestr4/kodowanie/lista3/Kodowanie-uniwersalne/EncodingClasses/CMakeFiles/encoder.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/encoder.dir/depend

