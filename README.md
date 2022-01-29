# Hobbits
Habits manager written in C++ using Raylib.

- [Building](#Building)
  - [Dependencies](#Dependencies)
  - [Building with g++](#Building-with-g++)
- [Launching](#Launching)

## Building

### Dependencies

To build the project you need to install [Raylib](https://github.com/raysan5/raylib) first.

### Building with g++

`g++ -lraylib -Isrc {SOURCE_FILES} -o build/Hobbits` (`{SOURCE_FILES}` should be replaced with .cpp files list inside src directory) will build the project for you. Binary file will be stored in `build` directory. If you are on Windows then replace `build/Hobbits` with `build/Hobbits.exe`

## Launching

To launch Hobbits just double-click the app binary or run it through terminal e.g. `./Hobbits`.
