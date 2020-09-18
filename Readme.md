# Cryptopals

## Summary
Cryptopals challange solution

## Dependencies
1. GNU gcc compiler (or MinGW on Windows)
2. CMake

## Build
Library uses C++11 features, so the compiler should support that.
Build scripts are written using CMake.
### How to build
Run the following command under **build** directory.
Adjust CMake generator according to your build system(IDE).
The example below is using Eclipse generator.
```
cmake -G "Eclipse CDT4 - MinGW Makefiles" -D_ECLIPSE_VERSION=4.5 -DC++11=ON -DTESTS=OFF -DDEBUG=1 cryptopals
```
Or traditional Unix Makefiles:
```
cmake -G "Unix Makefiles" cryptopals
```
